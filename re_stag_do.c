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
	char* sLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	float fLocal_43 = 0f;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	BOOL bLocal_50 = 0;
	BOOL bLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	Ped pedLocal_55 = 0;
	Ped pedLocal_56 = 0;
	Ped pedLocal_57 = 0;
	Ped pedLocal_58 = 0;
	Vehicle veLocal_59 = 0;
	var uLocal_60 = 4;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	Vehicle veLocal_65 = 0;
	Object obLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	float fLocal_76 = 0f;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
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
	float fLocal_102 = 0f;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	float fLocal_112 = 0f;
	int iLocal_113 = 0;
	BOOL bLocal_114 = 0;
	BOOL bLocal_115 = 0;
	BOOL bLocal_116 = 0;
	BOOL bLocal_117 = 0;
	BOOL bLocal_118 = 0;
	BOOL bLocal_119 = 0;
	BOOL bLocal_120 = 0;
	BOOL bLocal_121 = 0;
	BOOL bLocal_122 = 0;
	BOOL bLocal_123 = 0;
	BOOL bLocal_124 = 0;
	BOOL bLocal_125 = 0;
	BOOL bLocal_126 = 0;
	BOOL bLocal_127 = 0;
	BOOL bLocal_128 = 0;
	BOOL bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	Vehicle veLocal_132 = 0;
	Vehicle veLocal_133 = 0;
	Cam caLocal_134 = 0;
	Cam caLocal_135 = 0;
	var uLocal_136 = 16;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	BOOL bLocal_301 = 0;
	char* sLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	BOOL bLocal_310 = 0;
	BOOL bLocal_311 = 0;
	BOOL bLocal_312 = 0;
	BOOL bLocal_313 = 0;
	BOOL bLocal_314 = 0;
	BOOL bLocal_315 = 0;
	BOOL bLocal_316 = 0;
	BOOL bLocal_317 = 0;
	int iLocal_318 = 0;
	Blip blLocal_319 = 0;
	Blip blLocal_320 = 0;
	Blip blLocal_321 = 0;
	Blip blLocal_322 = 0;
	var uScriptParam_323 = 0;
	var uScriptParam_324 = 5;
	var uScriptParam_325 = 0;
	var uScriptParam_326 = 0;
	var uScriptParam_327 = 0;
	var uScriptParam_328 = 0;
	var uScriptParam_329 = 0;
	var uScriptParam_330 = 0;
	var uScriptParam_331 = 0;
	var uScriptParam_332 = 0;
	var uScriptParam_333 = 0;
	var uScriptParam_334 = 0;
	var uScriptParam_335 = 0;
	var uScriptParam_336 = 0;
	var uScriptParam_337 = 0;
	var uScriptParam_338 = 0;
	var uScriptParam_339 = 0;
	var uScriptParam_340 = 5;
	var uScriptParam_341 = 0;
	var uScriptParam_342 = 0;
	var uScriptParam_343 = 0;
	var uScriptParam_344 = 0;
	var uScriptParam_345 = 0;
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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_43 = 20f;
	bLocal_117 = true;
	iLocal_308 = 6000;
	uLocal_52 = Vector3(uScriptParam_323.f_1[0]);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(pedLocal_55))
			if (PED::IS_PED_IN_GROUP(pedLocal_55))
				PED::REMOVE_PED_FROM_GROUP(pedLocal_55);
	
		if (!PED::IS_PED_INJURED(pedLocal_57))
			if (PED::IS_PED_IN_GROUP(pedLocal_57))
				PED::REMOVE_PED_FROM_GROUP(pedLocal_57);
	
		func_183();
	}

	if (func_182(283, 1))
		SCRIPT::TERMINATE_THIS_THREAD();

	if (func_153(uLocal_52, -1, 0, false, false))
	{
		if (CLOCK::GET_CLOCK_HOURS() > 2 && CLOCK::GET_CLOCK_HOURS() < 15 && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	
		func_150(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_116)
		{
			if (!func_149())
				if (func_148())
					func_183();
		
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_SDRM", 0);
		
			switch (iLocal_48)
			{
				case 0:
					if (func_136())
						func_183();
				
					if (bLocal_50)
					{
						bLocal_51 = true;
						iLocal_48 = 1;
					}
					else
					{
						func_127();
					}
					break;
			
				case 1:
					func_126();
				
					if (!bLocal_114)
					{
						func_125();
						func_122();
						func_111();
					
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_318))
							func_110();
					}
					else
					{
						func_107();
					
						if (!bLocal_124)
							func_105();
					
						func_97();
						func_95();
						func_79();
						func_78(pedLocal_55, false);
						!bLocal_121;
					
						if (iLocal_49 == 0 && !bLocal_118)
						{
							func_74();
							func_72();
						}
						else
						{
							func_67();
						}
					
						if (iLocal_49 == 3)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_87, true) < 100f)
							{
								if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
									CUTSCENE::REQUEST_CUTSCENE("sdrm_mcs_2", 8);
							
								if (CUTSCENE::IS_CUTSCENE_ACTIVE())
								{
									if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
									{
										if (!PED::IS_PED_INJURED(pedLocal_55) && !PED::IS_PED_INJURED(pedLocal_57) && !PED::IS_PED_INJURED(pedLocal_56) && !PED::IS_PED_INJURED(pedLocal_58) && !ENTITY::IS_ENTITY_DEAD(veLocal_132, false))
										{
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Groom", pedLocal_55, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Groomsman", pedLocal_57, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Bride", pedLocal_56, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Father_of_the_bride", pedLocal_58, 0);
										}
									}
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_ACTIVE())
							{
								CUTSCENE::REMOVE_CUTSCENE();
							}
						
							if (bLocal_118)
							{
								if (func_66(true, false, true))
									func_31();
							}
							else if (!PED::IS_PED_INJURED(pedLocal_57))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_57, false))
								{
									if (HUD::DOES_BLIP_EXIST(blLocal_322))
									{
										HUD::REMOVE_BLIP(&blLocal_322);
									
										if (HUD::DOES_BLIP_EXIST(blLocal_320))
											HUD::REMOVE_BLIP(&blLocal_320);
									
										if (!HUD::DOES_BLIP_EXIST(blLocal_320))
											blLocal_320 = func_29(uLocal_67, true);
									}
								}
							}
						}
					
						if (func_3())
						{
							if (!PED::IS_PED_INJURED(pedLocal_55))
								TASK::TASK_SMART_FLEE_PED(pedLocal_55, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						
							if (!PED::IS_PED_INJURED(pedLocal_57))
								TASK::TASK_SMART_FLEE_PED(pedLocal_57, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						
							if (!PED::IS_PED_INJURED(pedLocal_56))
								TASK::TASK_SMART_FLEE_PED(pedLocal_56, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						
							if (!PED::IS_PED_INJURED(pedLocal_58))
								TASK::TASK_SMART_FLEE_PED(pedLocal_58, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						
							func_2();
						}
					}
				
					func_1();
					break;
			}
		}
		else
		{
			func_183();
		}
	}

	return;
}

void func_1() // Position - 0x395
{
	return;
}

void func_2() // Position - 0x39D
{
	func_183();
	return;
}

BOOL func_3() // Position - 0x3A9
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_INJURED(pedLocal_55))
		{
			return true;
		}
		else
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), true) || ENTITY::IS_ENTITY_IN_WATER(pedLocal_55))
				return true;
		
			if (bLocal_116)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_27();
				
					if (_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_police", 4, 0, 0, 0))
						return true;
				}
			}
		}
	}

	if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_59, false) || VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(veLocal_59) || ENTITY::IS_ENTITY_IN_WATER(veLocal_59))
		{
			func_27();
		
			if (_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0))
				return true;
		}
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), veLocal_59))
				{
					func_27();
				
					if (_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0))
						return true;
				}
			}
		}
	}
	else
	{
		func_27();
	
		if (_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0))
			return true;
	}

	if (!PED::IS_PED_INJURED(pedLocal_55))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_59, false))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
				}
			}
		
			return true;
		}
	}

	if (iLocal_49 >= 1)
	{
		if (bLocal_123)
		{
			if (PED::IS_PED_INJURED(pedLocal_57))
			{
				func_27();
				return true;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_57, PLAYER::PLAYER_PED_ID(), true))
			{
				func_27();
				return true;
			}
		}
	
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(veLocal_59, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
			{
				if (!bLocal_126)
				{
					func_27();
				
					if (_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_comeba", 4, 0, 0, 0))
						bLocal_126 = true;
				}
			}
			else
			{
				bLocal_126 = false;
			}
		
			if (!ENTITY::IS_ENTITY_AT_ENTITY(veLocal_59, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0))
				return true;
		}
	}

	if (iLocal_49 == 3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_INJURED(pedLocal_56) || PED::IS_PED_INJURED(pedLocal_58))
				return true;
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_56, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_58, PLAYER::PLAYER_PED_ID(), true))
				return true;
	
		if (!PED::IS_PED_INJURED(pedLocal_57))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_57, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0) && bLocal_310)
			{
				if (!bLocal_127)
				{
					func_27();
				
					if (_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_nobest", 4, 0, 0, 0))
						bLocal_127 = true;
				}
			}
			else
			{
				bLocal_127 = false;
			}
		
			if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_57, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0))
				return true;
		}
	}

	return false;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6AC
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_5(sParam2, iParam3, false);
}

BOOL func_5(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x6FA
{
	Global_21726 = 0;

	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = false;
					Global_20382 = 0;
				}
				else
				{
					func_25();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			return 0;
	
		if (func_24(8, -1))
			return 0;
	
		Global_21801 = Vector3(Global_21795);
		func_23();
		Global_21014 = Vector3(Global_21179);
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = Vector3(Global_21756);
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = Vector3(Global_22729);
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
	
		if (Global_21731)
		{
			MISC::CLEAR_BIT(&G_SleepModeOnOn25, 20);
			MISC::CLEAR_BIT(&G_SleepModeOffOn11, 17);
			MISC::CLEAR_BIT(&Global_8255, 0);
		
			if (bParam2)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_9058[Global_20383][0].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_20383.f_1 > 3)
					return 0;
			}
		
			if (Global_20349 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_14())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_78558)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						return 0;
				
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						return 0;
				}
			}
		
			if (func_13())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
				{
					case 7:
						return 0;
				
					case 8:
						return 0;
				
					case 9:
						break;
				
					case 10:
						break;
				
					default:
						break;
				}
			
				if (IS_BIT_SET(G_SleepModeOnOn25, 9))
					return 0;
			}
		
			func_12();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_11();
		func_6();
		return 1;
	}

	if (Global_21725 == 5)
		return 0;

	if (iParam1 < Global_21727 || iParam1 == Global_21727)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_25();
	}

	return 0;
}

void func_6() // Position - 0x9C8
{
	if (!func_7())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), Vector3(Global_21344), 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_7() // Position - 0x9FF
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_8(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID()].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_8(Player plParam0) // Position - 0xA62
{
	return func_9(plParam0, 20);
}

BOOL func_9(Player plParam0, int iParam1) // Position - 0xA72
{
	return IS_BIT_SET(Global_1894573[plParam0].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0xA8A
{
	return -1;
}

void func_11() // Position - 0xA93
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_20593[i], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21725 = 1;
	return;
}

void func_12() // Position - 0xAC4
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = Vector3(Global_21807);
	Global_21825 = Vector3(Global_21813);
	Global_21780 = Global_21779;
	Global_21849 = Vector3(Global_21831);
	Global_21855 = Vector3(Global_21837);
	Global_21861 = Vector3(Global_21843);
	Global_21867 = Vector3(Global_21873);
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = Vector3(Global_21756);
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	MISC::CLEAR_BIT(&G_SleepModeOffOn11, 16);
	return;
}

BOOL func_13() // Position - 0xB59
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

BOOL func_14() // Position - 0xB80
{
	int num;
	int weaponHash;

	if (Global_78558)
	{
		num = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (weaponHash == joaat("WEAPON_SNIPERRIFLE") || weaponHash == joaat("WEAPON_HEAVYSNIPER") || weaponHash == joaat("WEAPON_REMOTESNIPER"))
				num = 1;
	
		if (CAM::IS_AIM_CAM_ACTIVE() && num == 1)
			return true;
		else
			return false;
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
			return true;
		else
			return false;

	return true;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xC19
{
	if (func_22(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[0])
				Global_20383 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[1])
				Global_20383 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[2])
				Global_20383 = CHAR_TREVOR;
			else
				Global_20383 = CHAR_MICHAEL;
	}
	else
	{
		Global_20383 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20383 == _CHAR_NULL)
			Global_20383 = CHAR_MULTIPLAYER;
	
		if (Global_78558)
			Global_20383 = CHAR_MULTIPLAYER;
	
		if (Global_20383 > CHAR_MULTIPLAYER)
			Global_20383 = CHAR_MULTIPLAYER;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xCBB
{
	func_17();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_17() // Position - 0xCD4
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_18(character) && !func_22(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_18(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_18(eCharacter echParam0) // Position - 0xDD1
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xDDD
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xE1A
{
	if (func_18(character))
		return func_21(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_21(eCharacter echParam0) // Position - 0xE3F
{
	return Global_2028[echParam0];
}

BOOL func_22(int iParam0) // Position - 0xE4E
{
	return Global_43257 == iParam0;
}

void func_23() // Position - 0xE5C
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_21014[i] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_21014[i].f_1), "", 24);
		Global_21014[i].f_7 = 0;
		Global_21014[i].f_8 = 0;
	}

	Global_21014.f_161 = -99;
	Global_21014.f_162 = Vector3(0f, 0f, 0f);
	return;
}

BOOL func_24(int iParam0, int iParam1) // Position - 0xEB3
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1653913.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}

void func_25() // Position - 0xEEB
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22736 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1 == 9 || Global_20382 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21725 = 6;
		return;
	}

	return;
}

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0xF42
{
	Global_21179 = Vector3(*uParam0);
	Global_7569 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;

	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}

	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}

	return;
}

void func_27() // Position - 0xF98
{
	Global_20591 = 0;
	func_28();
	return;
}

void func_28() // Position - 0xFA8
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22736 = 0;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21725 = 6;
	}

	return;
}

Blip func_29(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0xFC9
{
	Blip blip;

	blip = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(blip, bParam3);
	return blip;
}

var func_30(BOOL bParam0, var uParam1, var uParam2) // Position - 0xFF5
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_31() // Position - 0x100C
{
	switch (iLocal_131)
	{
		case 0:
			func_27();
			SYSTEM::WAIT(0);
			func_58(true, true, true, false, false, false, false);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
			bLocal_310 = false;
			iLocal_131 = iLocal_131 + 1;
			break;
	
		case 1:
			iLocal_131 = iLocal_131 + 1;
			break;
	
		case 2:
			if (!PED::IS_PED_INJURED(pedLocal_55) && !PED::IS_PED_INJURED(pedLocal_57) && !PED::IS_PED_INJURED(pedLocal_56) && !PED::IS_PED_INJURED(pedLocal_58) && !ENTITY::IS_ENTITY_DEAD(veLocal_132, false))
			{
				if (func_57())
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(veLocal_132, "SDRM_Car", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_55, "Groom", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_57, "Groomsman", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_56, "Bride", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_58, "Father_of_the_bride", 0, 0, 0);
					CUTSCENE::START_CUTSCENE(4);
					iLocal_131 = iLocal_131 + 1;
				}
			}
			break;
	
		case 3:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_132, false))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_132, 1084227584);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(veLocal_132, true);
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
				}
			
				iLocal_131 = iLocal_131 + 1;
			}
			break;
	
		case 4:
			PED::DELETE_PED(&pedLocal_55);
			PED::DELETE_PED(&pedLocal_57);
			PED::DELETE_PED(&pedLocal_56);
			PED::DELETE_PED(&pedLocal_58);
			func_58(false, true, true, false, false, false, false);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
			func_32();
			break;
	}

	return;
}

void func_32() // Position - 0x116F
{
	while (!func_56())
	{
		SYSTEM::WAIT(0);
	}

	func_36(-1, 0);
	func_33();
	func_183();
	return;
}

void func_33() // Position - 0x1195
{
	func_34();
	return;
}

int func_34() // Position - 0x11A2
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x11ED
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_36(int iParam0, int iParam1) // Position - 0x1215
{
	if (iParam0 == -1)
		iParam0 = func_54();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_53(iParam0))
	{
		func_52(iParam0, iParam1);
	
		if (!func_51(51))
		{
			func_47("RE_REWARD" /*Some Random Events will reward the player with stat boosts or money.*/, 1, 0, 4000, 10000, func_50(), 0, 138, 0);
			func_46(51);
		}
	
		if (func_45(iParam0))
			Global_113648.f_24997.f_2 = 3;
	
		if (func_44(iParam0, iParam1) != 322)
			func_38(func_44(iParam0, iParam1), uLocal_45, uLocal_45.f_1);
	
		Global_113636 = iParam1;
	
		if (Global_113634 == 0)
			if (Global_113637 == 1 || Global_113637 == 5 || Global_113637 == 11 || Global_113637 == 25)
				func_37(2);
			else if (Global_113637 == 26 || Global_113637 == 8 || Global_113637 == 17)
				func_37(7);
			else
				func_37(1);
	}

	return;
}

void func_37(int iParam0) // Position - 0x1318
{
	Global_113634 = iParam0;
	return;
}

void func_38(int iParam0, var uParam1, var uParam2) // Position - 0x1326
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		_STAT_SET_PACKED_BOOL(891 + iParam0, true, -1);
	}

	flag = true;

	if (Global_113648.f_10196[iParam0].f_5 == 1)
	{
		if (Global_113648.f_10196[iParam0].f_6 == 11 || Global_113648.f_10196[iParam0].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_113648.f_10196[iParam0].f_5 = 1;
		Global_113648.f_10196[iParam0].f_10 = uParam1;
		Global_113648.f_10196[iParam0].f_11 = uParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_39();

	return;
}

void func_39() // Position - 0x140C
{
	int num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float value;
	int value2;

	num = 0;
	Global_113384 = 0;
	Global_113385 = 0;
	Global_113386 = 0;
	Global_113387 = 0;
	Global_113388 = 0;
	Global_113389 = 0;
	Global_113390 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_113648.f_10196.f_3853;
	Global_113648.f_10196.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_113648.f_10196[num].f_5 == 1)
		{
			switch (Global_113648.f_10196[num].f_6)
			{
				case 1:
					Global_113384 = Global_113384 + 1;
					num2 = num2 + Global_113648.f_10196[num].f_4;
					break;
			
				case 3:
					Global_113385 = Global_113385 + 1;
					num3 = num3 + Global_113648.f_10196[num].f_4;
					break;
			
				case 5:
					Global_113386 = Global_113386 + 1;
					num4 = num4 + Global_113648.f_10196[num].f_4;
					break;
			
				case 7:
					Global_113387 = Global_113387 + 1;
					num5 = num5 + Global_113648.f_10196[num].f_4;
					break;
			
				case 9:
					Global_113388 = Global_113388 + 1;
					num6 = num6 + (Global_113648.f_10196[num].f_4 * 4f);
					break;
			
				case 11:
					Global_113389 = Global_113389 + 1;
					num7 = num7 + Global_113648.f_10196[num].f_4;
					break;
			
				case 13:
					Global_113390 = Global_113390 + 1;
					num8 = num8 + Global_113648.f_10196[num].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_113367 > 0)
		if (Global_113384 == Global_113367)
			num2 = 55f;

	if (Global_113368 > 0)
		if (Global_113385 == Global_113368)
			num3 = 10f;

	if (Global_113369 > 0)
		if (Global_113386 == Global_113369)
			num4 = 0f;

	if (Global_113370 > 0)
		if (Global_113387 == Global_113370)
			num5 = 10f;

	if (Global_113371 > 0)
	{
		if (Global_113388 == Global_113371 || (Global_113371 * 10) / Global_113388 < 41 || Global_113388 > Global_113374 || Global_113388 == Global_113374)
		{
			if (!IS_BIT_SET(Global_113648.f_10196.f_3856, 14))
			{
				if (Global_113388 == Global_113371)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113371, 0);
					MISC::SET_BIT(&(Global_113648.f_10196.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_113372 > 0)
		if (Global_113389 == Global_113372)
			num7 = 15f;

	if (Global_113373 > 0)
		if (Global_113390 == Global_113373)
			num8 = 5f;

	Global_113648.f_10196.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_113388 > Global_113374 || Global_113388 == Global_113374)
		value2 = Global_113374;
	else
		value2 = Global_113388;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113384, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113367, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113385, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113368, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113386, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113369, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113387, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113370, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), value2, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113374, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_113390 + Global_113389, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_113373 + Global_113372, true);
	Global_113391 = (Global_113384 * 100) / Global_113367;
	Global_113393 = ((Global_113386 + Global_113385) * 100) / (Global_113369 + Global_113368);
	Global_113392 = ((Global_113387 + value2) * 100) / (Global_113370 + Global_113374);
	Global_113394 = ((Global_113389 + Global_113390) * 100) / (Global_113372 + Global_113373);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113648.f_10196.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113391, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113392, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113393, true);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_113648.f_10196.f_3853))
		func_41(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78558)
		{
			if (func_40() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113382 = 0;
			
				if (!Global_63362)
					func_34();
			}
		}
	}

	return;
}

int func_40() // Position - 0x18CA
{
	return Global_32163;
}

