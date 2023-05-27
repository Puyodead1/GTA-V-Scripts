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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
#endregion

void main() // Position - 0x0
{
	var unk;
	int unk2;
	int unk3;
	int unk4;
	BOOL unk5;
	int unk6;
	int unk7;
	int unk8;
	int unk9;
	int unk10;
	int unk11;
	BOOL unk12;
	BOOL unk13;
	BOOL unk14;
	int unk15;
	BOOL unk16;
	BOOL unk17;
	int unk18;

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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
		func_70();

	unk = 122;
	func_69();
	func_68();
	Global_44454 = 0;
	num = func_61();
	num2 = func_61();
	ms = 2000;
	Global_44456 = 1;
	flag = true;

	while (true)
	{
		i = 0;
	
		if (flag)
		{
			if (IS_BIT_SET(Global_113648.f_24988, 4 - 1))
			{
				func_60(26);
				flag = false;
			}
		}
	
		if (!Global_44455 && MISC::GET_GAME_TIMER() > Global_43808)
		{
			for (i = 0; i < 122; i = i + 1)
			{
				if (Global_47790[i] && !Global_47790[i].f_1 && !Global_47790[i].f_45)
				{
					unk[i] = unk[i] + ms;
				
					if (unk[i] > Global_47790[i].f_43)
					{
						if (func_34(7, _CHAR_VIRTUAL_MP, 2, -1, 0))
						{
							func_32(i, false);
							unk[i] = 0;
							Global_44456 = 1;
						}
					}
				}
			
				SYSTEM::WAIT(0);
			}
		
			num = func_61();
			num3 = 0;
			num4 = 0;
			j = 0;
			func_20(num, num2, &num4, &num4, &num3, &num4, &num4, &num4);
		
			if (num3 < 0)
				num3 = num3 * -1;
		
			if (num3 > 0 && Global_20383.f_1 == 3)
			{
				num2 = num;
			
				if (Global_55187 > 0)
				{
					num5 = Global_55187;
					num6 = 0;
				
					while (num5 != 0)
					{
						if (Global_55188[num6].f_52 != 0 && num6 < 8 && Global_55188[num6].f_4)
						{
							Global_55188[num6].f_2 = Global_55188[num6].f_2 - num3;
							flag2 = false;
							flag3 = false;
							flag4 = false;
							num7 = 0;
						
							while (!flag4)
							{
								if (Global_53765[num7].f_1 != Global_55188[num6].f_52)
								{
									num7 = num7 + 1;
								}
								else
								{
									flag3 = true;
									flag4 = true;
								}
							
								if (num7 == 7)
								{
									flag4 = true;
									Global_55188[num6].f_52 = 0;
									flag2 = true;
								}
							}
						
							if (!flag3)
							{
								flag2 = true;
								Global_55188[num6].f_4 = 0;
							}
							else if (Global_55188[num6].f_2 < 1)
							{
								if (func_34(7, _CHAR_NULL, 2, -1, 0))
								{
									flag5 = false;
								
									if (Global_55188[num6].f_5 || Global_55188[num6].f_10 > 0)
										flag5 = true;
								
									if (func_17(Global_55188[num6], Global_55188[num6].f_1, flag5))
									{
										flag6 = true;
									
										if (Global_55188[num6].f_10 > 0)
											flag6 = false;
									
										if (Global_55188[num6].f_5)
											func_16(Global_55188[num6], &(Global_55188[num6].f_6), flag6);
									
										if (Global_55188[num6].f_10 > 0)
										{
											j = 0;
										
											for (j = 0; j < Global_55188[num6].f_10; j = j + 1)
											{
												func_15(Global_55188[num6], &Global_55188[num6].f_11[j]);
											}
										}
									
										if (flag5 && !flag6)
											func_1(Global_55188[num6]);
									
										func_60(Global_55188[num6]);
									}
								
									Global_55188[num6].f_52 = 0;
									Global_55188[num6].f_5 = 0;
									Global_55188[num6].f_2 = 0;
									flag2 = true;
									Global_55188[num6].f_4 = 0;
								}
							}
						
							if (flag2)
								Global_55187 = Global_55187 - 1;
						
							num5 = num5 - 1;
						}
					
						num6 = num6 + 1;
					
						if (num6 == 8)
							num5 = 0;
					
						SYSTEM::WAIT(0);
					}
				}
			}
		}
	
		SYSTEM::WAIT(ms);
		Global_44457 = 0;
		Global_44458 = 0;
		Global_44459 = 0;
		num8 = Global_53403[0];
	
		if (num8 > 16)
			num8 = 16;
	
		for (i = 0; i < num8; i = i + 1)
		{
			if (!Global_53403[0].f_69[i])
				Global_44457 = Global_44457 + 1;
		}
	
		num8 = Global_53403[1];
	
		if (num8 > 16)
			num8 = 16;
	
		for (i = 0; i < num8; i = i + 1)
		{
			if (!Global_53403[1].f_69[i])
				Global_44458 = Global_44458 + 1;
		}
	
		num8 = Global_53403[2];
	
		if (num8 > 16)
			num8 = 16;
	
		for (i = 0; i < num8; i = i + 1)
		{
			if (!Global_53403[2].f_69[i])
				Global_44459 = Global_44459 + 1;
		}
	
		SYSTEM::WAIT(ms);
	}

	return;
}

void func_1(int iParam0) // Position - 0x439
{
	int num;
	int num2;
	int num3;
	var unk;
	int unk2;
	char* unk3;

	num = func_14(iParam0);

	if (num == -1)
		return;

	if (Global_53765[num].f_9 == 0)
		return;

	num2 = Global_53765[num].f_10[Global_53765[num].f_9 - 1];
	num3 = Global_53765[num].f_9 - 1;

	if (!Global_53765[num].f_10[num3].f_1)
	{
		num4 = Global_53765[num].f_10[num3];
		TEXT_LABEL_COPY(&unk, { func_13(Global_44465[num4].f_1) }, 4);
	}
	else
	{
		unk = { Global_53765[num].f_10[num3].f_2 };
	}

	if (iParam0 == 28)
	{
		switch (num2)
		{
			case 249:
				str = "PW_FEED_EM_1" /*You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented...*/;
				break;
		
			case 269:
				str = "PW_FEED_EM_3" /*Hello Franklin,~n~The Southern San Andreas Tourist Board Young Amateur Wildlife Photographer of the Year Competition is over.~n~Some of our photographers fell off cli...*/;
				break;
		
			default:
				str = "PW_FEED_EM_2" /*Dear contestant,~n~Thank you for your recent photographic submission. Our image licensing department is already maximizing its profit-making potential. And you're a step clos...*/;
				break;
		}
	
		func_2(CHAR_FRANKLIN, Global_44465[num2].f_2, num2, str, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_44465[num2].f_3)
		{
			case 0:
				func_2(CHAR_MICHAEL, Global_44465[num2].f_2, num2, &unk, &Global_53765[num].f_10[num3].f_7[0], &Global_53765[num].f_10[num3].f_7[1], &Global_53765[num].f_10[num3].f_7[2], &Global_53765[num].f_10[num3].f_7[3], &Global_53765[num].f_10[num3].f_7[4], &Global_53765[num].f_10[num3].f_7[5], &Global_53765[num].f_10[num3].f_7[6], &Global_53765[num].f_10[num3].f_7[7], &Global_53765[num].f_10[num3].f_7[8], &Global_53765[num].f_10[num3].f_7[9]);
				break;
		
			case 1:
				func_2(CHAR_FRANKLIN, Global_44465[num2].f_2, num2, &unk, &Global_53765[num].f_10[num3].f_7[0], &Global_53765[num].f_10[num3].f_7[1], &Global_53765[num].f_10[num3].f_7[2], &Global_53765[num].f_10[num3].f_7[3], &Global_53765[num].f_10[num3].f_7[4], &Global_53765[num].f_10[num3].f_7[5], &Global_53765[num].f_10[num3].f_7[6], &Global_53765[num].f_10[num3].f_7[7], &Global_53765[num].f_10[num3].f_7[8], &Global_53765[num].f_10[num3].f_7[9]);
				break;
		
			case 2:
				func_2(CHAR_TREVOR, Global_44465[num2].f_2, num2, &unk, &Global_53765[num].f_10[num3].f_7[0], &Global_53765[num].f_10[num3].f_7[1], &Global_53765[num].f_10[num3].f_7[2], &Global_53765[num].f_10[num3].f_7[3], &Global_53765[num].f_10[num3].f_7[4], &Global_53765[num].f_10[num3].f_7[5], &Global_53765[num].f_10[num3].f_7[6], &Global_53765[num].f_10[num3].f_7[7], &Global_53765[num].f_10[num3].f_7[8], &Global_53765[num].f_10[num3].f_7[9]);
				break;
		}
	}

	return;
}

void func_2(eCharacter echParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13) // Position - 0x7A5
{
	eCharacter character;
	BOOL flag;
	var txdName;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return;

	character = _GET_CURRENT_PLAYER_CHARACTER();
	flag = false;
	TEXT_LABEL_ASSIGN_STRING(&txdName, func_5(iParam1, &flag), 64);

	if (character == echParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1" /*Dear Mr. De Santa, please find below your weekly income from owned properties:~n~*/);
				break;
		
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3" /*Dear Mr. Clinton, please find below your weekly income from owned properties:~n~*/);
				break;
		
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2" /*Dear Mr. Philips, please find below your weekly income from owned properties:~n~*/);
				break;
		
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
				break;
		}
	
		if (flag)
			func_3(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_4(iParam1)), 0));
		else
			func_3(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_4(iParam1)), 0));
	
		switch (Global_20383)
		{
			case 0:
				TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Michael", 24);
				Global_44457 = Global_44457 + 1;
			
				if (Global_44457 > 16)
					Global_44457 = 16;
				break;
		
			case 2:
				TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Trevor", 24);
				Global_44459 = Global_44459 + 1;
			
				if (Global_44459 > 16)
					Global_44459 = 16;
				break;
		
			case 1:
				TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Franklin", 24);
				Global_44458 = Global_44458 + 1;
			
				if (Global_44458 > 16)
					Global_44458 = 16;
				break;
		
			default:
				TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Default", 24);
				break;
		}
	
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_20372, true);
	}

	return;
}

void func_3(int iParam0) // Position - 0x983
{
	Global_44460[Global_44464] = iParam0;
	Global_22783 = 1;
	Global_22782 = iParam0;
	Global_44464 = Global_44464 + 1;

	if (Global_44464 == 3)
		Global_44464 = 0;

	return;
}

char* func_4(int iParam0) // Position - 0x9B1
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0" /*Mike*/;
	
		case 3:
			return "EMSTR_3" /*Jimmy*/;
	
		case 1:
			return "EMSTR_6" /*Franklin*/;
	
		case 2:
			return "EMSTR_9" /*Trevor*/;
	
		case 4:
			return "EMSTR_12" /*Marnie*/;
	
		case 5:
			return "EMSTR_29" /*Epsilon Store*/;
	
		case 6:
			return "EMSTR_36" /*Maude*/;
	
		case 7:
			return "EMSTR_39" /*Lester*/;
	
		case 8:
			return "EMSTR_52" /*Maze Bank*/;
	
		case 9:
			return "EMSTR_55" /*Fleeca*/;
	
		case 10:
			return "EMSTR_58" /*Bank of Liberty*/;
	
		case 11:
			return "EMSTR_78" /*Legendary Motorsport Sales*/;
	
		case 12:
			return "EMSTR_81" /*Elitas Sales*/;
	
		case 13:
			return "EMSTR_84" /*Cache & Carry*/;
	
		case 14:
			return "EMSTR_87" /*Dock Tease*/;
	
		case 15:
			return "EMSTR_106" /*LSC*/;
	
		case 16:
			return "EMSTR_114" /*AMMU-NATION*/;
	
		case 17:
			return "EMSTR_142" /*Christian Feltz*/;
	
		case 18:
			return "EMSTR_145" /*Paige Harris*/;
	
		case 19:
			return "EMSTR_152" /*Los Santos Tourist Info*/;
	
		case 20:
			return "EMSTR_157" /*Rickie Luckens*/;
	
		case 21:
			return "EMSTR_163" /*Minotaur Property Management*/;
	
		case 22:
			return "EMSTR_182" /*Saeeda Kadam*/;
	
		case 23:
			return "EMSTR_187" /*Vanilla Unicorn*/;
	
		case 24:
			return "EMSTR_190" /*Dr Isiah Friedlander*/;
	
		case 25:
			return "EMSTR_206" /*TRACEYHEARTSTEALER*/;
	
		case 26:
			return "EMSTR_219" /*Dave Norton*/;
	
		case 27:
			return "EMSTR_226" /*Amanda De Santa*/;
	
		case 28:
			return "EMSTR_233" /*Donald Percival*/;
	
		case 29:
			return "EMSTR_242" /*Ron*/;
	
		case 30:
			return "EMSTR_249" /*Tanisha Marks*/;
	
		case 31:
			return "EMSTR_262" /*Denise*/;
	
		case 32:
			return "EMSTR_269" /*Lamar Davis*/;
	
		case 33:
			return "EMSTR_319" /*Brad*/;
	
		case 34:
			return "EMSTR_340" /*Patricia Madrazo*/;
	
		case 35:
			return "EMSTR_348" /*Eileen Haworth*/;
	
		case 36:
			return "EMSTR_182" /*Saeeda Kadam*/;
	
		case 37:
			return "EMSTR_357" /*Gray Nicholson*/;
	
		case 38:
			return "EMSTR_360" /*Nigel*/;
	
		case 39:
			return "EMSTR_369" /*Hookies*/;
	
		case 40:
			return "EMSTR_376" /*Towing Impound*/;
	
		case 41:
			return "EMSTR_379" /*Downtown Cab Co,*/;
	
		case 42:
			return "EMSTR_382" /*McKenzie Field Hangar*/;
	
		case 43:
			return "EMSTR_384" /*Sonar Collections Dock*/;
	
		case 44:
			return "EMSTR_387" /*Los Santos Customs*/;
	
		case 45:
			return "EMSTR_390" /*Cinema Doppler*/;
	
		case 46:
			return "EMSTR_393" /*Ten Cent Theater*/;
	
		case 47:
			return "EMSTR_396" /*Tivoli Cinema*/;
	
		case 48:
			return "EMSTR_399" /*Los Santos Golf Club*/;
	
		case 49:
			return "EMSTR_402" /*Car Scrap Yard*/;
	
		case 50:
			return "EMSTR_405" /*Smoke on the Water*/;
	
		case 51:
			return "EMSTR_408" /*Tequi-la-la*/;
	
		case 52:
			return "EMSTR_411" /*Pitchers*/;
	
		case 53:
			return "EMSTR_414" /*The Hen House*/;
	
		case 54:
			return "EMSTR_465" /*Pedal & Metal Sales*/;
	
		case 55:
			return "EMSTR_468" /*SSA Super Autos Sales*/;
	
		case 56:
			return "EMSTR_489" /*Hush Smush*/;
	
		case 57:
			return "EMSTR_492" /*foxymama21*/;
	
		case 58:
			return "EMSTR_495" /*Altarego12*/;
	
		case 59:
			return "EMSTR_498" /*BadKitty11*/;
	
		case 60:
			return "EMSTR_501" /*7yearbitch*/;
	
		case 61:
			return "EMSTR_504" /*Froggy69*/;
	
		case 62:
			return "EMSTR_507" /*Misscuddles*/;
	
		case 63:
			return "EMSTR_640" /*Off-Road Events*/;
	
		case 64:
			return "EMSTR_643" /*Dock Tease*/;
	
		case 65:
			return "EMSTR_652" /*Brother Adrian*/;
	
		default:
		
	}

	return "NULL";
}

const char* func_5(int iParam0, var uParam1) // Position - 0xD17
{
	*uParam1 = 1;

	switch (iParam0)
	{
		case 0:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[0].f_7));
	
		case 1:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[1].f_7));
	
		case 2:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[2].f_7));
	
		case 7:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[12].f_7));
	
		case 4:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[60].f_7));
	
		case 6:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[62].f_7));
	
		case 3:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[14].f_7));
	
		case 16:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[97].f_7));
	
		case 19:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[99].f_7));
	
		case 15:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[96].f_7));
	
		case 63:
			return "CHAR_CARSITE2";
	
		case 64:
			return "CHAR_BOATSITE";
	
		case 8:
			return "CHAR_BANK_MAZE";
	
		case 9:
			return "CHAR_BANK_FLEECA";
	
		case 10:
			return "CHAR_BANK_BOL";
	
		case 21:
			return "CHAR_MINOTAUR";
	
		case 25:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[15].f_7));
	
		case 26:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[30].f_7));
	
		case 27:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[17].f_7));
	
		case 29:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[20].f_7));
	
		case 30:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[43].f_7));
	
		case 31:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[44].f_7));
	
		case 32:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[19].f_7));
	
		case 34:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[40].f_7));
	
		case 36:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_E_381" /*CHAR_SAEEDA*/);
	
		case 38:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[64].f_7));
	
		case 5:
			return "CHAR_EPSILON";
	
		case 13:
			return "CHAR_MILSITE";
	
		case 11:
			return "CHAR_CARSITE";
	
		case 14:
			return "CHAR_BOATSITE";
	
		case 12:
			return "CHAR_PLANESITE";
	
		case 24:
			return "CHAR_DR_FRIEDLANDER";
	
		case 55:
			return "CHAR_CARSITE2";
	
		case 54:
			return "CHAR_BIKESITE";
	
		case 39:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[122].f_7));
	
		case 40:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[125].f_7));
	
		case 41:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[113].f_7));
	
		case 42:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[126].f_7));
	
		case 43:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[127].f_7));
	
		case 44:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[124].f_7));
	
		case 45:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[114].f_7));
	
		case 46:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[115].f_7));
	
		case 47:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[116].f_7));
	
		case 48:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[123].f_7));
	
		case 49:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[117].f_7));
	
		case 50:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[118].f_7));
	
		case 51:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[119].f_7));
	
		case 52:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[120].f_7));
	
		case 53:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[121].f_7));
	
		default:
		
	}

	*uParam1 = 0;
	return "ERROR!";
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x10E2
{
	func_7();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_7() // Position - 0x10FB
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_9(character) && !func_8(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_9(Global_113648.f_2365.f_539.f_4321))
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
			
				Global_113648.f_2365.f_539.f_4323 = character;
				Global_113648.f_2365.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != _CHAR_NULL)
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
		
			return;
		}
	}

	Global_113648.f_2365.f_539.f_4321 = 145;
	return;
}

BOOL func_8(int iParam0) // Position - 0x11F8
{
	return Global_43257 == iParam0;
}

BOOL func_9(eCharacter echParam0) // Position - 0x1206
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1212
{
	eCharacter i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == entityModel)
				return i;
		}
	}

	return _CHAR_NULL;
}

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x124F
{
	if (func_9(character))
		return func_12(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_12(eCharacter echParam0) // Position - 0x1274
{
	return Global_2028[echParam0];
}

struct<16> func_13(int iParam0) // Position - 0x1283
{
	var unk;
	var unk2;

	if (iParam0 > -1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "EMSTR_", 64);
		TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
		return unk;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk17, "FAIL", 64);
	return unk17;
}

int func_14(int iParam0) // Position - 0x12B4
{
	int i;
	int num;
	int num2;

	i = 0;
	num = -1;
	num2 = -1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_53765[i].f_2 == iParam0)
		{
			if (Global_53765[i].f_1 > num2)
			{
				num2 = Global_53765[i].f_1;
				num = i;
			}
		}
	}

	if (num != -1 && num2 != -1)
		return num;

	return -1;
}

void func_15(int iParam0, char* sParam1) // Position - 0x1318
{
	int num;
	int num2;

	num = func_14(iParam0);

	if (num == -1)
		return;

	if (Global_53765[num].f_9 == 0)
		return;

	if (Global_53765[num].f_10[Global_53765[num].f_9 - 1].f_6 == 10)
		return;

	num2 = Global_53765[num].f_10[Global_53765[num].f_9 - 1].f_6;
	Global_53765[num].f_10[Global_53765[num].f_9 - 1].f_6 = Global_53765[num].f_10[Global_53765[num].f_9 - 1].f_6 + 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_53765[num].f_10[Global_53765[num].f_9 - 1].f_7[num2], sParam1, 16);
	return;
}

void func_16(int iParam0, char* sParam1, BOOL bParam2) // Position - 0x13CD
{
	int num;

	num = func_14(iParam0);

	if (num == -1)
		return;

	if (Global_53765[num].f_9 == 0)
		return;

	Global_53765[num].f_10[Global_53765[num].f_9 - 1].f_1 = 1;
	TEXT_LABEL_ASSIGN_STRING(&(Global_53765[num].f_10[Global_53765[num].f_9 - 1].f_2), sParam1, 16);
	Global_53765[num].f_10[Global_53765[num].f_9 - 1].f_6 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_53765[num].f_10[Global_53765[num].f_9 - 1].f_7[0], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_53765[num].f_10[Global_53765[num].f_9 - 1].f_7[1], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_53765[num].f_10[Global_53765[num].f_9 - 1].f_7[2], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_53765[num].f_10[Global_53765[num].f_9 - 1].f_7[3], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_53765[num].f_10[Global_53765[num].f_9 - 1].f_7[4], "", 16);

	if (bParam2)
		func_1(iParam0);

	return;
}

BOOL func_17(int iParam0, int iParam1, BOOL bParam2) // Position - 0x14F4
{
	int num;
	int i;
	int num2;
	int num3;

	num = func_19(iParam0, true);

	if (num == -1)
		return false;

	if (Global_53765[num].f_9 == 4)
		return false;

	Global_53765[num].f_2 = iParam0;
	Global_53765[num].f_10[Global_53765[num].f_9] = iParam1;
	Global_53765[num].f_10[Global_53765[num].f_9].f_1 = 0;
	Global_53765[num].f_10[Global_53765[num].f_9].f_6 = 0;
	Global_53765[num].f_9 = Global_53765[num].f_9 + 1;
	i = 0;
	num2 = -1;

	for (i = 0; i < Global_53765[num].f_3; i = i + 1)
	{
		if (num2 == -1)
			if (Global_53765[num].f_4[i] == Global_44465[iParam1].f_3)
				num2 = i;
	}

	if (num2 == -1)
	{
		if (Global_53765[num].f_3 == 4)
		{
			return false;
		}
		else
		{
			Global_53765[num].f_4[Global_53765[num].f_3] = Global_44465[iParam1].f_3;
			Global_53765[num].f_3 = Global_53765[num].f_3 + 1;
		}
	}

	i = 0;
	num2 = -1;

	for (i = 0; i < Global_53765[num].f_3; i = i + 1)
	{
		if (num2 == -1)
			if (Global_53765[num].f_4[i] == Global_44465[iParam1].f_2)
				num2 = i;
	}

	if (num2 == -1)
	{
		if (Global_53765[num].f_3 == 4)
		{
			return false;
		}
		else
		{
			Global_53765[num].f_4[Global_53765[num].f_3] = Global_44465[iParam1].f_2;
			Global_53765[num].f_3 = Global_53765[num].f_3 + 1;
		}
	}

	i = 0;

	for (i = 0; i < Global_53765[num].f_3; i = i + 1)
	{
		num3 = Global_53765[num].f_4[i];
	
		if (num3 < 3)
			func_18(Global_53765[num].f_4[i], Global_53765[num].f_1, true, bParam2, false);
	}

	return true;
}