BOOL func_41(int iParam0, int iParam1) // Position - 0x18D5
{
	int achievementProgress;

	if (iParam0 < 0)
		return false;

	if (iParam0 > 78)
		return false;

	if (iParam1 <= 0 || iParam1 > 100)
		return false;

	achievementProgress = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);

	if (iParam1 > achievementProgress)
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);

	return false;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1926
{
	if (iParam2 == -1)
		iParam2 = func_43();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_43() // Position - 0x1944
{
	return Global_1574918;
}

int func_44(int iParam0, int iParam1) // Position - 0x1950
{
	switch (iParam0)
	{
		case 0:
			return 250;
	
		case 1:
			return 226;
	
		case 2:
			return 243;
	
		case 3:
			return 256;
	
		case 4:
			return 259;
	
		case 5:
			if (iParam1 == 1)
				return 281;
		
			if (iParam1 == 2)
				return 282;
			break;
	
		case 6:
			return 265;
	
		case 7:
			return 218;
	
		case 9:
			if (iParam1 == 1)
				return 271;
		
			if (iParam1 == 2)
				return 272;
		
			if (iParam1 == 3)
				return 273;
		
			if (iParam1 == 4)
				return 274;
		
			if (iParam1 == 5)
				return 275;
		
			if (iParam1 == 6)
				return 276;
		
			if (iParam1 == 7)
				return 277;
		
			if (iParam1 == 8)
				return 278;
		
			if (iParam1 == 9)
				return 279;
		
			if (iParam1 == 10)
				return 280;
			break;
	
		case 10:
			return 219;
	
		case 11:
			if (iParam1 == 1)
				return 246;
		
			if (iParam1 == 2)
				return 247;
		
			if (iParam1 == 3)
				return 248;
		
			if (iParam1 == 4)
				return 249;
			break;
	
		case 12:
			return 254;
	
		case 13:
			if (iParam1 == 1)
				return 260;
		
			if (iParam1 == 2)
				return 261;
		
			if (iParam1 == 3)
				return 262;
		
			if (iParam1 == 4)
				return 264;
			break;
	
		case 14:
			return 283;
	
		case 15:
			if (iParam1 == 1)
				return 224;
		
			if (iParam1 == 2)
				return 225;
			break;
	
		case 16:
			return 252;
	
		case 17:
			if (iParam1 == 1)
				return 244;
		
			if (iParam1 == 2)
				return 245;
			break;
	
		case 18:
			return 253;
	
		case 19:
			return 215;
	
		case 20:
			return 216;
	
		case 21:
			return 251;
	
		case 22:
			if (iParam1 == 1)
				return 221;
		
			if (iParam1 == 2)
				return 222;
			break;
	
		case 23:
			if (iParam1 == 1)
				return 213;
		
			if (iParam1 == 2)
				return 214;
			break;
	
		case 24:
			return 242;
	
		case 25:
			if (iParam1 == 1)
				return 267;
		
			if (iParam1 == 2)
				return 268;
		
			if (iParam1 == 3)
				return 269;
			break;
	
		case 8:
			return 255;
	
		case 26:
			if (iParam1 == 1)
				return 227;
		
			if (iParam1 == 2)
				return 228;
			break;
	
		case 27:
			if (iParam1 == 1)
				return 257;
		
			if (iParam1 == 2)
				return 258;
			break;
	
		case 28:
			return 217;
	
		case 29:
			if (iParam1 == 1)
				return 229;
		
			if (iParam1 == 2)
				return 230;
		
			if (iParam1 == 3)
				return 231;
			break;
	
		case 30:
			return 285;
	
		case 31:
			return 318;
	
		case 32:
			return 319;
	
		case 33:
			return 320;
	}

	return 322;
}

BOOL func_45(int iParam0) // Position - 0x1CC4
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
	}

	return true;
}

void func_46(int iParam0) // Position - 0x1CF3
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_113648.f_20412.f_150[i], offset);

	return;
}

void func_47(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1D35
{
	func_48(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_48(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1D56
{
	int i;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_113648.f_20412[i], sParam0))
			return;
	}

	if (Global_113648.f_20412.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[Global_113648.f_20412.f_145], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[Global_113648.f_20412.f_145].f_4), sParam1, 16);
		Global_113648.f_20412[Global_113648.f_20412.f_145].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_113648.f_20412[Global_113648.f_20412.f_145].f_9 = iParam5;
		Global_113648.f_20412[Global_113648.f_20412.f_145].f_11 = iParam6;
		Global_113648.f_20412[Global_113648.f_20412.f_145].f_12 = iParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_113648.f_20412[Global_113648.f_20412.f_145].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_113648.f_20412[Global_113648.f_20412.f_145].f_10 = -1;
	
		Global_113648.f_20412.f_145 = Global_113648.f_20412.f_145 + 1;
		func_49();
	}

	return;
}

void func_49() // Position - 0x1F29
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_113648.f_20412.f_146[i] = 0;
	}

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_20412[i].f_11, 0))
			if (Global_113648.f_20412[i].f_12 > Global_113648.f_20412.f_146[0])
				Global_113648.f_20412.f_146[0] = Global_113648.f_20412[i].f_12;
	
		if (IS_BIT_SET(Global_113648.f_20412[i].f_11, 1))
			if (Global_113648.f_20412[i].f_12 > Global_113648.f_20412.f_146[1])
				Global_113648.f_20412.f_146[1] = Global_113648.f_20412[i].f_12;
	
		if (IS_BIT_SET(Global_113648.f_20412[i].f_11, 2))
			if (Global_113648.f_20412[i].f_12 > Global_113648.f_20412.f_146[2])
				Global_113648.f_20412.f_146[2] = Global_113648.f_20412[i].f_12;
	}

	return;
}

int func_50() // Position - 0x2040
{
	func_17();

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

BOOL func_51(int iParam0) // Position - 0x2086
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_113648.f_20412.f_150[i], num);

	return false;
}

void func_52(int iParam0, int iParam1) // Position - 0x20C6
{
	MISC::SET_BIT(&Global_113648.f_24997.f_8[iParam0], iParam1);
	return;
}

int func_53(int iParam0) // Position - 0x20E1
{
	int num;

	num = 1;

	switch (iParam0)
	{
		case 1:
			num = 5;
			break;
	
		case 5:
			num = 2;
			break;
	
		case 9:
			num = 10;
			break;
	
		case 11:
			num = 4;
			break;
	
		case 13:
			num = 4;
			break;
	
		case 15:
			num = 2;
			break;
	
		case 17:
			num = 2;
			break;
	
		case 22:
			num = 2;
			break;
	
		case 23:
			num = 2;
			break;
	
		case 25:
			num = 3;
			break;
	
		case 26:
			num = 2;
			break;
	
		case 27:
			num = 2;
			break;
	
		case 29:
			num = 3;
			break;
	}

	return num;
}

int func_54() // Position - 0x2192
{
	var unk;
	int unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_55(unk);
	return num;
}

int func_55(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x21AF
{
	switch (MISC::GET_HASH_KEY(&uParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
	
		case joaat("re_accident"):
			return 0;
	
		case joaat("re_arrests"):
			return 15;
	
		case joaat("re_atmrobbery"):
			return 1;
	
		case joaat("re_bikethief"):
			return 26;
	
		case joaat("re_border"):
			return 29;
	
		case joaat("re_burials"):
			return 24;
	
		case joaat("re_bus_tours"):
			return 2;
	
		case joaat("re_cartheft"):
			return 17;
	
		case joaat("re_chasethieves"):
			return 11;
	
		case joaat("re_crashrescue"):
			return 16;
	
		case joaat("re_cultshootout"):
			return 18;
	
		case joaat("re_dealgonewrong"):
			return 12;
	
		case joaat("re_domestic"):
			return 3;
	
		case joaat("re_drunkdriver"):
			return 27;
	
		case joaat("re_gang_intimidation"):
			return 20;
	
		case joaat("re_gangfight"):
			return 19;
	
		case joaat("re_getaway_driver"):
			return 4;
	
		case joaat("re_hitch_lift"):
			return 13;
	
		case joaat("re_homeland_security"):
			return 28;
	
		case joaat("re_lured"):
			return 7;
	
		case joaat("re_muggings"):
			return 25;
	
		case joaat("re_paparazzi"):
			return 10;
	
		case joaat("re_prisonerlift"):
			return 22;
	
		case joaat("re_prisonvanbreak"):
			return 21;
	
		case joaat("re_securityvan"):
			return 9;
	
		case joaat("re_shoprobbery"):
			return 5;
	
		case joaat("re_snatched"):
			return 6;
	
		case joaat("re_stag_do"):
			return 14;
	
		case joaat("re_yetarian"):
			return 30;
	
		case joaat("re_duel"):
			return 31;
	
		case joaat("re_seaplane"):
			return 32;
	
		case joaat("re_monkey"):
			return 33;
	}

	return -1;
}

BOOL func_56() // Position - 0x2389
{
	return true;
}

BOOL func_57() // Position - 0x2392
{
	BOOL hasCutsceneLoaded;

	hasCutsceneLoaded = CUTSCENE::HAS_CUTSCENE_LOADED();

	if (!Global_78557)
		if (!hasCutsceneLoaded)
			Global_78557 = true;

	return hasCutsceneLoaded;
}

void func_58(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x23B5
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_65(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_13())
				Global_20383.f_1 = 3;
		
			Global_21725 = 5;
		}
	
		func_64(true, bParam3, bParam2, false);
		Global_63368 = 1;
		Global_75696 = 1;
		G_DisableMessagesAndCalls1 = 1;
	}
	else
	{
		func_65(0);
		HUD::THEFEED_RESUME();
		Global_63368 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_64(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_62(PLAYER::PLAYER_ID()) && !_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0) && !func_59() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_62(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	
		G_DisableMessagesAndCalls1 = 0;
	}

	return;
}

BOOL func_59() // Position - 0x2502
{
	return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID()].f_36.f_18, 14);
}

BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0x251C
{
	BOOL flag;

	if (player == PLAYER::PLAYER_ID())
		flag = func_61(-1, false) == 8;
	else
		flag = Global_1853910[player].f_205 == 8;

	if (bCheckTeam == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
			flag = PLAYER::GET_PLAYER_TEAM(player) == 8;

	return flag;
}

int func_61(int iParam0, BOOL bParam1) // Position - 0x2567
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_43();

	if (Global_1575040[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574912[num2];
		bParam1;
	}

	return num;
}

BOOL func_62(Player plParam0) // Position - 0x25A8
{
	if (_NETWORK_IS_PLAYER_IN_SCTV(plParam0, 0))
		return true;

	if (func_63())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657589[plParam0].f_199, 2))
		return true;

	return false;
}

BOOL func_63() // Position - 0x25E7
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_64(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x25F5
{
	int num;

	num = 0;

	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			num = 1;
		}
	}

	return num;
}

void func_65(int iParam0) // Position - 0x2628
{
	if (iParam0 == 1)
		MISC::SET_BIT(&G_SleepModeOnOn25, 13);
	else
		MISC::CLEAR_BIT(&G_SleepModeOnOn25, 13);

	return;
}

BOOL func_66(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x264B
{
	Vehicle vehiclePedIsIn;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
		return false;

	if (bParam0)
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			return false;

	vehiclePedIsIn = 0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			return false;
	
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (bParam0)
			if (ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				return false;
	
		if (bParam2)
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) != PLAYER::PLAYER_PED_ID())
					return false;
	
		if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) > 1.011f)
				return false;
	}
	else if (bParam1)
	{
		return false;
	}

	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
		return false;

	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

void func_67() // Position - 0x2730
{
	if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false) && !ENTITY::IS_ENTITY_DEAD(pedLocal_55, false))
	{
		if (!bLocal_117)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_59, false) && PED::IS_PED_IN_VEHICLE(pedLocal_55, veLocal_59, false))
			{
				bLocal_117 = true;
			
				if (HUD::DOES_BLIP_EXIST(blLocal_319))
					HUD::REMOVE_BLIP(&blLocal_319);
			
				if (bLocal_122 && !bLocal_118)
					if (!HUD::DOES_BLIP_EXIST(blLocal_320))
						blLocal_320 = func_29(uLocal_67, true);
			
				!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS();
			}
		}
	
		if (!bLocal_117 && !bLocal_119)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_59, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(pedLocal_55, veLocal_59, false))
				{
					!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS();
				
					if (HUD::DOES_BLIP_EXIST(blLocal_319))
						HUD::REMOVE_BLIP(&blLocal_319);
				
					if (!HUD::DOES_BLIP_EXIST(blLocal_319))
					{
						blLocal_319 = func_70(pedLocal_55, false, 145);
						HUD::SET_BLIP_AS_FRIENDLY(blLocal_319, true);
					}
				
					bLocal_117 = false;
					bLocal_119 = true;
				}
			}
		}
	
		if (bLocal_117)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_59, false))
			{
				!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS();
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_319))
				{
					blLocal_319 = func_68(veLocal_59, false, false);
					HUD::SET_BLIP_AS_FRIENDLY(blLocal_319, true);
				}
			
				if (HUD::DOES_BLIP_EXIST(blLocal_320))
					HUD::REMOVE_BLIP(&blLocal_320);
			
				bLocal_117 = false;
			}
		
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_59, false) && !PED::IS_PED_IN_VEHICLE(pedLocal_55, veLocal_59, false))
			{
				!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS();
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_319))
				{
					blLocal_319 = func_68(veLocal_59, false, false);
					HUD::SET_BLIP_AS_FRIENDLY(blLocal_319, true);
				}
			
				if (HUD::DOES_BLIP_EXIST(blLocal_320))
					HUD::REMOVE_BLIP(&blLocal_320);
			
				bLocal_117 = false;
			}
		}
	}

	return;
}

Blip func_68(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x28BF
{
	return func_69(veParam0, !bParam1, bParam2);
}

Blip func_69(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x28D2
{
	Blip blip;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_ENTITY(veParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
		else
			HUD::SET_BLIP_COLOUR(blip, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return blip;
}

Blip func_70(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x2976
{
	Blip blip;

	blip = func_69(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2028[iParam2].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2028[iParam2].f_3));

	return blip;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x29C0
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_72() // Position - 0x29E2
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_55))
	{
		if (!PED::IS_PED_INJURED(pedLocal_55))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
				{
					if (HUD::DOES_BLIP_EXIST(blLocal_321))
					{
						HUD::REMOVE_BLIP(&blLocal_321);
					
						if (!HUD::DOES_BLIP_EXIST(blLocal_320))
							blLocal_320 = func_29(uLocal_67, true);
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false))
				{
					if (HUD::DOES_BLIP_EXIST(blLocal_321))
					{
						HUD::REMOVE_BLIP(&blLocal_321);
					
						if (!HUD::DOES_BLIP_EXIST(blLocal_320))
							blLocal_320 = func_29(uLocal_67, true);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(blLocal_320))
				{
					HUD::REMOVE_BLIP(&blLocal_320);
				
					if (!HUD::DOES_BLIP_EXIST(blLocal_321))
						blLocal_321 = func_70(pedLocal_55, false, 145);
				}
			
				PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID());
			}
			else if (HUD::DOES_BLIP_EXIST(blLocal_320))
			{
				HUD::REMOVE_BLIP(&blLocal_320);
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_321))
					blLocal_321 = func_70(pedLocal_55, false, 145);
			}
		
			if (!PED::IS_PED_IN_GROUP(pedLocal_55))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 10f, 10f, 10f, false, true, 0))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_55);
					PED::SET_PED_AS_GROUP_MEMBER(pedLocal_55, func_73());
					PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_55, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_55, 0);
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_55);
					PED::SET_PED_AS_GROUP_MEMBER(pedLocal_55, func_73());
					PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_55, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_55, 0);
				}
			}
		}
	}

	return;
}

int func_73() // Position - 0x2B76
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_74() // Position - 0x2B86
{
	if (!PED::IS_PED_INJURED(pedLocal_55))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_77())
			{
				if (PED::IS_PED_IN_GROUP(pedLocal_55))
					PED::REMOVE_PED_FROM_GROUP(pedLocal_55);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_GO_TO_ENTITY) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_GO_TO_ENTITY) != 0)
					TASK::TASK_GO_TO_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), -1, 6f, 1073741824, 1073741824, 0);
			
				if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false))
					TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_55, 0, 0);
			
				if (!bLocal_125)
				{
					if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					{
						bLocal_125 = true;
					
						if (func_76())
							func_75(&uLocal_136, "stagdau", "stagd_nogood", "stagd_nogood_1", 4, 0, 0);
						else
							func_75(&uLocal_136, "stagdau", "stagd_nogood", "stagd_nogood_2", 4, 0, 0);
					}
				}
			}
			else
			{
				bLocal_125 = false;
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_GO_TO_ENTITY) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_GO_TO_ENTITY) == 0 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_PERFORM_SEQUENCE) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_PERFORM_SEQUENCE) == 0)
				{
					TASK::CLEAR_PED_TASKS(pedLocal_55);
				
					if (!PED::IS_PED_IN_GROUP(pedLocal_55))
					{
						PED::SET_PED_AS_GROUP_MEMBER(pedLocal_55, func_73());
						PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_55, true);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_55, 0);
					}
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(pedLocal_55) && !PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false) && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_PERFORM_SEQUENCE) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_PERFORM_SEQUENCE) != 0)
		{
			PED::SET_PED_AS_GROUP_MEMBER(pedLocal_55, func_73());
			PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_55, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_55, 0);
		}
	}

	return;
}

BOOL func_75(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2D14
{
	func_26(uParam0, 145, sParam1, iParam5, iParam6, 0);

	if (iParam4 > 7)
		if (iParam4 < 12)
			iParam4 = 7;

	Global_21732 = false;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 1;
	Global_22718 = 0;
	Global_22722 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_22729, sParam3, 24);
	Global_2883585 = 0;
	return func_5(sParam2, iParam4, false);
}

BOOL func_76() // Position - 0x2D68
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), true))
			if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))))
				return true;

	return false;
}

BOOL func_77() // Position - 0x2DD3
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			if (!PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1)
					return true;
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
			if (!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
				return true;

	return false;
}

void func_78(Ped pedParam0, BOOL bParam1) // Position - 0x2EF5
{
	BOOL flag;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		flag = false;
	
		if (bParam1)
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(pedParam0))
				if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == PED::GET_VEHICLE_PED_IS_IN(pedParam0, false))
					flag = true;
		else
			flag = false;
	
		if (!PED::IS_PED_HEADTRACKING_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID()))
			if (!flag)
				TASK::TASK_LOOK_AT_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), -1, SLF_SLOW_TURN_RATE | 2048, 2);
		else if (flag)
			if (!AUDIO::IS_PED_IN_CURRENT_CONVERSATION(pedParam0))
				TASK::TASK_CLEAR_LOOK_AT(pedParam0);
	}

	return;
}