void func_18(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x16F0
{
	int num;
	int num2;
	int num3;
	var unk;
	int unk2;
	int unk3;
	BOOL unk4;
	BOOL unk5;
	int unk6;
	int unk7;
	int unk8;
	int unk9;

	if (!(iParam0 < 3))
		return;

	num = -1;
	TEXT_LABEL_ASSIGN_STRING(&unk, "UNSET", 64);

	if (!bParam2)
	{
		num4 = Global_47790[iParam1].f_42 - 1;
	
		if (num4 < 0)
			return;
	
		num5 = Global_47790[iParam1].f_32[num4];
		num3 = num5;
		unk = { func_13(Global_44465[num5].f_1) };
	
		if (Global_44465[num5].f_2 == iParam0 && !(Global_44465[num5].f_3 == iParam0))
			return;
	
		num2 = Global_44465[num5].f_2;
		num = Global_53403[iParam0];
	
		for (i = false; num >= 16; i = true)
		{
			num = num - 16;
		}
	
		if (i)
		{
			if (!Global_53403[iParam0].f_69[num])
			{
				switch (iParam0)
				{
					case 0:
						Global_44457 = Global_44457 - 1;
					
						if (Global_44457 < 0)
							Global_44457 = 0;
						break;
				
					case 1:
						Global_44458 = Global_44458 - 1;
					
						if (Global_44458 < 0)
							Global_44458 = 0;
						break;
				
					case 2:
						Global_44459 = Global_44459 - 1;
					
						if (Global_44459 < 0)
							Global_44459 = 0;
						break;
				}
			}
		}
	
		Global_53403[iParam0].f_18[num] = iParam1;
		Global_53403[iParam0].f_1[num] = num4;
		Global_53403[iParam0].f_35[num] = 0;
		Global_53403[iParam0].f_86[num] = false;
		Global_53403[iParam0].f_69[num] = false;
		Global_53403[iParam0] = Global_53403[iParam0] + 1;
	}
	else
	{
		num = Global_53403[iParam0];
	
		for (j = false; num >= 16; j = true)
		{
			num = num - 16;
		}
	
		if (j)
		{
			if (!Global_53403[iParam0].f_69[num])
			{
				switch (iParam0)
				{
					case 0:
						Global_44457 = Global_44457 - 1;
					
						if (Global_44457 < 0)
							Global_44457 = 0;
						break;
				
					case 1:
						Global_44458 = Global_44458 - 1;
					
						if (Global_44458 < 0)
							Global_44458 = 0;
						break;
				
					case 2:
						Global_44459 = Global_44459 - 1;
					
						if (Global_44459 < 0)
							Global_44459 = 0;
						break;
				}
			}
		}
	
		num6 = -1;
		k = 0;
	
		for (k = 0; k < 7; k = k + 1)
		{
			if (Global_53765[k].f_1 == iParam1 && Global_53765[k].f_9 > 0)
				num6 = k;
		}
	
		if (num6 == -1)
			return;
	
		Global_53403[iParam0].f_18[num] = Global_53765[num6].f_1;
		Global_53403[iParam0].f_1[num] = Global_53765[num6].f_9 - 1;
		Global_53403[iParam0].f_35[num] = 0;
		Global_53403[iParam0].f_86[num] = true;
		Global_53403[iParam0].f_69[num] = false;
		Global_53403[iParam0] = Global_53403[iParam0] + 1;
		num7 = Global_53403[iParam0].f_1[num];
		num8 = Global_53765[num6].f_10[num7];
		num3 = num8;
		num2 = Global_44465[num8].f_2;
	
		if (Global_53765[num6].f_10[Global_53765[num6].f_9 - 1].f_1)
			TEXT_LABEL_COPY(&unk, { Global_53765[num6].f_10[Global_53765[num6].f_9 - 1].f_2 }, 16);
		else
			unk = { func_13(Global_44465[num8].f_1) };
	}

	if (!bParam4)
	{
		if (!Global_53403[iParam0].f_69[num] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_2(0, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			
				case 1:
					if (num3 == 249)
						func_2(CHAR_FRANKLIN, num2, num3, "PW_FEED_EM_1" /*You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented...*/, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					else
						func_2(CHAR_FRANKLIN, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			
				case 2:
					func_2(CHAR_TREVOR, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			}
		}
	}

	return;
}

int func_19(int iParam0, BOOL bParam1) // Position - 0x1AC3
{
	int num;
	int i;
	BOOL flag;
	BOOL flag2;
	int num2;
	int num3;
	int j;
	int num4;
	int k;

	num = func_14(iParam0);

	if (num > -1)
		if (Global_53765[num].f_9 < 4)
			return num;

	i = 0;
	flag = false;

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_53765[i] == 0)
			flag = true;
	}

	if (!flag)
		return -1;

	flag2 = true;
	i = 0;
	num2 = -1;
	num3 = -1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_53765[i] == 0)
		{
			if (flag2)
			{
				num2 = i;
				num3 = Global_53765[i].f_1;
				flag2 = false;
			}
			else if (num3 > Global_53765[i].f_1)
			{
				num2 = i;
				num3 = Global_53765[i].f_1;
			}
		}
	}

	if (Global_53765[num2].f_9 > 0)
	{
		i = 0;
	
		for (i = 0; i < Global_53765[num2].f_9; i = i + 1)
		{
			j = 0;
		
			for (j = 0; j < 3; j = j + 1)
			{
				num4 = Global_53403[j];
			
				if (num4 > 16)
					num4 = 16;
			
				k = 0;
			
				for (k = 0; k < num4; k = k + 1)
				{
					if (Global_53403[j].f_86[k])
					{
						if (!Global_53403[j].f_69[k])
						{
							if (Global_53403[j].f_18[k] == Global_53765[num2].f_1)
							{
								if (Global_53403[j].f_1[k] == i)
								{
									switch (j)
									{
										case 0:
											Global_44457 = Global_44457 - 1;
											break;
									
										case 1:
											Global_44458 = Global_44458 - 1;
											break;
									
										case 2:
											Global_44459 = Global_44459 - 1;
											break;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	Global_53765[num2].f_2 = iParam0;
	Global_53765[num2].f_3 = 0;

	if (!bParam1)
		Global_53765[num2] = 1;

	Global_113648.f_21039.f_310 = Global_113648.f_21039.f_310 + 1;

	if (Global_113648.f_21039.f_310 == 0)
		Global_113648.f_21039.f_310 = 1;

	Global_53765[num2].f_1 = Global_113648.f_21039.f_310;
	Global_53765[num2].f_9 = 0;
	return num2;
}

void func_20(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x1CDB
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_30(iParam0, iParam1))
	{
		num = func_29(iParam1);
		num2 = func_27(iParam0);
		num3 = func_27(iParam0) - func_27(iParam1);
		num4 = func_29(iParam0) - func_29(iParam1);
		num5 = func_26(iParam0) - func_26(iParam1);
		num6 = func_25(iParam0) - func_25(iParam1);
		num7 = func_24(iParam0) - func_24(iParam1);
		num8 = func_23(iParam0) - func_23(iParam1);
	}
	else
	{
		num = func_29(iParam0);
		num2 = func_27(iParam1);
		num3 = func_27(iParam1) - func_27(iParam0);
		num4 = func_29(iParam1) - func_29(iParam0);
		num5 = func_26(iParam1) - func_26(iParam0);
		num6 = func_25(iParam1) - func_25(iParam0);
		num7 = func_24(iParam1) - func_24(iParam0);
		num8 = func_23(iParam1) - func_23(iParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_22(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_21(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

float func_21(float fParam0, float fParam1, float fParam2) // Position - 0x1EDC
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)SYSTEM::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

int func_22(int iParam0, int iParam1) // Position - 0x1F1E
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_23(int iParam0) // Position - 0x1FC0
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_24(int iParam0) // Position - 0x1FD3
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_25(int iParam0) // Position - 0x1FE6
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_26(int iParam0) // Position - 0x1FF9
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_27(int iParam0) // Position - 0x200B
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_28(BOOL bParam0, var uParam1, var uParam2) // Position - 0x202D
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_29(int iParam0) // Position - 0x2044
{
	return iParam0 & 15;
}

BOOL func_30(int iParam0, int iParam1) // Position - 0x2051
{
	int num;
	int num2;

	if (!func_31(iParam1) || !func_31(iParam0))
		return true;

	num = func_27(iParam0);
	num2 = func_27(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_29(iParam0);
	num2 = func_29(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_26(iParam0);
	num2 = func_26(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_25(iParam0);
	num2 = func_25(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_24(iParam0);
	num2 = func_24(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_23(iParam0);
	num2 = func_23(iParam1);

	if (num > num2)
		return true;

	return false;
}

BOOL func_31(int iParam0) // Position - 0x215D
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_23(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_24(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_25(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_27(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_29(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_26(iParam0);

	if (num6 < 1 || num6 > func_22(num5, num4))
		return false;

	return true;
}

void func_32(int iParam0, BOOL bParam1) // Position - 0x2239
{
	int num;
	int num2;
	int num3;
	int i;

	if (!Global_47790[iParam0] && !Global_47790[iParam0].f_1)
		return;

	if (Global_47790[iParam0].f_31 == Global_47790[iParam0].f_30)
	{
		num = Global_47790[iParam0].f_42 - 1;
	
		if (num < 0)
			return;
	
		if (Global_44465[Global_47790[iParam0].f_32[num]].f_4 == 0)
			Global_47790[iParam0].f_1 = 1;
	
		return;
	}

	if (Global_47790[iParam0].f_1)
		return;

	num2 = Global_47790[iParam0].f_8[Global_47790[iParam0].f_31];
	Global_47790[iParam0].f_31 = Global_47790[iParam0].f_31 + 1;
	func_33(iParam0, num2);
	Global_47790[iParam0].f_45 = Global_44465[num2].f_10;
	Global_47790[iParam0].f_43 = Global_44465[num2].f_11;
	num3 = Global_47790[iParam0].f_2;
	func_18(Global_44465[num2].f_3, iParam0, false, false, bParam1);

	for (i = 0; i < num3; i = i + 1)
	{
		if (Global_47790[iParam0].f_3[i] != Global_44465[num2].f_2 && Global_47790[iParam0].f_3[i] != Global_44465[num2].f_3)
			func_18(Global_47790[iParam0].f_3[i], iParam0, false, false, bParam1);
	}

	if (Global_47790[iParam0].f_31 == Global_47790[iParam0].f_30)
	{
		if (Global_44465[Global_47790[iParam0].f_32[Global_47790[iParam0].f_42 - 1]].f_4 == 0)
		{
			Global_47790[iParam0].f_1 = 1;
			return;
		}
	}

	return;
}

int func_33(int iParam0, int iParam1) // Position - 0x23D5
{
	if (Global_47790[iParam0].f_42 >= 9)
		return 0;

	Global_47790[iParam0].f_32[Global_47790[iParam0].f_42] = iParam1;
	Global_47790[iParam0].f_42 = Global_47790[iParam0].f_42 + 1;
	return 1;
}

BOOL func_34(int iParam0, eCharacter echParam1, int iParam2, int iParam3, int iParam4) // Position - 0x241A
{
	int num;
	int num2;
	int num3;
	int num4;
	eCharacter character;
	var sizeAndPeds;
	var unk;
	int unk2;
	int unk3;
	Entity unk4;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (func_59())
		return false;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
			return false;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return false;

	if (func_58() && iParam2 < 4)
		return false;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (func_56(PLAYER::PLAYER_PED_ID()))
			if (IS_BIT_SET(iParam0, _GET_CURRENT_PLAYER_CHARACTER_0()) && !IS_BIT_SET(iParam4, 19))
				return false;

	if (G_DisableMessagesAndCalls1)
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (Global_75693)
		return false;

	if (Global_96688)
		return false;

	if (func_54() || Global_23131.f_4 && Global_23131.f_104 == 4 || func_53())
		return false;

	if (IS_BIT_SET(iParam4, 18))
		if (!IS_BIT_SET(iParam0, _GET_CURRENT_PLAYER_CHARACTER_0()))
			return false;

	num = 1;

	if (Global_100681 == 13 || Global_100681 == 10 || Global_100681 == 11 || Global_100681 == 12)
		num = 0;

	if (num == 1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	else if (iParam2 != 5)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
			return false;
	
		if (MISC::IS_AUTO_SAVE_IN_PROGRESS())
			return false;
	
		if (Global_97609)
			return false;
	
		if (func_46(50f, true) != -1)
			return false;
	
		if (echParam1 == CHAR_AMANDA || echParam1 == CHAR_LAMAR || echParam1 == CHAR_JIMMY || echParam1 == CHAR_MICHAEL || echParam1 == CHAR_FRANKLIN || echParam1 == CHAR_TREVOR)
		{
			if (IS_BIT_SET(iParam0, _GET_CURRENT_PLAYER_CHARACTER_0()))
			{
				num2 = func_43(_GET_CURRENT_PLAYER_CHARACTER());
				num3 = func_43(echParam1);
				num4 = func_42(num2, num3);
			
				if (num4 < 9)
					if (Global_113648.f_18105.f_175[num4].f_8 == 1 || Global_113648.f_18105.f_175[num4].f_8 == 2)
						if (func_41(&(Global_113648.f_18105.f_175[num4].f_5)))
							if (func_38(&(Global_113648.f_18105.f_175[num4].f_5)) < 30f)
								return false;
			}
		}
	}

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 2)
		return false;

	if (func_37())
		return false;

	if (IS_BIT_SET(iParam4, 3))
	{
		if (Global_112695)
			return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				return false;
	
		if (Global_112358.f_19 != 0)
			return false;
	
		if (Global_43257 == 5)
			return false;
	}

	if (iParam3 != -1)
		if (func_36(PLAYER::PLAYER_PED_ID(), iParam3, 0))
			return false;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (func_9(character))
	{
		sizeAndPeds = 16;
		PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &sizeAndPeds, -1);
		unk17 = 2;
	
		switch (echParam1)
		{
			case CHAR_ALL_PLAYERS_CONF:
				switch (character)
				{
					case CHAR_MICHAEL:
						unk17[0] = _GET_CHARACTER_MODEL(CHAR_FRANKLIN);
						unk17[1] = _GET_CHARACTER_MODEL(CHAR_TREVOR);
						break;
				
					case CHAR_FRANKLIN:
						unk17[0] = _GET_CHARACTER_MODEL(CHAR_MICHAEL);
						unk17[1] = _GET_CHARACTER_MODEL(CHAR_TREVOR);
						break;
				
					case CHAR_TREVOR:
						unk17[0] = _GET_CHARACTER_MODEL(CHAR_MICHAEL);
						unk17[1] = _GET_CHARACTER_MODEL(CHAR_FRANKLIN);
						break;
				}
				break;
		
			case CHAR_FRANK_TREV_CONF:
				unk17[0] = _GET_CHARACTER_MODEL(CHAR_FRANKLIN);
				unk17[1] = _GET_CHARACTER_MODEL(CHAR_TREVOR);
				break;
		
			case CHAR_LEST_FRANK_CONF:
				unk17[0] = func_35(CHAR_LESTER);
				unk17[1] = _GET_CHARACTER_MODEL(CHAR_FRANKLIN);
				break;
		
			case CHAR_LEST_MIKE_CONF:
				unk17[0] = func_35(CHAR_LESTER);
				unk17[1] = _GET_CHARACTER_MODEL(CHAR_MICHAEL);
				break;
		
			case CHAR_MIKE_FRANK_CONF:
				unk17[0] = _GET_CHARACTER_MODEL(CHAR_MICHAEL);
				unk17[1] = _GET_CHARACTER_MODEL(CHAR_FRANKLIN);
				break;
		
			case CHAR_MIKE_TREV_CONF:
				unk17[0] = _GET_CHARACTER_MODEL(CHAR_MICHAEL);
				unk17[1] = _GET_CHARACTER_MODEL(CHAR_TREVOR);
				break;
		
			case CHAR_STEVE_MIKE_CONF:
				unk17[0] = func_35(CHAR_STEVE);
				unk17[1] = _GET_CHARACTER_MODEL(CHAR_MICHAEL);
				break;
		
			case CHAR_STEVE_TREV_CONF:
				unk17[0] = func_35(CHAR_STEVE);
				unk17[1] = _GET_CHARACTER_MODEL(CHAR_MICHAEL);
				break;
		
			default:
				if (func_9(echParam1))
					unk17[0] = _GET_CHARACTER_MODEL(echParam1);
				else
					unk17[0] = func_35(echParam1);
			
				unk17[1] = 0;
				break;
		}
	
		for (i = 0; i < 2; i = i + 1)
		{
			if (unk17[i] != 0)
			{
				for (j = 0; j < 16; j = j + 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(sizeAndPeds[j]))
						if (ENTITY::GET_ENTITY_MODEL(sizeAndPeds[j]) == unk17[i])
							if (!ENTITY::IS_ENTITY_DEAD(sizeAndPeds[j], false))
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(sizeAndPeds[j], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 6400f)
										return false;
							else
								return false;
				}
			
				entity = 0;
			
				switch (unk17[i])
				{
					case joaat("Player_Zero"):
						entity = Global_98159[0];
						break;
				
					case joaat("Player_One"):
						entity = Global_98159[1];
						break;
				
					case joaat("Player_Two"):
						entity = Global_98159[2];
						break;
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(entity))
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(entity, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 6400f)
							return false;
			
				switch (unk17[i])
				{
					case joaat("Player_Zero"):
						entity = Global_100606[0];
						break;
				
					case joaat("Player_One"):
						entity = Global_100606[1];
						break;
				
					case joaat("Player_Two"):
						entity = Global_100606[2];
						break;
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(entity))
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(entity, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 6400f)
							return false;
			}
		}
	}
	else
	{
		return false;
	}

	return true;
}

Hash func_35(eCharacter echParam0) // Position - 0x2A06
{
	if (!func_9(echParam0))
		return func_12(echParam0);
	else
		echParam0 != _CHAR_NULL;

	return 0;
}

BOOL func_36(Ped pedParam0, int iParam1, int iParam2) // Position - 0x2A2C
{
	Vector3 vector;
	int unk;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		vector = { Global_43258[iParam1] };
		num = vector.f_3;
	
		if (iParam2 > 0f)
			num = iParam2;
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, true), vector, true) < num)
			return true;
		else if (vector.f_4 != -1)
			return func_36(pedParam0, vector.f_4, iParam2);
	}

	return false;
}

BOOL func_37() // Position - 0x2A92
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

float func_38(var uParam0) // Position - 0x2ABC
{
	if (func_41(uParam0))
		if (func_40(uParam0))
			return uParam0->f_2;
		else
			return func_39(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_39(BOOL bParam0) // Position - 0x2AF8
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

BOOL func_40(var uParam0) // Position - 0x2B50
{
	return IS_BIT_SET(*uParam0, 2);
}

BOOL func_41(var uParam0) // Position - 0x2B5D
{
	return IS_BIT_SET(*uParam0, 1);
}

int func_42(int iParam0, int iParam1) // Position - 0x2B6A
{
	int num;

	if (iParam0 != 0 && iParam0 != 1 && iParam0 != 2)
	{
		if (iParam1 == 0 || iParam1 == 1 || iParam1 == 2)
		{
			num = iParam1;
			iParam1 = iParam0;
			iParam0 = num;
		}
	}

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 0;
			
				case 2:
					return 2;
			
				case 3:
					return 10;
			
				case 4:
					return 5;
			
				case 5:
					return 8;
			
				default:
					return 10;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 10;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 6;
			
				case 5:
					return 10;
			
				default:
					return 10;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
			
				case 1:
					return 1;
			
				case 2:
					return 10;
			
				case 3:
					return 4;
			
				case 4:
					return 7;
			
				case 5:
					return 10;
			
				default:
					return 10;
			}
			break;
	}

	return 10;
}

int func_43(eCharacter echParam0) // Position - 0x2CF4
{
	if (echParam0 == _CHAR_NULL)
		return 7;

	if (echParam0 < func_45())
		return func_44(echParam0);

	if (echParam0 == _CHAR_VIRTUAL_MP)
		return 7;

	if (echParam0 == func_45())
		return 6;

	if (echParam0 == 191)
		return 6;

	return 6;
}

int func_44(eCharacter echParam0) // Position - 0x2D4C
{
	return Global_2028[echParam0].f_11;
}

eCharacter func_45() // Position - 0x2D5D
{
	if (Global_32163 == 0 || Global_32163 == 2)
		return 190;

	return 161;
}

int func_46(float fParam0, BOOL bParam1) // Position - 0x2D7F
{
	var unk;
	int unk2;
	int unk3;
	float unk4;
	float unk5;
	int unk6;
	int unk7;
	BOOL unk8;

	num2 = -1;
	num3 = fParam0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		num4 = func_52();
		i = 0;
	
		for (i = 0; i < 63; i = i + 1)
		{
			num = i;
		
			if (IS_BIT_SET(Global_113648.f_18576[num], 2) && !IS_BIT_SET(Global_113648.f_18576[num], 3))
			{
				func_47(num, &unk);
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), unk.f_6, true);
			
				if (distanceBetweenCoords < num3)
				{
					flag = true;
				
					if (bParam1)
						if (num4 != unk.f_26)
							flag = false;
				
					if (flag)
					{
						num2 = num;
						num3 = distanceBetweenCoords;
					}
				}
			}
		}
	}

	return num2;
}

void func_47(int iParam0, var uParam1) // Position - 0x2E25
{
	switch (iParam0)
	{
		case 0:
			func_48(uParam1, "Abigail1", func_50(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 1:
			func_48(uParam1, "Abigail2", func_50(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 2:
			func_48(uParam1, "Barry1", func_50(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 3:
			func_48(uParam1, "Barry2", func_50(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
	
		case 4:
			func_48(uParam1, "Barry3", func_50(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 5:
			func_48(uParam1, "Barry3A", func_50(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 6:
			func_48(uParam1, "Barry3C", func_50(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 7:
			func_48(uParam1, "Barry4", func_50(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_49(iParam0), 0, 0);
			break;
	
		case 8:
			func_48(uParam1, "Dreyfuss1", func_50(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 9:
			func_48(uParam1, "Epsilon1", func_50(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 10:
			func_48(uParam1, "Epsilon2", func_50(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 11:
			func_48(uParam1, "Epsilon3", func_50(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 12:
			func_48(uParam1, "Epsilon4", func_50(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 13:
			func_48(uParam1, "Epsilon5", func_50(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 14:
			func_48(uParam1, "Epsilon6", func_50(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 15:
			func_48(uParam1, "Epsilon7", func_50(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 16:
			func_48(uParam1, "Epsilon8", func_50(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 17:
			func_48(uParam1, "Extreme1", func_50(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 18:
			func_48(uParam1, "Extreme2", func_50(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 19:
			func_48(uParam1, "Extreme3", func_50(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 20:
			func_48(uParam1, "Extreme4", func_50(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 21:
			func_48(uParam1, "Fanatic1", func_50(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_49(iParam0), 1, 0);
			break;
	
		case 22:
			func_48(uParam1, "Fanatic2", func_50(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_49(iParam0), 1, 0);
			break;
	
		case 23:
			func_48(uParam1, "Fanatic3", func_50(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_49(iParam0), 0, 1);
			break;
	
		case 24:
			func_48(uParam1, "Hao1", func_50(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_49(iParam0), 0, 1);
			break;
	
		case 25:
			func_48(uParam1, "Hunting1", func_50(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 26:
			func_48(uParam1, "Hunting2", func_50(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 27:
			func_48(uParam1, "Josh1", func_50(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 28:
			func_48(uParam1, "Josh2", func_50(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
	
		case 29:
			func_48(uParam1, "Josh3", func_50(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
	
		case 30:
			func_48(uParam1, "Josh4", func_50(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 31:
			func_48(uParam1, "Maude1", func_50(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 32:
			func_48(uParam1, "Minute1", func_50(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 33:
			func_48(uParam1, "Minute2", func_50(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 34:
			func_48(uParam1, "Minute3", func_50(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 35:
			func_48(uParam1, "MrsPhilips1", func_50(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 36:
			func_48(uParam1, "MrsPhilips2", func_50(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 37:
			func_48(uParam1, "Nigel1", func_50(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 38:
			func_48(uParam1, "Nigel1A", func_50(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
	
		case 39:
			func_48(uParam1, "Nigel1B", func_50(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_49(iParam0), 1, 1);
			break;
	
		case 40:
			func_48(uParam1, "Nigel1C", func_50(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_49(iParam0), 1, 1);
			break;
	
		case 41:
			func_48(uParam1, "Nigel1D", func_50(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_49(iParam0), 1, 1);
			break;
	
		case 42:
			func_48(uParam1, "Nigel2", func_50(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
	
		case 43:
			func_48(uParam1, "Nigel3", func_50(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
	
		case 44:
			func_48(uParam1, "Omega1", func_50(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 45:
			func_48(uParam1, "Omega2", func_50(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 46:
			func_48(uParam1, "Paparazzo1", func_50(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 47:
			func_48(uParam1, "Paparazzo2", func_50(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 48:
			func_48(uParam1, "Paparazzo3", func_50(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 49:
			func_48(uParam1, "Paparazzo3A", func_50(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 50:
			func_48(uParam1, "Paparazzo3B", func_50(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 51:
			func_48(uParam1, "Paparazzo4", func_50(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 52:
			func_48(uParam1, "Rampage1", func_50(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 54:
			func_48(uParam1, "Rampage3", func_50(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 55:
			func_48(uParam1, "Rampage4", func_50(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 56:
			func_48(uParam1, "Rampage5", func_50(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
	
		case 53:
			func_48(uParam1, "Rampage2", func_50(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
	
		case 57:
			func_48(uParam1, "TheLastOne", func_50(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 58:
			func_48(uParam1, "Tonya1", func_50(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 59:
			func_48(uParam1, "Tonya2", func_50(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 60:
			func_48(uParam1, "Tonya3", func_50(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 61:
			func_48(uParam1, "Tonya4", func_50(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		case 62:
			func_48(uParam1, "Tonya5", func_50(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_48(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x406E
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { uParam2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { fParam7 };
	uParam0->f_9 = iParam10;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
	return;
}

int func_49(int iParam0) // Position - 0x40FF
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

struct<2> func_50(int iParam0) // Position - 0x4445
{
	var unk;
	var unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_51(iParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "RC_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_51(int iParam0) // Position - 0x447D
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI1", 8);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI2", 8);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA1", 8);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA2", 8);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3", 8);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3A", 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3C", 8);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA4", 8);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DRE1", 8);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS1", 8);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS2", 8);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS3", 8);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS4", 8);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS5", 8);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS6", 8);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS7", 8);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS8", 8);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT1", 8);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT2", 8);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT3", 8);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT4", 8);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN1", 8);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN2", 8);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN3", 8);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAO1", 8);
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN1", 8);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN2", 8);
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS1", 8);
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS2", 8);
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS3", 8);
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS4", 8);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAU1", 8);
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN1", 8);
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN2", 8);
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN3", 8);
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS1", 8);
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS2", 8);
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1", 8);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1A", 8);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1B", 8);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1C", 8);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1D", 8);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI2", 8);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI3", 8);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME1", 8);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME2", 8);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA1", 8);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA2", 8);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3", 8);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3A", 8);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3B", 8);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA4", 8);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM1", 8);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM2", 8);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM3", 8);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM4", 8);
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM5", 8);
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SAS1", 8);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON1", 8);
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON2", 8);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON3", 8);
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON4", 8);
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON5", 8);
			break;
	
		default:
			break;
	}

	return unk;
}

int func_52() // Position - 0x48CA
{
	func_7();

	switch (Global_113648.f_2365.f_539.f_4321)
	{
		case CHAR_MICHAEL:
			return 1;
	
		case CHAR_FRANKLIN:
			return 2;
	
		case CHAR_TREVOR:
			return 4;
	}

	return 0;
}

BOOL func_53() // Position - 0x4910
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_54() // Position - 0x492A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER_0() // Position - 0x4946
{
	func_7();
	return Global_113648.f_2365.f_539.f_4321;
}

BOOL func_56(Ped pedParam0) // Position - 0x495F
{
	if (pedParam0 == 0)
		return false;

	if (func_57(pedParam0) == -1)
		return false;

	return true;
}

int func_57(Ped pedParam0) // Position - 0x4980
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!(Global_44232[i] == -1))
			if (pedParam0 == Global_44232[i].f_1)
				return i;
	}

	return -1;
}

BOOL func_58() // Position - 0x49C9
{
	if (Global_43257 == 15)
		return false;

	return true;
}

BOOL func_59() // Position - 0x49DE
{
	if (Global_20383.f_1 == 1)
		return true;

	return false;
}

void func_60(int iParam0) // Position - 0x49F7
{
	int num;

	if (iParam0 == 26)
		if (!IS_BIT_SET(Global_113648.f_24988, 4 - 1))
			return;

	num = func_14(iParam0);

	if (num == -1)
		return;

	Global_53765[num] = 0;
	return;
}

int func_61() // Position - 0x4A31
{
	var unk;

	func_67(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_66(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_65(&unk, CLOCK::GET_CLOCK_HOURS());
	func_64(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_63(&unk, CLOCK::GET_CLOCK_MONTH());
	func_62(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_62(var uParam0, int iParam1) // Position - 0x4A77
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_63(var uParam0, int iParam1) // Position - 0x4AFD
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_64(var uParam0, int iParam1) // Position - 0x4B30
{
	int num;
	int num2;

	num = func_29(*uParam0);
	num2 = func_27(*uParam0);

	if (iParam1 < 1 || iParam1 > func_22(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_65(var uParam0, int iParam1) // Position - 0x4B81
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_66(var uParam0, int iParam1) // Position - 0x4BBB
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_67(var uParam0, int iParam1) // Position - 0x4BF6
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

void func_68() // Position - 0x4C32
{
	int i;
	int j;
	int k;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_53403[i] = Global_113648.f_21039[i];
	
		for (j = 0; j < 16; j = j + 1)
		{
			Global_53403[i].f_1[j] = Global_113648.f_21039[i].f_1[j];
			Global_53403[i].f_18[j] = Global_113648.f_21039[i].f_18[j];
			Global_53403[i].f_35[j] = Global_113648.f_21039[i].f_35[j];
			Global_53403[i].f_52[j] = Global_113648.f_21039[i].f_52[j];
			Global_53403[i].f_69[j] = Global_113648.f_21039[i].f_69[j];
			Global_53403[i].f_86[j] = Global_113648.f_21039[i].f_86[j];
		}
	}

	for (i = 0; i < 7; i = i + 1)
	{
		Global_53765[i].f_2 = Global_113648.f_21039.f_311[i];
		Global_53765[i] = Global_113648.f_21039.f_311[i].f_2;
		Global_53765[i].f_3 = Global_113648.f_21039.f_311[i].f_3;
		Global_53765[i].f_1 = Global_113648.f_21039.f_311[i].f_1;
		Global_53765[i].f_9 = Global_113648.f_21039.f_311[i].f_9;
	
		for (j = 0; j < 4; j = j + 1)
		{
			Global_53765[i].f_4[j] = Global_113648.f_21039.f_311[i].f_4[j];
		}
	
		for (j = 0; j < 4; j = j + 1)
		{
			Global_53765[i].f_10[j] = Global_113648.f_21039.f_311[i].f_10[j];
			Global_53765[i].f_10[j].f_1 = Global_113648.f_21039.f_311[i].f_10[j].f_1;
			Global_53765[i].f_10[j].f_2 = { Global_113648.f_21039.f_311[i].f_10[j].f_2 };
			Global_53765[i].f_10[j].f_6 = Global_113648.f_21039.f_311[i].f_10[j].f_6;
		
			for (k = 0; k < 10; k = k + 1)
			{
				Global_53765[i].f_10[j].f_7[k] = { Global_113648.f_21039.f_311[i].f_10[j].f_7[k] };
			}
		}
	}

	for (i = 0; i < 122; i = i + 1)
	{
		Global_47790[i] = Global_113648.f_21039.f_1733[i];
		Global_47790[i].f_1 = Global_113648.f_21039.f_1733[i].f_1;
		Global_47790[i].f_45 = Global_113648.f_21039.f_1733[i].f_2;
		Global_47790[i].f_31 = Global_113648.f_21039.f_1733[i].f_3;
	
		for (j = 0; j < 9; j = j + 1)
		{
			if (Global_113648.f_21039.f_1733[i].f_4[j] > 0)
			{
				Global_47790[i].f_32[j] = Global_113648.f_21039.f_1733[i].f_4[j] - 1;
				Global_47790[i].f_42 = Global_47790[i].f_42 + 1;
			}
		}
	}

	Global_55187 = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		Global_55188[i] = Global_113648.f_21039.f_3442[i];
		Global_55188[i].f_1 = Global_113648.f_21039.f_3442[i].f_1;
		Global_55188[i].f_2 = Global_113648.f_21039.f_3442[i].f_2;
		Global_55188[i].f_5 = Global_113648.f_21039.f_3442[i].f_5;
		Global_55188[i].f_6 = { Global_113648.f_21039.f_3442[i].f_6 };
		Global_55188[i].f_10 = Global_113648.f_21039.f_3442[i].f_10;
	
		for (j = 0; j < 10; j = j + 1)
		{
			Global_55188[i].f_11[j] = { Global_113648.f_21039.f_3442[i].f_11[j] };
		}
	
		Global_55188[i].f_52 = Global_113648.f_21039.f_3442[i].f_52;
	
		if (Global_55188[i].f_52 != 0)
			Global_55187 = Global_55187 + 1;
	}

	return;
}

void func_69() // Position - 0x50B5
{
	Global_44465[0] = 15;
	Global_44465[0].f_1 = 16;
	Global_44465[0].f_2 = 4;
	Global_44465[0].f_3 = 0;
	Global_44465[0].f_10 = 1;
	Global_44465[0].f_11 = 0;
	Global_44465[0].f_4 = 0;
	Global_44465[1] = 17;
	Global_44465[1].f_1 = 16;
	Global_44465[1].f_2 = 4;
	Global_44465[1].f_3 = 0;
	Global_44465[1].f_10 = 1;
	Global_44465[1].f_11 = 0;
	Global_44465[1].f_4 = 0;
	Global_44465[2] = 18;
	Global_44465[2].f_1 = 16;
	Global_44465[2].f_2 = 4;
	Global_44465[2].f_3 = 0;
	Global_44465[2].f_10 = 1;
	Global_44465[2].f_11 = 0;
	Global_44465[2].f_4 = 0;
	Global_44465[3] = 19;
	Global_44465[3].f_1 = 16;
	Global_44465[3].f_2 = 4;
	Global_44465[3].f_3 = 0;
	Global_44465[3].f_10 = 1;
	Global_44465[3].f_11 = 0;
	Global_44465[3].f_4 = 0;
	Global_44465[4] = 20;
	Global_44465[4].f_1 = 16;
	Global_44465[4].f_2 = 4;
	Global_44465[4].f_3 = 0;
	Global_44465[4].f_10 = 1;
	Global_44465[4].f_11 = 0;
	Global_44465[4].f_4 = 0;
	Global_44465[5] = 21;
	Global_44465[5].f_1 = 16;
	Global_44465[5].f_2 = 4;
	Global_44465[5].f_3 = 0;
	Global_44465[5].f_10 = 1;
	Global_44465[5].f_11 = 0;
	Global_44465[5].f_4 = 0;
	Global_44465[6] = 22;
	Global_44465[6].f_1 = 16;
	Global_44465[6].f_2 = 4;
	Global_44465[6].f_3 = 0;
	Global_44465[6].f_10 = 0;
	Global_44465[6].f_11 = 0;
	Global_44465[6].f_4 = 0;
	Global_44465[7] = 23;
	Global_44465[7].f_1 = 24;
	Global_44465[7].f_2 = 4;
	Global_44465[7].f_3 = 0;
	Global_44465[7].f_10 = 0;
	Global_44465[7].f_11 = 0;
	Global_44465[7].f_4 = 0;
	Global_44465[8] = 25;
	Global_44465[8].f_1 = 26;
	Global_44465[8].f_2 = 4;
	Global_44465[8].f_3 = 0;
	Global_44465[8].f_10 = 0;
	Global_44465[8].f_11 = 0;
	Global_44465[8].f_4 = 0;
	Global_44465[9] = 27;
	Global_44465[9].f_1 = 28;
	Global_44465[9].f_2 = 4;
	Global_44465[9].f_3 = 0;
	Global_44465[9].f_10 = 0;
	Global_44465[9].f_11 = 0;
	Global_44465[9].f_4 = 0;
	Global_44465[10] = 32;
	Global_44465[10].f_1 = 33;
	Global_44465[10].f_2 = 5;
	Global_44465[10].f_3 = 0;
	Global_44465[10].f_10 = 0;
	Global_44465[10].f_11 = 0;
	Global_44465[10].f_4 = 0;
	Global_44465[11] = 34;
	Global_44465[11].f_1 = 35;
	Global_44465[11].f_2 = 5;
	Global_44465[11].f_3 = 0;
	Global_44465[11].f_10 = 0;
	Global_44465[11].f_11 = 0;
	Global_44465[11].f_4 = 0;
	Global_44465[12] = 42;
	Global_44465[12].f_1 = 43;
	Global_44465[12].f_2 = 7;
	Global_44465[12].f_3 = 1;
	Global_44465[12].f_10 = 0;
	Global_44465[12].f_11 = 0;
	Global_44465[12].f_4 = 0;
	Global_44465[13] = 44;
	Global_44465[13].f_1 = 45;
	Global_44465[13].f_2 = 7;
	Global_44465[13].f_3 = 1;
	Global_44465[13].f_10 = 0;
	Global_44465[13].f_11 = 0;
	Global_44465[13].f_4 = 0;
	Global_44465[14] = 46;
	Global_44465[14].f_1 = 47;
	Global_44465[14].f_2 = 7;
	Global_44465[14].f_3 = 1;
	Global_44465[14].f_10 = 0;
	Global_44465[14].f_11 = 0;
	Global_44465[14].f_4 = 0;
	Global_44465[15] = 48;
	Global_44465[15].f_1 = 49;
	Global_44465[15].f_2 = 7;
	Global_44465[15].f_3 = 1;
	Global_44465[15].f_10 = 0;
	Global_44465[15].f_11 = 0;
	Global_44465[15].f_4 = 0;
	Global_44465[16] = 50;
	Global_44465[16].f_1 = 51;
	Global_44465[16].f_2 = 4;
	Global_44465[16].f_3 = 0;
	Global_44465[16].f_10 = 0;
	Global_44465[16].f_11 = 0;
	Global_44465[16].f_4 = 0;
	Global_44465[17] = 61;
	Global_44465[17].f_1 = 62;
	Global_44465[17].f_2 = 8;
	Global_44465[17].f_3 = 0;
	Global_44465[17].f_10 = 1;
	Global_44465[17].f_11 = 0;
	Global_44465[17].f_4 = 0;
	Global_44465[18] = 63;
	Global_44465[18].f_1 = 64;
	Global_44465[18].f_2 = 9;
	Global_44465[18].f_3 = 1;
	Global_44465[18].f_10 = 1;
	Global_44465[18].f_11 = 0;
	Global_44465[18].f_4 = 0;
	Global_44465[19] = 61;
	Global_44465[19].f_1 = 65;
	Global_44465[19].f_2 = 8;
	Global_44465[19].f_3 = 0;
	Global_44465[19].f_10 = 1;
	Global_44465[19].f_11 = 0;
	Global_44465[19].f_4 = 0;
	Global_44465[20] = 61;
	Global_44465[20].f_1 = 66;
	Global_44465[20].f_2 = 8;
	Global_44465[20].f_3 = 0;
	Global_44465[20].f_10 = 1;
	Global_44465[20].f_11 = 0;
	Global_44465[20].f_4 = 0;
	Global_44465[21] = 61;
	Global_44465[21].f_1 = 67;
	Global_44465[21].f_2 = 8;
	Global_44465[21].f_3 = 0;
	Global_44465[21].f_10 = 1;
	Global_44465[21].f_11 = 0;
	Global_44465[21].f_4 = 0;
	Global_44465[22] = 61;
	Global_44465[22].f_1 = 68;
	Global_44465[22].f_2 = 8;
	Global_44465[22].f_3 = 0;
	Global_44465[22].f_10 = 0;
	Global_44465[22].f_11 = 0;
	Global_44465[22].f_4 = 0;
	Global_44465[23] = 69;
	Global_44465[23].f_1 = 70;
	Global_44465[23].f_2 = 10;
	Global_44465[23].f_3 = 2;
	Global_44465[23].f_10 = 1;
	Global_44465[23].f_11 = 0;
	Global_44465[23].f_4 = 0;
	Global_44465[24] = 63;
	Global_44465[24].f_1 = 74;
	Global_44465[24].f_2 = 9;
	Global_44465[24].f_3 = 1;
	Global_44465[24].f_10 = 1;
	Global_44465[24].f_11 = 0;
	Global_44465[24].f_4 = 0;
	Global_44465[25] = 63;
	Global_44465[25].f_1 = 75;
	Global_44465[25].f_2 = 9;
	Global_44465[25].f_3 = 1;
	Global_44465[25].f_10 = 1;
	Global_44465[25].f_11 = 0;
	Global_44465[25].f_4 = 0;
	Global_44465[26] = 63;
	Global_44465[26].f_1 = 76;
	Global_44465[26].f_2 = 9;
	Global_44465[26].f_3 = 1;
	Global_44465[26].f_10 = 1;
	Global_44465[26].f_11 = 0;
	Global_44465[26].f_4 = 0;
	Global_44465[27] = 63;
	Global_44465[27].f_1 = 77;
	Global_44465[27].f_2 = 9;
	Global_44465[27].f_3 = 1;
	Global_44465[27].f_10 = 0;
	Global_44465[27].f_11 = 0;
	Global_44465[27].f_4 = 0;
	Global_44465[28] = 69;
	Global_44465[28].f_1 = 73;
	Global_44465[28].f_2 = 10;
	Global_44465[28].f_3 = 2;
	Global_44465[28].f_10 = 1;
	Global_44465[28].f_11 = 0;
	Global_44465[28].f_4 = 0;
	Global_44465[29] = 69;
	Global_44465[29].f_1 = 72;
	Global_44465[29].f_2 = 10;
	Global_44465[29].f_3 = 2;
	Global_44465[29].f_10 = 1;
	Global_44465[29].f_11 = 0;
	Global_44465[29].f_4 = 0;
	Global_44465[30] = 69;
	Global_44465[30].f_1 = 71;
	Global_44465[30].f_2 = 10;
	Global_44465[30].f_3 = 2;
	Global_44465[30].f_10 = 0;
	Global_44465[30].f_11 = 0;
	Global_44465[30].f_4 = 0;
	Global_44465[31] = 90;
	Global_44465[31].f_1 = 91;
	Global_44465[31].f_2 = 11;
	Global_44465[31].f_3 = 1;
	Global_44465[31].f_10 = 0;
	Global_44465[31].f_11 = 0;
	Global_44465[31].f_4 = 0;
	Global_44465[32] = 90;
	Global_44465[32].f_1 = 92;
	Global_44465[32].f_2 = 11;
	Global_44465[32].f_3 = 0;
	Global_44465[32].f_10 = 0;
	Global_44465[32].f_11 = 0;
	Global_44465[32].f_4 = 0;
	Global_44465[33] = 90;
	Global_44465[33].f_1 = 93;
	Global_44465[33].f_2 = 11;
	Global_44465[33].f_3 = 2;
	Global_44465[33].f_10 = 0;
	Global_44465[33].f_11 = 0;
	Global_44465[33].f_4 = 0;
	Global_44465[34] = 94;
	Global_44465[34].f_1 = 95;
	Global_44465[34].f_2 = 13;
	Global_44465[34].f_3 = 0;
	Global_44465[34].f_10 = 0;
	Global_44465[34].f_11 = 0;
	Global_44465[34].f_4 = 0;
	Global_44465[35] = 94;
	Global_44465[35].f_1 = 96;
	Global_44465[35].f_2 = 13;
	Global_44465[35].f_3 = 1;
	Global_44465[35].f_10 = 0;
	Global_44465[35].f_11 = 0;
	Global_44465[35].f_4 = 0;
	Global_44465[36] = 94;
	Global_44465[36].f_1 = 97;
	Global_44465[36].f_2 = 13;
	Global_44465[36].f_3 = 2;
	Global_44465[36].f_10 = 0;
	Global_44465[36].f_11 = 0;
	Global_44465[36].f_4 = 0;
	Global_44465[37] = 94;
	Global_44465[37].f_1 = 98;
	Global_44465[37].f_2 = 14;
	Global_44465[37].f_3 = 0;
	Global_44465[37].f_10 = 0;
	Global_44465[37].f_11 = 0;
	Global_44465[37].f_4 = 0;
	Global_44465[38] = 94;
	Global_44465[38].f_1 = 99;
	Global_44465[38].f_2 = 14;
	Global_44465[38].f_3 = 1;
	Global_44465[38].f_10 = 0;
	Global_44465[38].f_11 = 0;
	Global_44465[38].f_4 = 0;
	Global_44465[39] = 94;
	Global_44465[39].f_1 = 100;
	Global_44465[39].f_2 = 14;
	Global_44465[39].f_3 = 2;
	Global_44465[39].f_10 = 0;
	Global_44465[39].f_11 = 0;
	Global_44465[39].f_4 = 0;
	Global_44465[40] = 94;
	Global_44465[40].f_1 = 101;
	Global_44465[40].f_2 = 12;
	Global_44465[40].f_3 = 0;
	Global_44465[40].f_10 = 0;
	Global_44465[40].f_11 = 0;
	Global_44465[40].f_4 = 0;
	Global_44465[41] = 94;
	Global_44465[41].f_1 = 102;
	Global_44465[41].f_2 = 12;
	Global_44465[41].f_3 = 1;
	Global_44465[41].f_10 = 0;
	Global_44465[41].f_11 = 0;
	Global_44465[41].f_4 = 0;
	Global_44465[42] = 94;
	Global_44465[42].f_1 = 103;
	Global_44465[42].f_2 = 12;
	Global_44465[42].f_3 = 2;
	Global_44465[42].f_10 = 0;
	Global_44465[42].f_11 = 0;
	Global_44465[42].f_4 = 0;
	Global_44465[43] = 104;
	Global_44465[43].f_1 = 105;
	Global_44465[43].f_2 = 7;
	Global_44465[43].f_3 = 0;
	Global_44465[43].f_10 = 1;
	Global_44465[43].f_11 = 0;
	Global_44465[43].f_4 = 0;
	Global_44465[44] = 108;
	Global_44465[44].f_1 = 109;
	Global_44465[44].f_2 = 15;
	Global_44465[44].f_3 = 0;
	Global_44465[44].f_10 = 1;
	Global_44465[44].f_11 = 0;
	Global_44465[44].f_4 = 0;
	Global_44465[45] = 110;
	Global_44465[45].f_1 = 111;
	Global_44465[45].f_2 = 15;
	Global_44465[45].f_3 = 0;
	Global_44465[45].f_10 = 1;
	Global_44465[45].f_11 = 0;
	Global_44465[45].f_4 = 0;
	Global_44465[46] = 112;
	Global_44465[46].f_1 = 113;
	Global_44465[46].f_2 = 15;
	Global_44465[46].f_3 = 0;
	Global_44465[46].f_10 = 1;
	Global_44465[46].f_11 = 0;
	Global_44465[46].f_4 = 0;
	Global_44465[47] = 117;
	Global_44465[47].f_1 = 118;
	Global_44465[47].f_2 = 16;
	Global_44465[47].f_3 = 0;
	Global_44465[47].f_10 = 1;
	Global_44465[47].f_11 = 0;
	Global_44465[47].f_4 = 0;
	Global_44465[48] = 119;
	Global_44465[48].f_1 = 120;
	Global_44465[48].f_2 = 16;
	Global_44465[48].f_3 = 0;
	Global_44465[48].f_10 = 1;
	Global_44465[48].f_11 = 0;
	Global_44465[48].f_4 = 0;
	Global_44465[49] = 131;
	Global_44465[49].f_1 = 132;
	Global_44465[49].f_2 = 16;
	Global_44465[49].f_3 = 0;
	Global_44465[49].f_10 = 1;
	Global_44465[49].f_11 = 0;
	Global_44465[49].f_4 = 0;
	Global_44465[50] = 129;
	Global_44465[50].f_1 = 130;
	Global_44465[50].f_2 = 16;
	Global_44465[50].f_3 = 0;
	Global_44465[50].f_10 = 0;
	Global_44465[50].f_11 = 0;
	Global_44465[50].f_4 = 0;
	Global_44465[51] = 127;
	Global_44465[51].f_1 = 128;
	Global_44465[51].f_2 = 16;
	Global_44465[51].f_3 = 0;
	Global_44465[51].f_10 = 1;
	Global_44465[51].f_11 = 0;
	Global_44465[51].f_4 = 0;
	Global_44465[52] = 125;
	Global_44465[52].f_1 = 126;
	Global_44465[52].f_2 = 16;
	Global_44465[52].f_3 = 0;
	Global_44465[52].f_10 = 1;
	Global_44465[52].f_11 = 0;
	Global_44465[52].f_4 = 0;
	Global_44465[53] = 123;
	Global_44465[53].f_1 = 124;
	Global_44465[53].f_2 = 16;
	Global_44465[53].f_3 = 0;
	Global_44465[53].f_10 = 1;
	Global_44465[53].f_11 = 0;
	Global_44465[53].f_4 = 0;
	Global_44465[54] = 121;
	Global_44465[54].f_1 = 122;
	Global_44465[54].f_2 = 16;
	Global_44465[54].f_3 = 0;
	Global_44465[54].f_10 = 1;
	Global_44465[54].f_11 = 0;
	Global_44465[54].f_4 = 0;
	Global_44465[55] = 133;
	Global_44465[55].f_1 = 134;
	Global_44465[55].f_2 = 12;
	Global_44465[55].f_3 = 0;
	Global_44465[55].f_10 = 0;
	Global_44465[55].f_11 = 0;
	Global_44465[55].f_4 = 0;
	Global_44465[56] = 135;
	Global_44465[56].f_1 = 136;
	Global_44465[56].f_2 = 14;
	Global_44465[56].f_3 = 0;
	Global_44465[56].f_10 = 0;
	Global_44465[56].f_11 = 0;
	Global_44465[56].f_4 = 0;
	Global_44465[57] = 137;
	Global_44465[57].f_1 = 138;
	Global_44465[57].f_2 = 12;
	Global_44465[57].f_3 = 0;
	Global_44465[57].f_10 = 0;
	Global_44465[57].f_11 = 0;
	Global_44465[57].f_4 = 0;
	Global_44465[58] = 133;
	Global_44465[58].f_1 = 139;
	Global_44465[58].f_2 = 12;
	Global_44465[58].f_3 = 1;
	Global_44465[58].f_10 = 0;
	Global_44465[58].f_11 = 0;
	Global_44465[58].f_4 = 0;
	Global_44465[59] = 133;
	Global_44465[59].f_1 = 140;
	Global_44465[59].f_2 = 12;
	Global_44465[59].f_3 = 2;
	Global_44465[59].f_10 = 0;
	Global_44465[59].f_11 = 0;
	Global_44465[59].f_4 = 0;
	Global_44465[60] = 135;
	Global_44465[60].f_1 = 136;
	Global_44465[60].f_2 = 14;
	Global_44465[60].f_3 = 1;
	Global_44465[60].f_10 = 0;
	Global_44465[60].f_11 = 0;
	Global_44465[60].f_4 = 0;
	Global_44465[61] = 135;
	Global_44465[61].f_1 = 136;
	Global_44465[61].f_2 = 14;
	Global_44465[61].f_3 = 2;
	Global_44465[61].f_10 = 0;
	Global_44465[61].f_11 = 0;
	Global_44465[61].f_4 = 0;
	Global_44465[62] = 137;
	Global_44465[62].f_1 = 141;
	Global_44465[62].f_2 = 12;
	Global_44465[62].f_3 = 1;
	Global_44465[62].f_10 = 0;
	Global_44465[62].f_11 = 0;
	Global_44465[62].f_4 = 0;
	Global_44465[63] = 137;
	Global_44465[63].f_1 = 138;
	Global_44465[63].f_2 = 12;
	Global_44465[63].f_3 = 2;
	Global_44465[63].f_10 = 0;
	Global_44465[63].f_11 = 0;
	Global_44465[63].f_4 = 0;
	Global_44465[64] = 148;
	Global_44465[64].f_1 = 149;
	Global_44465[64].f_2 = 7;
	Global_44465[64].f_3 = 0;
	Global_44465[64].f_10 = 0;
	Global_44465[64].f_11 = 0;
	Global_44465[64].f_4 = 0;
	Global_44465[65] = 148;
	Global_44465[65].f_1 = 151;
	Global_44465[65].f_2 = 7;
	Global_44465[65].f_3 = 0;
	Global_44465[65].f_10 = 0;
	Global_44465[65].f_11 = 0;
	Global_44465[65].f_4 = 0;
	Global_44465[66] = 148;
	Global_44465[66].f_1 = 150;
	Global_44465[66].f_2 = 7;
	Global_44465[66].f_3 = 0;
	Global_44465[66].f_10 = 0;
	Global_44465[66].f_11 = 0;
	Global_44465[66].f_4 = 0;
	Global_44465[67] = 155;
	Global_44465[67].f_1 = 156;
	Global_44465[67].f_2 = 63;
	Global_44465[67].f_3 = 2;
	Global_44465[67].f_10 = 0;
	Global_44465[67].f_11 = 0;
	Global_44465[67].f_4 = 0;
	Global_44465[68] = 125;
	Global_44465[68].f_1 = 160;
	Global_44465[68].f_2 = 16;
	Global_44465[68].f_3 = 0;
	Global_44465[68].f_10 = 1;
	Global_44465[68].f_11 = 0;
	Global_44465[68].f_4 = 0;
	Global_44465[69] = 161;
	Global_44465[69].f_1 = 162;
	Global_44465[69].f_2 = 64;
	Global_44465[69].f_3 = 2;
	Global_44465[69].f_10 = 0;
	Global_44465[69].f_11 = 0;
	Global_44465[69].f_4 = 0;
	Global_44465[70] = 161;
	Global_44465[70].f_1 = 162;
	Global_44465[70].f_2 = 64;
	Global_44465[70].f_3 = 1;
	Global_44465[70].f_10 = 0;
	Global_44465[70].f_11 = 0;
	Global_44465[70].f_4 = 0;
	Global_44465[71] = 161;
	Global_44465[71].f_1 = 162;
	Global_44465[71].f_2 = 64;
	Global_44465[71].f_3 = 2;
	Global_44465[71].f_10 = 0;
	Global_44465[71].f_11 = 0;
	Global_44465[71].f_4 = 0;
	Global_44465[72] = 166;
	Global_44465[72].f_1 = 16;
	Global_44465[72].f_2 = 21;
	Global_44465[72].f_3 = 0;
	Global_44465[72].f_10 = 0;
	Global_44465[72].f_11 = 0;
	Global_44465[72].f_4 = 0;
	Global_44465[73] = 166;
	Global_44465[73].f_1 = 16;
	Global_44465[73].f_2 = 21;
	Global_44465[73].f_3 = 1;
	Global_44465[73].f_10 = 0;
	Global_44465[73].f_11 = 0;
	Global_44465[73].f_4 = 0;
	Global_44465[74] = 166;
	Global_44465[74].f_1 = 16;
	Global_44465[74].f_2 = 21;
	Global_44465[74].f_3 = 2;
	Global_44465[74].f_10 = 0;
	Global_44465[74].f_11 = 0;
	Global_44465[74].f_4 = 0;
	Global_44465[75] = 167;
	Global_44465[75].f_1 = 16;
	Global_44465[75].f_2 = 6;
	Global_44465[75].f_3 = 2;
	Global_44465[75].f_10 = 0;
	Global_44465[75].f_11 = 0;
	Global_44465[75].f_4 = 0;
	Global_44465[76] = 168;
	Global_44465[76].f_1 = 16;
	Global_44465[76].f_2 = 6;
	Global_44465[76].f_3 = 2;
	Global_44465[76].f_10 = 0;
	Global_44465[76].f_11 = 0;
	Global_44465[76].f_4 = 0;
	Global_44465[77] = 169;
	Global_44465[77].f_1 = 16;
	Global_44465[77].f_2 = 6;
	Global_44465[77].f_3 = 2;
	Global_44465[77].f_10 = 0;
	Global_44465[77].f_11 = 0;
	Global_44465[77].f_4 = 0;
	Global_44465[78] = 170;
	Global_44465[78].f_1 = 16;
	Global_44465[78].f_2 = 6;
	Global_44465[78].f_3 = 2;
	Global_44465[78].f_10 = 0;
	Global_44465[78].f_11 = 0;
	Global_44465[78].f_4 = 0;
	Global_44465[79] = 171;
	Global_44465[79].f_1 = 16;
	Global_44465[79].f_2 = 6;
	Global_44465[79].f_3 = 2;
	Global_44465[79].f_10 = 0;
	Global_44465[79].f_11 = 0;
	Global_44465[79].f_4 = 0;
	Global_44465[80] = 172;
	Global_44465[80].f_1 = 173;
	Global_44465[80].f_2 = 6;
	Global_44465[80].f_3 = 2;
	Global_44465[80].f_10 = 0;
	Global_44465[80].f_11 = 0;
	Global_44465[80].f_4 = 0;
	Global_44465[81] = 174;
	Global_44465[81].f_1 = 175;
	Global_44465[81].f_2 = 6;
	Global_44465[81].f_3 = 2;
	Global_44465[81].f_10 = 0;
	Global_44465[81].f_11 = 0;
	Global_44465[81].f_4 = 0;
	Global_44465[82] = 176;
	Global_44465[82].f_1 = 177;
	Global_44465[82].f_2 = 6;
	Global_44465[82].f_3 = 2;
	Global_44465[82].f_10 = 0;
	Global_44465[82].f_11 = 0;
	Global_44465[82].f_4 = 0;
	Global_44465[83] = 178;
	Global_44465[83].f_1 = 179;
	Global_44465[83].f_2 = 6;
	Global_44465[83].f_3 = 2;
	Global_44465[83].f_10 = 0;
	Global_44465[83].f_11 = 0;
	Global_44465[83].f_4 = 0;
	Global_44465[84] = 180;
	Global_44465[84].f_1 = 181;
	Global_44465[84].f_2 = 4;
	Global_44465[84].f_3 = 0;
	Global_44465[84].f_10 = 0;
	Global_44465[84].f_11 = 3000;
	Global_44465[84].f_4 = 0;
	Global_44465[85] = 185;
	Global_44465[85].f_1 = 186;
	Global_44465[85].f_2 = 22;
	Global_44465[85].f_3 = 0;
	Global_44465[85].f_10 = 0;
	Global_44465[85].f_11 = 0;
	Global_44465[85].f_4 = 0;
	Global_44465[86] = 193;
	Global_44465[86].f_1 = 194;
	Global_44465[86].f_2 = 24;
	Global_44465[86].f_3 = 0;
	Global_44465[86].f_10 = 1;
	Global_44465[86].f_11 = 0;
	Global_44465[86].f_4 = 1;
	Global_44465[86].f_5[0] = 199;
	Global_44465[86].f_5[0].f_1 = 87;
	Global_44465[86].f_5[0].f_2 = 0;
	Global_44465[86].f_5[0].f_3 = -1;
	Global_44465[87] = 195;
	Global_44465[87].f_1 = 196;
	Global_44465[87].f_2 = 0;
	Global_44465[87].f_3 = 24;
	Global_44465[87].f_10 = 0;
	Global_44465[87].f_11 = 0;
	Global_44465[87].f_4 = 1;
	Global_44465[87].f_5[0] = 199;
	Global_44465[87].f_5[0].f_1 = 88;
	Global_44465[87].f_5[0].f_2 = 0;
	Global_44465[87].f_5[0].f_3 = -1;
	Global_44465[88] = 197;
	Global_44465[88].f_1 = 198;
	Global_44465[88].f_2 = 24;
	Global_44465[88].f_3 = 0;
	Global_44465[88].f_10 = 0;
	Global_44465[88].f_11 = 120000;
	Global_44465[88].f_4 = 0;
	Global_44465[89] = 200;
	Global_44465[89].f_1 = 201;
	Global_44465[89].f_2 = 24;
	Global_44465[89].f_3 = 0;
	Global_44465[89].f_10 = 1;
	Global_44465[89].f_11 = 0;
	Global_44465[89].f_4 = 1;
	Global_44465[89].f_5[0] = 199;
	Global_44465[89].f_5[0].f_1 = 90;
	Global_44465[89].f_5[0].f_2 = 0;
	Global_44465[89].f_5[0].f_3 = -1;
	Global_44465[90] = 202;
	Global_44465[90].f_1 = 203;
	Global_44465[90].f_2 = 0;
	Global_44465[90].f_3 = 24;
	Global_44465[90].f_10 = 0;
	Global_44465[90].f_11 = 0;
	Global_44465[90].f_4 = 1;
	Global_44465[90].f_5[0] = 199;
	Global_44465[90].f_5[0].f_1 = 91;
	Global_44465[90].f_5[0].f_2 = 0;
	Global_44465[90].f_5[0].f_3 = -1;
	Global_44465[91] = 204;
	Global_44465[91].f_1 = 205;
	Global_44465[91].f_2 = 24;
	Global_44465[91].f_3 = 0;
	Global_44465[91].f_10 = 0;
	Global_44465[91].f_11 = 120000;
	Global_44465[91].f_4 = 0;
	Global_44465[92] = 209;
	Global_44465[92].f_1 = 210;
	Global_44465[92].f_2 = 25;
	Global_44465[92].f_3 = 0;
	Global_44465[92].f_10 = 1;
	Global_44465[92].f_11 = 0;
	Global_44465[92].f_4 = 1;
	Global_44465[92].f_5[0] = 199;
	Global_44465[92].f_5[0].f_1 = 93;
	Global_44465[92].f_5[0].f_2 = 0;
	Global_44465[92].f_5[0].f_3 = -1;
	Global_44465[93] = 211;
	Global_44465[93].f_1 = 212;
	Global_44465[93].f_2 = 0;
	Global_44465[93].f_3 = 25;
	Global_44465[93].f_10 = 0;
	Global_44465[93].f_11 = 0;
	Global_44465[93].f_4 = 1;
	Global_44465[93].f_5[0] = 199;
	Global_44465[93].f_5[0].f_1 = 94;
	Global_44465[93].f_5[0].f_2 = 0;
	Global_44465[93].f_5[0].f_3 = -1;
	Global_44465[94] = 213;
	Global_44465[94].f_1 = 214;
	Global_44465[94].f_2 = 25;
	Global_44465[94].f_3 = 0;
	Global_44465[94].f_10 = 1;
	Global_44465[94].f_11 = 60000;
	Global_44465[94].f_4 = 1;
	Global_44465[94].f_5[0] = 199;
	Global_44465[94].f_5[0].f_1 = 95;
	Global_44465[94].f_5[0].f_2 = 0;
	Global_44465[94].f_5[0].f_3 = -1;
	Global_44465[95] = 215;
	Global_44465[95].f_1 = 216;
	Global_44465[95].f_2 = 0;
	Global_44465[95].f_3 = 25;
	Global_44465[95].f_10 = 0;
	Global_44465[95].f_11 = 0;
	Global_44465[95].f_4 = 1;
	Global_44465[95].f_5[0] = 199;
	Global_44465[95].f_5[0].f_1 = 96;
	Global_44465[95].f_5[0].f_2 = 0;
	Global_44465[95].f_5[0].f_3 = -1;
	Global_44465[96] = 217;
	Global_44465[96].f_1 = 218;
	Global_44465[96].f_2 = 25;
	Global_44465[96].f_3 = 0;
	Global_44465[96].f_10 = 0;
	Global_44465[96].f_11 = 60000;
	Global_44465[96].f_4 = 0;
	Global_44465[97] = 222;
	Global_44465[97].f_1 = 223;
	Global_44465[97].f_2 = 26;
	Global_44465[97].f_3 = 0;
	Global_44465[97].f_10 = 1;
	Global_44465[97].f_11 = 0;
	Global_44465[97].f_4 = 1;
	Global_44465[97].f_5[0] = 199;
	Global_44465[97].f_5[0].f_1 = 98;
	Global_44465[97].f_5[0].f_2 = 0;
	Global_44465[97].f_5[0].f_3 = -1;
	Global_44465[98] = 224;
	Global_44465[98].f_1 = 225;
	Global_44465[98].f_2 = 0;
	Global_44465[98].f_3 = 26;
	Global_44465[98].f_10 = 0;
	Global_44465[98].f_11 = 0;
	Global_44465[98].f_4 = 0;
	Global_44465[99] = 229;
	Global_44465[99].f_1 = 230;
	Global_44465[99].f_2 = 27;
	Global_44465[99].f_3 = 0;
	Global_44465[99].f_10 = 1;
	Global_44465[99].f_11 = 0;
	Global_44465[99].f_4 = 1;
	Global_44465[99].f_5[0] = 199;
	Global_44465[99].f_5[0].f_1 = 100;
	Global_44465[99].f_5[0].f_2 = 0;
	Global_44465[99].f_5[0].f_3 = -1;
	Global_44465[100] = 231;
	Global_44465[100].f_1 = 232;
	Global_44465[100].f_2 = 0;
	Global_44465[100].f_3 = 27;
	Global_44465[100].f_10 = 0;
	Global_44465[100].f_11 = 0;
	Global_44465[100].f_4 = 0;
	Global_44465[101] = 236;
	Global_44465[101].f_1 = 237;
	Global_44465[101].f_2 = 28;
	Global_44465[101].f_3 = 0;
	Global_44465[101].f_10 = 0;
	Global_44465[101].f_11 = 0;
	Global_44465[101].f_4 = 0;
	Global_44465[102] = 238;
	Global_44465[102].f_1 = 239;
	Global_44465[102].f_2 = 26;
	Global_44465[102].f_3 = 0;
	Global_44465[102].f_10 = 1;
	Global_44465[102].f_11 = 0;
	Global_44465[102].f_4 = 1;
	Global_44465[102].f_5[0] = 199;
	Global_44465[102].f_5[0].f_1 = 103;
	Global_44465[102].f_5[0].f_2 = 0;
	Global_44465[102].f_5[0].f_3 = -1;
	Global_44465[103] = 240;
	Global_44465[103].f_1 = 241;
	Global_44465[103].f_2 = 0;
	Global_44465[103].f_3 = 26;
	Global_44465[103].f_10 = 0;
	Global_44465[103].f_11 = 0;
	Global_44465[103].f_4 = 0;
	Global_44465[104] = 245;
	Global_44465[104].f_1 = 246;
	Global_44465[104].f_2 = 29;
	Global_44465[104].f_3 = 0;
	Global_44465[104].f_10 = 1;
	Global_44465[104].f_11 = 0;
	Global_44465[104].f_4 = 1;
	Global_44465[104].f_5[0] = 199;
	Global_44465[104].f_5[0].f_1 = 105;
	Global_44465[104].f_5[0].f_2 = 0;
	Global_44465[104].f_5[0].f_3 = -1;
	Global_44465[105] = 247;
	Global_44465[105].f_1 = 248;
	Global_44465[105].f_2 = 0;
	Global_44465[105].f_3 = 29;
	Global_44465[105].f_10 = 0;
	Global_44465[105].f_11 = 0;
	Global_44465[105].f_4 = 0;
	Global_44465[106] = 252;
	Global_44465[106].f_1 = 253;
	Global_44465[106].f_2 = 30;
	Global_44465[106].f_3 = 1;
	Global_44465[106].f_10 = 1;
	Global_44465[106].f_11 = 120000;
	Global_44465[106].f_4 = 1;
	Global_44465[106].f_5[0] = 199;
	Global_44465[106].f_5[0].f_1 = 107;
	Global_44465[106].f_5[0].f_2 = 0;
	Global_44465[106].f_5[0].f_3 = -1;
	Global_44465[107] = 254;
	Global_44465[107].f_1 = 255;
	Global_44465[107].f_2 = 1;
	Global_44465[107].f_3 = 30;
	Global_44465[107].f_10 = 0;
	Global_44465[107].f_11 = 0;
	Global_44465[107].f_4 = 1;
	Global_44465[107].f_5[0] = 199;
	Global_44465[107].f_5[0].f_1 = 108;
	Global_44465[107].f_5[0].f_2 = 0;
	Global_44465[107].f_5[0].f_3 = -1;
	Global_44465[108] = 256;
	Global_44465[108].f_1 = 257;
	Global_44465[108].f_2 = 30;
	Global_44465[108].f_3 = 1;
	Global_44465[108].f_10 = 1;
	Global_44465[108].f_11 = 120000;
	Global_44465[108].f_4 = 1;
	Global_44465[108].f_5[0] = 199;
	Global_44465[108].f_5[0].f_1 = 109;
	Global_44465[108].f_5[0].f_2 = 0;
	Global_44465[108].f_5[0].f_3 = -1;
	Global_44465[109] = 258;
	Global_44465[109].f_1 = 259;
	Global_44465[109].f_2 = 1;
	Global_44465[109].f_3 = 30;
	Global_44465[109].f_10 = 0;
	Global_44465[109].f_11 = 0;
	Global_44465[109].f_4 = 1;
	Global_44465[109].f_5[0] = 199;
	Global_44465[109].f_5[0].f_1 = 110;
	Global_44465[109].f_5[0].f_2 = 0;
	Global_44465[109].f_5[0].f_3 = -1;
	Global_44465[110] = 260;
	Global_44465[110].f_1 = 261;
	Global_44465[110].f_2 = 30;
	Global_44465[110].f_3 = 1;
	Global_44465[110].f_10 = 0;
	Global_44465[110].f_11 = 60000;
	Global_44465[110].f_4 = 0;
	Global_44465[111] = 265;
	Global_44465[111].f_1 = 266;
	Global_44465[111].f_2 = 31;
	Global_44465[111].f_3 = 1;
	Global_44465[111].f_10 = 1;
	Global_44465[111].f_11 = 0;
	Global_44465[111].f_4 = 1;
	Global_44465[111].f_5[0] = 199;
	Global_44465[111].f_5[0].f_1 = 112;
	Global_44465[111].f_5[0].f_2 = 0;
	Global_44465[111].f_5[0].f_3 = -1;
	Global_44465[112] = 267;
	Global_44465[112].f_1 = 268;
	Global_44465[112].f_2 = 1;
	Global_44465[112].f_3 = 31;
	Global_44465[112].f_10 = 0;
	Global_44465[112].f_11 = 0;
	Global_44465[112].f_4 = 0;
	Global_44465[113] = 272;
	Global_44465[113].f_1 = 273;
	Global_44465[113].f_2 = 32;
	Global_44465[113].f_3 = 1;
	Global_44465[113].f_10 = 1;
	Global_44465[113].f_11 = 0;
	Global_44465[113].f_4 = 1;
	Global_44465[113].f_5[0] = 199;
	Global_44465[113].f_5[0].f_1 = 114;
	Global_44465[113].f_5[0].f_2 = 0;
	Global_44465[113].f_5[0].f_3 = -1;
	Global_44465[114] = 274;
	Global_44465[114].f_1 = 275;
	Global_44465[114].f_2 = 1;
	Global_44465[114].f_3 = 32;
	Global_44465[114].f_10 = 0;
	Global_44465[114].f_11 = 0;
	Global_44465[114].f_4 = 1;
	Global_44465[114].f_5[0] = 199;
	Global_44465[114].f_5[0].f_1 = 115;
	Global_44465[114].f_5[0].f_2 = 0;
	Global_44465[114].f_5[0].f_3 = -1;
	Global_44465[115] = 276;
	Global_44465[115].f_1 = 277;
	Global_44465[115].f_2 = 32;
	Global_44465[115].f_3 = 1;
	Global_44465[115].f_10 = 0;
	Global_44465[115].f_11 = 30000;
	Global_44465[115].f_4 = 0;
	Global_44465[116] = 278;
	Global_44465[116].f_1 = 279;
	Global_44465[116].f_2 = 32;
	Global_44465[116].f_3 = 1;
	Global_44465[116].f_10 = 1;
	Global_44465[116].f_11 = 0;
	Global_44465[116].f_4 = 1;
	Global_44465[116].f_5[0] = 282;
	Global_44465[116].f_5[0].f_1 = 117;
	Global_44465[116].f_5[0].f_2 = 0;
	Global_44465[116].f_5[0].f_3 = -1;
	Global_44465[117] = 280;
	Global_44465[117].f_1 = 281;
	Global_44465[117].f_2 = 1;
	Global_44465[117].f_3 = 32;
	Global_44465[117].f_10 = 0;
	Global_44465[117].f_11 = 0;
	Global_44465[117].f_4 = 0;
	Global_44465[118] = 283;
	Global_44465[118].f_1 = 284;
	Global_44465[118].f_2 = 32;
	Global_44465[118].f_3 = 1;
	Global_44465[118].f_10 = 1;
	Global_44465[118].f_11 = 0;
	Global_44465[118].f_4 = 1;
	Global_44465[118].f_5[0] = 199;
	Global_44465[118].f_5[0].f_1 = 119;
	Global_44465[118].f_5[0].f_2 = 0;
	Global_44465[118].f_5[0].f_3 = -1;
	Global_44465[119] = 285;
	Global_44465[119].f_1 = 286;
	Global_44465[119].f_2 = 1;
	Global_44465[119].f_3 = 32;
	Global_44465[119].f_10 = 0;
	Global_44465[119].f_11 = 0;
	Global_44465[119].f_4 = 0;
	Global_44465[120] = 287;
	Global_44465[120].f_1 = 288;
	Global_44465[120].f_2 = 32;
	Global_44465[120].f_3 = 1;
	Global_44465[120].f_10 = 1;
	Global_44465[120].f_11 = 0;
	Global_44465[120].f_4 = 1;
	Global_44465[120].f_5[0] = 199;
	Global_44465[120].f_5[0].f_1 = 121;
	Global_44465[120].f_5[0].f_2 = 0;
	Global_44465[120].f_5[0].f_3 = -1;
	Global_44465[121] = 289;
	Global_44465[121].f_1 = 290;
	Global_44465[121].f_2 = 1;
	Global_44465[121].f_3 = 32;
	Global_44465[121].f_10 = 0;
	Global_44465[121].f_11 = 0;
	Global_44465[121].f_4 = 1;
	Global_44465[121].f_5[0] = 199;
	Global_44465[121].f_5[0].f_1 = 122;
	Global_44465[121].f_5[0].f_2 = 0;
	Global_44465[121].f_5[0].f_3 = -1;
	Global_44465[122] = 291;
	Global_44465[122].f_1 = 292;
	Global_44465[122].f_2 = 32;
	Global_44465[122].f_3 = 1;
	Global_44465[122].f_10 = 1;
	Global_44465[122].f_11 = 30000;
	Global_44465[122].f_4 = 1;
	Global_44465[122].f_5[0] = 199;
	Global_44465[122].f_5[0].f_1 = 123;
	Global_44465[122].f_5[0].f_2 = 0;
	Global_44465[122].f_5[0].f_3 = -1;
	Global_44465[123] = 293;
	Global_44465[123].f_1 = 294;
	Global_44465[123].f_2 = 1;
	Global_44465[123].f_3 = 32;
	Global_44465[123].f_10 = 0;
	Global_44465[123].f_11 = 0;
	Global_44465[123].f_4 = 0;
	Global_44465[124] = 295;
	Global_44465[124].f_1 = 296;
	Global_44465[124].f_2 = 27;
	Global_44465[124].f_3 = 1;
	Global_44465[124].f_10 = 1;
	Global_44465[124].f_11 = 0;
	Global_44465[124].f_4 = 1;
	Global_44465[124].f_5[0] = 199;
	Global_44465[124].f_5[0].f_1 = 125;
	Global_44465[124].f_5[0].f_2 = 0;
	Global_44465[124].f_5[0].f_3 = -1;
	Global_44465[125] = 297;
	Global_44465[125].f_1 = 298;
	Global_44465[125].f_2 = 1;
	Global_44465[125].f_3 = 27;
	Global_44465[125].f_10 = 0;
	Global_44465[125].f_11 = 0;
	Global_44465[125].f_4 = 0;
	Global_44465[126] = 299;
	Global_44465[126].f_1 = 300;
	Global_44465[126].f_2 = 2;
	Global_44465[126].f_3 = 1;
	Global_44465[126].f_10 = 1;
	Global_44465[126].f_11 = 0;
	Global_44465[126].f_4 = 1;
	Global_44465[126].f_5[0] = 199;
	Global_44465[126].f_5[0].f_1 = 127;
	Global_44465[126].f_5[0].f_2 = 0;
	Global_44465[126].f_5[0].f_3 = -1;
	Global_44465[127] = 301;
	Global_44465[127].f_1 = 302;
	Global_44465[127].f_2 = 1;
	Global_44465[127].f_3 = 2;
	Global_44465[127].f_10 = 0;
	Global_44465[127].f_11 = 0;
	Global_44465[127].f_4 = 1;
	Global_44465[127].f_5[0] = 199;
	Global_44465[127].f_5[0].f_1 = 128;
	Global_44465[127].f_5[0].f_2 = 0;
	Global_44465[127].f_5[0].f_3 = -1;
	Global_44465[128] = 303;
	Global_44465[128].f_1 = 304;
	Global_44465[128].f_2 = 2;
	Global_44465[128].f_3 = 1;
	Global_44465[128].f_10 = 1;
	Global_44465[128].f_11 = 60000;
	Global_44465[128].f_4 = 1;
	Global_44465[128].f_5[0] = 199;
	Global_44465[128].f_5[0].f_1 = 129;
	Global_44465[128].f_5[0].f_2 = 0;
	Global_44465[128].f_5[0].f_3 = -1;
	Global_44465[129] = 305;
	Global_44465[129].f_1 = 306;
	Global_44465[129].f_2 = 1;
	Global_44465[129].f_3 = 2;
	Global_44465[129].f_10 = 0;
	Global_44465[129].f_11 = 0;
	Global_44465[129].f_4 = 1;
	Global_44465[129].f_5[0] = 199;
	Global_44465[129].f_5[0].f_1 = 130;
	Global_44465[129].f_5[0].f_2 = 0;
	Global_44465[129].f_5[0].f_3 = -1;
	Global_44465[130] = 307;
	Global_44465[130].f_1 = 308;
	Global_44465[130].f_2 = 2;
	Global_44465[130].f_3 = 1;
	Global_44465[130].f_10 = 0;
	Global_44465[130].f_11 = 30000;
	Global_44465[130].f_4 = 0;
	Global_44465[131] = 309;
	Global_44465[131].f_1 = 310;
	Global_44465[131].f_2 = 0;
	Global_44465[131].f_3 = 1;
	Global_44465[131].f_10 = 1;
	Global_44465[131].f_11 = 0;
	Global_44465[131].f_4 = 1;
	Global_44465[131].f_5[0] = 199;
	Global_44465[131].f_5[0].f_1 = 132;
	Global_44465[131].f_5[0].f_2 = 0;
	Global_44465[131].f_5[0].f_3 = -1;
	Global_44465[132] = 311;
	Global_44465[132].f_1 = 312;
	Global_44465[132].f_2 = 1;
	Global_44465[132].f_3 = 0;
	Global_44465[132].f_10 = 0;
	Global_44465[132].f_11 = 0;
	Global_44465[132].f_4 = 1;
	Global_44465[132].f_5[0] = 199;
	Global_44465[132].f_5[0].f_1 = 133;
	Global_44465[132].f_5[0].f_2 = 0;
	Global_44465[132].f_5[0].f_3 = -1;
	Global_44465[133] = 313;
	Global_44465[133].f_1 = 314;
	Global_44465[133].f_2 = 0;
	Global_44465[133].f_3 = 1;
	Global_44465[133].f_10 = 0;
	Global_44465[133].f_11 = 25000;
	Global_44465[133].f_4 = 0;
	Global_44465[134] = 315;
	Global_44465[134].f_1 = 316;
	Global_44465[134].f_2 = 0;
	Global_44465[134].f_3 = 1;
	Global_44465[134].f_10 = 1;
	Global_44465[134].f_11 = 0;
	Global_44465[134].f_4 = 1;
	Global_44465[134].f_5[0] = 199;
	Global_44465[134].f_5[0].f_1 = 135;
	Global_44465[134].f_5[0].f_2 = 0;
	Global_44465[134].f_5[0].f_3 = -1;
	Global_44465[135] = 317;
	Global_44465[135].f_1 = 318;
	Global_44465[135].f_2 = 1;
	Global_44465[135].f_3 = 0;
	Global_44465[135].f_10 = 0;
	Global_44465[135].f_11 = 0;
	Global_44465[135].f_4 = 0;
	Global_44465[136] = 322;
	Global_44465[136].f_1 = 323;
	Global_44465[136].f_2 = 33;
	Global_44465[136].f_3 = 2;
	Global_44465[136].f_10 = 1;
	Global_44465[136].f_11 = 0;
	Global_44465[136].f_4 = 1;
	Global_44465[136].f_5[0] = 199;
	Global_44465[136].f_5[0].f_1 = 137;
	Global_44465[136].f_5[0].f_2 = 0;
	Global_44465[136].f_5[0].f_3 = -1;
	Global_44465[137] = 324;
	Global_44465[137].f_1 = 325;
	Global_44465[137].f_2 = 2;
	Global_44465[137].f_3 = 33;
	Global_44465[137].f_10 = 0;
	Global_44465[137].f_11 = 0;
	Global_44465[137].f_4 = 0;
	Global_44465[138] = 326;
	Global_44465[138].f_1 = 327;
	Global_44465[138].f_2 = 33;
	Global_44465[138].f_3 = 2;
	Global_44465[138].f_10 = 1;
	Global_44465[138].f_11 = 0;
	Global_44465[138].f_4 = 1;
	Global_44465[138].f_5[0] = 199;
	Global_44465[138].f_5[0].f_1 = 139;
	Global_44465[138].f_5[0].f_2 = 0;
	Global_44465[138].f_5[0].f_3 = -1;
	Global_44465[139] = 328;
	Global_44465[139].f_1 = 329;
	Global_44465[139].f_2 = 2;
	Global_44465[139].f_3 = 33;
	Global_44465[139].f_10 = 0;
	Global_44465[139].f_11 = 0;
	Global_44465[139].f_4 = 1;
	Global_44465[139].f_5[0] = 199;
	Global_44465[139].f_5[0].f_1 = -1;
	Global_44465[139].f_5[0].f_2 = 0;
	Global_44465[139].f_5[0].f_3 = -1;
	Global_44465[140] = 330;
	Global_44465[140].f_1 = 331;
	Global_44465[140].f_2 = 2;
	Global_44465[140].f_3 = 33;
	Global_44465[140].f_10 = 0;
	Global_44465[140].f_11 = 0;
	Global_44465[140].f_4 = 0;
	Global_44465[141] = 332;
	Global_44465[141].f_1 = 333;
	Global_44465[141].f_2 = 29;
	Global_44465[141].f_3 = 2;
	Global_44465[141].f_10 = 0;
	Global_44465[141].f_11 = 0;
	Global_44465[141].f_4 = 1;
	Global_44465[141].f_5[0] = 199;
	Global_44465[141].f_5[0].f_1 = 142;
	Global_44465[141].f_5[0].f_2 = 0;
	Global_44465[141].f_5[0].f_3 = -1;
	Global_44465[142] = 334;
	Global_44465[142].f_1 = 335;
	Global_44465[142].f_2 = 2;
	Global_44465[142].f_3 = 29;
	Global_44465[142].f_10 = 0;
	Global_44465[142].f_11 = 0;
	Global_44465[142].f_4 = 0;
	Global_44465[143] = 336;
	Global_44465[143].f_1 = 337;
	Global_44465[143].f_2 = 3;
	Global_44465[143].f_3 = 2;
	Global_44465[143].f_10 = 0;
	Global_44465[143].f_11 = 0;
	Global_44465[143].f_4 = 1;
	Global_44465[143].f_5[0] = 199;
	Global_44465[143].f_5[0].f_1 = 144;
	Global_44465[143].f_5[0].f_2 = 0;
	Global_44465[143].f_5[0].f_3 = -1;
	Global_44465[144] = 338;
	Global_44465[144].f_1 = 339;
	Global_44465[144].f_2 = 2;
	Global_44465[144].f_3 = 3;
	Global_44465[144].f_10 = 0;
	Global_44465[144].f_11 = 0;
	Global_44465[144].f_4 = 0;
	Global_44465[145] = 343;
	Global_44465[145].f_1 = 344;
	Global_44465[145].f_2 = 34;
	Global_44465[145].f_3 = 2;
	Global_44465[145].f_10 = 0;
	Global_44465[145].f_11 = 0;
	Global_44465[145].f_4 = 1;
	Global_44465[145].f_5[0] = 199;
	Global_44465[145].f_5[0].f_1 = 146;
	Global_44465[145].f_5[0].f_2 = 0;
	Global_44465[145].f_5[0].f_3 = -1;
	Global_44465[146] = 345;
	Global_44465[146].f_1 = 346;
	Global_44465[146].f_2 = 2;
	Global_44465[146].f_3 = 34;
	Global_44465[146].f_10 = 0;
	Global_44465[146].f_11 = 0;
	Global_44465[146].f_4 = 0;
	Global_44465[147] = 319;
	Global_44465[147].f_1 = 347;
	Global_44465[147].f_2 = 26;
	Global_44465[147].f_3 = 2;
	Global_44465[147].f_10 = 0;
	Global_44465[147].f_11 = 0;
	Global_44465[147].f_4 = 0;
	Global_44465[148] = 351;
	Global_44465[148].f_1 = 352;
	Global_44465[148].f_2 = 35;
	Global_44465[148].f_3 = 2;
	Global_44465[148].f_10 = 0;
	Global_44465[148].f_11 = 0;
	Global_44465[148].f_4 = 0;
	Global_44465[149] = 351;
	Global_44465[149].f_1 = 352;
	Global_44465[149].f_2 = 35;
	Global_44465[149].f_3 = 0;
	Global_44465[149].f_10 = 0;
	Global_44465[149].f_11 = 0;
	Global_44465[149].f_4 = 0;
	Global_44465[150] = 351;
	Global_44465[150].f_1 = 352;
	Global_44465[150].f_2 = 35;
	Global_44465[150].f_3 = 1;
	Global_44465[150].f_10 = 0;
	Global_44465[150].f_11 = 0;
	Global_44465[150].f_4 = 0;
	Global_44465[151] = 355;
	Global_44465[151].f_1 = 356;
	Global_44465[151].f_2 = 36;
	Global_44465[151].f_3 = 2;
	Global_44465[151].f_10 = 0;
	Global_44465[151].f_11 = 0;
	Global_44465[151].f_4 = 0;
	Global_44465[152] = 355;
	Global_44465[152].f_1 = 356;
	Global_44465[152].f_2 = 36;
	Global_44465[152].f_3 = 0;
	Global_44465[152].f_10 = 0;
	Global_44465[152].f_11 = 0;
	Global_44465[152].f_4 = 0;
	Global_44465[153] = 355;
	Global_44465[153].f_1 = 356;
	Global_44465[153].f_2 = 36;
	Global_44465[153].f_3 = 1;
	Global_44465[153].f_10 = 0;
	Global_44465[153].f_11 = 0;
	Global_44465[153].f_4 = 0;
	Global_44465[154] = 363;
	Global_44465[154].f_1 = 364;
	Global_44465[154].f_2 = 38;
	Global_44465[154].f_3 = 2;
	Global_44465[154].f_10 = 0;
	Global_44465[154].f_11 = 0;
	Global_44465[154].f_4 = 0;
	Global_44465[155] = 365;
	Global_44465[155].f_1 = 366;
	Global_44465[155].f_2 = 11;
	Global_44465[155].f_3 = 0;
	Global_44465[155].f_10 = 0;
	Global_44465[155].f_11 = 0;
	Global_44465[155].f_4 = 0;
	Global_44465[156] = 365;
	Global_44465[156].f_1 = 366;
	Global_44465[156].f_2 = 11;
	Global_44465[156].f_3 = 1;
	Global_44465[156].f_10 = 0;
	Global_44465[156].f_11 = 0;
	Global_44465[156].f_4 = 0;
	Global_44465[157] = 365;
	Global_44465[157].f_1 = 366;
	Global_44465[157].f_2 = 11;
	Global_44465[157].f_3 = 2;
	Global_44465[157].f_10 = 0;
	Global_44465[157].f_11 = 0;
	Global_44465[157].f_4 = 0;
	Global_44465[158] = 367;
	Global_44465[158].f_1 = 368;
	Global_44465[158].f_2 = 29;
	Global_44465[158].f_3 = 2;
	Global_44465[158].f_10 = 0;
	Global_44465[158].f_11 = 0;
	Global_44465[158].f_4 = 0;
	Global_44465[159] = 372;
	Global_44465[159].f_1 = 373;
	Global_44465[159].f_2 = 39;
	Global_44465[159].f_3 = 0;
	Global_44465[159].f_10 = 0;
	Global_44465[159].f_11 = 0;
	Global_44465[159].f_4 = 0;
	Global_44465[160] = 374;
	Global_44465[160].f_1 = 375;
	Global_44465[160].f_2 = 39;
	Global_44465[160].f_3 = 1;
	Global_44465[160].f_10 = 0;
	Global_44465[160].f_11 = 0;
	Global_44465[160].f_4 = 0;
	Global_44465[161] = 417;
	Global_44465[161].f_1 = 418;
	Global_44465[161].f_2 = 40;
	Global_44465[161].f_3 = 1;
	Global_44465[161].f_10 = 0;
	Global_44465[161].f_11 = 0;
	Global_44465[161].f_4 = 0;
	Global_44465[162] = 419;
	Global_44465[162].f_1 = 420;
	Global_44465[162].f_2 = 43;
	Global_44465[162].f_3 = 0;
	Global_44465[162].f_10 = 0;
	Global_44465[162].f_11 = 0;
	Global_44465[162].f_4 = 0;
	Global_44465[163] = 421;
	Global_44465[163].f_1 = 422;
	Global_44465[163].f_2 = 43;
	Global_44465[163].f_3 = 2;
	Global_44465[163].f_10 = 0;
	Global_44465[163].f_11 = 0;
	Global_44465[163].f_4 = 0;
	Global_44465[164] = 423;
	Global_44465[164].f_1 = 424;
	Global_44465[164].f_2 = 43;
	Global_44465[164].f_3 = 1;
	Global_44465[164].f_10 = 0;
	Global_44465[164].f_11 = 0;
	Global_44465[164].f_4 = 0;
	Global_44465[165] = 425;
	Global_44465[165].f_1 = 426;
	Global_44465[165].f_2 = 44;
	Global_44465[165].f_3 = 1;
	Global_44465[165].f_10 = 0;
	Global_44465[165].f_11 = 0;
	Global_44465[165].f_4 = 0;
	Global_44465[166] = 427;
	Global_44465[166].f_1 = 428;
	Global_44465[166].f_2 = 45;
	Global_44465[166].f_3 = 0;
	Global_44465[166].f_10 = 0;
	Global_44465[166].f_11 = 0;
	Global_44465[166].f_4 = 0;
	Global_44465[167] = 429;
	Global_44465[167].f_1 = 430;
	Global_44465[167].f_2 = 46;
	Global_44465[167].f_3 = 0;
	Global_44465[167].f_10 = 0;
	Global_44465[167].f_11 = 0;
	Global_44465[167].f_4 = 0;
	Global_44465[168] = 431;
	Global_44465[168].f_1 = 432;
	Global_44465[168].f_2 = 49;
	Global_44465[168].f_3 = 0;
	Global_44465[168].f_10 = 0;
	Global_44465[168].f_11 = 0;
	Global_44465[168].f_4 = 0;
	Global_44465[169] = 433;
	Global_44465[169].f_1 = 434;
	Global_44465[169].f_2 = 49;
	Global_44465[169].f_3 = 2;
	Global_44465[169].f_10 = 0;
	Global_44465[169].f_11 = 0;
	Global_44465[169].f_4 = 0;
	Global_44465[170] = 435;
	Global_44465[170].f_1 = 436;
	Global_44465[170].f_2 = 49;
	Global_44465[170].f_3 = 1;
	Global_44465[170].f_10 = 0;
	Global_44465[170].f_11 = 0;
	Global_44465[170].f_4 = 0;
	Global_44465[171] = 437;
	Global_44465[171].f_1 = 438;
	Global_44465[171].f_2 = 50;
	Global_44465[171].f_3 = 1;
	Global_44465[171].f_10 = 0;
	Global_44465[171].f_11 = 0;
	Global_44465[171].f_4 = 0;
	Global_44465[172] = 439;
	Global_44465[172].f_1 = 440;
	Global_44465[172].f_2 = 51;
	Global_44465[172].f_3 = 0;
	Global_44465[172].f_10 = 0;
	Global_44465[172].f_11 = 0;
	Global_44465[172].f_4 = 0;
	Global_44465[173] = 441;
	Global_44465[173].f_1 = 442;
	Global_44465[173].f_2 = 51;
	Global_44465[173].f_3 = 2;
	Global_44465[173].f_10 = 0;
	Global_44465[173].f_11 = 0;
	Global_44465[173].f_4 = 0;
	Global_44465[174] = 443;
	Global_44465[174].f_1 = 444;
	Global_44465[174].f_2 = 51;
	Global_44465[174].f_3 = 1;
	Global_44465[174].f_10 = 0;
	Global_44465[174].f_11 = 0;
	Global_44465[174].f_4 = 0;
	Global_44465[175] = 445;
	Global_44465[175].f_1 = 446;
	Global_44465[175].f_2 = 52;
	Global_44465[175].f_3 = 0;
	Global_44465[175].f_10 = 0;
	Global_44465[175].f_11 = 0;
	Global_44465[175].f_4 = 0;
	Global_44465[176] = 447;
	Global_44465[176].f_1 = 448;
	Global_44465[176].f_2 = 52;
	Global_44465[176].f_3 = 2;
	Global_44465[176].f_10 = 0;
	Global_44465[176].f_11 = 0;
	Global_44465[176].f_4 = 0;
	Global_44465[177] = 449;
	Global_44465[177].f_1 = 450;
	Global_44465[177].f_2 = 52;
	Global_44465[177].f_3 = 1;
	Global_44465[177].f_10 = 0;
	Global_44465[177].f_11 = 0;
	Global_44465[177].f_4 = 0;
	Global_44465[178] = 451;
	Global_44465[178].f_1 = 452;
	Global_44465[178].f_2 = 53;
	Global_44465[178].f_3 = 2;
	Global_44465[178].f_10 = 0;
	Global_44465[178].f_11 = 0;
	Global_44465[178].f_4 = 0;
	Global_44465[179] = 453;
	Global_44465[179].f_1 = 454;
	Global_44465[179].f_2 = 53;
	Global_44465[179].f_3 = 0;
	Global_44465[179].f_10 = 0;
	Global_44465[179].f_11 = 0;
	Global_44465[179].f_4 = 0;
	Global_44465[180] = 455;
	Global_44465[180].f_1 = 456;
	Global_44465[180].f_2 = 53;
	Global_44465[180].f_3 = 1;
	Global_44465[180].f_10 = 0;
	Global_44465[180].f_11 = 0;
	Global_44465[180].f_4 = 0;
	Global_44465[181] = 457;
	Global_44465[181].f_1 = 458;
	Global_44465[181].f_2 = 4;
	Global_44465[181].f_3 = 0;
	Global_44465[181].f_10 = 0;
	Global_44465[181].f_11 = 0;
	Global_44465[181].f_4 = 0;
	Global_44465[182] = 459;
	Global_44465[182].f_1 = 460;
	Global_44465[182].f_2 = 37;
	Global_44465[182].f_3 = 0;
	Global_44465[182].f_10 = 0;
	Global_44465[182].f_11 = 0;
	Global_44465[182].f_4 = 0;
	Global_44465[183] = 461;
	Global_44465[183].f_1 = 462;
	Global_44465[183].f_2 = 37;
	Global_44465[183].f_3 = 2;
	Global_44465[183].f_10 = 0;
	Global_44465[183].f_11 = 0;
	Global_44465[183].f_4 = 0;
	Global_44465[184] = 463;
	Global_44465[184].f_1 = 464;
	Global_44465[184].f_2 = 37;
	Global_44465[184].f_3 = 1;
	Global_44465[184].f_10 = 0;
	Global_44465[184].f_11 = 0;
	Global_44465[184].f_4 = 0;
	Global_44465[185] = 471;
	Global_44465[185].f_1 = 472;
	Global_44465[185].f_2 = 54;
	Global_44465[185].f_3 = 1;
	Global_44465[185].f_10 = 0;
	Global_44465[185].f_11 = 0;
	Global_44465[185].f_4 = 0;
	Global_44465[186] = 473;
	Global_44465[186].f_1 = 474;
	Global_44465[186].f_2 = 54;
	Global_44465[186].f_3 = 0;
	Global_44465[186].f_10 = 0;
	Global_44465[186].f_11 = 0;
	Global_44465[186].f_4 = 0;
	Global_44465[187] = 475;
	Global_44465[187].f_1 = 476;
	Global_44465[187].f_2 = 55;
	Global_44465[187].f_3 = 1;
	Global_44465[187].f_10 = 0;
	Global_44465[187].f_11 = 0;
	Global_44465[187].f_4 = 0;
	Global_44465[188] = 477;
	Global_44465[188].f_1 = 478;
	Global_44465[188].f_2 = 54;
	Global_44465[188].f_3 = 2;
	Global_44465[188].f_10 = 0;
	Global_44465[188].f_11 = 0;
	Global_44465[188].f_4 = 0;
	Global_44465[189] = 479;
	Global_44465[189].f_1 = 480;
	Global_44465[189].f_2 = 55;
	Global_44465[189].f_3 = 0;
	Global_44465[189].f_10 = 0;
	Global_44465[189].f_11 = 0;
	Global_44465[189].f_4 = 0;
	Global_44465[190] = 481;
	Global_44465[190].f_1 = 482;
	Global_44465[190].f_2 = 55;
	Global_44465[190].f_3 = 2;
	Global_44465[190].f_10 = 0;
	Global_44465[190].f_11 = 0;
	Global_44465[190].f_4 = 0;
	Global_44465[191] = 483;
	Global_44465[191].f_1 = 484;
	Global_44465[191].f_2 = 12;
	Global_44465[191].f_3 = 0;
	Global_44465[191].f_10 = 0;
	Global_44465[191].f_11 = 0;
	Global_44465[191].f_4 = 0;
	Global_44465[192] = 485;
	Global_44465[192].f_1 = 486;
	Global_44465[192].f_2 = 12;
	Global_44465[192].f_3 = 1;
	Global_44465[192].f_10 = 0;
	Global_44465[192].f_11 = 0;
	Global_44465[192].f_4 = 0;
	Global_44465[193] = 487;
	Global_44465[193].f_1 = 488;
	Global_44465[193].f_2 = 12;
	Global_44465[193].f_3 = 2;
	Global_44465[193].f_10 = 0;
	Global_44465[193].f_11 = 0;
	Global_44465[193].f_4 = 0;
	Global_44465[194] = 510;
	Global_44465[194].f_1 = 511;
	Global_44465[194].f_2 = 56;
	Global_44465[194].f_3 = 0;
	Global_44465[194].f_10 = 0;
	Global_44465[194].f_11 = 0;
	Global_44465[194].f_4 = 0;
	Global_44465[195] = 512;
	Global_44465[195].f_1 = 513;
	Global_44465[195].f_2 = 56;
	Global_44465[195].f_3 = 0;
	Global_44465[195].f_10 = 0;
	Global_44465[195].f_11 = 0;
	Global_44465[195].f_4 = 0;
	Global_44465[196] = 514;
	Global_44465[196].f_1 = 515;
	Global_44465[196].f_2 = 56;
	Global_44465[196].f_3 = 0;
	Global_44465[196].f_10 = 0;
	Global_44465[196].f_11 = 0;
	Global_44465[196].f_4 = 0;
	Global_44465[197] = 516;
	Global_44465[197].f_1 = 517;
	Global_44465[197].f_2 = 56;
	Global_44465[197].f_3 = 0;
	Global_44465[197].f_10 = 0;
	Global_44465[197].f_11 = 0;
	Global_44465[197].f_4 = 0;
	Global_44465[198] = 518;
	Global_44465[198].f_1 = 519;
	Global_44465[198].f_2 = 56;
	Global_44465[198].f_3 = 0;
	Global_44465[198].f_10 = 0;
	Global_44465[198].f_11 = 0;
	Global_44465[198].f_4 = 0;
	Global_44465[199] = 520;
	Global_44465[199].f_1 = 521;
	Global_44465[199].f_2 = 57;
	Global_44465[199].f_3 = 0;
	Global_44465[199].f_10 = 1;
	Global_44465[199].f_11 = 60000;
	Global_44465[199].f_4 = 1;
	Global_44465[199].f_5[0] = 536;
	Global_44465[199].f_5[0].f_1 = 200;
	Global_44465[199].f_5[0].f_2 = 0;
	Global_44465[199].f_5[0].f_3 = -1;
	Global_44465[200] = 522;
	Global_44465[200].f_1 = 523;
	Global_44465[200].f_2 = 0;
	Global_44465[200].f_3 = 57;
	Global_44465[200].f_10 = 0;
	Global_44465[200].f_11 = 0;
	Global_44465[200].f_4 = 1;
	Global_44465[200].f_5[0] = 537;
	Global_44465[200].f_5[0].f_1 = 201;
	Global_44465[200].f_5[0].f_2 = 0;
	Global_44465[200].f_5[0].f_3 = -1;
	Global_44465[201] = 524;
	Global_44465[201].f_1 = 525;
	Global_44465[201].f_2 = 57;
	Global_44465[201].f_3 = 0;
	Global_44465[201].f_10 = 1;
	Global_44465[201].f_11 = 60000;
	Global_44465[201].f_4 = 1;
	Global_44465[201].f_5[0] = 538;
	Global_44465[201].f_5[0].f_1 = 202;
	Global_44465[201].f_5[0].f_2 = 0;
	Global_44465[201].f_5[0].f_3 = -1;
	Global_44465[202] = 526;
	Global_44465[202].f_1 = 527;
	Global_44465[202].f_2 = 0;
	Global_44465[202].f_3 = 57;
	Global_44465[202].f_10 = 0;
	Global_44465[202].f_11 = 0;
	Global_44465[202].f_4 = 1;
	Global_44465[202].f_5[0] = 539;
	Global_44465[202].f_5[0].f_1 = 203;
	Global_44465[202].f_5[0].f_2 = 0;
	Global_44465[202].f_5[0].f_3 = -1;
	Global_44465[203] = 528;
	Global_44465[203].f_1 = 529;
	Global_44465[203].f_2 = 57;
	Global_44465[203].f_3 = 0;
	Global_44465[203].f_10 = 1;
	Global_44465[203].f_11 = 60000;
	Global_44465[203].f_4 = 1;
	Global_44465[203].f_5[0] = 540;
	Global_44465[203].f_5[0].f_1 = 204;
	Global_44465[203].f_5[0].f_2 = 0;
	Global_44465[203].f_5[0].f_3 = -1;
	Global_44465[204] = 530;
	Global_44465[204].f_1 = 531;
	Global_44465[204].f_2 = 0;
	Global_44465[204].f_3 = 57;
	Global_44465[204].f_10 = 0;
	Global_44465[204].f_11 = 0;
	Global_44465[204].f_4 = 1;
	Global_44465[204].f_5[0] = 541;
	Global_44465[204].f_5[0].f_1 = 205;
	Global_44465[204].f_5[0].f_2 = 0;
	Global_44465[204].f_5[0].f_3 = -1;
	Global_44465[205] = 532;
	Global_44465[205].f_1 = 533;
	Global_44465[205].f_2 = 57;
	Global_44465[205].f_3 = 0;
	Global_44465[205].f_10 = 1;
	Global_44465[205].f_11 = 60000;
	Global_44465[205].f_4 = 1;
	Global_44465[205].f_5[0] = 542;
	Global_44465[205].f_5[0].f_1 = 206;
	Global_44465[205].f_5[0].f_2 = 0;
	Global_44465[205].f_5[0].f_3 = -1;
	Global_44465[206] = 534;
	Global_44465[206].f_1 = 535;
	Global_44465[206].f_2 = 0;
	Global_44465[206].f_3 = 57;
	Global_44465[206].f_10 = 0;
	Global_44465[206].f_11 = 0;
	Global_44465[206].f_4 = 0;
	Global_44465[207] = 543;
	Global_44465[207].f_1 = 544;
	Global_44465[207].f_2 = 58;
	Global_44465[207].f_3 = 0;
	Global_44465[207].f_10 = 1;
	Global_44465[207].f_11 = 60000;
	Global_44465[207].f_4 = 1;
	Global_44465[207].f_5[0] = 557;
	Global_44465[207].f_5[0].f_1 = 208;
	Global_44465[207].f_5[0].f_2 = 0;
	Global_44465[207].f_5[0].f_3 = -1;
	Global_44465[208] = 545;
	Global_44465[208].f_1 = 546;
	Global_44465[208].f_2 = 0;
	Global_44465[208].f_3 = 58;
	Global_44465[208].f_10 = 0;
	Global_44465[208].f_11 = 0;
	Global_44465[208].f_4 = 1;
	Global_44465[208].f_5[0] = 558;
	Global_44465[208].f_5[0].f_1 = 209;
	Global_44465[208].f_5[0].f_2 = 0;
	Global_44465[208].f_5[0].f_3 = -1;
	Global_44465[209] = 547;
	Global_44465[209].f_1 = 548;
	Global_44465[209].f_2 = 58;
	Global_44465[209].f_3 = 0;
	Global_44465[209].f_10 = 1;
	Global_44465[209].f_11 = 60000;
	Global_44465[209].f_4 = 1;
	Global_44465[209].f_5[0] = 559;
	Global_44465[209].f_5[0].f_1 = 210;
	Global_44465[209].f_5[0].f_2 = 0;
	Global_44465[209].f_5[0].f_3 = -1;
	Global_44465[210] = 549;
	Global_44465[210].f_1 = 550;
	Global_44465[210].f_2 = 0;
	Global_44465[210].f_3 = 58;
	Global_44465[210].f_10 = 0;
	Global_44465[210].f_11 = 0;
	Global_44465[210].f_4 = 1;
	Global_44465[210].f_5[0] = 560;
	Global_44465[210].f_5[0].f_1 = 211;
	Global_44465[210].f_5[0].f_2 = 0;
	Global_44465[210].f_5[0].f_3 = -1;
	Global_44465[211] = 551;
	Global_44465[211].f_1 = 552;
	Global_44465[211].f_2 = 58;
	Global_44465[211].f_3 = 0;
	Global_44465[211].f_10 = 1;
	Global_44465[211].f_11 = 60000;
	Global_44465[211].f_4 = 1;
	Global_44465[211].f_5[0] = 561;
	Global_44465[211].f_5[0].f_1 = 212;
	Global_44465[211].f_5[0].f_2 = 0;
	Global_44465[211].f_5[0].f_3 = -1;
	Global_44465[212] = 553;
	Global_44465[212].f_1 = 554;
	Global_44465[212].f_2 = 0;
	Global_44465[212].f_3 = 58;
	Global_44465[212].f_10 = 0;
	Global_44465[212].f_11 = 0;
	Global_44465[212].f_4 = 1;
	Global_44465[212].f_5[0] = 562;
	Global_44465[212].f_5[0].f_1 = -1;
	Global_44465[212].f_5[0].f_2 = 0;
	Global_44465[212].f_5[0].f_3 = -1;
	Global_44465[213] = 555;
	Global_44465[213].f_1 = 556;
	Global_44465[213].f_2 = 58;
	Global_44465[213].f_3 = 0;
	Global_44465[213].f_10 = 1;
	Global_44465[213].f_11 = 60000;
	Global_44465[213].f_4 = 0;
	Global_44465[214] = 563;
	Global_44465[214].f_1 = 564;
	Global_44465[214].f_2 = 59;
	Global_44465[214].f_3 = 0;
	Global_44465[214].f_10 = 1;
	Global_44465[214].f_11 = 60000;
	Global_44465[214].f_4 = 1;
	Global_44465[214].f_5[0] = 579;
	Global_44465[214].f_5[0].f_1 = 215;
	Global_44465[214].f_5[0].f_2 = 0;
	Global_44465[214].f_5[0].f_3 = -1;
	Global_44465[215] = 565;
	Global_44465[215].f_1 = 566;
	Global_44465[215].f_2 = 0;
	Global_44465[215].f_3 = 59;
	Global_44465[215].f_10 = 0;
	Global_44465[215].f_11 = 0;
	Global_44465[215].f_4 = 1;
	Global_44465[215].f_5[0] = 580;
	Global_44465[215].f_5[0].f_1 = 216;
	Global_44465[215].f_5[0].f_2 = 0;
	Global_44465[215].f_5[0].f_3 = -1;
	Global_44465[216] = 567;
	Global_44465[216].f_1 = 568;
	Global_44465[216].f_2 = 59;
	Global_44465[216].f_3 = 0;
	Global_44465[216].f_10 = 1;
	Global_44465[216].f_11 = 60000;
	Global_44465[216].f_4 = 1;
	Global_44465[216].f_5[0] = 581;
	Global_44465[216].f_5[0].f_1 = 217;
	Global_44465[216].f_5[0].f_2 = 0;
	Global_44465[216].f_5[0].f_3 = -1;
	Global_44465[217] = 569;
	Global_44465[217].f_1 = 570;
	Global_44465[217].f_2 = 0;
	Global_44465[217].f_3 = 59;
	Global_44465[217].f_10 = 0;
	Global_44465[217].f_11 = 0;
	Global_44465[217].f_4 = 1;
	Global_44465[217].f_5[0] = 582;
	Global_44465[217].f_5[0].f_1 = 218;
	Global_44465[217].f_5[0].f_2 = 0;
	Global_44465[217].f_5[0].f_3 = -1;
	Global_44465[218] = 571;
	Global_44465[218].f_1 = 572;
	Global_44465[218].f_2 = 59;
	Global_44465[218].f_3 = 0;
	Global_44465[218].f_10 = 1;
	Global_44465[218].f_11 = 60000;
	Global_44465[218].f_4 = 1;
	Global_44465[218].f_5[0] = 583;
	Global_44465[218].f_5[0].f_1 = 219;
	Global_44465[218].f_5[0].f_2 = 0;
	Global_44465[218].f_5[0].f_3 = -1;
	Global_44465[219] = 573;
	Global_44465[219].f_1 = 574;
	Global_44465[219].f_2 = 0;
	Global_44465[219].f_3 = 59;
	Global_44465[219].f_10 = 0;
	Global_44465[219].f_11 = 0;
	Global_44465[219].f_4 = 1;
	Global_44465[219].f_5[0] = 584;
	Global_44465[219].f_5[0].f_1 = 220;
	Global_44465[219].f_5[0].f_2 = 0;
	Global_44465[219].f_5[0].f_3 = -1;
	Global_44465[220] = 575;
	Global_44465[220].f_1 = 576;
	Global_44465[220].f_2 = 59;
	Global_44465[220].f_3 = 0;
	Global_44465[220].f_10 = 1;
	Global_44465[220].f_11 = 60000;
	Global_44465[220].f_4 = 1;
	Global_44465[220].f_5[0] = 585;
	Global_44465[220].f_5[0].f_1 = 221;
	Global_44465[220].f_5[0].f_2 = 0;
	Global_44465[220].f_5[0].f_3 = -1;
	Global_44465[221] = 577;
	Global_44465[221].f_1 = 578;
	Global_44465[221].f_2 = 0;
	Global_44465[221].f_3 = 59;
	Global_44465[221].f_10 = 0;
	Global_44465[221].f_11 = 0;
	Global_44465[221].f_4 = 0;
	Global_44465[222] = 586;
	Global_44465[222].f_1 = 587;
	Global_44465[222].f_2 = 60;
	Global_44465[222].f_3 = 2;
	Global_44465[222].f_10 = 1;
	Global_44465[222].f_11 = 60000;
	Global_44465[222].f_4 = 1;
	Global_44465[222].f_5[0] = 600;
	Global_44465[222].f_5[0].f_1 = 223;
	Global_44465[222].f_5[0].f_2 = 0;
	Global_44465[222].f_5[0].f_3 = -1;
	Global_44465[223] = 588;
	Global_44465[223].f_1 = 589;
	Global_44465[223].f_2 = 2;
	Global_44465[223].f_3 = 60;
	Global_44465[223].f_10 = 0;
	Global_44465[223].f_11 = 0;
	Global_44465[223].f_4 = 1;
	Global_44465[223].f_5[0] = 601;
	Global_44465[223].f_5[0].f_1 = 224;
	Global_44465[223].f_5[0].f_2 = 0;
	Global_44465[223].f_5[0].f_3 = -1;
	Global_44465[224] = 590;
	Global_44465[224].f_1 = 591;
	Global_44465[224].f_2 = 60;
	Global_44465[224].f_3 = 2;
	Global_44465[224].f_10 = 1;
	Global_44465[224].f_11 = 60000;
	Global_44465[224].f_4 = 1;
	Global_44465[224].f_5[0] = 602;
	Global_44465[224].f_5[0].f_1 = 225;
	Global_44465[224].f_5[0].f_2 = 0;
	Global_44465[224].f_5[0].f_3 = -1;
	Global_44465[225] = 592;
	Global_44465[225].f_1 = 593;
	Global_44465[225].f_2 = 2;
	Global_44465[225].f_3 = 60;
	Global_44465[225].f_10 = 0;
	Global_44465[225].f_11 = 0;
	Global_44465[225].f_4 = 1;
	Global_44465[225].f_5[0] = 603;
	Global_44465[225].f_5[0].f_1 = 226;
	Global_44465[225].f_5[0].f_2 = 0;
	Global_44465[225].f_5[0].f_3 = -1;
	Global_44465[226] = 594;
	Global_44465[226].f_1 = 595;
	Global_44465[226].f_2 = 60;
	Global_44465[226].f_3 = 2;
	Global_44465[226].f_10 = 1;
	Global_44465[226].f_11 = 60000;
	Global_44465[226].f_4 = 1;
	Global_44465[226].f_5[0] = 604;
	Global_44465[226].f_5[0].f_1 = 227;
	Global_44465[226].f_5[0].f_2 = 0;
	Global_44465[226].f_5[0].f_3 = -1;
	Global_44465[227] = 596;
	Global_44465[227].f_1 = 597;
	Global_44465[227].f_2 = 2;
	Global_44465[227].f_3 = 60;
	Global_44465[227].f_10 = 1;
	Global_44465[227].f_11 = 60000;
	Global_44465[227].f_4 = 1;
	Global_44465[227].f_5[0] = 605;
	Global_44465[227].f_5[0].f_1 = 228;
	Global_44465[227].f_5[0].f_2 = 0;
	Global_44465[227].f_5[0].f_3 = -1;
	Global_44465[228] = 598;
	Global_44465[228].f_1 = 599;
	Global_44465[228].f_2 = 2;
	Global_44465[228].f_3 = 60;
	Global_44465[228].f_10 = 0;
	Global_44465[228].f_11 = 0;
	Global_44465[228].f_4 = 0;
	Global_44465[229] = 606;
	Global_44465[229].f_1 = 607;
	Global_44465[229].f_2 = 61;
	Global_44465[229].f_3 = 2;
	Global_44465[229].f_10 = 1;
	Global_44465[229].f_11 = 60000;
	Global_44465[229].f_4 = 1;
	Global_44465[229].f_5[0] = 610;
	Global_44465[229].f_5[0].f_1 = 230;
	Global_44465[229].f_5[0].f_2 = 0;
	Global_44465[229].f_5[0].f_3 = -1;
	Global_44465[230] = 608;
	Global_44465[230].f_1 = 609;
	Global_44465[230].f_2 = 2;
	Global_44465[230].f_3 = 61;
	Global_44465[230].f_10 = 0;
	Global_44465[230].f_11 = 0;
	Global_44465[230].f_4 = 1;
	Global_44465[230].f_5[0] = 617;
	Global_44465[230].f_5[0].f_1 = 231;
	Global_44465[230].f_5[0].f_2 = 0;
	Global_44465[230].f_5[0].f_3 = -1;
	Global_44465[231] = 611;
	Global_44465[231].f_1 = 612;
	Global_44465[231].f_2 = 61;
	Global_44465[231].f_3 = 2;
	Global_44465[231].f_10 = 1;
	Global_44465[231].f_11 = 60000;
	Global_44465[231].f_4 = 1;
	Global_44465[231].f_5[0] = 618;
	Global_44465[231].f_5[0].f_1 = 232;
	Global_44465[231].f_5[0].f_2 = 0;
	Global_44465[231].f_5[0].f_3 = -1;
	Global_44465[232] = 613;
	Global_44465[232].f_1 = 614;
	Global_44465[232].f_2 = 2;
	Global_44465[232].f_3 = 61;
	Global_44465[232].f_10 = 0;
	Global_44465[232].f_11 = 0;
	Global_44465[232].f_4 = 1;
	Global_44465[232].f_5[0] = 619;
	Global_44465[232].f_5[0].f_1 = 233;
	Global_44465[232].f_5[0].f_2 = 0;
	Global_44465[232].f_5[0].f_3 = -1;
	Global_44465[233] = 615;
	Global_44465[233].f_1 = 616;
	Global_44465[233].f_2 = 61;
	Global_44465[233].f_3 = 2;
	Global_44465[233].f_10 = 1;
	Global_44465[233].f_11 = 60000;
	Global_44465[233].f_4 = 1;
	Global_44465[233].f_5[0] = 622;
	Global_44465[233].f_5[0].f_1 = 234;
	Global_44465[233].f_5[0].f_2 = 0;
	Global_44465[233].f_5[0].f_3 = -1;
	Global_44465[234] = 620;
	Global_44465[234].f_1 = 621;
	Global_44465[234].f_2 = 2;
	Global_44465[234].f_3 = 61;
	Global_44465[234].f_10 = 0;
	Global_44465[234].f_11 = 0;
	Global_44465[234].f_4 = 0;
	Global_44465[235] = 623;
	Global_44465[235].f_1 = 624;
	Global_44465[235].f_2 = 62;
	Global_44465[235].f_3 = 2;
	Global_44465[235].f_10 = 1;
	Global_44465[235].f_11 = 60000;
	Global_44465[235].f_4 = 1;
	Global_44465[235].f_5[0] = 635;
	Global_44465[235].f_5[0].f_1 = 236;
	Global_44465[235].f_5[0].f_2 = 0;
	Global_44465[235].f_5[0].f_3 = -1;
	Global_44465[236] = 625;
	Global_44465[236].f_1 = 626;
	Global_44465[236].f_2 = 2;
	Global_44465[236].f_3 = 62;
	Global_44465[236].f_10 = 0;
	Global_44465[236].f_11 = 0;
	Global_44465[236].f_4 = 1;
	Global_44465[236].f_5[0] = 636;
	Global_44465[236].f_5[0].f_1 = 237;
	Global_44465[236].f_5[0].f_2 = 0;
	Global_44465[236].f_5[0].f_3 = -1;
	Global_44465[237] = 627;
	Global_44465[237].f_1 = 628;
	Global_44465[237].f_2 = 62;
	Global_44465[237].f_3 = 2;
	Global_44465[237].f_10 = 1;
	Global_44465[237].f_11 = 60000;
	Global_44465[237].f_4 = 1;
	Global_44465[237].f_5[0] = 637;
	Global_44465[237].f_5[0].f_1 = 238;
	Global_44465[237].f_5[0].f_2 = 0;
	Global_44465[237].f_5[0].f_3 = -1;
	Global_44465[238] = 629;
	Global_44465[238].f_1 = 630;
	Global_44465[238].f_2 = 2;
	Global_44465[238].f_3 = 62;
	Global_44465[238].f_10 = 0;
	Global_44465[238].f_11 = 0;
	Global_44465[238].f_4 = 1;
	Global_44465[238].f_5[0] = 638;
	Global_44465[238].f_5[0].f_1 = 239;
	Global_44465[238].f_5[0].f_2 = 0;
	Global_44465[238].f_5[0].f_3 = -1;
	Global_44465[239] = 631;
	Global_44465[239].f_1 = 632;
	Global_44465[239].f_2 = 62;
	Global_44465[239].f_3 = 2;
	Global_44465[239].f_10 = 1;
	Global_44465[239].f_11 = 60000;
	Global_44465[239].f_4 = 1;
	Global_44465[239].f_5[0] = 639;
	Global_44465[239].f_5[0].f_1 = 240;
	Global_44465[239].f_5[0].f_2 = 0;
	Global_44465[239].f_5[0].f_3 = -1;
	Global_44465[240] = 633;
	Global_44465[240].f_1 = 634;
	Global_44465[240].f_2 = 2;
	Global_44465[240].f_3 = 62;
	Global_44465[240].f_10 = 0;
	Global_44465[240].f_11 = 0;
	Global_44465[240].f_4 = 0;
	Global_44465[241] = 646;
	Global_44465[241].f_1 = 647;
	Global_44465[241].f_2 = 36;
	Global_44465[241].f_3 = 2;
	Global_44465[241].f_10 = 0;
	Global_44465[241].f_11 = 0;
	Global_44465[241].f_4 = 0;
	Global_44465[242] = 648;
	Global_44465[242].f_1 = 649;
	Global_44465[242].f_2 = 36;
	Global_44465[242].f_3 = 0;
	Global_44465[242].f_10 = 0;
	Global_44465[242].f_11 = 0;
	Global_44465[242].f_4 = 0;
	Global_44465[243] = 650;
	Global_44465[243].f_1 = 651;
	Global_44465[243].f_2 = 36;
	Global_44465[243].f_3 = 1;
	Global_44465[243].f_10 = 0;
	Global_44465[243].f_11 = 0;
	Global_44465[243].f_4 = 0;
	Global_44465[244] = 655;
	Global_44465[244].f_1 = 656;
	Global_44465[244].f_2 = 65;
	Global_44465[244].f_3 = 1;
	Global_44465[244].f_10 = 0;
	Global_44465[244].f_11 = 0;
	Global_44465[244].f_4 = 0;
	Global_44465[245] = 657;
	Global_44465[245].f_1 = 658;
	Global_44465[245].f_2 = 65;
	Global_44465[245].f_3 = 1;
	Global_44465[245].f_10 = 0;
	Global_44465[245].f_11 = 0;
	Global_44465[245].f_4 = 0;
	Global_44465[246] = 659;
	Global_44465[246].f_1 = 660;
	Global_44465[246].f_2 = 65;
	Global_44465[246].f_3 = 1;
	Global_44465[246].f_10 = 0;
	Global_44465[246].f_11 = 0;
	Global_44465[246].f_4 = 0;
	Global_44465[247] = 661;
	Global_44465[247].f_1 = 662;
	Global_44465[247].f_2 = 65;
	Global_44465[247].f_3 = 1;
	Global_44465[247].f_10 = 0;
	Global_44465[247].f_11 = 0;
	Global_44465[247].f_4 = 0;
	Global_44465[248] = 663;
	Global_44465[248].f_1 = 664;
	Global_44465[248].f_2 = 33;
	Global_44465[248].f_3 = 2;
	Global_44465[248].f_10 = 0;
	Global_44465[248].f_11 = 40000;
	Global_44465[248].f_4 = 0;
	Global_44465[249] = 665;
	Global_44465[249].f_1 = 666;
	Global_44465[249].f_2 = 19;
	Global_44465[249].f_3 = 1;
	Global_44465[249].f_10 = 1;
	Global_44465[249].f_11 = 0;
	Global_44465[249].f_4 = 0;
	Global_44465[250] = 667;
	Global_44465[250].f_1 = 668;
	Global_44465[250].f_2 = 19;
	Global_44465[250].f_3 = 1;
	Global_44465[250].f_10 = 1;
	Global_44465[250].f_11 = 0;
	Global_44465[250].f_4 = 0;
	Global_44465[251] = 669;
	Global_44465[251].f_1 = 670;
	Global_44465[251].f_2 = 19;
	Global_44465[251].f_3 = 1;
	Global_44465[251].f_10 = 1;
	Global_44465[251].f_11 = 0;
	Global_44465[251].f_4 = 0;
	Global_44465[252] = 671;
	Global_44465[252].f_1 = 672;
	Global_44465[252].f_2 = 19;
	Global_44465[252].f_3 = 1;
	Global_44465[252].f_10 = 1;
	Global_44465[252].f_11 = 0;
	Global_44465[252].f_4 = 0;
	Global_44465[253] = 673;
	Global_44465[253].f_1 = 674;
	Global_44465[253].f_2 = 19;
	Global_44465[253].f_3 = 1;
	Global_44465[253].f_10 = 1;
	Global_44465[253].f_11 = 0;
	Global_44465[253].f_4 = 0;
	Global_44465[254] = 675;
	Global_44465[254].f_1 = 676;
	Global_44465[254].f_2 = 19;
	Global_44465[254].f_3 = 1;
	Global_44465[254].f_10 = 1;
	Global_44465[254].f_11 = 0;
	Global_44465[254].f_4 = 0;
	Global_44465[255] = 679;
	Global_44465[255].f_1 = 680;
	Global_44465[255].f_2 = 19;
	Global_44465[255].f_3 = 1;
	Global_44465[255].f_10 = 1;
	Global_44465[255].f_11 = 0;
	Global_44465[255].f_4 = 0;
	Global_44465[256] = 677;
	Global_44465[256].f_1 = 678;
	Global_44465[256].f_2 = 19;
	Global_44465[256].f_3 = 1;
	Global_44465[256].f_10 = 1;
	Global_44465[256].f_11 = 0;
	Global_44465[256].f_4 = 0;
	Global_44465[257] = 681;
	Global_44465[257].f_1 = 682;
	Global_44465[257].f_2 = 19;
	Global_44465[257].f_3 = 1;
	Global_44465[257].f_10 = 1;
	Global_44465[257].f_11 = 0;
	Global_44465[257].f_4 = 0;
	Global_44465[258] = 683;
	Global_44465[258].f_1 = 684;
	Global_44465[258].f_2 = 19;
	Global_44465[258].f_3 = 1;
	Global_44465[258].f_10 = 1;
	Global_44465[258].f_11 = 0;
	Global_44465[258].f_4 = 0;
	Global_44465[259] = 685;
	Global_44465[259].f_1 = 686;
	Global_44465[259].f_2 = 19;
	Global_44465[259].f_3 = 1;
	Global_44465[259].f_10 = 1;
	Global_44465[259].f_11 = 0;
	Global_44465[259].f_4 = 0;
	Global_44465[260] = 687;
	Global_44465[260].f_1 = 688;
	Global_44465[260].f_2 = 19;
	Global_44465[260].f_3 = 1;
	Global_44465[260].f_10 = 1;
	Global_44465[260].f_11 = 0;
	Global_44465[260].f_4 = 0;
	Global_44465[261] = 691;
	Global_44465[261].f_1 = 692;
	Global_44465[261].f_2 = 19;
	Global_44465[261].f_3 = 1;
	Global_44465[261].f_10 = 1;
	Global_44465[261].f_11 = 0;
	Global_44465[261].f_4 = 0;
	Global_44465[262] = 689;
	Global_44465[262].f_1 = 690;
	Global_44465[262].f_2 = 19;
	Global_44465[262].f_3 = 1;
	Global_44465[262].f_10 = 1;
	Global_44465[262].f_11 = 0;
	Global_44465[262].f_4 = 0;
	Global_44465[263] = 693;
	Global_44465[263].f_1 = 694;
	Global_44465[263].f_2 = 19;
	Global_44465[263].f_3 = 1;
	Global_44465[263].f_10 = 1;
	Global_44465[263].f_11 = 0;
	Global_44465[263].f_4 = 0;
	Global_44465[264] = 695;
	Global_44465[264].f_1 = 696;
	Global_44465[264].f_2 = 19;
	Global_44465[264].f_3 = 1;
	Global_44465[264].f_10 = 1;
	Global_44465[264].f_11 = 0;
	Global_44465[264].f_4 = 0;
	Global_44465[265] = 697;
	Global_44465[265].f_1 = 698;
	Global_44465[265].f_2 = 19;
	Global_44465[265].f_3 = 1;
	Global_44465[265].f_10 = 1;
	Global_44465[265].f_11 = 0;
	Global_44465[265].f_4 = 0;
	Global_44465[266] = 699;
	Global_44465[266].f_1 = 700;
	Global_44465[266].f_2 = 19;
	Global_44465[266].f_3 = 1;
	Global_44465[266].f_10 = 1;
	Global_44465[266].f_11 = 0;
	Global_44465[266].f_4 = 0;
	Global_44465[267] = 701;
	Global_44465[267].f_1 = 702;
	Global_44465[267].f_2 = 19;
	Global_44465[267].f_3 = 1;
	Global_44465[267].f_10 = 1;
	Global_44465[267].f_11 = 0;
	Global_44465[267].f_4 = 0;
	Global_44465[268] = 703;
	Global_44465[268].f_1 = 704;
	Global_44465[268].f_2 = 19;
	Global_44465[268].f_3 = 1;
	Global_44465[268].f_10 = 1;
	Global_44465[268].f_11 = 0;
	Global_44465[268].f_4 = 0;
	Global_44465[269] = 705;
	Global_44465[269].f_1 = 706;
	Global_44465[269].f_2 = 19;
	Global_44465[269].f_3 = 1;
	Global_44465[269].f_10 = 1;
	Global_44465[269].f_11 = 0;
	Global_44465[269].f_4 = 0;
	Global_44465[270] = 707;
	Global_44465[270].f_1 = 708;
	Global_44465[270].f_2 = 16;
	Global_44465[270].f_3 = 0;
	Global_44465[270].f_10 = 1;
	Global_44465[270].f_11 = 0;
	Global_44465[270].f_4 = 0;
	Global_44465[271] = 709;
	Global_44465[271].f_1 = 710;
	Global_44465[271].f_2 = 16;
	Global_44465[271].f_3 = 0;
	Global_44465[271].f_10 = 1;
	Global_44465[271].f_11 = 0;
	Global_44465[271].f_4 = 0;
	Global_44465[272] = 711;
	Global_44465[272].f_1 = 712;
	Global_44465[272].f_2 = 16;
	Global_44465[272].f_3 = 0;
	Global_44465[272].f_10 = 1;
	Global_44465[272].f_11 = 0;
	Global_44465[272].f_4 = 0;
	Global_44465[273] = 713;
	Global_44465[273].f_1 = 714;
	Global_44465[273].f_2 = 16;
	Global_44465[273].f_3 = 0;
	Global_44465[273].f_10 = 1;
	Global_44465[273].f_11 = 0;
	Global_44465[273].f_4 = 0;
	Global_44465[274] = 715;
	Global_44465[274].f_1 = 716;
	Global_44465[274].f_2 = 16;
	Global_44465[274].f_3 = 0;
	Global_44465[274].f_10 = 1;
	Global_44465[274].f_11 = 0;
	Global_44465[274].f_4 = 0;
	Global_44465[275] = 717;
	Global_44465[275].f_1 = 718;
	Global_44465[275].f_2 = 16;
	Global_44465[275].f_3 = 0;
	Global_44465[275].f_10 = 1;
	Global_44465[275].f_11 = 0;
	Global_44465[275].f_4 = 0;
	Global_44465[276] = 719;
	Global_44465[276].f_1 = 720;
	Global_44465[276].f_2 = 16;
	Global_44465[276].f_3 = 0;
	Global_44465[276].f_10 = 1;
	Global_44465[276].f_11 = 0;
	Global_44465[276].f_4 = 0;
	Global_47790[0].f_45 = 0;
	Global_47790[0].f_31 = 0;
	Global_47790[0].f_42 = 0;
	Global_47790[0].f_43 = 0;
	Global_47790[0].f_2 = 2;
	Global_47790[0].f_3[0] = 0;
	Global_47790[0].f_3[1] = 4;
	Global_47790[0].f_30 = 8;
	Global_47790[0].f_8[0] = 0;
	Global_47790[0].f_8[1] = 1;
	Global_47790[0].f_8[2] = 2;
	Global_47790[0].f_8[3] = 3;
	Global_47790[0].f_8[4] = 4;
	Global_47790[0].f_8[5] = 5;
	Global_47790[0].f_8[6] = 6;
	Global_47790[0].f_8[7] = 9;
	Global_47790[1].f_45 = 0;
	Global_47790[1].f_31 = 0;
	Global_47790[1].f_42 = 0;
	Global_47790[1].f_43 = 0;
	Global_47790[1].f_2 = 3;
	Global_47790[1].f_3[0] = 5;
	Global_47790[1].f_3[1] = 0;
	Global_47790[1].f_3[2] = 4;
	Global_47790[1].f_30 = 3;
	Global_47790[1].f_8[0] = 10;
	Global_47790[1].f_8[1] = 11;
	Global_47790[1].f_8[2] = 16;
	Global_47790[2].f_45 = 0;
	Global_47790[2].f_31 = 0;
	Global_47790[2].f_42 = 0;
	Global_47790[2].f_43 = 0;
	Global_47790[2].f_2 = 2;
	Global_47790[2].f_3[0] = 7;
	Global_47790[2].f_3[1] = 1;
	Global_47790[2].f_30 = 1;
	Global_47790[2].f_8[0] = 12;
	Global_47790[3].f_45 = 0;
	Global_47790[3].f_31 = 0;
	Global_47790[3].f_42 = 0;
	Global_47790[3].f_43 = 0;
	Global_47790[3].f_2 = 2;
	Global_47790[3].f_3[0] = 7;
	Global_47790[3].f_3[1] = 1;
	Global_47790[3].f_30 = 1;
	Global_47790[3].f_8[0] = 14;
	Global_47790[4].f_45 = 0;
	Global_47790[4].f_31 = 0;
	Global_47790[4].f_42 = 0;
	Global_47790[4].f_43 = 0;
	Global_47790[4].f_2 = 2;
	Global_47790[4].f_3[0] = 7;
	Global_47790[4].f_3[1] = 1;
	Global_47790[4].f_30 = 1;
	Global_47790[4].f_8[0] = 13;
	Global_47790[5].f_45 = 0;
	Global_47790[5].f_31 = 0;
	Global_47790[5].f_42 = 0;
	Global_47790[5].f_43 = 0;
	Global_47790[5].f_2 = 2;
	Global_47790[5].f_3[0] = 7;
	Global_47790[5].f_3[1] = 1;
	Global_47790[5].f_30 = 1;
	Global_47790[5].f_8[0] = 15;
	Global_47790[6].f_45 = 0;
	Global_47790[6].f_31 = 0;
	Global_47790[6].f_42 = 0;
	Global_47790[6].f_43 = 0;
	Global_47790[6].f_2 = 2;
	Global_47790[6].f_3[0] = 0;
	Global_47790[6].f_3[1] = 8;
	Global_47790[6].f_30 = 5;
	Global_47790[6].f_8[0] = 17;
	Global_47790[6].f_8[1] = 19;
	Global_47790[6].f_8[2] = 20;
	Global_47790[6].f_8[3] = 21;
	Global_47790[6].f_8[4] = 22;
	Global_47790[7].f_45 = 0;
	Global_47790[7].f_31 = 0;
	Global_47790[7].f_42 = 0;
	Global_47790[7].f_43 = 0;
	Global_47790[7].f_2 = 2;
	Global_47790[7].f_3[0] = 1;
	Global_47790[7].f_3[1] = 9;
	Global_47790[7].f_30 = 5;
	Global_47790[7].f_8[0] = 18;
	Global_47790[7].f_8[1] = 24;
	Global_47790[7].f_8[2] = 25;
	Global_47790[7].f_8[3] = 26;
	Global_47790[7].f_8[4] = 27;
	Global_47790[8].f_45 = 0;
	Global_47790[8].f_31 = 0;
	Global_47790[8].f_42 = 0;
	Global_47790[8].f_43 = 0;
	Global_47790[8].f_2 = 2;
	Global_47790[8].f_3[0] = 2;
	Global_47790[8].f_3[1] = 10;
	Global_47790[8].f_30 = 4;
	Global_47790[8].f_8[0] = 23;
	Global_47790[8].f_8[1] = 28;
	Global_47790[8].f_8[2] = 29;
	Global_47790[8].f_8[3] = 30;
	Global_47790[9].f_45 = 0;
	Global_47790[9].f_31 = 0;
	Global_47790[9].f_42 = 0;
	Global_47790[9].f_43 = 0;
	Global_47790[9].f_2 = 1;
	Global_47790[9].f_3[0] = 11;
	Global_47790[9].f_30 = 3;
	Global_47790[9].f_8[0] = 31;
	Global_47790[9].f_8[1] = 32;
	Global_47790[9].f_8[2] = 33;
	Global_47790[10].f_45 = 0;
	Global_47790[10].f_31 = 0;
	Global_47790[10].f_42 = 0;
	Global_47790[10].f_43 = 0;
	Global_47790[10].f_2 = 1;
	Global_47790[10].f_3[0] = 13;
	Global_47790[10].f_30 = 3;
	Global_47790[10].f_8[0] = 34;
	Global_47790[10].f_8[1] = 35;
	Global_47790[10].f_8[2] = 36;
	Global_47790[11].f_45 = 0;
	Global_47790[11].f_31 = 0;
	Global_47790[11].f_42 = 0;
	Global_47790[11].f_43 = 0;
	Global_47790[11].f_2 = 1;
	Global_47790[11].f_3[0] = 14;
	Global_47790[11].f_30 = 3;
	Global_47790[11].f_8[0] = 37;
	Global_47790[11].f_8[1] = 38;
	Global_47790[11].f_8[2] = 39;
	Global_47790[12].f_45 = 0;
	Global_47790[12].f_31 = 0;
	Global_47790[12].f_42 = 0;
	Global_47790[12].f_43 = 0;
	Global_47790[12].f_2 = 1;
	Global_47790[12].f_3[0] = 12;
	Global_47790[12].f_30 = 6;
	Global_47790[12].f_8[0] = 40;
	Global_47790[12].f_8[1] = 41;
	Global_47790[12].f_8[2] = 42;
	Global_47790[12].f_8[3] = 191;
	Global_47790[12].f_8[4] = 192;
	Global_47790[12].f_8[5] = 193;
	Global_47790[13].f_45 = 0;
	Global_47790[13].f_31 = 0;
	Global_47790[13].f_42 = 0;
	Global_47790[13].f_43 = 0;
	Global_47790[13].f_2 = 2;
	Global_47790[13].f_3[0] = 7;
	Global_47790[13].f_3[1] = 0;
	Global_47790[13].f_30 = 1;
	Global_47790[13].f_8[0] = 43;
	Global_47790[14].f_45 = 0;
	Global_47790[14].f_31 = 0;
	Global_47790[14].f_42 = 0;
	Global_47790[14].f_43 = 0;
	Global_47790[14].f_2 = 4;
	Global_47790[14].f_3[0] = 15;
	Global_47790[14].f_3[1] = 0;
	Global_47790[14].f_3[2] = 1;
	Global_47790[14].f_3[3] = 2;
	Global_47790[14].f_30 = 3;
	Global_47790[14].f_8[0] = 44;
	Global_47790[14].f_8[1] = 45;
	Global_47790[14].f_8[2] = 46;
	Global_47790[15].f_45 = 0;
	Global_47790[15].f_31 = 0;
	Global_47790[15].f_42 = 0;
	Global_47790[15].f_43 = 0;
	Global_47790[15].f_2 = 4;
	Global_47790[15].f_3[0] = 16;
	Global_47790[15].f_3[1] = 0;
	Global_47790[15].f_3[2] = 1;
	Global_47790[15].f_3[3] = 2;
	Global_47790[15].f_30 = 1;
	Global_47790[15].f_8[0] = 47;
	Global_47790[16].f_45 = 0;
	Global_47790[16].f_31 = 0;
	Global_47790[16].f_42 = 0;
	Global_47790[16].f_43 = 0;
	Global_47790[16].f_2 = 4;
	Global_47790[16].f_3[0] = 16;
	Global_47790[16].f_3[1] = 0;
	Global_47790[16].f_3[2] = 1;
	Global_47790[16].f_3[3] = 2;
	Global_47790[16].f_30 = 1;
	Global_47790[16].f_8[0] = 48;
	Global_47790[17].f_45 = 0;
	Global_47790[17].f_31 = 0;
	Global_47790[17].f_42 = 0;
	Global_47790[17].f_43 = 0;
	Global_47790[17].f_2 = 4;
	Global_47790[17].f_3[0] = 0;
	Global_47790[17].f_3[1] = 1;
	Global_47790[17].f_3[2] = 2;
	Global_47790[17].f_3[3] = 16;
	Global_47790[17].f_30 = 1;
	Global_47790[17].f_8[0] = 49;
	Global_47790[18].f_45 = 0;
	Global_47790[18].f_31 = 0;
	Global_47790[18].f_42 = 0;
	Global_47790[18].f_43 = 0;
	Global_47790[18].f_2 = 4;
	Global_47790[18].f_3[0] = 0;
	Global_47790[18].f_3[1] = 1;
	Global_47790[18].f_3[2] = 2;
	Global_47790[18].f_3[3] = 16;
	Global_47790[18].f_30 = 1;
	Global_47790[18].f_8[0] = 50;
	Global_47790[19].f_45 = 0;
	Global_47790[19].f_31 = 0;
	Global_47790[19].f_42 = 0;
	Global_47790[19].f_43 = 0;
	Global_47790[19].f_2 = 4;
	Global_47790[19].f_3[0] = 0;
	Global_47790[19].f_3[1] = 1;
	Global_47790[19].f_3[2] = 2;
	Global_47790[19].f_3[3] = 16;
	Global_47790[19].f_30 = 1;
	Global_47790[19].f_8[0] = 51;
	Global_47790[20].f_45 = 0;
	Global_47790[20].f_31 = 0;
	Global_47790[20].f_42 = 0;
	Global_47790[20].f_43 = 0;
	Global_47790[20].f_2 = 4;
	Global_47790[20].f_3[0] = 0;
	Global_47790[20].f_3[1] = 1;
	Global_47790[20].f_3[2] = 2;
	Global_47790[20].f_3[3] = 16;
	Global_47790[20].f_30 = 1;
	Global_47790[20].f_8[0] = 52;
	Global_47790[21].f_45 = 0;
	Global_47790[21].f_31 = 0;
	Global_47790[21].f_42 = 0;
	Global_47790[21].f_43 = 0;
	Global_47790[21].f_2 = 4;
	Global_47790[21].f_3[0] = 16;
	Global_47790[21].f_3[1] = 0;
	Global_47790[21].f_3[2] = 1;
	Global_47790[21].f_3[3] = 2;
	Global_47790[21].f_30 = 1;
	Global_47790[21].f_8[0] = 53;
	Global_47790[22].f_45 = 0;
	Global_47790[22].f_31 = 0;
	Global_47790[22].f_42 = 0;
	Global_47790[22].f_43 = 0;
	Global_47790[22].f_2 = 4;
	Global_47790[22].f_3[0] = 0;
	Global_47790[22].f_3[1] = 1;
	Global_47790[22].f_3[2] = 2;
	Global_47790[22].f_3[3] = 16;
	Global_47790[22].f_30 = 1;
	Global_47790[22].f_8[0] = 54;
	Global_47790[23].f_45 = 0;
	Global_47790[23].f_31 = 0;
	Global_47790[23].f_42 = 0;
	Global_47790[23].f_43 = 0;
	Global_47790[23].f_2 = 1;
	Global_47790[23].f_3[0] = 12;
	Global_47790[23].f_30 = 3;
	Global_47790[23].f_8[0] = 55;
	Global_47790[23].f_8[1] = 58;
	Global_47790[23].f_8[2] = 59;
	Global_47790[24].f_45 = 0;
	Global_47790[24].f_31 = 0;
	Global_47790[24].f_42 = 0;
	Global_47790[24].f_43 = 0;
	Global_47790[24].f_2 = 1;
	Global_47790[24].f_3[0] = 14;
	Global_47790[24].f_30 = 3;
	Global_47790[24].f_8[0] = 56;
	Global_47790[24].f_8[1] = 60;
	Global_47790[24].f_8[2] = 61;
	Global_47790[25].f_45 = 0;
	Global_47790[25].f_31 = 0;
	Global_47790[25].f_42 = 0;
	Global_47790[25].f_43 = 0;
	Global_47790[25].f_2 = 1;
	Global_47790[25].f_3[0] = 12;
	Global_47790[25].f_30 = 3;
	Global_47790[25].f_8[0] = 57;
	Global_47790[25].f_8[1] = 62;
	Global_47790[25].f_8[2] = 63;
	Global_47790[26].f_45 = 0;
	Global_47790[26].f_31 = 0;
	Global_47790[26].f_42 = 0;
	Global_47790[26].f_43 = 0;
	Global_47790[26].f_2 = 4;
	Global_47790[26].f_3[0] = 1;
	Global_47790[26].f_3[1] = 0;
	Global_47790[26].f_3[2] = 2;
	Global_47790[26].f_3[3] = 20;
	Global_47790[26].f_30 = 1;
	Global_47790[26].f_8[0] = 64;
	Global_47790[27].f_45 = 0;
	Global_47790[27].f_31 = 0;
	Global_47790[27].f_42 = 0;
	Global_47790[27].f_43 = 0;
	Global_47790[27].f_2 = 4;
	Global_47790[27].f_3[0] = 17;
	Global_47790[27].f_3[1] = 0;
	Global_47790[27].f_3[2] = 1;
	Global_47790[27].f_3[3] = 2;
	Global_47790[27].f_30 = 1;
	Global_47790[27].f_8[0] = 66;
	Global_47790[28].f_45 = 0;
	Global_47790[28].f_31 = 0;
	Global_47790[28].f_42 = 0;
	Global_47790[28].f_43 = 0;
	Global_47790[28].f_2 = 4;
	Global_47790[28].f_3[0] = 18;
	Global_47790[28].f_3[1] = 0;
	Global_47790[28].f_3[2] = 1;
	Global_47790[28].f_3[3] = 2;
	Global_47790[28].f_30 = 1;
	Global_47790[28].f_8[0] = 65;
	Global_47790[29].f_45 = 0;
	Global_47790[29].f_31 = 0;
	Global_47790[29].f_42 = 0;
	Global_47790[29].f_43 = 0;
	Global_47790[29].f_2 = 2;
	Global_47790[29].f_3[0] = 2;
	Global_47790[29].f_3[1] = 63;
	Global_47790[29].f_30 = 1;
	Global_47790[29].f_8[0] = 67;
	Global_47790[30].f_45 = 0;
	Global_47790[30].f_31 = 0;
	Global_47790[30].f_42 = 0;
	Global_47790[30].f_43 = 0;
	Global_47790[30].f_2 = 3;
	Global_47790[30].f_3[0] = 0;
	Global_47790[30].f_3[1] = 1;
	Global_47790[30].f_3[2] = 2;
	Global_47790[30].f_30 = 1;
	Global_47790[30].f_8[0] = 68;
	Global_47790[31].f_45 = 0;
	Global_47790[31].f_31 = 0;
	Global_47790[31].f_42 = 0;
	Global_47790[31].f_43 = 0;
	Global_47790[31].f_2 = 2;
	Global_47790[31].f_3[0] = 0;
	Global_47790[31].f_3[1] = 64;
	Global_47790[31].f_30 = 1;
	Global_47790[31].f_8[0] = 69;
	Global_47790[32].f_45 = 0;
	Global_47790[32].f_31 = 0;
	Global_47790[32].f_42 = 0;
	Global_47790[32].f_43 = 0;
	Global_47790[32].f_2 = 2;
	Global_47790[32].f_3[0] = 1;
	Global_47790[32].f_3[1] = 64;
	Global_47790[32].f_30 = 1;
	Global_47790[32].f_8[0] = 70;
	Global_47790[33].f_45 = 0;
	Global_47790[33].f_31 = 0;
	Global_47790[33].f_42 = 0;
	Global_47790[33].f_43 = 0;
	Global_47790[33].f_2 = 2;
	Global_47790[33].f_3[0] = 2;
	Global_47790[33].f_3[1] = 64;
	Global_47790[33].f_30 = 1;
	Global_47790[33].f_8[0] = 71;
	Global_47790[34].f_45 = 0;
	Global_47790[34].f_31 = 0;
	Global_47790[34].f_42 = 0;
	Global_47790[34].f_43 = 0;
	Global_47790[34].f_2 = 1;
	Global_47790[34].f_3[0] = 21;
	Global_47790[34].f_30 = 1;
	Global_47790[34].f_8[0] = 72;
	Global_47790[35].f_45 = 0;
	Global_47790[35].f_31 = 0;
	Global_47790[35].f_42 = 0;
	Global_47790[35].f_43 = 0;
	Global_47790[35].f_2 = 1;
	Global_47790[35].f_3[0] = 21;
	Global_47790[35].f_30 = 1;
	Global_47790[35].f_8[0] = 73;
	Global_47790[36].f_45 = 0;
	Global_47790[36].f_31 = 0;
	Global_47790[36].f_42 = 0;
	Global_47790[36].f_43 = 0;
	Global_47790[36].f_2 = 1;
	Global_47790[36].f_3[0] = 21;
	Global_47790[36].f_30 = 1;
	Global_47790[36].f_8[0] = 74;
	Global_47790[37].f_45 = 0;
	Global_47790[37].f_31 = 0;
	Global_47790[37].f_42 = 0;
	Global_47790[37].f_43 = 0;
	Global_47790[37].f_2 = 2;
	Global_47790[37].f_3[0] = 6;
	Global_47790[37].f_3[1] = 2;
	Global_47790[37].f_30 = 9;
	Global_47790[37].f_8[0] = 75;
	Global_47790[37].f_8[1] = 76;
	Global_47790[37].f_8[2] = 77;
	Global_47790[37].f_8[3] = 78;
	Global_47790[37].f_8[4] = 79;
	Global_47790[37].f_8[5] = 80;
	Global_47790[37].f_8[6] = 81;
	Global_47790[37].f_8[7] = 82;
	Global_47790[37].f_8[8] = 83;
	Global_47790[38].f_45 = 0;
	Global_47790[38].f_31 = 0;
	Global_47790[38].f_42 = 0;
	Global_47790[38].f_43 = 0;
	Global_47790[38].f_2 = 2;
	Global_47790[38].f_3[0] = 0;
	Global_47790[38].f_3[1] = 4;
	Global_47790[38].f_30 = 1;
	Global_47790[38].f_8[0] = 84;
	Global_47790[39].f_45 = 0;
	Global_47790[39].f_31 = 0;
	Global_47790[39].f_42 = 0;
	Global_47790[39].f_43 = 0;
	Global_47790[39].f_2 = 4;
	Global_47790[39].f_3[0] = 22;
	Global_47790[39].f_3[1] = 0;
	Global_47790[39].f_3[2] = 1;
	Global_47790[39].f_3[3] = 2;
	Global_47790[39].f_30 = 1;
	Global_47790[39].f_8[0] = 85;
	Global_47790[40].f_45 = 0;
	Global_47790[40].f_31 = 0;
	Global_47790[40].f_42 = 0;
	Global_47790[40].f_43 = 0;
	Global_47790[40].f_2 = 2;
	Global_47790[40].f_3[0] = 0;
	Global_47790[40].f_3[1] = 24;
	Global_47790[40].f_30 = 3;
	Global_47790[40].f_8[0] = 86;
	Global_47790[40].f_8[1] = 87;
	Global_47790[40].f_8[2] = 88;
	Global_47790[41].f_45 = 0;
	Global_47790[41].f_31 = 0;
	Global_47790[41].f_42 = 0;
	Global_47790[41].f_43 = 0;
	Global_47790[41].f_2 = 2;
	Global_47790[41].f_3[0] = 0;
	Global_47790[41].f_3[1] = 24;
	Global_47790[41].f_30 = 3;
	Global_47790[41].f_8[0] = 89;
	Global_47790[41].f_8[1] = 90;
	Global_47790[41].f_8[2] = 91;
	Global_47790[42].f_45 = 0;
	Global_47790[42].f_31 = 0;
	Global_47790[42].f_42 = 0;
	Global_47790[42].f_43 = 0;
	Global_47790[42].f_2 = 2;
	Global_47790[42].f_3[0] = 0;
	Global_47790[42].f_3[1] = 25;
	Global_47790[42].f_30 = 5;
	Global_47790[42].f_8[0] = 92;
	Global_47790[42].f_8[1] = 93;
	Global_47790[42].f_8[2] = 94;
	Global_47790[42].f_8[3] = 95;
	Global_47790[42].f_8[4] = 96;
	Global_47790[43].f_45 = 0;
	Global_47790[43].f_31 = 0;
	Global_47790[43].f_42 = 0;
	Global_47790[43].f_43 = 0;
	Global_47790[43].f_2 = 2;
	Global_47790[43].f_3[0] = 26;
	Global_47790[43].f_3[1] = 0;
	Global_47790[43].f_30 = 2;
	Global_47790[43].f_8[0] = 97;
	Global_47790[43].f_8[1] = 98;
	Global_47790[44].f_45 = 0;
	Global_47790[44].f_31 = 0;
	Global_47790[44].f_42 = 0;
	Global_47790[44].f_43 = 0;
	Global_47790[44].f_2 = 2;
	Global_47790[44].f_3[0] = 27;
	Global_47790[44].f_3[1] = 0;
	Global_47790[44].f_30 = 2;
	Global_47790[44].f_8[0] = 99;
	Global_47790[44].f_8[1] = 100;
	Global_47790[45].f_45 = 0;
	Global_47790[45].f_31 = 0;
	Global_47790[45].f_42 = 0;
	Global_47790[45].f_43 = 0;
	Global_47790[45].f_2 = 3;
	Global_47790[45].f_3[0] = 0;
	Global_47790[45].f_3[1] = 2;
	Global_47790[45].f_3[2] = 28;
	Global_47790[45].f_30 = 1;
	Global_47790[45].f_8[0] = 101;
	Global_47790[46].f_45 = 0;
	Global_47790[46].f_31 = 0;
	Global_47790[46].f_42 = 0;
	Global_47790[46].f_43 = 0;
	Global_47790[46].f_2 = 2;
	Global_47790[46].f_3[0] = 0;
	Global_47790[46].f_3[1] = 26;
	Global_47790[46].f_30 = 2;
	Global_47790[46].f_8[0] = 102;
	Global_47790[46].f_8[1] = 103;
	Global_47790[47].f_45 = 0;
	Global_47790[47].f_31 = 0;
	Global_47790[47].f_42 = 0;
	Global_47790[47].f_43 = 0;
	Global_47790[47].f_2 = 2;
	Global_47790[47].f_3[0] = 0;
	Global_47790[47].f_3[1] = 29;
	Global_47790[47].f_30 = 2;
	Global_47790[47].f_8[0] = 104;
	Global_47790[47].f_8[1] = 105;
	Global_47790[48].f_45 = 0;
	Global_47790[48].f_31 = 0;
	Global_47790[48].f_42 = 0;
	Global_47790[48].f_43 = 0;
	Global_47790[48].f_2 = 2;
	Global_47790[48].f_3[0] = 1;
	Global_47790[48].f_3[1] = 30;
	Global_47790[48].f_30 = 5;
	Global_47790[48].f_8[0] = 106;
	Global_47790[48].f_8[1] = 107;
	Global_47790[48].f_8[2] = 108;
	Global_47790[48].f_8[3] = 109;
	Global_47790[48].f_8[4] = 110;
	Global_47790[49].f_45 = 0;
	Global_47790[49].f_31 = 0;
	Global_47790[49].f_42 = 0;
	Global_47790[49].f_43 = 0;
	Global_47790[49].f_2 = 2;
	Global_47790[49].f_3[0] = 1;
	Global_47790[49].f_3[1] = 31;
	Global_47790[49].f_30 = 2;
	Global_47790[49].f_8[0] = 111;
	Global_47790[49].f_8[1] = 112;
	Global_47790[50].f_45 = 0;
	Global_47790[50].f_31 = 0;
	Global_47790[50].f_42 = 0;
	Global_47790[50].f_43 = 0;
	Global_47790[50].f_2 = 2;
	Global_47790[50].f_3[0] = 1;
	Global_47790[50].f_3[1] = 32;
	Global_47790[50].f_30 = 3;
	Global_47790[50].f_8[0] = 113;
	Global_47790[50].f_8[1] = 114;
	Global_47790[50].f_8[2] = 115;
	Global_47790[51].f_45 = 0;
	Global_47790[51].f_31 = 0;
	Global_47790[51].f_42 = 0;
	Global_47790[51].f_43 = 0;
	Global_47790[51].f_2 = 2;
	Global_47790[51].f_3[0] = 1;
	Global_47790[51].f_3[1] = 32;
	Global_47790[51].f_30 = 2;
	Global_47790[51].f_8[0] = 116;
	Global_47790[51].f_8[1] = 117;
	Global_47790[52].f_45 = 0;
	Global_47790[52].f_31 = 0;
	Global_47790[52].f_42 = 0;
	Global_47790[52].f_43 = 0;
	Global_47790[52].f_2 = 2;
	Global_47790[52].f_3[0] = 1;
	Global_47790[52].f_3[1] = 32;
	Global_47790[52].f_30 = 2;
	Global_47790[52].f_8[0] = 118;
	Global_47790[52].f_8[1] = 119;
	Global_47790[53].f_45 = 0;
	Global_47790[53].f_31 = 0;
	Global_47790[53].f_42 = 0;
	Global_47790[53].f_43 = 0;
	Global_47790[53].f_2 = 2;
	Global_47790[53].f_3[0] = 1;
	Global_47790[53].f_3[1] = 32;
	Global_47790[53].f_30 = 4;
	Global_47790[53].f_8[0] = 120;
	Global_47790[53].f_8[1] = 121;
	Global_47790[53].f_8[2] = 122;
	Global_47790[53].f_8[3] = 123;
	Global_47790[54].f_45 = 0;
	Global_47790[54].f_31 = 0;
	Global_47790[54].f_42 = 0;
	Global_47790[54].f_43 = 0;
	Global_47790[54].f_2 = 2;
	Global_47790[54].f_3[0] = 1;
	Global_47790[54].f_3[1] = 27;
	Global_47790[54].f_30 = 2;
	Global_47790[54].f_8[0] = 124;
	Global_47790[54].f_8[1] = 125;
	Global_47790[55].f_45 = 0;
	Global_47790[55].f_31 = 0;
	Global_47790[55].f_42 = 0;
	Global_47790[55].f_43 = 0;
	Global_47790[55].f_2 = 2;
	Global_47790[55].f_3[0] = 1;
	Global_47790[55].f_3[1] = 2;
	Global_47790[55].f_30 = 5;
	Global_47790[55].f_8[0] = 126;
	Global_47790[55].f_8[1] = 127;
	Global_47790[55].f_8[2] = 128;
	Global_47790[55].f_8[3] = 129;
	Global_47790[55].f_8[4] = 130;
	Global_47790[56].f_45 = 0;
	Global_47790[56].f_31 = 0;
	Global_47790[56].f_42 = 0;
	Global_47790[56].f_43 = 0;
	Global_47790[56].f_2 = 2;
	Global_47790[56].f_3[0] = 1;
	Global_47790[56].f_3[1] = 0;
	Global_47790[56].f_30 = 3;
	Global_47790[56].f_8[0] = 131;
	Global_47790[56].f_8[1] = 132;
	Global_47790[56].f_8[2] = 133;
	Global_47790[57].f_45 = 0;
	Global_47790[57].f_31 = 0;
	Global_47790[57].f_42 = 0;
	Global_47790[57].f_43 = 0;
	Global_47790[57].f_2 = 2;
	Global_47790[57].f_3[0] = 0;
	Global_47790[57].f_3[1] = 1;
	Global_47790[57].f_30 = 2;
	Global_47790[57].f_8[0] = 134;
	Global_47790[57].f_8[1] = 135;
	Global_47790[58].f_45 = 0;
	Global_47790[58].f_31 = 0;
	Global_47790[58].f_42 = 0;
	Global_47790[58].f_43 = 0;
	Global_47790[58].f_2 = 2;
	Global_47790[58].f_3[0] = 2;
	Global_47790[58].f_3[1] = 33;
	Global_47790[58].f_30 = 2;
	Global_47790[58].f_8[0] = 136;
	Global_47790[58].f_8[1] = 137;
	Global_47790[59].f_45 = 0;
	Global_47790[59].f_31 = 0;
	Global_47790[59].f_42 = 0;
	Global_47790[59].f_43 = 0;
	Global_47790[59].f_2 = 2;
	Global_47790[59].f_3[0] = 2;
	Global_47790[59].f_3[1] = 33;
	Global_47790[59].f_30 = 3;
	Global_47790[59].f_8[0] = 138;
	Global_47790[59].f_8[1] = 139;
	Global_47790[59].f_8[2] = 248;
	Global_47790[60].f_45 = 0;
	Global_47790[60].f_31 = 0;
	Global_47790[60].f_42 = 0;
	Global_47790[60].f_43 = 0;
	Global_47790[60].f_2 = 2;
	Global_47790[60].f_3[0] = 2;
	Global_47790[60].f_3[1] = 33;
	Global_47790[60].f_30 = 1;
	Global_47790[60].f_8[0] = 140;
	Global_47790[61].f_45 = 0;
	Global_47790[61].f_31 = 0;
	Global_47790[61].f_42 = 0;
	Global_47790[61].f_43 = 0;
	Global_47790[61].f_2 = 2;
	Global_47790[61].f_3[0] = 2;
	Global_47790[61].f_3[1] = 29;
	Global_47790[61].f_30 = 2;
	Global_47790[61].f_8[0] = 141;
	Global_47790[61].f_8[1] = 142;
	Global_47790[62].f_45 = 0;
	Global_47790[62].f_31 = 0;
	Global_47790[62].f_42 = 0;
	Global_47790[62].f_43 = 0;
	Global_47790[62].f_2 = 2;
	Global_47790[62].f_3[0] = 3;
	Global_47790[62].f_3[1] = 2;
	Global_47790[62].f_30 = 2;
	Global_47790[62].f_8[0] = 143;
	Global_47790[62].f_8[1] = 144;
	Global_47790[63].f_45 = 0;
	Global_47790[63].f_31 = 0;
	Global_47790[63].f_42 = 0;
	Global_47790[63].f_43 = 0;
	Global_47790[63].f_2 = 2;
	Global_47790[63].f_3[0] = 2;
	Global_47790[63].f_3[1] = 34;
	Global_47790[63].f_30 = 2;
	Global_47790[63].f_8[0] = 145;
	Global_47790[63].f_8[1] = 146;
	Global_47790[64].f_45 = 0;
	Global_47790[64].f_31 = 0;
	Global_47790[64].f_42 = 0;
	Global_47790[64].f_43 = 0;
	Global_47790[64].f_2 = 2;
	Global_47790[64].f_3[0] = 2;
	Global_47790[64].f_3[1] = 26;
	Global_47790[64].f_30 = 1;
	Global_47790[64].f_8[0] = 147;
	Global_47790[65].f_45 = 0;
	Global_47790[65].f_31 = 0;
	Global_47790[65].f_42 = 0;
	Global_47790[65].f_43 = 0;
	Global_47790[65].f_2 = 1;
	Global_47790[65].f_3[0] = 35;
	Global_47790[65].f_30 = 3;
	Global_47790[65].f_8[0] = 148;
	Global_47790[65].f_8[1] = 149;
	Global_47790[65].f_8[2] = 150;
	Global_47790[66].f_45 = 0;
	Global_47790[66].f_31 = 0;
	Global_47790[66].f_42 = 0;
	Global_47790[66].f_43 = 0;
	Global_47790[66].f_2 = 1;
	Global_47790[66].f_3[0] = 36;
	Global_47790[66].f_30 = 3;
	Global_47790[66].f_8[0] = 151;
	Global_47790[66].f_8[1] = 152;
	Global_47790[66].f_8[2] = 153;
	Global_47790[67].f_45 = 0;
	Global_47790[67].f_31 = 0;
	Global_47790[67].f_42 = 0;
	Global_47790[67].f_43 = 0;
	Global_47790[67].f_2 = 2;
	Global_47790[67].f_3[0] = 4;
	Global_47790[67].f_3[1] = 0;
	Global_47790[67].f_30 = 1;
	Global_47790[67].f_8[0] = 7;
	Global_47790[68].f_45 = 0;
	Global_47790[68].f_31 = 0;
	Global_47790[68].f_42 = 0;
	Global_47790[68].f_43 = 0;
	Global_47790[68].f_2 = 2;
	Global_47790[68].f_3[0] = 4;
	Global_47790[68].f_3[1] = 0;
	Global_47790[68].f_30 = 1;
	Global_47790[68].f_8[0] = 8;
	Global_47790[69].f_45 = 0;
	Global_47790[69].f_31 = 0;
	Global_47790[69].f_42 = 0;
	Global_47790[69].f_43 = 0;
	Global_47790[69].f_2 = 2;
	Global_47790[69].f_3[0] = 2;
	Global_47790[69].f_3[1] = 38;
	Global_47790[69].f_30 = 1;
	Global_47790[69].f_8[0] = 154;
	Global_47790[70].f_45 = 0;
	Global_47790[70].f_31 = 0;
	Global_47790[70].f_42 = 0;
	Global_47790[70].f_43 = 0;
	Global_47790[70].f_2 = 1;
	Global_47790[70].f_3[0] = 11;
	Global_47790[70].f_30 = 3;
	Global_47790[70].f_8[0] = 155;
	Global_47790[70].f_8[1] = 156;
	Global_47790[70].f_8[2] = 157;
	Global_47790[71].f_45 = 0;
	Global_47790[71].f_31 = 0;
	Global_47790[71].f_42 = 0;
	Global_47790[71].f_43 = 0;
	Global_47790[71].f_2 = 2;
	Global_47790[71].f_3[0] = 2;
	Global_47790[71].f_3[1] = 29;
	Global_47790[71].f_30 = 1;
	Global_47790[71].f_8[0] = 158;
	Global_47790[72].f_45 = 0;
	Global_47790[72].f_31 = 0;
	Global_47790[72].f_42 = 0;
	Global_47790[72].f_43 = 0;
	Global_47790[72].f_2 = 1;
	Global_47790[72].f_3[0] = 0;
	Global_47790[72].f_30 = 1;
	Global_47790[72].f_8[0] = 159;
	Global_47790[73].f_45 = 0;
	Global_47790[73].f_31 = 0;
	Global_47790[73].f_42 = 0;
	Global_47790[73].f_43 = 0;
	Global_47790[73].f_2 = 1;
	Global_47790[73].f_3[0] = 1;
	Global_47790[73].f_30 = 1;
	Global_47790[73].f_8[0] = 160;
	Global_47790[74].f_45 = 0;
	Global_47790[74].f_31 = 0;
	Global_47790[74].f_42 = 0;
	Global_47790[74].f_43 = 0;
	Global_47790[74].f_2 = 1;
	Global_47790[74].f_3[0] = 1;
	Global_47790[74].f_30 = 1;
	Global_47790[74].f_8[0] = 161;
	Global_47790[75].f_45 = 0;
	Global_47790[75].f_31 = 0;
	Global_47790[75].f_42 = 0;
	Global_47790[75].f_43 = 0;
	Global_47790[75].f_2 = 1;
	Global_47790[75].f_3[0] = 0;
	Global_47790[75].f_30 = 1;
	Global_47790[75].f_8[0] = 162;
	Global_47790[76].f_45 = 0;
	Global_47790[76].f_31 = 0;
	Global_47790[76].f_42 = 0;
	Global_47790[76].f_43 = 0;
	Global_47790[76].f_2 = 1;
	Global_47790[76].f_3[0] = 2;
	Global_47790[76].f_30 = 1;
	Global_47790[76].f_8[0] = 163;
	Global_47790[77].f_45 = 0;
	Global_47790[77].f_31 = 0;
	Global_47790[77].f_42 = 0;
	Global_47790[77].f_43 = 0;
	Global_47790[77].f_2 = 1;
	Global_47790[77].f_3[0] = 1;
	Global_47790[77].f_30 = 1;
	Global_47790[77].f_8[0] = 164;
	Global_47790[78].f_45 = 0;
	Global_47790[78].f_31 = 0;
	Global_47790[78].f_42 = 0;
	Global_47790[78].f_43 = 0;
	Global_47790[78].f_2 = 1;
	Global_47790[78].f_3[0] = 1;
	Global_47790[78].f_30 = 1;
	Global_47790[78].f_8[0] = 165;
	Global_47790[79].f_45 = 0;
	Global_47790[79].f_31 = 0;
	Global_47790[79].f_42 = 0;
	Global_47790[79].f_43 = 0;
	Global_47790[79].f_2 = 1;
	Global_47790[79].f_3[0] = 0;
	Global_47790[79].f_30 = 1;
	Global_47790[79].f_8[0] = 166;
	Global_47790[80].f_45 = 0;
	Global_47790[80].f_31 = 0;
	Global_47790[80].f_42 = 0;
	Global_47790[80].f_43 = 0;
	Global_47790[80].f_2 = 1;
	Global_47790[80].f_3[0] = 0;
	Global_47790[80].f_30 = 1;
	Global_47790[80].f_8[0] = 167;
	Global_47790[81].f_45 = 0;
	Global_47790[81].f_31 = 0;
	Global_47790[81].f_42 = 0;
	Global_47790[81].f_43 = 0;
	Global_47790[81].f_2 = 1;
	Global_47790[81].f_3[0] = 0;
	Global_47790[81].f_30 = 1;
	Global_47790[81].f_8[0] = 168;
	Global_47790[82].f_45 = 0;
	Global_47790[82].f_31 = 0;
	Global_47790[82].f_42 = 0;
	Global_47790[82].f_43 = 0;
	Global_47790[82].f_2 = 1;
	Global_47790[82].f_3[0] = 2;
	Global_47790[82].f_30 = 1;
	Global_47790[82].f_8[0] = 169;
	Global_47790[83].f_45 = 0;
	Global_47790[83].f_31 = 0;
	Global_47790[83].f_42 = 0;
	Global_47790[83].f_43 = 0;
	Global_47790[83].f_2 = 1;
	Global_47790[83].f_3[0] = 1;
	Global_47790[83].f_30 = 1;
	Global_47790[83].f_8[0] = 170;
	Global_47790[84].f_45 = 0;
	Global_47790[84].f_31 = 0;
	Global_47790[84].f_42 = 0;
	Global_47790[84].f_43 = 0;
	Global_47790[84].f_2 = 1;
	Global_47790[84].f_3[0] = 1;
	Global_47790[84].f_30 = 1;
	Global_47790[84].f_8[0] = 171;
	Global_47790[85].f_45 = 0;
	Global_47790[85].f_31 = 0;
	Global_47790[85].f_42 = 0;
	Global_47790[85].f_43 = 0;
	Global_47790[85].f_2 = 1;
	Global_47790[85].f_3[0] = 0;
	Global_47790[85].f_30 = 1;
	Global_47790[85].f_8[0] = 172;
	Global_47790[86].f_45 = 0;
	Global_47790[86].f_31 = 0;
	Global_47790[86].f_42 = 0;
	Global_47790[86].f_43 = 0;
	Global_47790[86].f_2 = 1;
	Global_47790[86].f_3[0] = 2;
	Global_47790[86].f_30 = 1;
	Global_47790[86].f_8[0] = 173;
	Global_47790[87].f_45 = 0;
	Global_47790[87].f_31 = 0;
	Global_47790[87].f_42 = 0;
	Global_47790[87].f_43 = 0;
	Global_47790[87].f_2 = 1;
	Global_47790[87].f_3[0] = 1;
	Global_47790[87].f_30 = 1;
	Global_47790[87].f_8[0] = 174;
	Global_47790[88].f_45 = 0;
	Global_47790[88].f_31 = 0;
	Global_47790[88].f_42 = 0;
	Global_47790[88].f_43 = 0;
	Global_47790[88].f_2 = 1;
	Global_47790[88].f_3[0] = 0;
	Global_47790[88].f_30 = 1;
	Global_47790[88].f_8[0] = 175;
	Global_47790[89].f_45 = 0;
	Global_47790[89].f_31 = 0;
	Global_47790[89].f_42 = 0;
	Global_47790[89].f_43 = 0;
	Global_47790[89].f_2 = 1;
	Global_47790[89].f_3[0] = 2;
	Global_47790[89].f_30 = 1;
	Global_47790[89].f_8[0] = 176;
	Global_47790[90].f_45 = 0;
	Global_47790[90].f_31 = 0;
	Global_47790[90].f_42 = 0;
	Global_47790[90].f_43 = 0;
	Global_47790[90].f_2 = 1;
	Global_47790[90].f_3[0] = 1;
	Global_47790[90].f_30 = 1;
	Global_47790[90].f_8[0] = 177;
	Global_47790[91].f_45 = 0;
	Global_47790[91].f_31 = 0;
	Global_47790[91].f_42 = 0;
	Global_47790[91].f_43 = 0;
	Global_47790[91].f_2 = 1;
	Global_47790[91].f_3[0] = 0;
	Global_47790[91].f_30 = 1;
	Global_47790[91].f_8[0] = 179;
	Global_47790[92].f_45 = 0;
	Global_47790[92].f_31 = 0;
	Global_47790[92].f_42 = 0;
	Global_47790[92].f_43 = 0;
	Global_47790[92].f_2 = 1;
	Global_47790[92].f_3[0] = 2;
	Global_47790[92].f_30 = 1;
	Global_47790[92].f_8[0] = 178;
	Global_47790[93].f_45 = 0;
	Global_47790[93].f_31 = 0;
	Global_47790[93].f_42 = 0;
	Global_47790[93].f_43 = 0;
	Global_47790[93].f_2 = 1;
	Global_47790[93].f_3[0] = 1;
	Global_47790[93].f_30 = 1;
	Global_47790[93].f_8[0] = 180;
	Global_47790[94].f_45 = 0;
	Global_47790[94].f_31 = 0;
	Global_47790[94].f_42 = 0;
	Global_47790[94].f_43 = 0;
	Global_47790[94].f_2 = 2;
	Global_47790[94].f_3[0] = 4;
	Global_47790[94].f_3[1] = 0;
	Global_47790[94].f_30 = 1;
	Global_47790[94].f_8[0] = 181;
	Global_47790[95].f_45 = 0;
	Global_47790[95].f_31 = 0;
	Global_47790[95].f_42 = 0;
	Global_47790[95].f_43 = 0;
	Global_47790[95].f_2 = 1;
	Global_47790[95].f_3[0] = 37;
	Global_47790[95].f_30 = 1;
	Global_47790[95].f_8[0] = 182;
	Global_47790[96].f_45 = 0;
	Global_47790[96].f_31 = 0;
	Global_47790[96].f_42 = 0;
	Global_47790[96].f_43 = 0;
	Global_47790[96].f_2 = 1;
	Global_47790[96].f_3[0] = 37;
	Global_47790[96].f_30 = 1;
	Global_47790[96].f_8[0] = 183;
	Global_47790[97].f_45 = 0;
	Global_47790[97].f_31 = 0;
	Global_47790[97].f_42 = 0;
	Global_47790[97].f_43 = 0;
	Global_47790[97].f_2 = 1;
	Global_47790[97].f_3[0] = 37;
	Global_47790[97].f_30 = 1;
	Global_47790[97].f_8[0] = 184;
	Global_47790[98].f_45 = 0;
	Global_47790[98].f_31 = 0;
	Global_47790[98].f_42 = 0;
	Global_47790[98].f_43 = 0;
	Global_47790[98].f_2 = 1;
	Global_47790[98].f_3[0] = 54;
	Global_47790[98].f_30 = 3;
	Global_47790[98].f_8[0] = 185;
	Global_47790[98].f_8[1] = 186;
	Global_47790[98].f_8[2] = 188;
	Global_47790[99].f_45 = 0;
	Global_47790[99].f_31 = 0;
	Global_47790[99].f_42 = 0;
	Global_47790[99].f_43 = 0;
	Global_47790[99].f_2 = 1;
	Global_47790[99].f_3[0] = 55;
	Global_47790[99].f_30 = 3;
	Global_47790[99].f_8[0] = 187;
	Global_47790[99].f_8[1] = 189;
	Global_47790[99].f_8[2] = 190;
	Global_47790[100].f_45 = 0;
	Global_47790[100].f_31 = 0;
	Global_47790[100].f_42 = 0;
	Global_47790[100].f_43 = 0;
	Global_47790[100].f_2 = 3;
	Global_47790[100].f_3[0] = 56;
	Global_47790[100].f_3[1] = 0;
	Global_47790[100].f_3[2] = 2;
	Global_47790[100].f_30 = 5;
	Global_47790[100].f_8[0] = 194;
	Global_47790[100].f_8[1] = 195;
	Global_47790[100].f_8[2] = 196;
	Global_47790[100].f_8[3] = 197;
	Global_47790[100].f_8[4] = 198;
	Global_47790[101].f_45 = 0;
	Global_47790[101].f_31 = 0;
	Global_47790[101].f_42 = 0;
	Global_47790[101].f_43 = 0;
	Global_47790[101].f_2 = 2;
	Global_47790[101].f_3[0] = 57;
	Global_47790[101].f_3[1] = 0;
	Global_47790[101].f_30 = 8;
	Global_47790[101].f_8[0] = 199;
	Global_47790[101].f_8[1] = 200;
	Global_47790[101].f_8[2] = 201;
	Global_47790[101].f_8[3] = 202;
	Global_47790[101].f_8[4] = 203;
	Global_47790[101].f_8[5] = 204;
	Global_47790[101].f_8[6] = 205;
	Global_47790[101].f_8[7] = 206;
	Global_47790[102].f_45 = 0;
	Global_47790[102].f_31 = 0;
	Global_47790[102].f_42 = 0;
	Global_47790[102].f_43 = 0;
	Global_47790[102].f_2 = 2;
	Global_47790[102].f_3[0] = 58;
	Global_47790[102].f_3[1] = 0;
	Global_47790[102].f_30 = 7;
	Global_47790[102].f_8[0] = 207;
	Global_47790[102].f_8[1] = 208;
	Global_47790[102].f_8[2] = 209;
	Global_47790[102].f_8[3] = 210;
	Global_47790[102].f_8[4] = 211;
	Global_47790[102].f_8[5] = 212;
	Global_47790[102].f_8[6] = 213;
	Global_47790[103].f_45 = 0;
	Global_47790[103].f_31 = 0;
	Global_47790[103].f_42 = 0;
	Global_47790[103].f_43 = 0;
	Global_47790[103].f_2 = 2;
	Global_47790[103].f_3[0] = 59;
	Global_47790[103].f_3[1] = 0;
	Global_47790[103].f_30 = 8;
	Global_47790[103].f_8[0] = 214;
	Global_47790[103].f_8[1] = 215;
	Global_47790[103].f_8[2] = 216;
	Global_47790[103].f_8[3] = 217;
	Global_47790[103].f_8[4] = 218;
	Global_47790[103].f_8[5] = 219;
	Global_47790[103].f_8[6] = 220;
	Global_47790[103].f_8[7] = 221;
	Global_47790[104].f_45 = 0;
	Global_47790[104].f_31 = 0;
	Global_47790[104].f_42 = 0;
	Global_47790[104].f_43 = 0;
	Global_47790[104].f_2 = 2;
	Global_47790[104].f_3[0] = 60;
	Global_47790[104].f_3[1] = 2;
	Global_47790[104].f_30 = 7;
	Global_47790[104].f_8[0] = 222;
	Global_47790[104].f_8[1] = 223;
	Global_47790[104].f_8[2] = 224;
	Global_47790[104].f_8[3] = 225;
	Global_47790[104].f_8[4] = 226;
	Global_47790[104].f_8[5] = 227;
	Global_47790[104].f_8[6] = 228;
	Global_47790[105].f_45 = 0;
	Global_47790[105].f_31 = 0;
	Global_47790[105].f_42 = 0;
	Global_47790[105].f_43 = 0;
	Global_47790[105].f_2 = 2;
	Global_47790[105].f_3[0] = 61;
	Global_47790[105].f_3[1] = 2;
	Global_47790[105].f_30 = 6;
	Global_47790[105].f_8[0] = 229;
	Global_47790[105].f_8[1] = 230;
	Global_47790[105].f_8[2] = 231;
	Global_47790[105].f_8[3] = 232;
	Global_47790[105].f_8[4] = 233;
	Global_47790[105].f_8[5] = 234;
	Global_47790[106].f_45 = 0;
	Global_47790[106].f_31 = 0;
	Global_47790[106].f_42 = 0;
	Global_47790[106].f_43 = 0;
	Global_47790[106].f_2 = 2;
	Global_47790[106].f_3[0] = 62;
	Global_47790[106].f_3[1] = 2;
	Global_47790[106].f_30 = 6;
	Global_47790[106].f_8[0] = 235;
	Global_47790[106].f_8[1] = 236;
	Global_47790[106].f_8[2] = 237;
	Global_47790[106].f_8[3] = 238;
	Global_47790[106].f_8[4] = 239;
	Global_47790[106].f_8[5] = 240;
	Global_47790[107].f_45 = 0;
	Global_47790[107].f_31 = 0;
	Global_47790[107].f_42 = 0;
	Global_47790[107].f_43 = 0;
	Global_47790[107].f_2 = 1;
	Global_47790[107].f_3[0] = 36;
	Global_47790[107].f_30 = 1;
	Global_47790[107].f_8[0] = 241;
	Global_47790[108].f_45 = 0;
	Global_47790[108].f_31 = 0;
	Global_47790[108].f_42 = 0;
	Global_47790[108].f_43 = 0;
	Global_47790[108].f_2 = 1;
	Global_47790[108].f_3[0] = 36;
	Global_47790[108].f_30 = 1;
	Global_47790[108].f_8[0] = 242;
	Global_47790[109].f_45 = 0;
	Global_47790[109].f_31 = 0;
	Global_47790[109].f_42 = 0;
	Global_47790[109].f_43 = 0;
	Global_47790[109].f_2 = 1;
	Global_47790[109].f_3[0] = 36;
	Global_47790[109].f_30 = 1;
	Global_47790[109].f_8[0] = 243;
	Global_47790[110].f_45 = 0;
	Global_47790[110].f_31 = 0;
	Global_47790[110].f_42 = 0;
	Global_47790[110].f_43 = 0;
	Global_47790[110].f_2 = 1;
	Global_47790[110].f_3[0] = 65;
	Global_47790[110].f_30 = 1;
	Global_47790[110].f_8[0] = 244;
	Global_47790[111].f_45 = 0;
	Global_47790[111].f_31 = 0;
	Global_47790[111].f_42 = 0;
	Global_47790[111].f_43 = 0;
	Global_47790[111].f_2 = 1;
	Global_47790[111].f_3[0] = 65;
	Global_47790[111].f_30 = 1;
	Global_47790[111].f_8[0] = 245;
	Global_47790[112].f_45 = 0;
	Global_47790[112].f_31 = 0;
	Global_47790[112].f_42 = 0;
	Global_47790[112].f_43 = 0;
	Global_47790[112].f_2 = 1;
	Global_47790[112].f_3[0] = 65;
	Global_47790[112].f_30 = 1;
	Global_47790[112].f_8[0] = 246;
	Global_47790[113].f_45 = 0;
	Global_47790[113].f_31 = 0;
	Global_47790[113].f_42 = 0;
	Global_47790[113].f_43 = 0;
	Global_47790[113].f_2 = 1;
	Global_47790[113].f_3[0] = 65;
	Global_47790[113].f_30 = 1;
	Global_47790[113].f_8[0] = 247;
	Global_47790[114].f_45 = 0;
	Global_47790[114].f_31 = 0;
	Global_47790[114].f_42 = 0;
	Global_47790[114].f_43 = 0;
	Global_47790[114].f_2 = 2;
	Global_47790[114].f_3[0] = 19;
	Global_47790[114].f_3[1] = 1;
	Global_47790[114].f_30 = 21;
	Global_47790[114].f_8[0] = 249;
	Global_47790[114].f_8[1] = 250;
	Global_47790[114].f_8[2] = 251;
	Global_47790[114].f_8[3] = 252;
	Global_47790[114].f_8[4] = 253;
	Global_47790[114].f_8[5] = 254;
	Global_47790[114].f_8[6] = 255;
	Global_47790[114].f_8[7] = 256;
	Global_47790[114].f_8[8] = 257;
	Global_47790[114].f_8[9] = 258;
	Global_47790[114].f_8[10] = 259;
	Global_47790[114].f_8[11] = 260;
	Global_47790[114].f_8[12] = 261;
	Global_47790[114].f_8[13] = 262;
	Global_47790[114].f_8[14] = 263;
	Global_47790[114].f_8[15] = 264;
	Global_47790[114].f_8[16] = 265;
	Global_47790[114].f_8[17] = 266;
	Global_47790[114].f_8[18] = 267;
	Global_47790[114].f_8[19] = 268;
	Global_47790[114].f_8[20] = 269;
	Global_47790[115].f_45 = 0;
	Global_47790[115].f_31 = 0;
	Global_47790[115].f_42 = 0;
	Global_47790[115].f_43 = 0;
	Global_47790[115].f_2 = 4;
	Global_47790[115].f_3[0] = 0;
	Global_47790[115].f_3[1] = 1;
	Global_47790[115].f_3[2] = 2;
	Global_47790[115].f_3[3] = 16;
	Global_47790[115].f_30 = 1;
	Global_47790[115].f_8[0] = 270;
	Global_47790[116].f_45 = 0;
	Global_47790[116].f_31 = 0;
	Global_47790[116].f_42 = 0;
	Global_47790[116].f_43 = 0;
	Global_47790[116].f_2 = 4;
	Global_47790[116].f_3[0] = 0;
	Global_47790[116].f_3[1] = 1;
	Global_47790[116].f_3[2] = 2;
	Global_47790[116].f_3[3] = 16;
	Global_47790[116].f_30 = 1;
	Global_47790[116].f_8[0] = 271;
	Global_47790[117].f_45 = 0;
	Global_47790[117].f_31 = 0;
	Global_47790[117].f_42 = 0;
	Global_47790[117].f_43 = 0;
	Global_47790[117].f_2 = 4;
	Global_47790[117].f_3[0] = 0;
	Global_47790[117].f_3[1] = 1;
	Global_47790[117].f_3[2] = 2;
	Global_47790[117].f_3[3] = 16;
	Global_47790[117].f_30 = 1;
	Global_47790[117].f_8[0] = 272;
	Global_47790[118].f_45 = 0;
	Global_47790[118].f_31 = 0;
	Global_47790[118].f_42 = 0;
	Global_47790[118].f_43 = 0;
	Global_47790[118].f_2 = 4;
	Global_47790[118].f_3[0] = 0;
	Global_47790[118].f_3[1] = 1;
	Global_47790[118].f_3[2] = 2;
	Global_47790[118].f_3[3] = 16;
	Global_47790[118].f_30 = 1;
	Global_47790[118].f_8[0] = 273;
	Global_47790[119].f_45 = 0;
	Global_47790[119].f_31 = 0;
	Global_47790[119].f_42 = 0;
	Global_47790[119].f_43 = 0;
	Global_47790[119].f_2 = 4;
	Global_47790[119].f_3[0] = 0;
	Global_47790[119].f_3[1] = 1;
	Global_47790[119].f_3[2] = 2;
	Global_47790[119].f_3[3] = 16;
	Global_47790[119].f_30 = 1;
	Global_47790[119].f_8[0] = 274;
	Global_47790[120].f_45 = 0;
	Global_47790[120].f_31 = 0;
	Global_47790[120].f_42 = 0;
	Global_47790[120].f_43 = 0;
	Global_47790[120].f_2 = 4;
	Global_47790[120].f_3[0] = 0;
	Global_47790[120].f_3[1] = 1;
	Global_47790[120].f_3[2] = 2;
	Global_47790[120].f_3[3] = 16;
	Global_47790[120].f_30 = 1;
	Global_47790[120].f_8[0] = 275;
	Global_47790[121].f_45 = 0;
	Global_47790[121].f_31 = 0;
	Global_47790[121].f_42 = 0;
	Global_47790[121].f_43 = 0;
	Global_47790[121].f_2 = 4;
	Global_47790[121].f_3[0] = 0;
	Global_47790[121].f_3[1] = 1;
	Global_47790[121].f_3[2] = 2;
	Global_47790[121].f_3[3] = 16;
	Global_47790[121].f_30 = 1;
	Global_47790[121].f_8[0] = 276;
	return;
}

void func_70() // Position - 0xE75A
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