void func_79() // Position - 0x2F7C
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_55))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_55, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_93("stagd_chape_1"))
			{
				if (!HUD::DOES_BLIP_EXIST(blLocal_320))
					blLocal_320 = func_29(uLocal_67, true);
			
				bLocal_122 = true;
			}
		
			if (func_93("stagd_chape_3"))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			
				if (!PED::IS_PED_INJURED(pedLocal_55))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 30600);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_113);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
					}
				}
			}
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 13.5f, 13.5f, 13.5f, false, true, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(pedLocal_55, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (iLocal_49 == 0)
					{
						if (SYSTEM::TIMERB() > 5000)
						{
							if (iLocal_130 == 0)
							{
								if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								{
									func_92();
								
									if (_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", sLocal_302, 4, 0, 0, 0))
										bLocal_310 = true;
								
									bLocal_121 = true;
									iLocal_130 = iLocal_130 + 1;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
					
						if (SYSTEM::TIMERB() > 5000)
						{
							if (iLocal_130 == 1)
							{
								if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								{
									HUD::DISPLAY_HUD(true);
									HUD::DISPLAY_RADAR(true);
									iLocal_130 = iLocal_130 + 1;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
					
						if (SYSTEM::TIMERB() > 2500)
						{
							if (iLocal_130 == 2)
							{
								if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								{
									func_92();
								
									if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_tailM", 4, 0, 0, 0);
								
									if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_tailF", 4, 0, 0, 0);
								
									if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_tailT", 4, 0, 0, 0);
								
									iLocal_130 = iLocal_130 + 1;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
					}
				
					if (!bLocal_124)
					{
						if (iLocal_49 == 3)
						{
							if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
							{
								if (iLocal_130 == 0)
								{
									_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_enough", 4, 0, 0, 0);
									iLocal_130 = iLocal_130 + 1;
								}
							}
						}
					
						if (iLocal_49 == 3)
							if (SYSTEM::TIMERB() > 5000)
								if (iLocal_130 == 0)
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
										iLocal_130 = iLocal_130 + 1;
					
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_87, 150f, 150f, 150f, false, true, 0))
						{
							if (iLocal_303 == 0)
							{
								if (iLocal_307 == func_80(func_81()) + 11)
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
									{
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_time10", 4, 0, 0, 0);
										iLocal_303 = 1;
									}
								}
							}
						
							if (iLocal_303 < 2)
							{
								if (iLocal_307 == func_80(func_81()) + 10)
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
									{
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_time9", 4, 0, 0, 0);
										iLocal_303 = 2;
									}
								}
							}
						
							if (iLocal_303 < 3)
							{
								if (iLocal_307 == func_80(func_81()) + 9)
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
									{
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_time8", 4, 0, 0, 0);
										iLocal_303 = 3;
									}
								}
							}
						
							if (iLocal_303 < 4)
							{
								if (iLocal_307 == func_80(func_81()) + 8)
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
									{
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_time7", 4, 0, 0, 0);
										iLocal_303 = 4;
									}
								}
							}
						
							if (iLocal_303 < 5)
								if (iLocal_307 == func_80(func_81()) + 7)
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
										iLocal_303 = 5;
						
							if (iLocal_303 < 6)
								if (iLocal_307 == func_80(func_81()) + 6)
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
										iLocal_303 = 6;
						
							if (iLocal_303 < 7)
								if (iLocal_307 == func_80(func_81()) + 5)
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
										iLocal_303 = 7;
						
							if (iLocal_303 < 8)
								if (iLocal_307 == func_80(func_81()) + 4)
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
										iLocal_303 = 8;
						
							if (iLocal_303 < 9)
							{
								if (iLocal_307 == func_80(func_81()) + 3)
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
									{
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 9;
									}
								}
							}
						
							if (iLocal_303 < 10)
							{
								if (iLocal_307 == func_80(func_81()) + 2)
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
									{
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 10;
									}
								}
							}
						
							if (iLocal_303 < 11)
							{
								if (iLocal_307 == func_80(func_81()) + 1)
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
									{
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 11;
									}
								}
							}
						}
						else
						{
							if (iLocal_303 < 6)
							{
								if (iLocal_307 == func_80(func_81()) + 6)
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
									{
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = iLocal_303 + 1;
									}
								}
							}
						
							if (iLocal_303 < 7)
							{
								if (iLocal_307 == func_80(func_81()) + 5)
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
									{
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = iLocal_303 + 1;
									}
								}
							}
						
							if (iLocal_303 < 8)
							{
								if (iLocal_307 == func_80(func_81()) + 4)
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
									{
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = iLocal_303 + 1;
									}
								}
							}
						
							if (iLocal_303 < 9)
							{
								if (iLocal_307 == func_80(func_81()) + 3)
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
									{
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = iLocal_303 + 1;
									}
								}
							}
						
							if (iLocal_303 < 10)
							{
								if (iLocal_307 == func_80(func_81()) + 2)
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
									{
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = iLocal_303 + 1;
									}
								}
							}
						
							if (iLocal_303 < 11)
							{
								if (iLocal_307 == func_80(func_81()) + 1)
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
									{
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = iLocal_303 + 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return;
}

int func_80(int iParam0) // Position - 0x3519
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_81() // Position - 0x352C
{
	var unk;

	func_91(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_90(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_89(&unk, CLOCK::GET_CLOCK_HOURS());
	func_84(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_83(&unk, CLOCK::GET_CLOCK_MONTH());
	func_82(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_82(var uParam0, int iParam1) // Position - 0x3572
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

void func_83(var uParam0, int iParam1) // Position - 0x35F8
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_84(var uParam0, int iParam1) // Position - 0x362B
{
	int num;
	int num2;

	num = func_88(*uParam0);
	num2 = func_86(*uParam0);

	if (iParam1 < 1 || iParam1 > func_85(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_85(int iParam0, int iParam1) // Position - 0x367C
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

int func_86(int iParam0) // Position - 0x371E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_87(BOOL bParam0, var uParam1, var uParam2) // Position - 0x3740
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_88(int iParam0) // Position - 0x3757
{
	return iParam0 & 15;
}

void func_89(var uParam0, int iParam1) // Position - 0x3764
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_90(var uParam0, int iParam1) // Position - 0x379E
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_91(var uParam0, int iParam1) // Position - 0x37D9
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

void func_92() // Position - 0x3815
{
	Global_20591 = 0;
	func_25();
	return;
}

BOOL func_93(char* sParam0) // Position - 0x3825
{
	var string2;

	if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
	{
		TEXT_LABEL_COPY(&string2, Vector3(func_94()), 4);
	
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &string2))
			return true;
	}

	return false;
}

struct<6> func_94() // Position - 0x384D
{
	var unk;
	int unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_21725 == 4)
	{
		currentScriptedConversationLine = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		currentScriptedConversationLine = currentScriptedConversationLine + Global_22735;
	
		if (currentScriptedConversationLine > -1)
			return Global_20593[currentScriptedConversationLine];
		else
			return unk;
	}

	return unk;
}

void func_95() // Position - 0x3893
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	eViewModeContext camActiveViewModeContext2;
	eViewMode camViewModeForContext2;

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_55))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_55, false))
		{
			if (!PED::IS_PED_INJURED(pedLocal_55))
			{
				if (!bLocal_129 && bLocal_118)
				{
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
					camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
				
					if (camActiveViewModeContext != ON_FOOT)
					{
						camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);
					
						if (camViewModeForContext != FIRST_PERSON)
						{
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_LOOK_BEHIND, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_LOOK_LEFT, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_LOOK_RIGHT, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_BEHIND, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_DOWN, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_DOWN_ONLY, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LEFT, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LEFT_ONLY, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_RIGHT, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_RIGHT_ONLY, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UD, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UP, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UP_ONLY, true);
						}
					}
				
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedLocal_55, -2002.008f, 455.58f, 101.0381f, -2009.7614f, 453.2027f, 105.9135f, 12.4375f, false, true, 0) || SYSTEM::TIMERA() > 5000)
					{
						bLocal_129 = true;
						SYSTEM::SETTIMERA(0);
						func_58(true, true, true, false, false, false, false);
						HUD::CLEAR_HELP(true);
						HUD::DISPLAY_HUD(false);
						HUD::DISPLAY_RADAR(false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						VEHICLE::REQUEST_VEHICLE_ASSET(joaat("superd"), 3);
					
						while (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("superd")))
						{
							SYSTEM::WAIT(0);
						}
					
						caLocal_134 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2014.228f, 456.49612f, 103.55235f, -6.509435f, -0.037031f, -95.98762f, 29.001434f, false, 2);
						caLocal_135 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2014.3337f, 456.418f, 103.31525f, -6.198685f, -0.037031f, -100.57357f, 29.001434f, false, 2);
						CAM::SHAKE_CAM(caLocal_134, "HAND_SHAKE", 0.25f);
						CAM::SHAKE_CAM(caLocal_135, "HAND_SHAKE", 0.25f);
						CAM::SET_CAM_ACTIVE(caLocal_134, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						SYSTEM::WAIT(1000);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_135, caLocal_134, 4000, 1, 1);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						MISC::CLEAR_AREA_OF_VEHICLES(uLocal_99, 10f, false, false, false, false, false, false, 0);
					
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE());
						
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), uLocal_99, 8f, 8f, 8f, false, true, 0))
							{
								veLocal_133 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_133, true, false);
								VEHICLE::DELETE_VEHICLE(&veLocal_133);
							}
						}
					
						if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_59, 1);
						
							if (!HUD::DOES_BLIP_EXIST(blLocal_319))
							{
								blLocal_319 = func_68(veLocal_59, false, false);
								HUD::SET_BLIP_AS_FRIENDLY(blLocal_319, true);
							}
						}
					
						bLocal_117 = false;
					}
				}
			
				if (bLocal_129 && CAM::DOES_CAM_EXIST(caLocal_134))
				{
					if (SYSTEM::TIMERA() > 5700 && !bLocal_317)
					{
						if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							bLocal_317 = true;
						}
					}
				
					if (SYSTEM::TIMERA() > 6000)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						HUD::DISPLAY_HUD(true);
						HUD::DISPLAY_RADAR(true);
						func_58(false, true, true, false, false, false, false);
						CAM::SET_CAM_ACTIVE(caLocal_134, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DESTROY_CAM(caLocal_134, false);
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
			
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -2201.4172f, 4296.06f, 47.5076f, 100f, 100f, 100f, false, true, 0))
					MISC::CLEAR_AREA_OF_VEHICLES(uLocal_87, 5f, false, false, false, false, false, false, 0);
			}
		
			if (!bLocal_123)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_103, 100f, 100f, 100f, false, true, 0))
				{
					STREAMING::REQUEST_MODEL(joaat("IG_BestMen"));
				
					if (STREAMING::HAS_MODEL_LOADED(joaat("IG_BestMen")))
					{
						pedLocal_57 = PED::CREATE_PED(PED_TYPE_CIVMALE, joaat("IG_BestMen"), -2202.7468f, 4299.008f, 47.4293f, 73.0028f, true, true);
						_CONVERSATION_INITIALIZE_ACTOR(&uLocal_136, 4, pedLocal_57, "BESTMAN", 0, 1);
						PED::SET_PED_COMPONENT_VARIATION(pedLocal_57, PV_COMP_HEAD, 0, 0, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_57, joaat("PLAYER"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_57, true);
						PED::SET_PED_CONFIG_FLAG(pedLocal_57, 185, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_57, iLocal_113);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
						bLocal_123 = true;
					}
				}
			}
		
			if (!bLocal_124)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_77, 20f, 20f, 20f, false, true, 0))
				{
					func_27();
				
					if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					{
						_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_spot", 4, 0, 0, 0);
						bLocal_124 = true;
					}
				}
			}
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_70, uLocal_73, fLocal_76, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedLocal_55, uLocal_70, uLocal_73, fLocal_76, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(pedLocal_55, uLocal_67, 0f, 0f, 2f, true, true, 0) && func_66(true, false, true) || bLocal_118)
			{
				switch (iLocal_49)
				{
					case 0:
						HUD::REMOVE_BLIP(&blLocal_320);
					
						if (!bLocal_118)
						{
							uLocal_67 = Vector3(uLocal_103);
						
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
									VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 4, false);
						
							if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
							{
								camActiveViewModeContext2 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
							
								if (camActiveViewModeContext2 != ON_FOOT)
								{
									camViewModeForContext2 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext2);
								
									if (camViewModeForContext2 == FIRST_PERSON)
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 5000, 0, 2);
									}
									else
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_59, 5000, SLF_EXTEND_YAW_LIMIT | 2048, 4);
										CAM::SET_GAMEPLAY_VEHICLE_HINT(veLocal_59, 0f, 0f, 0f, true, -1, 3000, 2000);
									}
								}
							}
						
							func_27();
						
							if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
							{
								_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_wait1", 4, 0, 0, 0);
							
								if (!PED::IS_PED_INJURED(pedLocal_55))
								{
									TASK::CLEAR_PED_TASKS(pedLocal_55);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2013.0945f, 460.3515f, 101.8024f, 2f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_99, 3f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_113);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
									PED::SET_PED_KEEP_TASK(pedLocal_55, true);
								}
							
								bLocal_118 = true;
								SYSTEM::SETTIMERA(0);
							}
						}
					
						if (!PED::IS_PED_INJURED(pedLocal_55) && !ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
						{
							if (bLocal_118 && ENTITY::IS_ENTITY_AT_COORD(pedLocal_55, uLocal_99, 1f, 1f, 1f, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false))
							{
								if (PED::IS_PED_IN_GROUP(pedLocal_55))
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
										if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
											_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_reply", 4, 0, 0, 0);
								
									PED::REMOVE_PED_FROM_GROUP(pedLocal_55);
								}
							
								if (ENTITY::IS_ENTITY_OCCLUDED(pedLocal_55))
								{
									if (!PED::IS_PED_INJURED(pedLocal_55))
									{
										ENTITY::SET_ENTITY_VISIBLE(pedLocal_55, false, false);
										ENTITY::SET_ENTITY_COLLISION(pedLocal_55, false, false);
										ENTITY::SET_ENTITY_INVINCIBLE(pedLocal_55, true);
										ENTITY::FREEZE_ENTITY_POSITION(pedLocal_55, true);
									}
								
									if (SYSTEM::TIMERA() > 15000)
									{
										if (!PED::IS_PED_INJURED(pedLocal_55))
										{
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_HAIR, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_HEAD, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_UPPR, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_LOWR, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_JBIB, 0, 0, 0);
											ENTITY::SET_ENTITY_VISIBLE(pedLocal_55, true, false);
											ENTITY::SET_ENTITY_COLLISION(pedLocal_55, true, false);
											ENTITY::SET_ENTITY_INVINCIBLE(pedLocal_55, false);
											ENTITY::FREEZE_ENTITY_POSITION(pedLocal_55, false);
											ENTITY::SET_ENTITY_COORDS(pedLocal_55, uLocal_99, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(pedLocal_55, 106.5078f);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_55, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_55, BF_AlwaysFlee, true);
											PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(pedLocal_55, true);
											TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, -1, SLF_WHILE_NOT_IN_FOV, 4);
										
											if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
											{
												TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
												TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 4);
												TASK::TASK_ENTER_VEHICLE(0, veLocal_59, -1, 0, 2f, 1, 0);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
												TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_113);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
											}
										}
									
										SYSTEM::SETTIMERA(0);
										uLocal_67 = Vector3(uLocal_103);
										uLocal_70 = Vector3(uLocal_106);
										uLocal_73 = Vector3(uLocal_109);
										fLocal_76 = fLocal_112;
										iLocal_49 = 1;
									}
								}
							}
						}
						break;
				
					case 1:
						if (!PED::IS_PED_INJURED(pedLocal_55) && !ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, veLocal_59, 5f, 5f, 5f, false, true, 0) && !bLocal_128)
							{
								_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_suit", 4, 0, 0, 0);
								bLocal_128 = true;
							}
						
							if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_59, false))
								{
									if (_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_chape", 4, 0, 0, 0))
									{
										iLocal_49 = 2;
										bLocal_118 = false;
										iLocal_130 = 0;
									}
								}
								else
								{
									if (iLocal_308 == 0)
										iLocal_308 = MISC::GET_GAME_TIMER();
								
									if (iLocal_308 != 0 && MISC::GET_GAME_TIMER() > iLocal_308 + 6000)
									{
										_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_getin", 4, 0, 0, 0);
										iLocal_308 = 0;
									}
								
									SYSTEM::SETTIMERA(0);
								}
							}
						}
						break;
				
					case 2:
						if (!bLocal_118)
						{
							func_27();
						
							if (_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_hairc", 4, 0, 0, 0))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
									{
										veLocal_132 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
										VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, false);
									}
								}
							
								if (!PED::IS_PED_INJURED(pedLocal_57) && !PED::IS_PED_INJURED(pedLocal_55))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false))
									{
										veLocal_132 = PED::GET_VEHICLE_PED_IS_IN(pedLocal_55, false);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
										TASK::TASK_ENTER_VEHICLE(0, veLocal_132, -1, 2, 1f, 1, 0);
										TASK::TASK_CLEAR_LOOK_AT(0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
										TASK::TASK_PERFORM_SEQUENCE(pedLocal_57, iLocal_113);
										PED::SET_PED_CONFIG_FLAG(pedLocal_57, 185, false);
									}
									else
									{
										TASK::TASK_GO_TO_ENTITY(pedLocal_57, pedLocal_55, -1, 8f, 1073741824, 1073741824, 0);
									}
								
									if (!HUD::DOES_BLIP_EXIST(blLocal_322))
										blLocal_322 = func_70(pedLocal_57, false, 145);
								
									if (HUD::DOES_BLIP_EXIST(blLocal_320))
										HUD::REMOVE_BLIP(&blLocal_320);
								}
							
								SYSTEM::SETTIMERA(0);
								bLocal_120 = true;
								bLocal_118 = true;
							}
						}
					
						if (bLocal_118 && !PED::IS_PED_INJURED(pedLocal_55))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 || SYSTEM::TIMERA() > 12000)
							{
								uLocal_67 = Vector3(uLocal_77);
								uLocal_70 = Vector3(uLocal_80);
								uLocal_73 = Vector3(uLocal_83);
								fLocal_76 = fLocal_86;
								STREAMING::REQUEST_MODEL(joaat("IG_Bride"));
								STREAMING::REQUEST_MODEL(joaat("washington"));
								STREAMING::REQUEST_MODEL(joaat("baller2"));
								STREAMING::REQUEST_MODEL(joaat("primo"));
							
								if (STREAMING::HAS_MODEL_LOADED(joaat("IG_Bride")) && STREAMING::HAS_MODEL_LOADED(joaat("washington")) && STREAMING::HAS_MODEL_LOADED(joaat("baller2")) && STREAMING::HAS_MODEL_LOADED(joaat("primo")))
								{
									pedLocal_56 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, joaat("IG_Bride"), -330.36f, 6154.03f, 30.8f, 90f, true, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_56, true);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_56, iLocal_113);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
									pedLocal_58 = PED::CREATE_PED(PED_TYPE_CIVMALE, joaat("IG_BestMen"), -333.3692f, 6157.6436f, 30.489f, 83.2763f, true, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_58, true);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_58, PLAYER::PLAYER_PED_ID(), -1);
									PED::SET_PED_COMPONENT_VARIATION(pedLocal_58, PV_COMP_HEAD, 1, 0, 0);
									uLocal_60[0] = VEHICLE::CREATE_VEHICLE(joaat("washington"), -342.1295f, 6141.4043f, 30.4839f, 133.4604f, true, true, false);
									uLocal_60[1] = VEHICLE::CREATE_VEHICLE(joaat("baller2"), -338.3777f, 6137.41f, 30.476f, 135.6866f, true, true, false);
									uLocal_60[2] = VEHICLE::CREATE_VEHICLE(joaat("primo"), -329.4687f, 6143.247f, 30.4893f, 313.82f, true, true, false);
									uLocal_60[3] = VEHICLE::CREATE_VEHICLE(joaat("washington"), -322.3235f, 6135.4272f, 30.4924f, 316.5898f, true, true, false);
									VEHICLE::SET_VEHICLE_COLOURS(uLocal_60[0], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(uLocal_60[1], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(uLocal_60[2], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(uLocal_60[3], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									iLocal_49 = 3;
									bLocal_118 = false;
									iLocal_130 = 0;
								}
							}
						}
						break;
				
					case 3:
						if (!bLocal_118)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
								{
									VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, false);
									bLocal_118 = true;
									SYSTEM::WAIT(3000);
									func_27();
									SYSTEM::WAIT(0);
								}
							}
						}
						break;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_DEAD(pedLocal_55, false))
		{
			func_183();
		}
	}

	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x44C6
{
	uParam0->[iParam1].f_7 == 1;
	uParam0->[iParam1] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1].f_1), sParam3, 24);
	uParam0->[iParam1].f_7 = 1;
	uParam0->[iParam1].f_8 = iParam4;
	uParam0->[iParam1].f_9 = iParam5;

	if (!Global_78558)
	{
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1].f_8 == 0)
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, false);
			else
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, true);
	
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1].f_9 == 0)
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, false);
			else
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, true);
	}

	return;
}

void func_97() // Position - 0x4561
{
	if (bLocal_310 && iLocal_307 != func_80(func_81()) && !CAM::DOES_CAM_EXIST(caLocal_134))
		func_101(((iLocal_307 * 1000 * 60) - (func_80(func_81()) * 1000 * 60)) + ((iLocal_306 * 1000) - (func_104(func_81()) * 1000)), "TIMER_TIME" /*TIME*/, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);

	if (iLocal_306 == 0)
		if (iLocal_307 == func_80(func_81()) + 1 && iLocal_306 == func_104(func_81()) - 55 || iLocal_306 == func_104(func_81()) - 56 || iLocal_306 == func_104(func_81()) - 57 || iLocal_306 == func_104(func_81()) - 58 || iLocal_306 == func_104(func_81()) - 59)
			func_100();

	if (iLocal_307 == func_80(func_81()))
	{
		func_100();
		func_98();
	
		if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
		{
			_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_failti", 4, 0, 0, 0);
		
			if (!PED::IS_PED_INJURED(pedLocal_55))
				TASK::TASK_USE_MOBILE_PHONE(pedLocal_55, true, 1);
		
			if (!PED::IS_PED_INJURED(pedLocal_56))
				TASK::TASK_SMART_FLEE_PED(pedLocal_56, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
		
			if (!PED::IS_PED_INJURED(pedLocal_58))
				TASK::TASK_SMART_FLEE_PED(pedLocal_58, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
		
			SYSTEM::WAIT(8500);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
					VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 3, false);
		
			SYSTEM::WAIT(2000);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_55, false))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_55);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 5000, SLF_WHILE_NOT_IN_FOV, 2);
				TASK::TASK_LOOK_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), 5000, SLF_WHILE_NOT_IN_FOV, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_55, 0, 0);
				PED::REMOVE_PED_FROM_GROUP(pedLocal_55);
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_57, false))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 5000, 0, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_57, 500, 0);
			}
		
			SYSTEM::WAIT(1000);
		
			if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_59, false))
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_55, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
			
				if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == veLocal_59)
				{
					TASK::TASK_ENTER_VEHICLE(0, veLocal_59, -1, -1, 1f, 8, 0);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, veLocal_59, PLAYER::PLAYER_PED_ID(), 8, 15f, 786469, 10f, 10f, true);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
				}
			
				TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_113);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
				PED::SET_PED_KEEP_TASK(pedLocal_55, true);
			
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_57, false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
				
					if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == veLocal_59)
					{
						TASK::TASK_ENTER_VEHICLE(0, veLocal_59, -1, 0, 1073741824, 1, 0);
						TASK::TASK_PAUSE(0, 100000);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
					}
				
					TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_57, iLocal_113);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
					PED::SET_PED_KEEP_TASK(pedLocal_57, true);
				}
			}
		
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		
			while (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
			{
				SYSTEM::WAIT(0);
			}
		
			func_2();
		}
	}

	return;
}

void func_98() // Position - 0x4895
{
	Global_20591 = 0;
	func_99();
	return;
}

void func_99() // Position - 0x48A5
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22736 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21725 = 6;
		return;
	}

	return;
}

void func_100() // Position - 0x48C9
{
	int clockHours;
	int clockMinutes;
	int clockSeconds;

	clockHours = CLOCK::GET_CLOCK_HOURS();
	clockMinutes = CLOCK::GET_CLOCK_MINUTES();
	clockSeconds = CLOCK::GET_CLOCK_SECONDS();

	if (iLocal_309 == 0)
	{
		if (clockMinutes == 55 && clockSeconds >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 1)
	{
		if (clockMinutes == 56 && clockSeconds >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 2)
	{
		if (clockMinutes == 56 && clockSeconds >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 3)
	{
		if (clockMinutes == 57 && clockSeconds >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 4)
	{
		if (clockMinutes == 57 && clockSeconds >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 5)
	{
		if (clockMinutes == 58 && clockSeconds >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 6)
	{
		if (clockMinutes == 58 && clockSeconds >= 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 7)
	{
		if (clockMinutes == 58 && clockSeconds >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 8)
	{
		if (clockMinutes == 58 && clockSeconds >= 45)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 9)
	{
		if (clockMinutes == 59 && clockSeconds >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 10)
	{
		if (clockMinutes == 59 && clockSeconds >= 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 11)
	{
		if (clockMinutes == 59 && clockSeconds >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 12)
	{
		if (clockMinutes == 59 && clockSeconds >= 45)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 13)
	{
		if (clockMinutes >= 0 && clockHours == iLocal_307)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}

	return;
}

void func_101(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Position - 0x4B9E
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_103(7, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1655472.f_1 = 1;
		func_102(7, num);
		Global_1655472.f_4659[num] = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1655472.f_4659.f_11[num], sParam1, 64);
		Global_1655472.f_4659.f_172[num] = iParam2;
		Global_1655472.f_4659.f_216[num] = iParam3;
		Global_1655472.f_4659.f_183[num] = iParam4;
		Global_1655472.f_4659.f_194[num] = iParam5;
		Global_1655472.f_4659.f_249[num] = iParam6;
		Global_1655472.f_4659.f_260[num] = iParam7;
		Global_1655472.f_4659.f_205[num] = iParam8;
		Global_1655472.f_4659.f_314[num] = iParam9;
		Global_1655472.f_4659.f_325[num] = iParam10;
		Global_1655472.f_4659.f_357[num] = iParam11;
		Global_1655472.f_4659.f_238[num] = iParam12;
		Global_1655472.f_4659.f_271[num] = iParam13;
		Global_1655472.f_4659.f_368[num] = iParam14;
		Global_1655472.f_4659.f_379[num] = iParam15;
		Global_1655472.f_4659.f_390[num] = iParam16;
		Global_1655472.f_4659.f_227[num] = iParam17;
	}

	return;
}

void func_102(int iParam0, int iParam1) // Position - 0x4CFB
{
	MISC::SET_BIT(&Global_1655472.f_7009[iParam0], iParam1);
	return;
}

BOOL func_103(int iParam0, int iParam1) // Position - 0x4D14
{
	return IS_BIT_SET(Global_1655472.f_7009[iParam0], iParam1);
}

int func_104(int iParam0) // Position - 0x4D2A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

void func_105() // Position - 0x4D3D
{
	if (!PED::IS_PED_INJURED(pedLocal_55))
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (PED::IS_PED_IN_VEHICLE(pedLocal_55, veLocal_59, false) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(veLocal_59))
				if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					if (_GET_RANDOM_BOOL())
						_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_crash", 4, 0, 0, 0);
					else
						_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_bump1", 4, 0, 0, 0);
			else if (PED::IS_PED_IN_VEHICLE(pedLocal_55, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_bump1", 4, 0, 0, 0);

	return;
}

BOOL _GET_RANDOM_BOOL() // Position - 0x4DF7
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return true;

	return false;
}

void func_107() // Position - 0x4E15
{
	if (!PED::IS_PED_INJURED(pedLocal_55))
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(pedLocal_55, false);

	if (!PED::IS_PED_INJURED(pedLocal_57))
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(pedLocal_57, false);

	if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0) || iLocal_49 == 1 || bLocal_126 || bLocal_127 || bLocal_125 || bLocal_118)
		if (iLocal_49 >= 2 && bLocal_120 && iLocal_49 != 1 && !bLocal_126 && !bLocal_127 && !bLocal_125 && !bLocal_118)
			if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_57, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0))
				if (func_109())
					func_108(0);
			else if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() && !func_109())
				func_108(1);
		else if (func_109())
			func_108(0);
	else if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() && !func_109())
		func_108(1);

	return;
}

void func_108(int iParam0) // Position - 0x4F13
{
	Global_22736 = iParam0;
	return;
}

BOOL func_109() // Position - 0x4F20
{
	if (Global_22736 == 1)
		return true;

	return false;
}

void func_110() // Position - 0x4F37
{
	if (CLOCK::GET_CLOCK_HOURS() > 2 && CLOCK::GET_CLOCK_HOURS() < 15 && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
	}
	else
	{
		if (!PED::IS_PED_INJURED(pedLocal_55))
		{
			TASK::CLEAR_PED_TASKS(pedLocal_55);
			func_27();
			SYSTEM::WAIT(0);
			_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_failda", 4, 0, 0, 0);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_66))
				ENTITY::DETACH_ENTITY(obLocal_66, true, true);
		}
	
		while (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
		{
			SYSTEM::WAIT(0);
		}
	
		func_2();
	}

	return;
}

void func_111() // Position - 0x4FB5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(pedLocal_55))
	{
		if (!bLocal_115)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 130f, 60f, 50f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(pedLocal_55) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 10f, 10f, 10f, false, true, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(blLocal_321))
				{
					blLocal_321 = func_70(pedLocal_55, false, 145);
					HUD::SHOW_HEIGHT_ON_BLIP(blLocal_321, false);
					TASK::TASK_LOOK_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 4);
				}
			
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 10f, 10f, 10f, false, true, 0))
				{
					if (HUD::DOES_BLIP_EXIST(blLocal_321))
						HUD::SHOW_HEIGHT_ON_BLIP(blLocal_321, true);
				
					SYSTEM::SETTIMERB(0);
					func_98();
				
					while (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					{
						SYSTEM::WAIT(0);
					}
				
					if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					{
						if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
							_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_greetM", 4, 0, 0, 0);
					
						if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
							_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_greetF", 4, 0, 0, 0);
					
						if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
							_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_greetT", 4, 0, 0, 0);
					}
				
					bLocal_115 = true;
				}
			}
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(pedLocal_55))
			{
				if (!func_149() && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1131.777f, 2636.418f, 15.589f, -1040.995f, 2717.077f, 31.715f, 60.75f, false, true, 0) && HUD::DOES_BLIP_EXIST(blLocal_321))
				{
					if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
						_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_greet2", 4, 0, 0, 0);
				
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						veLocal_65 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				
					func_112(true);
				}
			}
		}
		else if (!bLocal_301)
		{
			if (!PED::IS_PED_INJURED(pedLocal_55))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 25f, 25f, 25f, false, true, 0))
				{
					func_27();
					SYSTEM::WAIT(0);
					_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_leave", 4, 0, 0, 0);
					bLocal_301 = true;
				}
			}
		}
	}

	return;
}

int func_112(BOOL bParam0) // Position - 0x51DD
{
	if (func_116())
	{
		Global_113638 = true;
		Global_113635 = MISC::GET_GAME_TIMER();
	
		if (func_45(Global_113637))
			func_113(0);
	
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /*Random Event*/);
	
		if (bParam0 && func_45(Global_113637))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_113(int iParam0) // Position - 0x5230
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_115(iParam0), -1);
					Global_113648.f_24997.f_2 = Global_113648.f_24997.f_2 + 1;
					MISC::SET_BIT(&Global_113644, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_113644, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_115(iParam0), -1);
					Global_113648.f_24997.f_3 = Global_113648.f_24997.f_3 + 1;
					MISC::SET_BIT(&Global_113644, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_113644, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_115(iParam0), -1);
					Global_113648.f_24997.f_4 = Global_113648.f_24997.f_4 + 1;
					MISC::SET_BIT(&Global_113644, 2);
				}
			}
			break;
	}

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x530B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

char* func_115(int iParam0) // Position - 0x5322
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			str = "AM_H_REFS" /*Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby.*/;
			break;
	
		case 1:
			str = "RE_FLASHBLIP" /*Flashing blue and red blips indicate situations around San Andreas that you can choose to help with.*/;
			break;
	
		case 2:
			str = "RE_HANDOVER" /*If you retrieve a stolen item, you can choose to keep it or return it for a reward.*/;
			break;
	}

	return str;
}

BOOL func_116() // Position - 0x5365
{
	switch (func_117(&Global_32223, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_117(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x539B
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98159.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_121(0))
			return 0;
	
		Global_43221 = Global_43221 + 1;
		*uParam0 = Global_43221;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23131.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_43257 = iParam2;
		Global_43219 = *uParam0;
		Global_43220 = iParam4;
		Global_43218 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_43218 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_43218; i = i + 1)
			{
				if (Global_43224[i] == *uParam0)
					return 2;
			}
		}
		else if (Global_43219 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_43218 == 8)
			return 0;
	
		Global_43221 = Global_43221 + 1;
		*uParam0 = Global_43221;
		Global_43224[Global_43218] = Global_43221;
		Global_43224[Global_43218].f_1 = iParam1;
		Global_43224[Global_43218].f_2 = iParam2;
		Global_43224[Global_43218].f_3 = 0;
		Global_43218 = Global_43218 + 1;
	
		if (iParam4 != 0)
			func_118(uParam0, iParam4);
	}

	return 2;
}

void func_118(var uParam0, int iParam1) // Position - 0x54D2
{
	int i;

	if (Global_43218 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_43218; i = i + 1)
	{
		if (Global_43224[i] == *uParam0)
			Global_43224[i].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x5521
{
	return func_120(iParam0, Global_43257);
}

BOOL func_120(int iParam0, int iParam1) // Position - 0x5532
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

BOOL func_121(int iParam0) // Position - 0x5713
{
	if (Global_43257 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

void func_122() // Position - 0x5735
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_55))
	{
		if (!PED::IS_PED_INJURED(pedLocal_55))
		{
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), 3f))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_55);
				ENTITY::SET_ENTITY_HEALTH(pedLocal_55, 99, 0);
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::GET_PLAYERS_LAST_VEHICLE()) < 3f)
				{
					ENTITY::FREEZE_ENTITY_POSITION(pedLocal_55, true);
				}
				else
				{
					ENTITY::FREEZE_ENTITY_POSITION(pedLocal_55, false);
				
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), pedLocal_55))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_55);
						ENTITY::SET_ENTITY_HEALTH(pedLocal_55, 99, 0);
					}
				}
			}
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 2f, 2f, 2f, false, true, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (func_66(true, false, true))
					{
						if (!bLocal_311)
						{
							func_112(true);
							func_58(true, true, true, false, false, false, false);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
							HUD::CLEAR_HELP(true);
							HUD::DISPLAY_HUD(false);
							HUD::DISPLAY_RADAR(false);
						
							if (!PED::IS_PED_INJURED(pedLocal_55))
							{
								MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), 5f, true, false, false, false);
								GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5f);
							}
						
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), pedLocal_55, 5f, 5f, 5f, false, true, 0))
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_COORDS(pedLocal_55, true) - Vector3(1.5f, 4f, 3f), true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1084227584);
								}
							}
						
							if (!PED::IS_PED_INJURED(pedLocal_55))
							{
								iLocal_318 = PED::CREATE_SYNCHRONIZED_SCENE(-935.57f, 2767.616f, 24.448f, 2.433f, 0.152f, 53.743f, 2);
								caLocal_134 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_318, 0.158f);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(caLocal_134, iLocal_318, "untie_cam", "re@stag_do@");
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_55);
								TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_55, iLocal_318, "re@stag_do@", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_55, false, false);
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_318, "re@stag_do@", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
								CAM::SET_CAM_ACTIVE(caLocal_134, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								bLocal_311 = true;
							}
						}
					}
				}
			}
		}
		else
		{
			func_2();
		}
	}

	if (bLocal_311 && !bLocal_313)
	{
		func_27();
		SYSTEM::WAIT(0);
	
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
			_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_untieM", 4, 0, 0, 0);
	
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_untieF", 4, 0, 0, 0);
	
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
			_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_untieT", 4, 0, 0, 0);
	
		bLocal_313 = true;
	}

	if (bLocal_311 && !bLocal_312)
	{
		if (!bLocal_316)
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_318) > 0.2f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_318) < 0.3f)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ROPE_CUT", PLAYER::PLAYER_PED_ID(), "ROPE_CUT_SOUNDSET", false, 0);
				bLocal_316 = true;
			}
		}
	
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_318) > 0.46470588f && !bLocal_317)
		{
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				bLocal_317 = true;
			}
		}
	
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_318) > 0.5f)
			bLocal_312 = true;
	
		if (func_123(1000))
		{
			CAM::DO_SCREEN_FADE_OUT(800);
		
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				SYSTEM::WAIT(0);
			}
		
			bLocal_312 = true;
			bLocal_315 = true;
		}
	}

	if (bLocal_312 && !bLocal_314)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_66))
			ENTITY::DETACH_ENTITY(obLocal_66, true, true);
	
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -936.6537f, 2767.4968f, 24.4289f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 208.4017f);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
		CAM::SET_CAM_ACTIVE(caLocal_134, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(caLocal_134, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
		func_58(false, true, true, false, false, false, false);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
	
		if (!PED::IS_PED_INJURED(pedLocal_55))
		{
			ENTITY::FREEZE_ENTITY_POSITION(pedLocal_55, false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_55);
			PED::SET_PED_CAN_RAGDOLL(pedLocal_55, true);
			ENTITY::SET_ENTITY_COORDS(pedLocal_55, -935.6716f, 2767.7717f, 24.4289f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(pedLocal_55, 136.9073f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_55, false, false);
		}
	
		if (bLocal_315)
		{
			CAM::DO_SCREEN_FADE_IN(800);
		
			while (CAM::IS_SCREEN_FADING_IN())
			{
				SYSTEM::WAIT(0);
			}
		
			bLocal_315 = false;
		}
	
		bLocal_317 = false;
		bLocal_314 = true;
	}

	if (bLocal_314 && !PED::IS_PED_INJURED(pedLocal_55))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 20f, 20f, 20f, false, true, 0) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PLAYER::GET_PLAYERS_LAST_VEHICLE()) >= 1 && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()) != joaat("rhino"))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, SLF_WHILE_NOT_IN_FOV, 3);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 6500);
				TASK::TASK_ENTER_VEHICLE(0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_113);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
			}
			else if (!PED::IS_PED_IN_GROUP(pedLocal_55))
			{
				PED::SET_PED_AS_GROUP_MEMBER(pedLocal_55, func_73());
				PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_55, true);
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_55, 0);
			}
		}
		else if (!PED::IS_PED_IN_GROUP(pedLocal_55))
		{
			PED::SET_PED_AS_GROUP_MEMBER(pedLocal_55, func_73());
			PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_55, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_55, 0);
		}
	
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_55, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		blLocal_320 = func_29(uLocal_67, true);
		bLocal_114 = true;
		bLocal_116 = true;
		STREAMING::REMOVE_ANIM_DICT("re@stag_do@");
		STREAMING::REMOVE_ANIM_DICT("re@stag_do@idle_a");
		iLocal_305 = func_80(func_81());
		iLocal_307 = iLocal_305 + 5;
		iLocal_304 = func_104(func_81());
	
		if (iLocal_304 >= 30)
		{
			iLocal_306 = 0;
			iLocal_307 = iLocal_307 + 1;
		}
	
		if (iLocal_307 > 24)
			iLocal_307 = iLocal_307 - 24;
	
		if (iLocal_307 == 0)
			sLocal_302 = "stagd_ptime0";
		else if (iLocal_307 == 1)
			sLocal_302 = "stagd_ptime1";
		else if (iLocal_307 == 2)
			sLocal_302 = "stagd_ptime2";
		else if (iLocal_307 == 3)
			sLocal_302 = "stagd_ptime3";
		else if (iLocal_307 == 4)
			sLocal_302 = "stagd_ptime4";
		else if (iLocal_307 == 5)
			sLocal_302 = "stagd_ptime5";
		else if (iLocal_307 == 6)
			sLocal_302 = "stagd_ptime6";
		else if (iLocal_307 == 7)
			sLocal_302 = "stagd_ptime7";
		else if (iLocal_307 == 8)
			sLocal_302 = "stagd_ptime8";
		else if (iLocal_307 == 9)
			sLocal_302 = "stagd_ptime9";
		else if (iLocal_307 == 10)
			sLocal_302 = "stagd_ptim10";
		else if (iLocal_307 == 11)
			sLocal_302 = "stagd_ptim11";
		else if (iLocal_307 == 12)
			sLocal_302 = "stagd_ptim12";
		else if (iLocal_307 == 13)
			sLocal_302 = "stagd_ptim13";
		else if (iLocal_307 == 14)
			sLocal_302 = "stagd_ptim14";
		else if (iLocal_307 == 15)
			sLocal_302 = "stagd_ptim15";
		else if (iLocal_307 == 16)
			sLocal_302 = "stagd_ptim16";
		else if (iLocal_307 == 17)
			sLocal_302 = "stagd_ptim17";
		else if (iLocal_307 == 18)
			sLocal_302 = "stagd_ptim18";
		else if (iLocal_307 == 19)
			sLocal_302 = "stagd_ptim19";
		else if (iLocal_307 == 20)
			sLocal_302 = "stagd_ptim20";
		else if (iLocal_307 == 21)
			sLocal_302 = "stagd_ptim21";
		else if (iLocal_307 == 22)
			sLocal_302 = "stagd_ptim22";
		else if (iLocal_307 == 23)
			sLocal_302 = "stagd_ptim23";
	}

	return;
}

BOOL func_123(int iParam0) // Position - 0x5F03
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_28 > iParam0)
			Global_27 = MISC::GET_GAME_TIMER();
	
		Global_28 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_27 > iParam0)
		{
			if (func_124())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_124() // Position - 0x5F4D
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

void func_125() // Position - 0x5F7F
{
	if (!PED::IS_PED_INJURED(pedLocal_55))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true, false);
	
		veLocal_133 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(pedLocal_55, false), 30f, 0, 4);
	
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_133, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_133, -1, false))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(veLocal_133, pedLocal_55, 30f, 30f, 30f, false, true, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_133, true, false);
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_133, false))
					{
						VEHICLE::START_VEHICLE_HORN(veLocal_133, 3000, 0, false);
					
						if (!PED::IS_PED_INJURED(pedLocal_55))
							if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() && !bLocal_115)
								_CONVERSATION_ADD_LINE(&uLocal_136, "stagdau", "stagd_greet2", 4, 0, 0, 0);
					}
				}
				else
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_133);
				}
			}
		}
	}

	return;
}

void func_126() // Position - 0x6057
{
	Vehicle vehiclePedIsEntering;
	Ped pedInVehicleSeat;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		vehiclePedIsEntering = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsEntering, false))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsEntering, 0, false);
		
			if (!PED::IS_PED_INJURED(pedInVehicleSeat))
				if (pedInVehicleSeat != PLAYER::PLAYER_PED_ID())
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedInVehicleSeat))
						if (!PED::IS_PED_HEADTRACKING_ENTITY(pedInVehicleSeat, PLAYER::PLAYER_PED_ID()))
							TASK::TASK_LOOK_AT_ENTITY(pedInVehicleSeat, PLAYER::PLAYER_PED_ID(), 2000, SLF_WHILE_NOT_IN_FOV, 2);
		}
	}

	return;
}

void func_127() // Position - 0x60C4
{
	func_128(39, true);
	func_128(40, true);
	func_128(41, true);
	func_128(42, true);
	func_128(43, true);
	func_128(44, true);
	STREAMING::REQUEST_MODEL(joaat("U_M_Y_StagGrm_01"));
	STREAMING::REQUEST_MODEL(joaat("superd"));
	STREAMING::REQUEST_MODEL(joaat("prop_stag_do_rope"));

	while (!STREAMING::HAS_MODEL_LOADED(joaat("U_M_Y_StagGrm_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("superd")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_stag_do_rope")))
	{
		SYSTEM::WAIT(0);
	}

	STREAMING::REQUEST_ANIM_DICT("re@stag_do@");
	STREAMING::REQUEST_ANIM_DICT("re@stag_do@idle_a");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1);

	while (!STREAMING::HAS_ANIM_DICT_LOADED("re@stag_do@") || !STREAMING::HAS_ANIM_DICT_LOADED("re@stag_do@idle_a") || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1))
	{
		SYSTEM::WAIT(0);
	}

	pedLocal_55 = PED::CREATE_PED(PED_TYPE_MISSION, joaat("U_M_Y_StagGrm_01"), -935.57f, 2767.616f, 24.448f, 140.5f, true, true);
	AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_55, "GROOM");
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_55, joaat("PLAYER"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_55, true);
	PED::SET_PED_MONEY(pedLocal_55, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_HAIR, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_HEAD, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_UPPR, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_LOWR, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_JBIB, 1, 0, 0);
	TASK::TASK_SET_DECISION_MAKER(pedLocal_55, joaat("empty"));
	PED::SET_PED_COMBAT_MOVEMENT(pedLocal_55, CM_WillRetreat);
	PED::SET_PED_CONFIG_FLAG(pedLocal_55, 206, true);
	PED::SET_PED_CONFIG_FLAG(pedLocal_55, 134, true);
	obLocal_66 = OBJECT::CREATE_OBJECT(joaat("prop_stag_do_rope"), ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_66, pedLocal_55, PED::GET_PED_BONE_INDEX(pedLocal_55, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	veLocal_59 = VEHICLE::CREATE_VEHICLE(joaat("superd"), -2009.0146f, 455.3556f, 101.6528f, 274.8103f, false, false, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_59, true);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(veLocal_59, 0f);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_59, 3);
	VEHICLE::SET_VEHICLE_MOD_KIT(veLocal_59, 0);
	VEHICLE::SET_VEHICLE_MOD_COLOR_1(veLocal_59, 0, 73, 0);
	VEHICLE::SET_VEHICLE_MOD_COLOR_2(veLocal_59, 2, 48);
	VEHICLE::SET_VEHICLE_MOD(veLocal_59, 11, 1, false);
	VEHICLE::SET_VEHICLE_MOD(veLocal_59, 12, 1, false);
	VEHICLE::REQUEST_VEHICLE_ASSET(joaat("superd"), 3);
	ENTITY::SET_ENTITY_LOD_DIST(veLocal_59, 10000);
	VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(veLocal_59, 5f);
	VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(veLocal_59);
	uLocal_77 = Vector3(-352.88f, 6164.31f, 30.5f);
	uLocal_80 = Vector3(-355.2565f, 6164.9307f, 30.2944f);
	uLocal_83 = Vector3(-330.5575f, 6139.8516f, 34.4886f);
	fLocal_86 = 25.375f;
	uLocal_87 = Vector3(-343.5804f, 6156.198f, 30.489f);
	uLocal_90 = Vector3(-1991.1265f, 457.991f, 101.1808f);
	uLocal_93 = Vector3(-2002.6903f, 460.539f, 99.828f);
	uLocal_96 = Vector3(-1997.6046f, 445.6651f, 105.0519f);
	uLocal_99 = Vector3(-2026.817f, 450.3329f, 104.8771f);
	fLocal_102 = 24.6875f;
	uLocal_103 = Vector3(-2205.3506f, 4298.7896f, 47.265f);
	uLocal_106 = Vector3(-2207.5254f, 4301.697f, 47.1803f);
	uLocal_109 = Vector3(-2195.6367f, 4295.4067f, 51.1889f);
	fLocal_112 = 12.5625f;
	uLocal_67 = Vector3(uLocal_90);
	uLocal_70 = Vector3(uLocal_93);
	uLocal_73 = Vector3(uLocal_96);
	fLocal_76 = fLocal_102;
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("superd"), true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_87 - Vector3(10f, 10f, 10f), uLocal_87 + Vector3(10f, 10f, 10f), false, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_87 - Vector3(20f, 20f, 20f), uLocal_87 + Vector3(20f, 20f, 20f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(ENTITY::GET_ENTITY_COORDS(pedLocal_55, false) - Vector3(10f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(pedLocal_55, false) + Vector3(10f, 10f, 10f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector3(101.6406f, 455.1994f, -2007.751f) - Vector3(15f, 15f, 15f), Vector3(101.6406f, 455.1994f, -2007.751f) + Vector3(15f, 15f, 15f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector3(47.4293f, 4299.008f, -2202.7468f) - Vector3(15f, 25f, 25f), Vector3(47.4293f, 4299.008f, -2202.7468f) + Vector3(15f, 25f, 25f), false, true, true, true);
	MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), 10f, 0);

	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_55, false))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
		TASK::TASK_PLAY_ANIM(0, "re@stag_do@idle_a", "idle_a_ped", 8f, -8f, -1, 9, 0, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_113);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
		PED::SET_PED_KEEP_TASK(pedLocal_55, true);
	}

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_136, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_136, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_136, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);

	_CONVERSATION_INITIALIZE_ACTOR(&uLocal_136, 3, pedLocal_55, "GROOM", 0, 1);
	bLocal_50 = true;
	return;
}

void func_128(int iParam0, BOOL bParam1) // Position - 0x65D2
{
	if (bParam1)
		if (!func_135(iParam0, 2, true))
			func_134(iParam0, 2, true);
	else if (func_135(iParam0, 2, true))
		func_129(iParam0, 2, true);

	return;
}

void func_129(int iParam0, int iParam1, BOOL bParam2) // Position - 0x6609
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::CLEAR_BIT(&Global_100733.f_1407[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_40() == 0)
		{
			address = _MPCHAR_STAT_GET_INT(func_133(iParam0), -1, 0);
			MISC::CLEAR_BIT(&address, iParam1);
			_MPCHAR_STAT_SET_INT(func_133(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x667B
{
	Hash statName;

	bParam4;
	statName = Global_2805029[empsParam0][func_131(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_131(int iParam0) // Position - 0x66AB
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_43();
	
		if (num2 > -1)
		{
			Global_2804741 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2804741 = 1;
		}
	}

	return num;
}

int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x66DF
{
	Hash statHash;
	int outValue;

	if (empsParam0 != MP_STAT_INVALID)
	{
		iParam2 == 0;
		statHash = Global_2805029[empsParam0][func_131(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

eMPStat func_133(int iParam0) // Position - 0x671C
{
	switch (iParam0)
	{
		case 0:
			return MP_STAT_SHOPFM_HAIRDO_01_BH;
	
		case 1:
			return MP_STAT_SHOPFM_HAIRDO_02_SC;
	
		case 2:
			return MP_STAT_SHOPFM_HAIRDO_03_V;
	
		case 3:
			return MP_STAT_SHOPFM_HAIRDO_04_SS;
	
		case 4:
			return MP_STAT_SHOPFM_HAIRDO_05_MP;
	
		case 5:
			return MP_STAT_SHOPFM_HAIRDO_06_HW;
	
		case 6:
			return MP_STAT_SHOPFM_HAIRDO_07_PB;
	
		case 7:
			return MP_STAT_SHOPFM_CLOTHES_L_01_SC;
	
		case 8:
			return MP_STAT_SHOPFM_CLOTHES_L_02_GS;
	
		case 9:
			return MP_STAT_SHOPFM_CLOTHES_L_03_DT;
	
		case 10:
			return MP_STAT_SHOPFM_CLOTHES_L_04_CS;
	
		case 11:
			return MP_STAT_SHOPFM_CLOTHES_L_05_GSD;
	
		case 12:
			return MP_STAT_SHOPFM_CLOTHES_L_06_VC;
	
		case 13:
			return MP_STAT_SHOPFM_CLOTHES_L_07_PB;
	
		case 14:
			return MP_STAT_SHOPFM_CLOTHES_M_01_SM;
	
		case 15:
			return MP_STAT_SHOPFM_CLOTHES_M_03_H;
	
		case 16:
			return MP_STAT_SHOPFM_CLOTHES_M_04_HW;
	
		case 17:
			return MP_STAT_SHOPFM_CLOTHES_M_05_GOH;
	
		case 18:
			return MP_STAT_SHOPFM_CLOTHES_H_01_BH;
	
		case 19:
			return MP_STAT_SHOPFM_CLOTHES_H_02_B;
	
		case 20:
			return MP_STAT_SHOPFM_CLOTHES_H_03_MW;
	
		case 21:
			return MP_STAT_SHOPFM_CLOTHES_A_01_VB;
	
		case 22:
			return MP_STAT_SHOPFM_TATTOO_01_HW;
	
		case 23:
			return MP_STAT_SHOPFM_TATTOO_02_SS;
	
		case 24:
			return MP_STAT_SHOPFM_TATTOO_03_PB;
	
		case 25:
			return MP_STAT_SHOPFM_TATTOO_04_VC;
	
		case 26:
			return MP_STAT_SHOPFM_TATTOO_05_ELS;
	
		case 27:
			return MP_STAT_SHOPFM_TATTOO_06_GOH;
	
		case 28:
			return MP_STAT_SHOPFM_GUN_01_DT;
	
		case 29:
			return MP_STAT_SHOPFM_GUN_02_SS;
	
		case 30:
			return MP_STAT_SHOPFM_GUN_03_HW;
	
		case 31:
			return MP_STAT_SHOPFM_GUN_04_ELS;
	
		case 32:
			return MP_STAT_SHOPFM_GUN_05_PB;
	
		case 33:
			return MP_STAT_SHOPFM_GUN_06_LS;
	
		case 34:
			return MP_STAT_SHOPFM_GUN_07_MW;
	
		case 35:
			return MP_STAT_SHOPFM_GUN_08_CS;
	
		case 36:
			return MP_STAT_SHOPFM_GUN_09_GOH;
	
		case 37:
			return MP_STAT_SHOPFM_GUN_10_VWH;
	
		case 38:
			return MP_STAT_SHOPFM_GUN_11_ID1;
	
		case 39:
			return MP_STAT_SHOPFM_CARMOD_01_AP;
	
		case 40:
			return MP_STAT_SHOPFM_CARMOD_05_ID2;
	
		case 41:
			return MP_STAT_SHOPFM_CARMOD_06_BT1;
	
		case 42:
			return MP_STAT_SHOPFM_CARMOD_07_CS1;
	
		case 43:
			return MP_STAT_SHOPFM_CARMOD_08_CS6;
	
		case 44:
			return MP_STAT_SHOPFM_CARMOD_SUPERMOD;
	
		case 45:
			return MP_STAT_SHOPFM_PERS_GAR;
	
		case 46:
			return MP_STAT_SHOPFM_PERS_GUN;
	
		case 47:
			return MP_STAT_SHOPFM_PERS_GUN_OSPREY;
	
		case 48:
			return MP_STAT_SHOPFM_PERS_GUN_HTRUCK;
	
		case 49:
			return MP_STAT_SHOPFM_PERS_GUN_ARENA;
	
		case 52:
			return MP_STAT_SHOPFM_PERS_GUN_ARCADE;
	
		case 50:
			return MP_STAT_SHOPFM_HAIRDO_CASINO_APT;
	
		case 51:
			return MP_STAT_SHOPFM_CLOTHES_CASINO;
	
		case 53:
			return MP_STAT_SHOPFM_PERS_GUN_SUB;
	
		case 54:
			return MP_STAT_SHOPFM_TATTOO_07_CCT;
	
		case 55:
			return MP_STAT_SHOPFM_CLOTHES_CAR_MEET;
	
		case 56:
			return MP_STAT_SHOPFM_PERS_GUN_FIXER;
	
		case 57:
			return MP_STAT_SHOPFM_CLOTHES_STUDIO;
	
		case 58:
			return UNK_108067914;
	
		case 59:
			return UNK_067837685;
	
		default:
			break;
	}

	return MP_STAT_INVALID;
}

void func_134(int iParam0, int iParam1, BOOL bParam2) // Position - 0x6AB5
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::SET_BIT(&Global_100733.f_1407[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_40() == 0)
		{
			address = _MPCHAR_STAT_GET_INT(func_133(iParam0), -1, 0);
			MISC::SET_BIT(&address, iParam1);
			_MPCHAR_STAT_SET_INT(func_133(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_135(int iParam0, int iParam1, BOOL bParam2) // Position - 0x6B27
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_40() == 0)
			return IS_BIT_SET(_MPCHAR_STAT_GET_INT(func_133(iParam0), -1, 0), iParam1);
	else
		return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);

	return false;
}

BOOL func_136() // Position - 0x6B88
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_45) < 75f * 75f)
			return true;
	
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_147())
			return false;
	}

	if (func_143())
		return true;

	if (func_137(100f, true) != -1)
		return true;

	return false;
}

int func_137(float fParam0, BOOL bParam1) // Position - 0x6C0E
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
		if (func_18(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num4 = func_50();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_113648.f_18576[num], 2) && !IS_BIT_SET(Global_113648.f_18576[num], 3))
				{
					func_138(num, &unk);
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
	}

	return num2;
}

void func_138(int iParam0, var uParam1) // Position - 0x6CBF
{
	switch (iParam0)
	{
		case 0:
			func_139(uParam1, "Abigail1", func_141(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 1:
			func_139(uParam1, "Abigail2", func_141(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 2:
			func_139(uParam1, "Barry1", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 3:
			func_139(uParam1, "Barry2", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 4:
			func_139(uParam1, "Barry3", func_141(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 5:
			func_139(uParam1, "Barry3A", func_141(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 6:
			func_139(uParam1, "Barry3C", func_141(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 7:
			func_139(uParam1, "Barry4", func_141(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_140(iParam0), 0, 0);
			break;
	
		case 8:
			func_139(uParam1, "Dreyfuss1", func_141(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 9:
			func_139(uParam1, "Epsilon1", func_141(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 10:
			func_139(uParam1, "Epsilon2", func_141(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 11:
			func_139(uParam1, "Epsilon3", func_141(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 12:
			func_139(uParam1, "Epsilon4", func_141(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 13:
			func_139(uParam1, "Epsilon5", func_141(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 14:
			func_139(uParam1, "Epsilon6", func_141(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 15:
			func_139(uParam1, "Epsilon7", func_141(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 16:
			func_139(uParam1, "Epsilon8", func_141(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 17:
			func_139(uParam1, "Extreme1", func_141(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 18:
			func_139(uParam1, "Extreme2", func_141(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 19:
			func_139(uParam1, "Extreme3", func_141(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 20:
			func_139(uParam1, "Extreme4", func_141(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 21:
			func_139(uParam1, "Fanatic1", func_141(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_140(iParam0), 1, 0);
			break;
	
		case 22:
			func_139(uParam1, "Fanatic2", func_141(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_140(iParam0), 1, 0);
			break;
	
		case 23:
			func_139(uParam1, "Fanatic3", func_141(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_140(iParam0), 0, 1);
			break;
	
		case 24:
			func_139(uParam1, "Hao1", func_141(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_140(iParam0), 0, 1);
			break;
	
		case 25:
			func_139(uParam1, "Hunting1", func_141(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 26:
			func_139(uParam1, "Hunting2", func_141(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 27:
			func_139(uParam1, "Josh1", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 28:
			func_139(uParam1, "Josh2", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 29:
			func_139(uParam1, "Josh3", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 30:
			func_139(uParam1, "Josh4", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 31:
			func_139(uParam1, "Maude1", func_141(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 32:
			func_139(uParam1, "Minute1", func_141(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 33:
			func_139(uParam1, "Minute2", func_141(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 34:
			func_139(uParam1, "Minute3", func_141(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 35:
			func_139(uParam1, "MrsPhilips1", func_141(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 36:
			func_139(uParam1, "MrsPhilips2", func_141(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 37:
			func_139(uParam1, "Nigel1", func_141(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 38:
			func_139(uParam1, "Nigel1A", func_141(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 39:
			func_139(uParam1, "Nigel1B", func_141(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 40:
			func_139(uParam1, "Nigel1C", func_141(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 41:
			func_139(uParam1, "Nigel1D", func_141(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 42:
			func_139(uParam1, "Nigel2", func_141(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 43:
			func_139(uParam1, "Nigel3", func_141(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 44:
			func_139(uParam1, "Omega1", func_141(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 45:
			func_139(uParam1, "Omega2", func_141(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 46:
			func_139(uParam1, "Paparazzo1", func_141(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 47:
			func_139(uParam1, "Paparazzo2", func_141(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 48:
			func_139(uParam1, "Paparazzo3", func_141(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 49:
			func_139(uParam1, "Paparazzo3A", func_141(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 50:
			func_139(uParam1, "Paparazzo3B", func_141(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 51:
			func_139(uParam1, "Paparazzo4", func_141(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 52:
			func_139(uParam1, "Rampage1", func_141(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 54:
			func_139(uParam1, "Rampage3", func_141(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 55:
			func_139(uParam1, "Rampage4", func_141(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 56:
			func_139(uParam1, "Rampage5", func_141(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 53:
			func_139(uParam1, "Rampage2", func_141(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 57:
			func_139(uParam1, "TheLastOne", func_141(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 58:
			func_139(uParam1, "Tonya1", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 59:
			func_139(uParam1, "Tonya2", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 60:
			func_139(uParam1, "Tonya3", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 61:
			func_139(uParam1, "Tonya4", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 62:
			func_139(uParam1, "Tonya5", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_139(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x7E74
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = Vector3(uParam2);
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = Vector3(fParam7);
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

int func_140(int iParam0) // Position - 0x7F05
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

struct<2> func_141(int iParam0) // Position - 0x833F
{
	var unk;
	var unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = Vector3(func_142(iParam0));

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

struct<2> func_142(int iParam0) // Position - 0x8376
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

BOOL func_143() // Position - 0x87C2
{
	if (func_146() && !func_147())
		return true;

	if (func_145() && func_144())
		return true;

	return false;
}

BOOL func_144() // Position - 0x87F4
{
	return Global_113366 > 0;
}

BOOL func_145() // Position - 0x8802
{
	if (Global_97603 != -1)
		return true;

	return false;
}

BOOL func_146() // Position - 0x8817
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603].f_15, 20);

	return false;
}

BOOL func_147() // Position - 0x883A
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_148() // Position - 0x8857
{
	if (!_CAN_ENTER_FREEROAM_STATE(5))
		return true;

	if (func_143())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_147())
			return false;

	if (func_137(100f, true) != -1)
		return true;

	return false;
}

BOOL func_149() // Position - 0x88B9
{
	if (Global_113637 == func_54() && MISC::GET_RANDOM_EVENT_FLAG() && Global_113638)
		return true;

	return false;
}

void func_150(int iParam0) // Position - 0x88E4
{
	if (iParam0 == -1)
		iParam0 = func_54();

	if (iParam0 == -1)
		return;

	func_152(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113634 = 0;
	func_151();
	return;
}

void func_151() // Position - 0x891A
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_152(int iParam0) // Position - 0x8957
{
	Global_113637 = iParam0;
	return;
}

BOOL func_153(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x8965
{
	BOOL flag;
	Vector3 entityCoords;
	eCharacter unk;
	Vector3 unk2;
	int i;

	if (!Global_152234)
		return false;

	if (iParam3 == -1)
		iParam3 = func_54();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	uLocal_45 = Vector3(uParam0);
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = Vector3(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_147())
				return false;
		}
	
		if (!Global_113648.f_9087)
			return false;
	
		if (_IS_MISSION_REPEAT_ACTIVE(false))
			return false;
	
		if (func_143())
			return false;
	
		if (func_180())
			return false;
	
		if (Global_113637 != -1)
			return false;
	
		if (func_18(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_137(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_45.f_2 > 50f)
				return false;
	
		if (!func_179(iParam3))
			return false;
	
		if (func_18(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_178(_GET_CURRENT_PLAYER_CHARACTER()) == 4 || func_178(_GET_CURRENT_PLAYER_CHARACTER()) == 5)
				return false;
	
		if (func_18(_GET_CURRENT_PLAYER_CHARACTER()))
			if (!func_177(iParam3, iParam4, 145))
				return false;
	
		if (!func_176(Global_113648.f_24997.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_113639 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_175())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_166(4))
			return false;
	
		if (!_CAN_ENTER_FREEROAM_STATE(5))
			return false;
	
		if (func_165(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_3 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_165(0, 0))
			return false;
	
		if (Global_32310)
			return false;
	
		if (func_179(30) && !func_165(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_18(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
			{
				vector = Vector3(Global_113648.f_2365.f_539.f_2300[i]);
				num = Global_113648.f_2365.f_539.f_2296[i];
			
				if (func_164(num))
					if (func_155(i))
						if (!func_154(vector, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (_GET_CURRENT_PLAYER_CHARACTER() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_154(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x8CFF
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_155(eCharacter echParam0) // Position - 0x8D46
{
	int num;

	num = Global_113648.f_2365.f_539.f_2296[echParam0];
	return func_156(num);
}

BOOL func_156(int iParam0) // Position - 0x8D67
{
	return func_157(iParam0, 1);
}

int func_157(int iParam0, int iParam1) // Position - 0x8D76
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_164(iParam0))
		return 0;

	func_158(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_158(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x8DC9
{
	func_159(func_81(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_159(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x8DE7
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_163(iParam0, iParam1))
	{
		num = func_88(iParam1);
		num2 = func_86(iParam0);
		num3 = func_86(iParam0) - func_86(iParam1);
		num4 = func_88(iParam0) - func_88(iParam1);
		num5 = func_162(iParam0) - func_162(iParam1);
		num6 = func_80(iParam0) - func_80(iParam1);
		num7 = func_104(iParam0) - func_104(iParam1);
		num8 = func_161(iParam0) - func_161(iParam1);
	}
	else
	{
		num = func_88(iParam0);
		num2 = func_86(iParam1);
		num3 = func_86(iParam1) - func_86(iParam0);
		num4 = func_88(iParam1) - func_88(iParam0);
		num5 = func_162(iParam1) - func_162(iParam0);
		num6 = func_80(iParam1) - func_80(iParam0);
		num7 = func_104(iParam1) - func_104(iParam0);
		num8 = func_161(iParam1) - func_161(iParam0);
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
	
		num5 = num5 + func_85(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_160(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
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

float func_160(float fParam0, float fParam1, float fParam2) // Position - 0x8FE8
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

int func_161(int iParam0) // Position - 0x902A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_162(int iParam0) // Position - 0x903D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

BOOL func_163(int iParam0, int iParam1) // Position - 0x904F
{
	int num;
	int num2;

	if (!func_164(iParam1) || !func_164(iParam0))
		return 1;

	num = func_86(iParam0);
	num2 = func_86(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_88(iParam0);
	num2 = func_88(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_162(iParam0);
	num2 = func_162(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_80(iParam0);
	num2 = func_80(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_104(iParam0);
	num2 = func_104(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_161(iParam0);
	num2 = func_161(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

BOOL func_164(int iParam0) // Position - 0x915B
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_161(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_104(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_80(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_86(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_88(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_162(iParam0);

	if (num6 < 1 || num6 > func_85(num5, num4))
		return false;

	return true;
}

BOOL func_165(int iParam0, int iParam1) // Position - 0x9237
{
	if (IS_BIT_SET(Global_113648.f_24997.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_166(int iParam0) // Position - 0x9257
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_18(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_174() || Global_112695 || Global_32166 || func_173() || func_24(8, -1) || func_172() || func_171() || func_170() || func_169() || G_SomeGlobalState.MessageCallStates.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_174() || Global_32166 || func_173() || func_24(8, -1) || func_170() || func_172() || func_171() || func_169() || G_SomeGlobalState.MessageCallStates.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_174() || Global_112695 || Global_32166 || func_173() || func_24(8, -1) || func_170() || func_172() || func_171() || func_169() || G_SomeGlobalState.MessageCallStates.f_919[character] == 5 || LastDispatchedMessageOrCall != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_174() || Global_112695 || Global_32166 || func_173() || func_24(8, -1) || func_172() || func_171() || func_169() || G_SomeGlobalState.MessageCallStates.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_174() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_24(8, -1) || func_169() || func_168() || G_SomeGlobalState.MessageCallStates.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_24(8, -1) || func_172() || func_171() || func_168() || func_167())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_174() || Global_32166 || func_173() || func_24(8, -1) || func_171() || func_170() || func_169() || G_SomeGlobalState.MessageCallStates.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_174() || func_171() || Global_112695 || Global_32166 || func_173() || Global_44446 || func_24(8, -1) || func_170() || func_168() || func_169() || G_SomeGlobalState.MessageCallStates.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_174() || Global_112695 || Global_32166 || func_173() || func_24(8, -1) || func_170() || func_168() || func_172() || func_171() || func_169())
							return false;
						break;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_167() // Position - 0x9974
{
	return Global_100720.f_1;
}

BOOL func_168() // Position - 0x9982
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603].f_15, 13);

	return false;
}

BOOL func_169() // Position - 0x99A5
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_170() // Position - 0x99BF
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_171() // Position - 0x99E9
{
	return Global_100733.f_388 > 0;
}

BOOL func_172() // Position - 0x99FA
{
	return Global_100733.f_387 > 0;
}

BOOL func_173() // Position - 0x9A0B
{
	return Global_1575060;
}

BOOL func_174() // Position - 0x9A17
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_175() // Position - 0x9A33
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_9058[Global_20383][0].f_259 == 2)
		return true;

	return false;
}

BOOL func_176(int iParam0) // Position - 0x9A5B
{
	return func_163(func_81(), iParam0);
}

BOOL func_177(int iParam0, int iParam1, eCharacter echParam2) // Position - 0x9A6D
{
	BOOL num;
	eCharacter character;

	num = 0;
	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (echParam2 != 145 && echParam2 == 0 || echParam2 == 1 || echParam2 == 2)
		character = echParam2;

	switch (iParam0)
	{
		case 18:
			if (character == CHAR_TREVOR)
				num = 1;
			break;
	
		case 19:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 20:
			if (character != CHAR_FRANKLIN)
				num = 1;
			break;
	
		case 28:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 13:
			if (character == CHAR_MICHAEL)
				if (iParam1 == 2)
					num = 0;
				else
					num = 1;
			else
				num = 1;
			break;
	
		case 22:
			if (iParam1 == 2 || character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 30:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		default:
			num = 1;
			break;
	}

	return num;
}

int func_178(eCharacter echParam0) // Position - 0x9B51
{
	if (!func_18(echParam0))
		return 7;

	return G_SomeGlobalState.MessageCallStates.f_919[echParam0];
}

BOOL func_179(int iParam0) // Position - 0x9B75
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	num = iParam0;

	if (num < 31)
	{
		flag = IS_BIT_SET(Global_113648.f_24997, num);
	}
	else
	{
		num = num - 31;
		flag = IS_BIT_SET(Global_113648.f_24997.f_1, num);
	}

	return flag;
}

BOOL func_180() // Position - 0x9BCD
{
	Vehicle vehiclePedIsIn;

	if (Global_32315)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 0, false)))
					return true;
		}
	}

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x9C11
{
	int profileSetting;

	if (Global_152523 == 2)
		return true;
	else if (Global_152523 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

BOOL func_182(int iParam0, int iParam1) // Position - 0x9CC9
{
	if (Global_113648.f_10196[iParam0].f_5 == 1)
	{
		iParam1 == 1;
		return true;
	}

	return false;
}

void func_183() // Position - 0x9CF0
{
	if (bLocal_51)
	{
		func_221(false);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_87 - Vector3(10f, 10f, 10f), uLocal_87 + Vector3(10f, 10f, 10f), true, true);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		func_27();
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
	
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_65, false))
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_65, false) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_65, 50f, 50f, 50f, false, true, 0))
				func_195(veLocal_65, 0, _CHAR_NULL);
	
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_87, 100f, 100f, 100f, false, true, 0))
		{
			if (!PED::IS_PED_INJURED(pedLocal_55) && !PED::IS_PED_INJURED(pedLocal_57))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -330.36f, 6154.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_CHAT_TO_PED(0, pedLocal_57, 16, 0f, 0f, 0f, 0f, 0f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_113);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -330.36f, 6155.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_CHAT_TO_PED(0, pedLocal_55, 16, 0f, 0f, 0f, 0f, 0f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_57, iLocal_113);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
			}
		}
	
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_133);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_59);
	
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	
		if (!PED::IS_PED_INJURED(pedLocal_55))
		{
			PED::SET_PED_CONFIG_FLAG(pedLocal_55, 317, true);
		
			if (!ENTITY::IS_ENTITY_ATTACHED(pedLocal_55))
				ENTITY::FREEZE_ENTITY_POSITION(pedLocal_55, false);
		
			PED::REMOVE_PED_FROM_GROUP(pedLocal_55);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_55, false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(obLocal_66))
		{
			ENTITY::DETACH_ENTITY(obLocal_66, true, true);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_55);
	
		if (!PED::IS_PED_INJURED(pedLocal_57))
		{
			PED::SET_PED_CONFIG_FLAG(pedLocal_57, 317, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_57, false);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_57);
	
		if (!PED::IS_PED_INJURED(pedLocal_56))
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_56, false);
	
		if (!PED::IS_PED_INJURED(pedLocal_58))
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_58, false);
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_56);
	}

	func_184(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_184(int iParam0) // Position - 0x9F0F
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_54();

	if (iParam0 == -1)
		return;

	if (func_149())
	{
		func_188(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113639 = MISC::GET_GAME_TIMER();
		func_187(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_186(Global_113637, true), 64);
	
		if (func_53(Global_113637) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&name, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&name, Global_113636, 64);
		}
	
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&name, Global_113634, MISC::GET_GAME_TIMER() - Global_113635, 0);
	}
	else if (IS_BIT_SET(Global_113644, 0) && Global_113648.f_24997.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113644, 0);
	}

	func_185(&Global_32223);
	Global_113638 = false;
	func_152(-1);
	return;
}

void func_185(var uParam0) // Position - 0x9FC1
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_43219))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_43218 = 0;
	Global_43220 = 0;
	Global_43257 = 15;
	Global_63359 = 0;
	Global_63360 = 0;
	return;
}

char* func_186(int iParam0, BOOL bParam1) // Position - 0x9FFE
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
	
		case 1:
			return "RE_ATMROBBERY";
	
		case 2:
			return "RE_BUSTOUR";
	
		case 3:
			return "RE_DOMESTIC";
	
		case 4:
			return "RE_GETAWAYDRIVER";
	
		case 5:
			return "RE_SHOPROBBERY";
	
		case 6:
			return "RE_SNATCHED";
	
		case 7:
			return "RE_LURED";
	
		case 8:
			return "RE_BIKETHIEFSTAMP";
	
		case 9:
			return "RE_SECURITYVAN";
	
		case 10:
			return "RE_PAPARAZZI";
	
		case 11:
			return "RE_CHASETHIEVES";
	
		case 12:
			return "RE_DEALGONEWRONG";
	
		case 13:
			return "RE_HITCHLIFT";
	
		case 14:
			return "RE_STAG";
	
		case 15:
			return "RE_ARREST";
	
		case 16:
			return "RE_CRASHRESCUE";
	
		case 17:
			return "RE_CARTHEFT";
	
		case 18:
			return "RE_CULTSHOOTOUT";
	
		case 19:
			return "RE_GANGFIGHT";
	
		case 20:
			return "RE_GANGINTIMIDATION";
	
		case 21:
			return "RE_PRISONVANBREAK";
	
		case 22:
			return "RE_PRISONERLIFT";
	
		case 23:
			return "RE_ABANDONEDCAR";
	
		case 24:
			return "RE_BURIAL";
	
		case 25:
			return "RE_MUGGING";
	
		case 26:
			return "RE_BIKETHIEF";
	
		case 27:
			return "RE_DRUNKDRIVER";
	
		case 28:
			return "RE_HOMELANDSECURITY";
	
		case 29:
			return "RE_BORDERPATROL";
	
		case 30:
			return "RE_SIMEONYETARIAN";
	
		case 31:
			return "RE_DUEL";
	
		case 32:
			return "RE_SEAPLANE";
	
		case 33:
			return "RE_MONKEYPHOTO";
	
		case -1:
			return "RE_NONE";
	}

	!bParam1;
	return "UNKNOWN";
}

void func_187(int iParam0) // Position - 0xA247
{
	Global_43808 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_188(int iParam0) // Position - 0xA259
{
	func_189(iParam0, 0, func_194(iParam0));
	return;
}

void func_189(int iParam0, int iParam1, int iParam2) // Position - 0xA26E
{
	int unk;
	var unk2;

	unk = func_81();
	func_192(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_191(iParam0, &unk);
	unk2 = Vector3(func_190(&unk));
	return;
}

struct<16> func_190(var uParam0) // Position - 0xA29D
{
	var unk;
	int unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_80(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_104(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_161(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_162(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_88(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_86(*uParam0), 64);
	return unk;
}

void func_191(int iParam0, var uParam1) // Position - 0xA36D
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
	return;
}

void func_192(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xA385
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_86(*uParam0);
	i = func_88(*uParam0);
	num2 = func_162(*uParam0);
	j = func_80(*uParam0);
	k = func_104(*uParam0);
	l = func_161(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_85(i, num); num2 > m; m = func_85(i, num))
	{
		i = i + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			num = num + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num + iParam6;
	func_193(uParam0, l, k, j, num2, i, num);
	return;
}

void func_193(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xA507
{
	func_91(uParam0, iParam1);
	func_90(uParam0, iParam2);
	func_89(uParam0, iParam3);
	func_83(uParam0, iParam5);
	func_84(uParam0, iParam4);
	func_82(uParam0, iParam6);
	return;
}

int func_194(int iParam0) // Position - 0xA53F
{
	int num;

	switch (iParam0)
	{
		case 23:
			num = 30;
			break;
	
		case 0:
			num = 30;
			break;
	
		case 15:
			num = 30;
			break;
	
		case 1:
			num = 200;
			break;
	
		case 26:
			num = 30;
			break;
	
		case 8:
			num = 30;
			break;
	
		case 29:
			num = 30;
			break;
	
		case 24:
			num = 30;
			break;
	
		case 2:
			num = 0;
			break;
	
		case 17:
			num = 30;
			break;
	
		case 11:
			num = 30;
			break;
	
		case 16:
			num = 30;
			break;
	
		case 18:
			num = 30;
			break;
	
		case 12:
			num = 120;
			break;
	
		case 3:
			num = 60;
			break;
	
		case 27:
			num = 60;
			break;
	
		case 19:
			num = 30;
			break;
	
		case 20:
			num = 30;
			break;
	
		case 4:
			num = 60;
			break;
	
		case 28:
			num = 30;
			break;
	
		case 13:
			num = 35;
			break;
	
		case 7:
			num = 30;
			break;
	
		case 25:
			num = 40;
			break;
	
		case 10:
			num = 30;
			break;
	
		case 22:
			num = 30;
			break;
	
		case 21:
			num = 30;
			break;
	
		case 5:
			num = 30;
			break;
	
		case 30:
			num = 60;
			break;
	
		case 9:
			num = 60;
			break;
	
		case 6:
			num = 40;
			break;
	
		case 14:
			num = 40;
			break;
	}

	return num;
}

int func_195(Vehicle veParam0, int iParam1, eCharacter echParam2) // Position - 0xA6E2
{
	var script;
	const char* entityScript;

	if (iParam1 == 0)
	{
		entityScript = ENTITY::GET_ENTITY_SCRIPT(veParam0, &script);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(entityScript))
			if (MISC::GET_HASH_KEY(entityScript) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
				return 0;
	}

	func_196(veParam0, echParam2);
	return 1;
}

void func_196(Vehicle veParam0, int iParam1) // Position - 0xA722
{
	Ped pedInVehicleSeat;
	int i;
	int j;

	if (!func_202(veParam0))
		return;

	if (iParam1 != CHAR_MICHAEL && iParam1 != CHAR_FRANKLIN && iParam1 != CHAR_TREVOR)
	{
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
			pedInVehicleSeat = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, -1);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
			if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_Zero"))
				iParam1 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_One"))
				iParam1 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_Two"))
				iParam1 = CHAR_TREVOR;
	
		if (iParam1 != CHAR_MICHAEL && iParam1 != CHAR_FRANKLIN && iParam1 != CHAR_TREVOR)
			iParam1 = Global_113648.f_2365.f_539.f_4321;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 2; j = j + 1)
		{
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_113648.f_32751.f_5038[i][j].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5038[i][j].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_113648.f_32751.f_5038[i][j].f_1)))
					{
						Global_113648.f_32751.f_5038[i][j].f_66 = 0;
						Global_113648.f_32751.f_5592[i] = j;
					}
				}
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_113648.f_32751.f_5600[i].f_66)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5600[i].f_1)))
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_113648.f_32751.f_5600[i].f_1)))
					Global_113648.f_32751.f_5600[i].f_66 = 0;
	}

	Global_113648.f_32751.f_5590 = iParam1;
	Global_78253 = veParam0;
	Global_113648.f_32751.f_5588 = 1;
	func_197(veParam0, &(Global_113648.f_32751.f_5510));
	return;
}

void func_197(Vehicle veParam0, var uParam1) // Position - 0xA924
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_201(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(veParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0);
		VEHICLE::GET_VEHICLE_COLOURS(veParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(veParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(veParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(veParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(veParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 2))
			MISC::SET_BIT(&(uParam1->f_77), 28);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 3))
			MISC::SET_BIT(&(uParam1->f_77), 29);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 30);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 1))
			MISC::SET_BIT(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_200(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(veParam0);
	
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(veParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(veParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
				
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
				
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
	
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 9);
	
		if (VEHICLE::IS_VEHICLE_STOLEN(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 10);
	
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(veParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 12);
	
		func_199(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_198(i + 1));
		}
	
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 11);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
	
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(veParam0, "IgnoredByQuickSave"))
			MISC::SET_BIT(&(uParam1->f_77), 27);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
	}

	return;
}

int func_198(int iParam0) // Position - 0xABCF
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

int func_199(var uParam0, var uParam1, var uParam2) // Position - 0xAC7F
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			uParam1->[i] = 0;
		
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
				uParam1->[i] = 1;
		}
		else if (modType == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0))
				{
					case 255:
						uParam1->[i] = 1;
						break;
				
					case 0:
						uParam1->[i] = 2;
						break;
				
					case 1:
						uParam1->[i] = 3;
						break;
				
					case 2:
						uParam1->[i] = 4;
						break;
				
					case 3:
						uParam1->[i] = 5;
						break;
				
					case 4:
						uParam1->[i] = 6;
						break;
				
					case 5:
						uParam1->[i] = 7;
						break;
				
					case 6:
						uParam1->[i] = 8;
						break;
				
					case 7:
						uParam1->[i] = 9;
						break;
				
					case 8:
						uParam1->[i] = 10;
						break;
				
					case 9:
						uParam1->[i] = 11;
						break;
				
					case 10:
						uParam1->[i] = 12;
						break;
				
					case 11:
						uParam1->[i] = 13;
						break;
				
					case 12:
						uParam1->[i] = 14;
						break;
				
					case 13:
						uParam1->[i] = 15;
						break;
				}
			}
			else
			{
				uParam1->[i] = 0;
			}
		}
		else
		{
			uParam1->[i] = VEHICLE::GET_VEHICLE_MOD(*uParam0, i) + 1;
		
			if (i == 23)
				uParam2->[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
			else if (i == 24)
				uParam2->[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
		}
	}

	return 1;
}

BOOL func_200(int iParam0) // Position - 0xAE72
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return true;
	
		default:
		
	}

	return false;
}

void func_201(var uParam0) // Position - 0xAE92
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

BOOL func_202(Vehicle veParam0) // Position - 0xAF42
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_219(veParam0, 0, false) || func_219(veParam0, 1, false) || func_219(veParam0, 2, false) || func_218(veParam0) != 145 || func_217(veParam0) || func_216(veParam0) || func_215(veParam0) || func_214(veParam0) || !func_203(ENTITY::GET_ENTITY_MODEL(veParam0)))
	{
		func_216(veParam0);
		func_216(veParam0);
		func_219(veParam0, 0, false);
		func_219(veParam0, 1, false);
		func_219(veParam0, 2, false);
		func_218(veParam0) != 145;
		return false;
	}

	return true;
}

BOOL func_203(Hash hParam0) // Position - 0xB01F
{
	if (hParam0 == 0)
		return false;

	if (!func_204(hParam0, false, -1))
		return false;

	if (VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0))
		return false;

	switch (hParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return false;
	}

	return true;
}

BOOL func_204(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xB1D1
{
	int i;
	Hash outData;

	if (hParam0 == 0)
		return false;

	if (!STREAMING::IS_MODEL_A_VEHICLE(hParam0))
		return false;

	if (hParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("blimp2") || hParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;
	}
	else
	{
		for (i = 0; i < FILES::GET_NUM_DLC_VEHICLES(); i = i + 1)
		{
			if (FILES::GET_DLC_VEHICLE_DATA(i, &outData))
				if (hParam0 == outData.f_1)
					if (FILES::IS_CONTENT_ITEM_LOCKED(outData))
						return false;
		}
	}

	if (hParam0 == joaat("blimp"))
		if (!func_213() && !func_212() && !func_211() && !func_210() && !_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	if (hParam0 == joaat("hotknife") || hParam0 == joaat("carbonrs") || hParam0 == joaat("khamelion"))
	{
		if (IS_XBOX_PLATFORM() || MISC::IS_PC_VERSION() || IS_PLAYSTATION_PLATFORM())
		{
		}
		else if (!func_211())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_207(hParam0, iParam2))
			return false;

	if (!func_205(hParam0))
		return false;

	return true;
}

BOOL func_205(Hash hParam0) // Position - 0xB353
{
	int num;
	var unk;
	var name;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		return true;

	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&num, &unk);

	if (num == 4)
		return true;

	switch (hParam0)
	{
		case joaat("dune4"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_DUNE4_t0_v3", 64);
			break;
	
		case joaat("voltic2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_VOLTIC2_t0_v3", 64);
			break;
	
		case joaat("ruiner2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_RUINER2_t0_v3", 64);
			break;
	
		case joaat("phantom2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_PHANTOM2_t0_v3", 64);
			break;
	
		case joaat("technical2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_TECHNICAL2_t0_v3", 64);
			break;
	
		case joaat("boxville5"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BOXVILLE5_t0_v3", 64);
			break;
	
		case joaat("wastelander"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_WASTELANDER_t0_v3", 64);
			break;
	
		case joaat("blazer5"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BLAZER5_t0_v3", 64);
			break;
	
		default:
			return true;
	}

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&name))
		return false;

	return true;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0xB41F
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

BOOL func_207(Hash hParam0, int iParam1) // Position - 0xB436
{
	BOOL num;
	int cloudTimeAsInt;

	if (!Global_2764244 && iParam1 >= 0 && iParam1 <= 415)
		if (IS_BIT_SET(Global_1586468[iParam1].f_103, 2))
			return true;

	if (Global_2764243)
		return true;

	num = 1;
	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (hParam0 == joaat("btype3"))
		if (!Global_262145.f_7059 && !Global_262145.f_13397 && cloudTimeAsInt < Global_262145.f_13398)
			num = 0;

	if (hParam0 == joaat("faction3"))
		if (!Global_262145.f_14737 && cloudTimeAsInt < Global_262145.f_14749)
			num = 0;
	else if (hParam0 == joaat("virgo3") || hParam0 == joaat("virgo2"))
		if (!Global_262145.f_14733 && cloudTimeAsInt < Global_262145.f_14745)
			num = 0;
	else if (hParam0 == joaat("sabregt2"))
		if (!Global_262145.f_14734 && cloudTimeAsInt < Global_262145.f_14746)
			num = 0;
	else if (hParam0 == joaat("tornado5"))
		if (!Global_262145.f_14735 && cloudTimeAsInt < Global_262145.f_14747)
			num = 0;
	else if (hParam0 == joaat("minivan2"))
		if (!Global_262145.f_14736 && cloudTimeAsInt < Global_262145.f_14748)
			num = 0;
	else if (hParam0 == joaat("slamvan3"))
		if (!Global_262145.f_14738 && cloudTimeAsInt < Global_262145.f_14750)
			num = 0;

	if (hParam0 == joaat("prototipo"))
		if (!Global_262145.f_14739 && cloudTimeAsInt < Global_262145.f_14742)
			num = 0;
	else if (hParam0 == joaat("seven70"))
		if (!Global_262145.f_14740 && cloudTimeAsInt < Global_262145.f_14743)
			num = 0;
	else if (hParam0 == joaat("pfister811"))
		if (!Global_262145.f_14741 && cloudTimeAsInt < Global_262145.f_14744)
			num = 0;

	if (hParam0 == joaat("bf400"))
		if (!Global_262145.f_17313 && cloudTimeAsInt < Global_262145.f_17278)
			num = 0;
	else if (hParam0 == joaat("brioso"))
		if (!Global_262145.f_17308 && cloudTimeAsInt < Global_262145.f_17273)
			num = 0;
	else if (hParam0 == joaat("cliffhanger"))
		if (!Global_262145.f_17312 && cloudTimeAsInt < Global_262145.f_17277)
			num = 0;
	else if (hParam0 == joaat("contender"))
		if (!Global_262145.f_17311 && cloudTimeAsInt < Global_262145.f_17276)
			num = 0;
	else if (hParam0 == joaat("le7b"))
		if (!Global_262145.f_17305 && cloudTimeAsInt < Global_262145.f_17270)
			num = 0;
	else if (hParam0 == joaat("omnis"))
		if (!Global_262145.f_17306 && cloudTimeAsInt < Global_262145.f_17271)
			num = 0;
	else if (hParam0 == joaat("trophytruck"))
		if (!Global_262145.f_17309 && cloudTimeAsInt < Global_262145.f_17274)
			num = 0;
	else if (hParam0 == joaat("trophytruck2"))
		if (!Global_262145.f_17310 && cloudTimeAsInt < Global_262145.f_17275)
			num = 0;
	else if (hParam0 == joaat("tropos"))
		if (!Global_262145.f_17307 && cloudTimeAsInt < Global_262145.f_17272)
			num = 0;
	else if (hParam0 == joaat("gargoyle"))
		if (!Global_262145.f_17315 && cloudTimeAsInt < Global_262145.f_17280)
			num = 0;
	else if (hParam0 == joaat("rallytruck"))
		if (!Global_262145.f_17316 && cloudTimeAsInt < Global_262145.f_17281)
			num = 0;
	else if (hParam0 == joaat("tampa2"))
		if (!Global_262145.f_17304 && cloudTimeAsInt < Global_262145.f_17269)
			num = 0;
	else if (hParam0 == joaat("tyrus"))
		if (!Global_262145.f_17303 && cloudTimeAsInt < Global_262145.f_17268)
			num = 0;
	else if (hParam0 == joaat("sheava"))
		if (!Global_262145.f_17302 && cloudTimeAsInt < Global_262145.f_17267)
			num = 0;
	else if (hParam0 == joaat("lynx"))
		if (!Global_262145.f_17314 && cloudTimeAsInt < Global_262145.f_17279)
			num = 0;
	else if (hParam0 == joaat("stalion2"))
		if (!Global_262145.f_17317 && cloudTimeAsInt < Global_262145.f_17282)
			num = 0;
	else if (hParam0 == joaat("gauntlet2"))
		if (!Global_262145.f_17318 && cloudTimeAsInt < Global_262145.f_17283)
			num = 0;
	else if (hParam0 == joaat("dominator2"))
		if (!Global_262145.f_17319 && cloudTimeAsInt < Global_262145.f_17284)
			num = 0;
	else if (hParam0 == joaat("buffalo3"))
		if (!Global_262145.f_17320 && cloudTimeAsInt < Global_262145.f_17285)
			num = 0;

	if (hParam0 == joaat("defiler"))
		if (!Global_262145.f_17474 && cloudTimeAsInt < Global_262145.f_17496)
			num = 0;
	else if (hParam0 == joaat("nightblade"))
		if (!Global_262145.f_17475 && cloudTimeAsInt < Global_262145.f_17497)
			num = 0;
	else if (hParam0 == joaat("zombiea"))
		if (!Global_262145.f_17476 && cloudTimeAsInt < Global_262145.f_17498)
			num = 0;
	else if (hParam0 == joaat("esskey"))
		if (!Global_262145.f_17477 && cloudTimeAsInt < Global_262145.f_17499)
			num = 0;
	else if (hParam0 == joaat("avarus"))
		if (!Global_262145.f_17478 && cloudTimeAsInt < Global_262145.f_17500)
			num = 0;
	else if (hParam0 == joaat("zombieb"))
		if (!Global_262145.f_17479 && cloudTimeAsInt < Global_262145.f_17501)
			num = 0;
	else if (hParam0 == joaat("hakuchou2"))
		if (!Global_262145.f_17481 && cloudTimeAsInt < Global_262145.f_17502)
			num = 0;
	else if (hParam0 == joaat("vortex"))
		if (!Global_262145.f_17482 && cloudTimeAsInt < Global_262145.f_17503)
			num = 0;
	else if (hParam0 == joaat("shotaro"))
		if (!Global_262145.f_17483 && cloudTimeAsInt < Global_262145.f_17504)
			num = 0;
	else if (hParam0 == joaat("chimera"))
		if (!Global_262145.f_17484 && cloudTimeAsInt < Global_262145.f_17505)
			num = 0;
	else if (hParam0 == joaat("raptor"))
		if (!Global_262145.f_17485 && cloudTimeAsInt < Global_262145.f_17506)
			num = 0;
	else if (hParam0 == joaat("daemon2"))
		if (!Global_262145.f_17486 && cloudTimeAsInt < Global_262145.f_17507)
			num = 0;
	else if (hParam0 == joaat("blazer4"))
		if (!Global_262145.f_17487 && cloudTimeAsInt < Global_262145.f_17508)
			num = 0;
	else if (hParam0 == joaat("tornado6"))
		if (!Global_262145.f_17493 && cloudTimeAsInt < Global_262145.f_17515)
			num = 0;
	else if (hParam0 == joaat("youga2"))
		if (!Global_262145.f_17490 && cloudTimeAsInt < Global_262145.f_17511)
			num = 0;
	else if (hParam0 == joaat("wolfsbane"))
		if (!Global_262145.f_17491 && cloudTimeAsInt < Global_262145.f_17512)
			num = 0;
	else if (hParam0 == joaat("faggio3"))
		if (!Global_262145.f_17492 && cloudTimeAsInt < Global_262145.f_17513)
			num = 0;
	else if (hParam0 == joaat("faggio"))
		if (!Global_262145.f_17480 && cloudTimeAsInt < Global_262145.f_17514)
			num = 0;
	else if (hParam0 == joaat("bagger"))
		if (!Global_262145.f_17494 && cloudTimeAsInt < Global_262145.f_17516)
			num = 0;
	else if (hParam0 == joaat("sanctus"))
		if (!Global_262145.f_17488 && cloudTimeAsInt < Global_262145.f_17509)
			num = 0;
	else if (hParam0 == joaat("manchez"))
		if (!Global_262145.f_17489 && cloudTimeAsInt < Global_262145.f_17510)
			num = 0;
	else if (hParam0 == joaat("ratbike"))
		if (!Global_262145.f_17495 && cloudTimeAsInt < Global_262145.f_17517)
			num = 0;

	if (hParam0 == joaat("voltic2"))
		if (!Global_262145.f_19131 && cloudTimeAsInt < Global_262145.f_19228)
			num = 0;
	else if (hParam0 == joaat("ruiner2"))
		if (!Global_262145.f_19132 && cloudTimeAsInt < Global_262145.f_19229)
			num = 0;
	else if (hParam0 == joaat("dune4"))
		if (!Global_262145.f_19133 && cloudTimeAsInt < Global_262145.f_19230)
			num = 0;
	else if (hParam0 == joaat("dune5"))
		if (!Global_262145.f_19134 && cloudTimeAsInt < Global_262145.f_19231)
			num = 0;
	else if (hParam0 == joaat("phantom2"))
		if (!Global_262145.f_19135 && cloudTimeAsInt < Global_262145.f_19232)
			num = 0;
	else if (hParam0 == joaat("technical2"))
		if (!Global_262145.f_19136 && cloudTimeAsInt < Global_262145.f_19233)
			num = 0;
	else if (hParam0 == joaat("boxville5"))
		if (!Global_262145.f_19137 && cloudTimeAsInt < Global_262145.f_19234)
			num = 0;
	else if (hParam0 == joaat("wastelander"))
		if (!Global_262145.f_19138 && cloudTimeAsInt < Global_262145.f_19235)
			num = 0;
	else if (hParam0 == joaat("blazer5"))
		if (!Global_262145.f_19139 && cloudTimeAsInt < Global_262145.f_19236)
			num = 0;
	else if (hParam0 == joaat("comet2"))
		if (!Global_262145.f_19140 && cloudTimeAsInt < Global_262145.f_19237)
			num = 0;
	else if (hParam0 == joaat("comet3"))
		if (!Global_262145.f_19141 && cloudTimeAsInt < Global_262145.f_19238)
			num = 0;
	else if (hParam0 == joaat("diablous"))
		if (!Global_262145.f_19142 && cloudTimeAsInt < Global_262145.f_19239)
			num = 0;
	else if (hParam0 == joaat("diablous2"))
		if (!Global_262145.f_19143 && cloudTimeAsInt < Global_262145.f_19240)
			num = 0;
	else if (hParam0 == joaat("elegy"))
		if (!Global_262145.f_19144 && cloudTimeAsInt < Global_262145.f_19241)
			num = 0;
	else if (hParam0 == joaat("elegy2"))
		if (!Global_262145.f_19145 && cloudTimeAsInt < Global_262145.f_19242)
			num = 0;
	else if (hParam0 == joaat("fcr"))
		if (!Global_262145.f_19146 && cloudTimeAsInt < Global_262145.f_19243)
			num = 0;
	else if (hParam0 == joaat("fcr2"))
		if (!Global_262145.f_19147 && cloudTimeAsInt < Global_262145.f_19244)
			num = 0;
	else if (hParam0 == joaat("italigtb"))
		if (!Global_262145.f_19148 && cloudTimeAsInt < Global_262145.f_19245)
			num = 0;
	else if (hParam0 == joaat("italigtb2"))
		if (!Global_262145.f_19149 && cloudTimeAsInt < Global_262145.f_19246)
			num = 0;
	else if (hParam0 == joaat("nero"))
		if (!Global_262145.f_19150 && cloudTimeAsInt < Global_262145.f_19247)
			num = 0;
	else if (hParam0 == joaat("nero2"))
		if (!Global_262145.f_19151 && cloudTimeAsInt < Global_262145.f_19248)
			num = 0;
	else if (hParam0 == joaat("penetrator"))
		if (!Global_262145.f_19152 && cloudTimeAsInt < Global_262145.f_19249)
			num = 0;
	else if (hParam0 == joaat("specter"))
		if (!Global_262145.f_19153 && cloudTimeAsInt < Global_262145.f_19250)
			num = 0;
	else if (hParam0 == joaat("specter2"))
		if (!Global_262145.f_19154 && cloudTimeAsInt < Global_262145.f_19251)
			num = 0;
	else if (hParam0 == joaat("tempesta"))
		if (!Global_262145.f_19155 && cloudTimeAsInt < Global_262145.f_19252)
			num = 0;

	if (hParam0 == joaat("gp1"))
		if (!Global_262145.f_20212 && cloudTimeAsInt < Global_262145.f_20208)
			num = 0;
	else if (hParam0 == joaat("infernus2"))
		if (!Global_262145.f_20213 && cloudTimeAsInt < Global_262145.f_20209)
			num = 0;
	else if (hParam0 == joaat("ruston"))
		if (!Global_262145.f_20214 && cloudTimeAsInt < Global_262145.f_20210)
			num = 0;
	else if (hParam0 == joaat("turismo2"))
		if (!Global_262145.f_20215 && cloudTimeAsInt < Global_262145.f_20211)
			num = 0;

	if (hParam0 == joaat("xa21"))
		if (!Global_262145.f_21094 && cloudTimeAsInt < Global_262145.f_21102)
			num = 0;
	else if (hParam0 == joaat("cheetah2"))
		if (!Global_262145.f_21095 && cloudTimeAsInt < Global_262145.f_21103)
			num = 0;
	else if (hParam0 == joaat("torero"))
		if (!Global_262145.f_21096 && cloudTimeAsInt < Global_262145.f_21104)
			num = 0;
	else if (hParam0 == joaat("vagner"))
		if (!Global_262145.f_21097 && cloudTimeAsInt < Global_262145.f_21105)
			num = 0;
	else if (hParam0 == joaat("ardent"))
		if (!Global_262145.f_21098 && cloudTimeAsInt < Global_262145.f_21106)
			num = 0;
	else if (hParam0 == joaat("nightshark"))
		if (!Global_262145.f_21099 && cloudTimeAsInt < Global_262145.f_21107)
			num = 0;

	if (hParam0 == joaat("microlight"))
		if (!Global_262145.f_21893 && cloudTimeAsInt < Global_262145.f_21913)
			num = 0;
	else if (hParam0 == joaat("mogul"))
		if (!Global_262145.f_21905 && cloudTimeAsInt < Global_262145.f_21925)
			num = 0;
	else if (hParam0 == joaat("rogue"))
		if (!Global_262145.f_21896 && cloudTimeAsInt < Global_262145.f_21916)
			num = 0;
	else if (hParam0 == joaat("starling"))
		if (!Global_262145.f_21906 && cloudTimeAsInt < Global_262145.f_21926)
			num = 0;
	else if (hParam0 == joaat("seabreeze"))
		if (!Global_262145.f_21894 && cloudTimeAsInt < Global_262145.f_21914)
			num = 0;
	else if (hParam0 == joaat("tula"))
		if (!Global_262145.f_21910 && cloudTimeAsInt < Global_262145.f_21930)
			num = 0;
	else if (hParam0 == joaat("pyro"))
		if (!Global_262145.f_21908 && cloudTimeAsInt < Global_262145.f_21928)
			num = 0;
	else if (hParam0 == joaat("molotok"))
		if (!Global_262145.f_21909 && cloudTimeAsInt < Global_262145.f_21929)
			num = 0;
	else if (hParam0 == joaat("nokota"))
		if (!Global_262145.f_21904 && cloudTimeAsInt < Global_262145.f_21924)
			num = 0;
	else if (hParam0 == joaat("bombushka"))
		if (!Global_262145.f_21911 && cloudTimeAsInt < Global_262145.f_21931)
			num = 0;
	else if (hParam0 == joaat("hunter"))
		if (!Global_262145.f_21907 && cloudTimeAsInt < Global_262145.f_21927)
			num = 0;
	else if (hParam0 == joaat("havok"))
		if (!Global_262145.f_21903 && cloudTimeAsInt < Global_262145.f_21923)
			num = 0;
	else if (hParam0 == joaat("howard"))
		if (!Global_262145.f_21895 && cloudTimeAsInt < Global_262145.f_21915)
			num = 0;
	else if (hParam0 == joaat("alphaz1"))
		if (!Global_262145.f_21897 && cloudTimeAsInt < Global_262145.f_21917)
			num = 0;
	else if (hParam0 == joaat("cyclone"))
		if (!Global_262145.f_21898 && cloudTimeAsInt < Global_262145.f_21918)
			num = 0;
	else if (hParam0 == joaat("visione"))
		if (!Global_262145.f_21899 && cloudTimeAsInt < Global_262145.f_21919)
			num = 0;
	else if (hParam0 == joaat("vigilante"))
		if (!Global_262145.f_21900 && cloudTimeAsInt < Global_262145.f_21920)
			num = 0;
	else if (hParam0 == joaat("retinue"))
		if (!Global_262145.f_21901 && cloudTimeAsInt < Global_262145.f_21921)
			num = 0;
	else if (hParam0 == joaat("rapidgt3"))
		if (!Global_262145.f_21902 && cloudTimeAsInt < Global_262145.f_21922)
			num = 0;

	if (hParam0 == joaat("deluxo"))
		if (!Global_262145.f_22861 && cloudTimeAsInt < Global_262145.f_22889)
			num = 0;
	else if (hParam0 == joaat("stromberg"))
		if (!Global_262145.f_22862 && cloudTimeAsInt < Global_262145.f_22890)
			num = 0;
	else if (hParam0 == joaat("riot2"))
		if (!Global_262145.f_22863 && cloudTimeAsInt < Global_262145.f_22891)
			num = 0;
	else if (hParam0 == joaat("chernobog"))
		if (!Global_262145.f_22864 && cloudTimeAsInt < Global_262145.f_22892)
			num = 0;
	else if (hParam0 == joaat("khanjali"))
		if (!Global_262145.f_22865 && cloudTimeAsInt < Global_262145.f_22893)
			num = 0;
	else if (hParam0 == joaat("akula"))
		if (!Global_262145.f_22866 && cloudTimeAsInt < Global_262145.f_22894)
			num = 0;
	else if (hParam0 == joaat("thruster"))
		if (!Global_262145.f_22867 && cloudTimeAsInt < Global_262145.f_22895)
			num = 0;
	else if (hParam0 == joaat("barrage"))
		if (!Global_262145.f_22868 && cloudTimeAsInt < Global_262145.f_22896)
			num = 0;
	else if (hParam0 == joaat("volatol"))
		if (!Global_262145.f_22869 && cloudTimeAsInt < Global_262145.f_22897)
			num = 0;
	else if (hParam0 == joaat("comet4"))
		if (!Global_262145.f_22870 && cloudTimeAsInt < Global_262145.f_22898)
			num = 0;
	else if (hParam0 == joaat("neon"))
		if (!Global_262145.f_22871 && cloudTimeAsInt < Global_262145.f_22899)
			num = 0;
	else if (hParam0 == joaat("streiter"))
		if (!Global_262145.f_22872 && cloudTimeAsInt < Global_262145.f_22900)
			num = 0;
	else if (hParam0 == joaat("sentinel3"))
		if (!Global_262145.f_22873 && cloudTimeAsInt < Global_262145.f_22901)
			num = 0;
	else if (hParam0 == joaat("yosemite"))
		if (!Global_262145.f_22874 && cloudTimeAsInt < Global_262145.f_22902)
			num = 0;
	else if (hParam0 == joaat("sc1"))
		if (!Global_262145.f_22875 && cloudTimeAsInt < Global_262145.f_22903)
			num = 0;
	else if (hParam0 == joaat("autarch"))
		if (!Global_262145.f_22876 && cloudTimeAsInt < Global_262145.f_22904)
			num = 0;
	else if (hParam0 == joaat("gt500"))
		if (!Global_262145.f_22877 && cloudTimeAsInt < Global_262145.f_22905)
			num = 0;
	else if (hParam0 == joaat("hustler"))
		if (!Global_262145.f_22878 && cloudTimeAsInt < Global_262145.f_22906)
			num = 0;
	else if (hParam0 == joaat("revolter"))
		if (!Global_262145.f_22879 && cloudTimeAsInt < Global_262145.f_22907)
			num = 0;
	else if (hParam0 == joaat("pariah"))
		if (!Global_262145.f_22880 && cloudTimeAsInt < Global_262145.f_22908)
			num = 0;
	else if (hParam0 == joaat("raiden"))
		if (!Global_262145.f_22881 && cloudTimeAsInt < Global_262145.f_22909)
			num = 0;
	else if (hParam0 == joaat("savestra"))
		if (!Global_262145.f_22882 && cloudTimeAsInt < Global_262145.f_22910)
			num = 0;
	else if (hParam0 == joaat("riata"))
		if (!Global_262145.f_22883 && cloudTimeAsInt < Global_262145.f_22911)
			num = 0;
	else if (hParam0 == joaat("hermes"))
		if (!Global_262145.f_22884 && cloudTimeAsInt < Global_262145.f_22912)
			num = 0;
	else if (hParam0 == joaat("comet5"))
		if (!Global_262145.f_22885 && cloudTimeAsInt < Global_262145.f_22913)
			num = 0;
	else if (hParam0 == joaat("z190"))
		if (!Global_262145.f_22886 && cloudTimeAsInt < Global_262145.f_22914)
			num = 0;
	else if (hParam0 == joaat("viseris"))
		if (!Global_262145.f_22887 && cloudTimeAsInt < Global_262145.f_22915)
			num = 0;
	else if (hParam0 == joaat("kamacho"))
		if (!Global_262145.f_22888 && cloudTimeAsInt < Global_262145.f_22916)
			num = 0;

	if (hParam0 == joaat("gb200"))
		if (!Global_262145.f_24081 && cloudTimeAsInt < Global_262145.f_24097)
			num = 0;
	else if (hParam0 == joaat("fagaloa"))
		if (!Global_262145.f_24082 && cloudTimeAsInt < Global_262145.f_24098)
			num = 0;
	else if (hParam0 == joaat("ellie"))
		if (!Global_262145.f_24086 && cloudTimeAsInt < Global_262145.f_24102)
			num = 0;
	else if (hParam0 == joaat("issi3"))
		if (!Global_262145.f_24089 && cloudTimeAsInt < Global_262145.f_24105)
			num = 0;
	else if (hParam0 == joaat("michelli"))
		if (!Global_262145.f_24094 && cloudTimeAsInt < Global_262145.f_24110)
			num = 0;
	else if (hParam0 == joaat("flashgt"))
		if (!Global_262145.f_24088 && cloudTimeAsInt < Global_262145.f_24104)
			num = 0;
	else if (hParam0 == joaat("hotring"))
		if (!Global_262145.f_24080 && cloudTimeAsInt < Global_262145.f_24096)
			num = 0;
	else if (hParam0 == joaat("tezeract"))
		if (!Global_262145.f_24087 && cloudTimeAsInt < Global_262145.f_24103)
			num = 0;
	else if (hParam0 == joaat("tyrant"))
		if (!Global_262145.f_24093 && cloudTimeAsInt < Global_262145.f_24109)
			num = 0;
	else if (hParam0 == joaat("dominator3"))
		if (!Global_262145.f_24092 && cloudTimeAsInt < Global_262145.f_24108)
			num = 0;
	else if (hParam0 == joaat("taipan"))
		if (!Global_262145.f_24083 && cloudTimeAsInt < Global_262145.f_24099)
			num = 0;
	else if (hParam0 == joaat("entity2"))
		if (!Global_262145.f_24085 && cloudTimeAsInt < Global_262145.f_24101)
			num = 0;
	else if (hParam0 == joaat("jester3"))
		if (!Global_262145.f_24095 && cloudTimeAsInt < Global_262145.f_24111)
			num = 0;
	else if (hParam0 == joaat("cheburek"))
		if (!Global_262145.f_24091 && cloudTimeAsInt < Global_262145.f_24107)
			num = 0;
	else if (hParam0 == joaat("caracara"))
		if (!Global_262145.f_24084 && cloudTimeAsInt < Global_262145.f_24100)
			num = 0;
	else if (hParam0 == joaat("seasparrow"))
		if (!Global_262145.f_24090 && cloudTimeAsInt < Global_262145.f_24106)
			num = 0;

	if (hParam0 == joaat("terbyte"))
		if (!Global_262145.f_24171 && cloudTimeAsInt < Global_262145.f_24158)
			num = 0;
	else if (hParam0 == joaat("pbus2"))
		if (!Global_262145.f_24172 && cloudTimeAsInt < Global_262145.f_24159)
			num = 0;
	else if (hParam0 == joaat("mule4"))
		if (!Global_262145.f_24177 && cloudTimeAsInt < Global_262145.f_24164)
			num = 0;
	else if (hParam0 == joaat("pounder2"))
		if (!Global_262145.f_24176 && cloudTimeAsInt < Global_262145.f_24163)
			num = 0;
	else if (hParam0 == joaat("swinger"))
		if (!Global_262145.f_24174 && cloudTimeAsInt < Global_262145.f_24161)
			num = 0;
	else if (hParam0 == joaat("menacer"))
		if (!Global_262145.f_24180 && cloudTimeAsInt < Global_262145.f_24167)
			num = 0;
	else if (hParam0 == joaat("scramjet"))
		if (!Global_262145.f_24182 && cloudTimeAsInt < Global_262145.f_24169)
			num = 0;
	else if (hParam0 == joaat("strikeforce"))
		if (!Global_262145.f_24183 && cloudTimeAsInt < Global_262145.f_24170)
			num = 0;
	else if (hParam0 == joaat("oppressor2"))
		if (!Global_262145.f_24181 && cloudTimeAsInt < Global_262145.f_24168)
			num = 0;
	else if (hParam0 == joaat("patriot2"))
		if (!Global_262145.f_24173 && cloudTimeAsInt < Global_262145.f_24160)
			num = 0;
	else if (hParam0 == joaat("stafford"))
		if (!Global_262145.f_24175 && cloudTimeAsInt < Global_262145.f_24162)
			num = 0;
	else if (hParam0 == joaat("freecrawler"))
		if (!Global_262145.f_24179 && cloudTimeAsInt < Global_262145.f_24166)
			num = 0;
	else if (hParam0 == joaat("blimp3"))
		if (!Global_262145.f_24178 && cloudTimeAsInt < Global_262145.f_24165)
			num = 0;

	if (hParam0 == joaat("monster3"))
	{
	}
	else if (hParam0 == joaat("cerberus"))
	{
	}
	else if (hParam0 == joaat("cerberus2"))
	{
	}
	else if (hParam0 == joaat("cerberus3"))
	{
	}
	else if (hParam0 == joaat("brutus"))
	{
	}
	else if (hParam0 == joaat("brutus2"))
	{
	}
	else if (hParam0 == joaat("brutus3"))
	{
	}
	else if (hParam0 == joaat("scarab"))
	{
	}
	else if (hParam0 == joaat("scarab2"))
	{
	}
	else if (hParam0 == joaat("scarab3"))
	{
	}
	else if (hParam0 == joaat("imperator"))
	{
	}
	else if (hParam0 == joaat("imperator2"))
	{
	}
	else if (hParam0 == joaat("imperator3"))
	{
	}
	else if (hParam0 == joaat("zr380"))
	{
	}
	else if (hParam0 == joaat("zr3802"))
	{
	}
	else if (hParam0 == joaat("zr3803"))
	{
	}
	else if (hParam0 == joaat("impaler"))
	{
	}
	else if (hParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26768 && cloudTimeAsInt < Global_262145.f_26770)
			num = 0;
	}
	else if (hParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25781 && cloudTimeAsInt < Global_262145.f_25774)
			num = 0;
	}
	else if (hParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25782 && cloudTimeAsInt < Global_262145.f_25775)
			num = 0;
	}
	else if (hParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25783 && cloudTimeAsInt < Global_262145.f_25776)
			num = 0;
	}
	else if (hParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25784 && cloudTimeAsInt < Global_262145.f_25777)
			num = 0;
	}
	else if (hParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26769 && cloudTimeAsInt < Global_262145.f_26771)
			num = 0;
	}
	else if (hParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25785 && cloudTimeAsInt < Global_262145.f_25778)
			num = 0;
	}
	else if (hParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25786 && cloudTimeAsInt < Global_262145.f_25779)
			num = 0;
	}
	else if (hParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25787 && cloudTimeAsInt < Global_262145.f_25780)
			num = 0;
	}
	else if (hParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25792 && cloudTimeAsInt < Global_262145.f_25813)
			num = 0;
	}
	else if (hParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25793 && cloudTimeAsInt < Global_262145.f_25814)
			num = 0;
	}
	else if (hParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25794 && cloudTimeAsInt < Global_262145.f_25815)
			num = 0;
	}
	else if (hParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25795 && cloudTimeAsInt < Global_262145.f_25816)
			num = 0;
	}
	else if (hParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25796 && cloudTimeAsInt < Global_262145.f_25817)
			num = 0;
	}
	else if (hParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25797 && cloudTimeAsInt < Global_262145.f_25818)
			num = 0;
	}
	else if (hParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25798 && cloudTimeAsInt < Global_262145.f_25819)
			num = 0;
	}
	else if (hParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25799 && cloudTimeAsInt < Global_262145.f_25820)
			num = 0;
	}
	else if (hParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25800 && cloudTimeAsInt < Global_262145.f_25821)
			num = 0;
	}
	else if (hParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25801 && cloudTimeAsInt < Global_262145.f_25822)
			num = 0;
	}
	else if (hParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25802 && cloudTimeAsInt < Global_262145.f_25823)
			num = 0;
	}
	else if (hParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25803 && cloudTimeAsInt < Global_262145.f_25824)
			num = 0;
	}
	else if (hParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25804 && cloudTimeAsInt < Global_262145.f_25825)
			num = 0;
	}
	else if (hParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25805 && cloudTimeAsInt < Global_262145.f_25826)
			num = 0;
	}
	else if (hParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25806 && cloudTimeAsInt < Global_262145.f_25827)
			num = 0;
	}
	else if (hParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25807 && cloudTimeAsInt < Global_262145.f_25828)
			num = 0;
	}
	else if (hParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25808 && cloudTimeAsInt < Global_262145.f_25829)
			num = 0;
	}
	else if (hParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25809 && cloudTimeAsInt < Global_262145.f_25830)
			num = 0;
	}
	else if (hParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25810 && cloudTimeAsInt < Global_262145.f_25831)
			num = 0;
	}
	else if (hParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25811 && cloudTimeAsInt < Global_262145.f_25832)
			num = 0;
	}
	else if (hParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25812 && cloudTimeAsInt < Global_262145.f_25833)
			num = 0;
	}
	else if (hParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28613 && cloudTimeAsInt < Global_262145.f_28634)
			num = 0;
	}
	else if (hParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28614 && cloudTimeAsInt < Global_262145.f_28635)
			num = 0;
	}
	else if (hParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28615 && cloudTimeAsInt < Global_262145.f_28636)
			num = 0;
	}
	else if (hParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28616 && cloudTimeAsInt < Global_262145.f_28637)
			num = 0;
	}
	else if (hParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28617 && cloudTimeAsInt < Global_262145.f_28638)
			num = 0;
	}
	else if (hParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28618 && cloudTimeAsInt < Global_262145.f_28639)
			num = 0;
	}
	else if (hParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28619 && cloudTimeAsInt < Global_262145.f_28640)
			num = 0;
	}
	else if (hParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28620 && cloudTimeAsInt < Global_262145.f_28641)
			num = 0;
	}
	else if (hParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28621 && cloudTimeAsInt < Global_262145.f_28642)
			num = 0;
	}
	else if (hParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28622 && cloudTimeAsInt < Global_262145.f_28643)
			num = 0;
	}
	else if (hParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28623 && cloudTimeAsInt < Global_262145.f_28644)
			num = 0;
	}
	else if (hParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28624 && cloudTimeAsInt < Global_262145.f_28645)
			num = 0;
	}
	else if (hParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28625 && cloudTimeAsInt < Global_262145.f_28646)
			num = 0;
	}
	else if (hParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28626 && cloudTimeAsInt < Global_262145.f_28647)
			num = 0;
	}
	else if (hParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28627 && cloudTimeAsInt < Global_262145.f_28648)
			num = 0;
	}
	else if (hParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28628 && cloudTimeAsInt < Global_262145.f_28649)
			num = 0;
	}
	else if (hParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28629 && cloudTimeAsInt < Global_262145.f_28650)
			num = 0;
	}
	else if (hParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28630 && cloudTimeAsInt < Global_262145.f_28651)
			num = 0;
	}
	else if (hParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28631 && cloudTimeAsInt < Global_262145.f_28652)
			num = 0;
	}
	else if (hParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28632 && cloudTimeAsInt < Global_262145.f_28653)
			num = 0;
	}
	else if (hParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28633 && cloudTimeAsInt < Global_262145.f_28654)
			num = 0;
	}
	else if (hParam0 == joaat("formula"))
	{
		if (!Global_262145.f_28656 && cloudTimeAsInt < Global_262145.f_28657 && !Global_262145.f_28611)
			num = 0;
	}
	else if (hParam0 == joaat("formula2"))
	{
		if (!Global_262145.f_28659 && cloudTimeAsInt < Global_262145.f_28660 && !Global_262145.f_28612)
			num = 0;
	}
	else if (hParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28664 && cloudTimeAsInt < Global_262145.f_28667)
			num = 0;
	}
	else if (hParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28665 && cloudTimeAsInt < Global_262145.f_28668)
			num = 0;
	}
	else if (hParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28666 && cloudTimeAsInt < Global_262145.f_28669)
			num = 0;
	}
	else if (hParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29682 && cloudTimeAsInt < Global_262145.f_29347)
			num = 0;
	}
	else if (hParam0 == joaat("club"))
	{
		if (!Global_262145.f_29333 && cloudTimeAsInt < Global_262145.f_29354)
			num = 0;
	}
	else if (hParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29334 && cloudTimeAsInt < Global_262145.f_29340)
			num = 0;
	}
	else if (hParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29680 && cloudTimeAsInt < Global_262145.f_29348)
			num = 0;
	}
	else if (hParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29681 && cloudTimeAsInt < Global_262145.f_29349)
			num = 0;
	}
	else if (hParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29327 && cloudTimeAsInt < Global_262145.f_29346)
			num = 0;
	}
	else if (hParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29328 && cloudTimeAsInt < Global_262145.f_29355)
			num = 0;
	}
	else if (hParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29329 && cloudTimeAsInt < Global_262145.f_29345)
			num = 0;
	}
	else if (hParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29330 && cloudTimeAsInt < Global_262145.f_29343)
			num = 0;
	}
	else if (hParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29676 && cloudTimeAsInt < Global_262145.f_29350)
			num = 0;
	}
	else if (hParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29677 && cloudTimeAsInt < Global_262145.f_29351)
			num = 0;
	}
	else if (hParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29678 && cloudTimeAsInt < Global_262145.f_29352)
			num = 0;
	}
	else if (hParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29679 && cloudTimeAsInt < Global_262145.f_29353)
			num = 0;
	}
	else if (hParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29331 && cloudTimeAsInt < Global_262145.f_29342)
			num = 0;
	}
	else if (hParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29332 && cloudTimeAsInt < Global_262145.f_29344)
			num = 0;
	}
	else if (hParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30141 && cloudTimeAsInt < Global_262145.f_30124)
			num = 0;
	}
	else if (hParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30142 && cloudTimeAsInt < Global_262145.f_30125)
			num = 0;
	}
	else if (hParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30143 && cloudTimeAsInt < Global_262145.f_30126)
			num = 0;
	}
	else if (hParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30144 && cloudTimeAsInt < Global_262145.f_30127)
			num = 0;
	}
	else if (hParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30145 && cloudTimeAsInt < Global_262145.f_30128)
			num = 0;
	}
	else if (hParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30146 && cloudTimeAsInt < Global_262145.f_30129)
			num = 0;
	}
	else if (hParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30147 && cloudTimeAsInt < Global_262145.f_30130)
			num = 0;
	}
	else if (hParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30148 && cloudTimeAsInt < Global_262145.f_30131)
			num = 0;
	}
	else if (hParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30149 && cloudTimeAsInt < Global_262145.f_30132)
			num = 0;
	}
	else if (hParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30158)
		{
		}
		else if (!Global_262145.f_30150 && cloudTimeAsInt < Global_262145.f_30133)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30151 && cloudTimeAsInt < Global_262145.f_30134)
			num = 0;
	}
	else if (hParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30152 && cloudTimeAsInt < Global_262145.f_30135)
			num = 0;
	}
	else if (hParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30153 && cloudTimeAsInt < Global_262145.f_30136)
			num = 0;
	}
	else if (hParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30154 && cloudTimeAsInt < Global_262145.f_30137)
			num = 0;
	}
	else if (hParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30159)
		{
		}
		else if (!Global_262145.f_30155 && cloudTimeAsInt < Global_262145.f_30138)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30156 && cloudTimeAsInt < Global_262145.f_30139)
			num = 0;
	}
	else if (hParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30157 && cloudTimeAsInt < Global_262145.f_30140)
			num = 0;
	}
	else if (hParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31009 && cloudTimeAsInt < Global_262145.f_30992)
			num = 0;
	}
	else if (hParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31010 && cloudTimeAsInt < Global_262145.f_30993)
			num = 0;
	}
	else if (hParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31011 && cloudTimeAsInt < Global_262145.f_30994)
			num = 0;
	}
	else if (hParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31012 && cloudTimeAsInt < Global_262145.f_30995)
			num = 0;
	}
	else if (hParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31013 && cloudTimeAsInt < Global_262145.f_30996)
			num = 0;
	}
	else if (hParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31014 && cloudTimeAsInt < Global_262145.f_30997)
			num = 0;
	}
	else if (hParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31015 && cloudTimeAsInt < Global_262145.f_30998)
			num = 0;
	}
	else if (hParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31016 && cloudTimeAsInt < Global_262145.f_30999)
			num = 0;
	}
	else if (hParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31017 && cloudTimeAsInt < Global_262145.f_31000)
			num = 0;
	}
	else if (hParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31018 && cloudTimeAsInt < Global_262145.f_31001)
			num = 0;
	}
	else if (hParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31019 && cloudTimeAsInt < Global_262145.f_31002)
			num = 0;
	}
	else if (hParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31020 && cloudTimeAsInt < Global_262145.f_31003)
			num = 0;
	}
	else if (hParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31021 && cloudTimeAsInt < Global_262145.f_31004)
			num = 0;
	}
	else if (hParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31022 && cloudTimeAsInt < Global_262145.f_31005)
			num = 0;
	}
	else if (hParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31023 && cloudTimeAsInt < Global_262145.f_31006)
			num = 0;
	}
	else if (hParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31024 && cloudTimeAsInt < Global_262145.f_31007)
			num = 0;
	}
	else if (hParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31025 && cloudTimeAsInt < Global_262145.f_31008)
			num = 0;
	}
	else if (hParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31889 && cloudTimeAsInt < Global_262145.f_31874)
			num = 0;
	}
	else if (hParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31890 && cloudTimeAsInt < Global_262145.f_31875)
			num = 0;
	}
	else if (hParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31891 && cloudTimeAsInt < Global_262145.f_31876)
			num = 0;
	}
	else if (hParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31892 && cloudTimeAsInt < Global_262145.f_31877)
			num = 0;
	}
	else if (hParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31893 && cloudTimeAsInt < Global_262145.f_31878)
			num = 0;
	}
	else if (hParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31894 && cloudTimeAsInt < Global_262145.f_31879)
			num = 0;
	}
	else if (hParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31895 && cloudTimeAsInt < Global_262145.f_31880)
			num = 0;
	}
	else if (hParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31896 && cloudTimeAsInt < Global_262145.f_31881)
			num = 0;
	}
	else if (hParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31897 && cloudTimeAsInt < Global_262145.f_31882)
			num = 0;
	}
	else if (hParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31898 && cloudTimeAsInt < Global_262145.f_31883)
			num = 0;
	}
	else if (hParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31899 && cloudTimeAsInt < Global_262145.f_31884)
			num = 0;
	}
	else if (hParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31900 && cloudTimeAsInt < Global_262145.f_31885)
			num = 0;
	}
	else if (hParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31901 && cloudTimeAsInt < Global_262145.f_31886)
			num = 0;
	}
	else if (hParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31902 && cloudTimeAsInt < Global_262145.f_31887)
			num = 0;
	}
	else if (hParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31967)
		{
		}
		else if (!Global_262145.f_31903 && cloudTimeAsInt < Global_262145.f_31888)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("brioso3"))
	{
		if (!*Global_262145.f_33131 && cloudTimeAsInt < *Global_262145.f_33112)
			num = 0;
	}
	else if (hParam0 == joaat("corsita"))
	{
		if (!*Global_262145.f_33125 && cloudTimeAsInt < *Global_262145.f_33106)
			num = 0;
	}
	else if (hParam0 == joaat("draugur"))
	{
		if (!*Global_262145.f_33129 && cloudTimeAsInt < *Global_262145.f_33110)
			num = 0;
	}
	else if (hParam0 == joaat("greenwood"))
	{
		if (!*Global_262145.f_33123 && cloudTimeAsInt < *Global_262145.f_33104)
			num = 0;
	}
	else if (hParam0 == joaat("kanjosj"))
	{
		if (!*Global_262145.f_33134 && cloudTimeAsInt < *Global_262145.f_33115)
			num = 0;
	}
	else if (hParam0 == joaat("lm87"))
	{
		if (!*Global_262145.f_33126 && cloudTimeAsInt < *Global_262145.f_33107)
			num = 0;
	}
	else if (hParam0 == joaat("postlude"))
	{
		if (!*Global_262145.f_33135 && cloudTimeAsInt < *Global_262145.f_33116)
			num = 0;
	}
	else if (hParam0 == joaat("rhinehart"))
	{
		if (!*Global_262145.f_33137 && cloudTimeAsInt < *Global_262145.f_33118)
			num = 0;
	}
	else if (hParam0 == joaat("sm722"))
	{
		if (!*Global_262145.f_33128 && cloudTimeAsInt < *Global_262145.f_33109)
			num = 0;
	}
	else if (hParam0 == joaat("tenf"))
	{
		if (!*Global_262145.f_33136 && cloudTimeAsInt < *Global_262145.f_33117)
			num = 0;
	}
	else if (hParam0 == joaat("tenf2"))
	{
		if (!*Global_262145.f_33139 && cloudTimeAsInt < *Global_262145.f_33120)
			num = 0;
	}
	else if (hParam0 == joaat("torero2"))
	{
		if (!*Global_262145.f_33124 && cloudTimeAsInt < *Global_262145.f_33105)
			num = 0;
	}
	else if (hParam0 == joaat("vigero2"))
	{
		if (!*Global_262145.f_33132 && cloudTimeAsInt < *Global_262145.f_33113)
			num = 0;
	}
	else if (hParam0 == joaat("weevil2"))
	{
		if (!*Global_262145.f_33138 && cloudTimeAsInt < *Global_262145.f_33119)
			num = 0;
	}
	else if (hParam0 == joaat("ruiner4"))
	{
		if (!*Global_262145.f_33130 && cloudTimeAsInt < *Global_262145.f_33111)
			num = 0;
	}
	else if (hParam0 == joaat("sentinel4"))
	{
		if (!*Global_262145.f_33140 && cloudTimeAsInt < *Global_262145.f_33121)
			num = 0;
	}
	else if (hParam0 == joaat("conada"))
	{
		if (!*Global_262145.f_33127 && cloudTimeAsInt < *Global_262145.f_33108)
			num = 0;
	}
	else if (hParam0 == joaat("omnisegt"))
	{
		if (!*Global_262145.f_33122 && cloudTimeAsInt < *Global_262145.f_33103)
			num = 0;
	}
	else if (hParam0 == 1384502824)
	{
		if (!*Global_262145.f_33963 && cloudTimeAsInt < *Global_262145.f_33947)
			num = 0;
	}
	else if (hParam0 == -1576586413)
	{
		if (!*Global_262145.f_33963 && cloudTimeAsInt < *Global_262145.f_33947)
			num = 0;
	}
	else if (hParam0 == -1249788006)
	{
		if (!*Global_262145.f_33972 && cloudTimeAsInt < *Global_262145.f_33955)
			num = 0;
	}
	else if (hParam0 == -1386336041)
	{
		if (!*Global_262145.f_33966 && cloudTimeAsInt < *Global_262145.f_33950)
			num = 0;
	}
	else if (hParam0 == -1627077503)
	{
		if (!*Global_262145.f_33960 && cloudTimeAsInt < *Global_262145.f_33944)
			num = 0;
	}
	else if (hParam0 == -1035489563)
	{
		if (!*Global_262145.f_33961 && cloudTimeAsInt < *Global_262145.f_33945)
			num = 0;
	}
	else if (hParam0 == 1748565021)
	{
		if (!*Global_262145.f_33958 && cloudTimeAsInt < *Global_262145.f_33942)
			num = 0;
	}
	else if (hParam0 == 2100457220)
	{
		if (!*Global_262145.f_33969 && cloudTimeAsInt < *Global_262145.f_33953)
			num = 0;
	}
	else if (hParam0 == 996383885)
	{
		if (!*Global_262145.f_33973 && cloudTimeAsInt < *Global_262145.f_33957)
			num = 0;
	}
	else if (hParam0 == -131348178)
	{
		if (!*Global_262145.f_33970 && cloudTimeAsInt < *Global_262145.f_33954)
			num = 0;
	}
	else if (hParam0 == 268758436)
	{
		if (!*Global_262145.f_33959 && cloudTimeAsInt < *Global_262145.f_33943)
			num = 0;
	}
	else if (hParam0 == 1076201208)
	{
		if (!*Global_262145.f_33962 && cloudTimeAsInt < *Global_262145.f_33946)
			num = 0;
	}
	else if (hParam0 == 669204833)
	{
		if (!*Global_262145.f_33971 && cloudTimeAsInt < *Global_262145.f_33956)
			num = 0;
	}
	else if (hParam0 == 1550581940)
	{
		if (!*Global_262145.f_33967 && cloudTimeAsInt < *Global_262145.f_33951)
			num = 0;
	}
	else if (hParam0 == -1933242328)
	{
		if (!*Global_262145.f_33968 && cloudTimeAsInt < *Global_262145.f_33952)
			num = 0;
	}
	else if (hParam0 == -461850249)
	{
		if (!*Global_262145.f_33965 && cloudTimeAsInt < *Global_262145.f_33949)
			num = 0;
	}
	else if (hParam0 == joaat("taxi"))
	{
		if (!*Global_262145.f_33964 && cloudTimeAsInt < *Global_262145.f_33948)
			num = 0;
	}

	return num;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0xEA67
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL IS_XBOX_PLATFORM() // Position - 0xEA7D
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

BOOL func_210() // Position - 0xEA93
{
	return false;
}

BOOL func_211() // Position - 0xEA9C
{
	return true;
}

BOOL func_212() // Position - 0xEAA5
{
	return true;
}

BOOL func_213() // Position - 0xEAAE
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return true;

	return false;
}

BOOL func_214(Vehicle veParam0) // Position - 0xEAC7
{
	Hash entityModel;
	const char* vehicleNumberPlateText;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	vehicleNumberPlateText = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);

	if (entityModel == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G "))
		return true;

	if (!func_204(entityModel, false, -1))
		return true;

	return false;
}

BOOL func_215(Vehicle veParam0) // Position - 0xEB0E
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98042[i]))
			if (Global_98042[i] == veParam0)
				return true;
	}

	return false;
}

BOOL func_216(Vehicle veParam0) // Position - 0xEB49
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98012[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98012[i], false))
				if (Global_98012[i] == veParam0 && ENTITY::GET_ENTITY_MODEL(Global_98012[i]) == ENTITY::GET_ENTITY_MODEL(veParam0))
					return true;
		}
	}

	return false;
}

BOOL func_217(Vehicle veParam0) // Position - 0xEBC5
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[24]))
		if (veParam0 == Global_77348.f_484[24])
			return false;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[i]))
			if (i != 24 && i != 21 && i != 22 && i != 23 && i != 27 && i != 30 && i != 33 && i != 28 && i != 31 && i != 34 && i != 26 && i != 29 && i != 32)
				if (veParam0 == Global_77348.f_484[i])
					return true;
	}

	return false;
}

int func_218(Vehicle veParam0) // Position - 0xECAD
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 145;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return 145;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98012[i]))
			if (Global_98012[i] == veParam0)
				return Global_98022[i];
	}

	return 145;
}

BOOL func_219(Vehicle veParam0, int iParam1, BOOL bParam2) // Position - 0xED10
{
	int i;
	var garageName;
	int unk;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_220(iParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113648.f_7231[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_220(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0xED7E
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case 1:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case 2:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

void func_221(BOOL bParam0) // Position - 0xEE56
{
	int i;

	for (i = 0; i < 60; i = i + 1)
	{
		func_128(i, bParam0);
	}

	return;
}

