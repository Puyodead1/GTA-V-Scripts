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
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 1;
	var uLocal_30 = 0;
	var uLocal_31 = 13;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	Entity eLocal_45 = 0;
	Vehicle veLocal_46 = 0;
	var uLocal_47 = 1;
	var uLocal_48 = 0;
	var uLocal_49 = 1;
	var uLocal_50 = 0;
	Vehicle veLocal_51 = 0;
	Vehicle veLocal_52 = 0;
	Vehicle veLocal_53 = 0;
	Cam caLocal_54 = 0;
	var uLocal_55 = 0;
	Entity eLocal_56 = 0;
	Entity eLocal_57 = 0;
	Hash hLocal_58 = 0;
	Blip blLocal_59 = 0;
	Blip blLocal_60 = 0;
	var uLocal_61 = 1;
	var uLocal_62 = 0;
	Blip blLocal_63 = 0;
	Blip blLocal_64 = 0;
	int iLocal_65 = 0;
	Any anLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 13;
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
	var uLocal_86 = 0;
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
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
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
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	var uLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	var uLocal_200 = 2;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	int iLocal_203 = 0;
	var uLocal_204 = 2;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	var uLocal_213 = 1;
	var uLocal_214 = 0;
	var uLocal_215 = 13;
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
	var uLocal_229 = 13;
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
	var uLocal_243 = 13;
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
	var uLocal_257 = 13;
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
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	var uLocal_273 = 13;
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
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	var uLocal_290 = 2;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	float fLocal_315 = 0f;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	float fLocal_321 = 0f;
	char* sLocal_322 = 0;
	var uLocal_323 = 4;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 4;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 4;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 4;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 4;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 4;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 4;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 8;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 16;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 3;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	int iLocal_570 = 0;
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	uLocal_309 = { -2145.4856f, 3018.2944f, 31.81f };
	uLocal_312 = { 1744.3083f, 3270.673f, 40.2076f };
	fLocal_321 = 330.4836f;
	MISC::SET_MISSION_FLAG(true);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_297();
		func_295();
	}

	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 30f);
	func_293();

	if (!_IS_MISSION_REPLAY_IN_PROGRESS())
		iLocal_26 = 0;
	else
		iLocal_26 = 1;

	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ThePortOfLSHeistPrep2B", 0);
		func_291();
		func_285();
		func_284();
		func_283();
		func_281();
	
		switch (iLocal_26)
		{
			case 0:
				func_280();
				break;
		
			case 1:
				func_275();
				break;
		
			case 2:
				func_257();
				break;
		
			case 3:
				func_249();
				break;
		
			case 4:
				func_142();
				break;
		
			case 5:
				func_29();
				break;
		
			case 6:
				func_4();
				break;
		}
	
		if (iLocal_26 != 6)
			if (iLocal_195 == 1)
				func_1();
	}

	return;
}

void func_1() // Position - 0x149
{
	if (iLocal_26 == 2 || iLocal_26 == 3 || iLocal_26 == 4)
	{
		if (iLocal_198 == 1)
		{
			func_3(1);
			return;
		}
	}

	if (iLocal_26 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
			{
				if (func_2(veLocal_46, PLAYER::PLAYER_PED_ID(), true) > 850f)
				{
					func_3(2);
					return;
				}
			}
		}
	}

	if (iLocal_26 == 3 || iLocal_26 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
			{
				if (func_2(veLocal_46, PLAYER::PLAYER_PED_ID(), true) > 100f)
				{
					func_3(2);
					return;
				}
				else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(veLocal_46, 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(veLocal_46, 1, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(veLocal_46, 0, 7000))
				{
					func_3(3);
					return;
				}
			}
		}
	}

	return;
}

float func_2(Vehicle veParam0, Vehicle veParam1, BOOL bParam2) // Position - 0x228
{
	Vector3 entityCoords;
	Vector3 unk;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, false) };

	if (!ENTITY::IS_ENTITY_DEAD(veParam1, false))
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(veParam1, true) };
	else
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(veParam1, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}

void func_3(int iParam0) // Position - 0x286
{
	iLocal_27 = iParam0;

	if (iLocal_26 != 6)
	{
		iLocal_26 = 6;
		iLocal_173 = 0;
	}

	return;
}

void func_4() // Position - 0x29E
{
	switch (iLocal_173)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
		
			switch (iLocal_27)
			{
				case 0:
					break;
			
				case 1:
					sLocal_322 = "DP_FAIL1";
					break;
			
				case 2:
					sLocal_322 = "DP_FAIL2";
					break;
			
				case 3:
					sLocal_322 = "DP_FAIL3";
					break;
			}
		
			if (iLocal_27 == 0)
				_TRIGGER_MISSION_FAIL(0);
			else
				func_11(sLocal_322);
		
			iLocal_173 = 1;
			break;
	
		case 1:
			if (func_10())
			{
				if (func_9())
				{
				}
				else
				{
					func_7(-1139.1643f, 2662.4648f, 16.9873f, 74.9925f);
					func_5(-1147.504f, 2663.1035f, 17.0938f, 40.2433f);
				}
			
				func_295();
			}
			break;
	}

	return;
}

void func_5(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x362
{
	func_6(&(Global_107357.f_2890), fParam0, fParam3);
	return;
}

void func_6(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x37B
{
	*uParam0 = { uParam1 };
	uParam0->f_6 = fParam4;
	return;
}

void func_7(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x391
{
	if (func_8(Global_78930, 0f, 0f, 0f, false))
	{
		Global_78930 = { fParam0 };
		Global_78933 = fParam3;
	}

	return;
}

BOOL func_8(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x3BD
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_9() // Position - 0x404
{
	if (Global_100833 == 7)
		return true;

	return false;
}

BOOL func_10() // Position - 0x419
{
	if (Global_3)
		return true;

	if (Global_100833 == 7 || Global_100833 == 8)
		return true;

	return false;
}

void func_11(char* sParam0) // Position - 0x446
{
	func_12(sParam0);
	_TRIGGER_MISSION_FAIL(0);
	return;
}

void func_12(char* sParam0) // Position - 0x459
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_78922, sParam0, 16);
			TEXT_LABEL_ASSIGN_STRING(&Global_78926, "", 16);
		
			if (RECORDING::IS_REPLAY_RECORDING())
				RECORDING::STOP_REPLAY_RECORDING();
		}
	}

	return;
}

void _TRIGGER_MISSION_FAIL(int iParam0) // Position - 0x498
{
	int num;

	if (G_MissionStats.f_9088 || _IS_MISSION_REPEAT_ACTIVE(false))
	{
		num = func_27();
	
		if (!func_14(num))
			return;
	
		MISC::SET_BIT(&(Global_91565[num].f_1), 5);
		Global_100869 = iParam0;
	}

	return;
}

BOOL func_14(int iParam0) // Position - 0x4DD
{
	int num;
	int num2;

	func_19();

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::START_FIRING_AMNESTY(5000);

	num = Global_91565[iParam0];
	num2 = Global_78960.f_109[num];
	func_18(num2, true);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_15(&(G_MissionStats.f_2366.f_539), num2);

	if (Global_94988 == Global_100870)
		G_MissionStats.f_9088.f_330[num2].f_1 = G_MissionStats.f_9088.f_330[num2].f_1 + 1;

	if (!IS_BIT_SET(Global_91601[num2].f_15, 1))
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);

	G_MissionStats.f_9088.f_330[num2].f_2 = G_MissionStats.f_9088.f_330[num2].f_2 + 1;
	Global_94988 = Global_100870;

	if (iParam0 == -1)
	{
		G_MissionStats.f_9088;
		return false;
	}

	if (IS_BIT_SET(Global_91565[iParam0].f_1, 4))
		return false;

	if (IS_BIT_SET(Global_91565[iParam0].f_1, 5))
		return false;

	return true;
}

void func_15(var uParam0, int iParam1) // Position - 0x5ED
{
	int i;
	int num;
	var unk;
	float unk2;

	if (iParam1 == 94)
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		num = G_MissionStats.f_18536[i];
	
		if (num == 8 || num == 9 || num == 10 || num == 11 || num == 34 || num == 72 || num == 73 && !IS_BIT_SET(G_MissionStats.f_9088.f_99.f_219[0], 9))
		{
		}
		else
		{
			unk = { 0f, 0f, 0f };
			num2 = 0f;
		
			if (!func_17(G_MissionStats.f_18536[i], &unk, &num2))
			{
				G_MissionStats.f_18536[i] = 318;
				func_16(&uParam0->f_2296[i]);
				uParam0->f_2300[i] = { 0f, 0f, 0f };
				uParam0->f_2310[i] = 0f;
				uParam0->f_2314[i] = 0;
				uParam0->f_2318[i] = { 0f, 0f, 0f };
				uParam0->f_2328[i] = 0;
				Global_98203[i] = { 0f, 0f, 0f };
				Global_98203[i].f_9 = 0f;
				Global_98203[i].f_12 = 0f;
				Global_98203[i].f_3 = { 0f, 0f, 0f };
				Global_98203[i].f_10 = 0f;
				Global_98203[i].f_13 = 0f;
				Global_98203[i].f_6 = { 0f, 0f, 0f };
				Global_98203[i].f_11 = 0f;
				Global_98203[i].f_14 = 0f;
				Global_98203[i].f_17 = { 0f, 0f, 0f };
				Global_98203[i].f_26 = 0f;
				Global_98203[i].f_20 = { 0f, 0f, 0f };
				Global_98203[i].f_27 = 0f;
				Global_98203[i].f_23 = { 0f, 0f, 0f };
				Global_98203[i].f_28 = 0f;
			}
		}
	}

	return;
}

void func_16(var uParam0) // Position - 0x7B3
{
	*uParam0 = -15;
	return;
}

BOOL func_17(int iParam0, var uParam1, var uParam2) // Position - 0x7C1
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return true;
	
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*uParam2 = 194.1887f;
			return true;
	
		case 9:
			return func_17(8, uParam1, uParam2);
	
		case 10:
			return func_17(8, uParam1, uParam2);
	
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return true;
	
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*uParam2 = 350.0509f;
			return true;
	
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*uParam2 = 0.7896f;
			return true;
	
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return true;
	
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*uParam2 = -129f;
			return true;
	
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*uParam2 = 267.1409f;
			return true;
	
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return true;
	
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return true;
	
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return true;
	
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = 250.4535f - 360f;
			return true;
	
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return true;
	
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return true;
	
		case 24:
			*uParam1 = { 744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f };
			*uParam2 = 51.7279f;
			return true;
	
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return true;
	
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*uParam2 = 156.8827f;
			return true;
	
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return true;
	
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*uParam2 = 97.2736f;
			return true;
	
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return true;
	
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return true;
	
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return true;
	
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*uParam2 = 32.2721f;
			return true;
	
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return true;
	
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return true;
	
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return true;
	
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return true;
	
		case 42:
			*uParam1 = { { 4.0205f, -2975.3408f, 798.4536f } + { 1f, 0f, 0f } };
			*uParam2 = 90f;
			return true;
	
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*uParam2 = 355.326f;
			return true;
	
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return true;
	
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*uParam2 = 46.8853f;
			return true;
	
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return true;
	
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*uParam2 = 221.228f;
			return true;
	
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = 42f + 180f;
			return true;
	
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return true;
	
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return true;
	
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return true;
	
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*uParam2 = -64.1366f;
			return true;
	
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return true;
	
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return true;
	
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*uParam2 = 90.0339f;
			return true;
	
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return true;
	
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return true;
	
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return true;
	
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return true;
	
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return true;
	
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return true;
	
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return true;
	
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		default:
			break;
	}

	return false;
}

void func_18(int iParam0, BOOL bParam1) // Position - 0x1130
{
	if (bParam1)
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92)
			Global_94798[iParam0] = 1;
	else
		Global_94798[iParam0] = 0;

	return;
}

void func_19() // Position - 0x116E
{
	Global_100868 = 1;

	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_78922))
		{
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_78922, "CMN_MARRE" /*~s~Michael was arrested.*/, 16);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_78922, "CMN_FARRE" /*~s~Franklin was arrested.*/, 16);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_78922, "CMN_TARRE" /*~s~Trevor was arrested.*/, 16);
					break;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_78926, "", 16);
		}
	
		Global_100868 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_78922))
		{
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_78922, "CMN_MDIED" /*~s~Michael died.*/, 16);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_78922, "CMN_FDIED" /*~s~Franklin died.*/, 16);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_78922, "CMN_TDIED" /*~s~Trevor died.*/, 16);
					break;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_78926, "", 16);
		}
	
		Global_100868 = 0;
		MISC::SET_BIT(&(Global_100833.f_20), 25);
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x1255
{
	func_21();
	return G_MissionStats.f_2366.f_539.f_4321;
}

void func_21() // Position - 0x126E
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(G_MissionStats.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_23(character) && !func_22(14) || Global_112760)
			{
				if (G_MissionStats.f_2366.f_539.f_4321 != character && func_23(G_MissionStats.f_2366.f_539.f_4321))
					G_MissionStats.f_2366.f_539.f_4322 = G_MissionStats.f_2366.f_539.f_4321;
			
				G_MissionStats.f_2366.f_539.f_4323 = character;
				G_MissionStats.f_2366.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (G_MissionStats.f_2366.f_539.f_4321 != _CHAR_NULL)
				G_MissionStats.f_2366.f_539.f_4323 = G_MissionStats.f_2366.f_539.f_4321;
		
			return;
		}
	}

	G_MissionStats.f_2366.f_539.f_4321 = 145;
	return;
}

BOOL func_22(int iParam0) // Position - 0x136B
{
	return Global_43377 == iParam0;
}

BOOL func_23(eCharacter echParam0) // Position - 0x1379
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1385
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x13C2
{
	if (func_23(character))
		return func_26(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_26(eCharacter echParam0) // Position - 0x13E7
{
	return Global_2058[echParam0];
}

int func_27() // Position - 0x13F6
{
	int i;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (IS_BIT_SET(Global_91565[i].f_1, 2))
			return i;
	}

	return -1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x1428
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78938, 0);
}

void func_29() // Position - 0x1450
{
	func_134();

	if (iLocal_173 == 0)
	{
		if (iLocal_194 == 1)
		{
			iLocal_195 = 0;
			func_34();
			iLocal_194 = 0;
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
			ENTITY::FREEZE_ENTITY_POSITION(veLocal_46, false);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	
		if (CAM::IS_SCREEN_FADED_OUT())
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	
		if (!CAM::IS_SCREEN_FADED_IN())
			CAM::DO_SCREEN_FADE_IN(800);
	
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, false))
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, 0);
	
		iLocal_195 = 1;
		iLocal_173 = 1;
	}

	if (iLocal_173 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, true))
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(veLocal_46, 0, false);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(veLocal_46, 1, false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_46, 2);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_46, false);
					ENTITY::FREEZE_ENTITY_POSITION(veLocal_46, true);
					func_30();
				}
			}
		}
	}

	return;
}

void func_30() // Position - 0x1549
{
	func_32(false, 0);
	func_31(1, 1);
	func_295();
	return;
}

void func_31(int iParam0, int iParam1) // Position - 0x1561
{
	Global_78958 = iParam1;

	if (Global_63479)
		return;

	if (Global_63506)
	{
		Global_63506 = false;
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_63479)
		{
		}
	
		Global_63505 = iParam0;
		Global_63479 = true;
		Global_63490 = 1;
	}

	return;
}

void func_32(BOOL bParam0, BOOL bParam1) // Position - 0x15AB
{
	int num;
	int num2;
	int num3;

	if (!Global_63487)
		Global_63487 = bParam1;

	if (bParam0)
	{
		if (_IS_MISSION_REPEAT_ACTIVE(false) && Global_78936.f_1 == 1 && func_33(Global_78936))
		{
		}
		else
		{
			Global_63485 = 1;
		}
	}

	if (G_MissionStats.f_9088 || _IS_MISSION_REPEAT_ACTIVE(false))
	{
		num = func_27();
		num2 = Global_91565[num];
		num3 = Global_78960.f_109[num2];
	
		if (num == -1)
		{
			G_MissionStats.f_9088;
			return;
		}
	
		if (IS_BIT_SET(Global_91565[num].f_1, 4))
			return;
	
		if (IS_BIT_SET(Global_91565[num].f_1, 5))
			return;
	
		MISC::SET_BIT(&(Global_91565[num].f_1), 4);
		MISC::SET_BIT(&Global_78938, 1);
		Global_78954 = num3;
		Global_78955 = MISC::GET_GAME_TIMER();
	}

	return;
}

BOOL func_33(int iParam0) // Position - 0x167B
{
	switch (iParam0)
	{
		case 71:
			return true;
	
		case 86:
			return true;
	
		case 91:
			return true;
	
		default:
			return false;
	}

	return false;
}

void func_34() // Position - 0x16B9
{
	func_132();
	func_131();
	func_37();

	if (!func_36() || _IS_MISSION_REPEAT_ACTIVE(false))
		func_35();

	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	return;
}

void func_35() // Position - 0x16E9
{
	switch (iLocal_26)
	{
		case 2:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_53))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_53, false))
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_53, -1);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1565.0836f, 2780.813f, 16.4022f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 53.6086f);
			}
			break;
	
		case 3:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		
			if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
			{
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, false))
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, -1);
					
						ENTITY::FREEZE_ENTITY_POSITION(veLocal_46, false);
					}
				}
			}
			break;
	
		case 4:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		
			if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, false))
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, -1);
			break;
	
		case 5:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		
			if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, false))
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, -1);
			break;
	}

	return;
}

BOOL func_36() // Position - 0x1830
{
	return IS_BIT_SET(Global_100833.f_20, 13);
}

void func_37() // Position - 0x1841
{
	switch (iLocal_26)
	{
		case 2:
			MISC::CLEAR_AREA(-1588.1f, 2794.9f, 17.2f, 20f, true, false, false, false);
			func_124(-1720.5f, 2568.4f, 67.1f, -1523.2f, 3002f, -70f, 100f, -1155.0603f, 2665.9795f, 17.0939f, 219.2079f, true, false, true, false, false);
			MISC::CLEAR_AREA_OF_OBJECTS(-1588.1f, 2794.9f, 17.2f, 20f, 6);
			STREAMING::REQUEST_MODEL(joaat("cargobob"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_Marine_01"));
			STREAMING::REQUEST_MODEL(joaat("S_M_M_Pilot_02"));
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
		
			while (!STREAMING::HAS_MODEL_LOADED(joaat("cargobob")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Marine_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Pilot_02")) || !STREAMING::HAS_MODEL_LOADED(joaat("buzzard")))
			{
				SYSTEM::WAIT(0);
			}
		
			if (_IS_MISSION_REPLAY_IN_PROGRESS())
			{
				if (func_123())
				{
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(func_122()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_122()))
					{
						func_120();
					
						while (!func_119())
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		
			iLocal_199 = 0;
		
			for (iLocal_174 = 0; iLocal_174 <= 12; iLocal_174 = iLocal_174 + 1)
			{
				uLocal_273[iLocal_174] = 0;
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(veLocal_46))
			{
				MISC::CLEAR_AREA(uLocal_309, 10f, true, false, false, false);
				veLocal_46 = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), uLocal_309, fLocal_321, true, true, false);
				VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(veLocal_46, false);
				ENTITY::FREEZE_ENTITY_POSITION(veLocal_46, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_46, true, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), true);
				VEHICLE::SET_VEHICLE_STRONG(veLocal_46, true);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(veLocal_46, false);
				func_118(veLocal_46, 0);
			}
		
			func_115();
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")))
				{
					MISC::CLEAR_AREA(-1866.446f, 3071.395f, 31.8104f, 10f, true, false, false, false);
					uLocal_47[0] = VEHICLE::CREATE_VEHICLE(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, true, true, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_47[0], true, 1);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(uLocal_47[0], true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_47[0], 1084227584);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_47[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("buzzard"));
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_47[0], false);
				}
			}
		
			if (_IS_MISSION_REPLAY_IN_PROGRESS())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(veLocal_53))
				{
					if (func_123())
					{
						if (!VEHICLE::IS_THIS_MODEL_A_HELI(func_122()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_122()))
						{
							veLocal_53 = func_38(-1535.2094f, 2744.5505f, 16.6437f, 47.9754f);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_122());
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_53, true);
							VEHICLE::SET_VEHICLE_STRONG(veLocal_53, true);
						}
					}
				}
			}
		
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::SET_POLICE_RADAR_BLIPS(true);
			break;
	
		case 3:
			AUDIO::PREPARE_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
			SYSTEM::WAIT(1500);
			STREAMING::REQUEST_MODEL(joaat("cargobob"));
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_Marine_01"));
			STREAMING::REQUEST_MODEL(joaat("S_M_M_Pilot_02"));
		
			while (!STREAMING::HAS_MODEL_LOADED(joaat("cargobob")) || !STREAMING::HAS_MODEL_LOADED(joaat("buzzard")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Marine_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Pilot_02")))
			{
				SYSTEM::WAIT(0);
			}
		
			iLocal_199 = 0;
		
			for (iLocal_174 = 0; iLocal_174 <= 12; iLocal_174 = iLocal_174 + 1)
			{
				uLocal_273[iLocal_174] = 0;
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(veLocal_46))
			{
				MISC::CLEAR_AREA(uLocal_309, 10f, true, false, false, false);
				veLocal_46 = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), uLocal_309, fLocal_321, true, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(veLocal_46, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_46, true, 1);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(veLocal_46);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), true);
				VEHICLE::SET_VEHICLE_STRONG(veLocal_46, true);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(veLocal_46, false);
				func_118(veLocal_46, 0);
			}
		
			func_115();
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")))
				{
					MISC::CLEAR_AREA(-1866.446f, 3071.395f, 31.8104f, 10f, true, false, false, false);
					uLocal_47[0] = VEHICLE::CREATE_VEHICLE(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, true, true, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_47[0], true, 1);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(uLocal_47[0], true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_47[0], 1084227584);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_47[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("buzzard"));
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_47[0], false);
				}
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
			{
				uLocal_29[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_47[0], PED_TYPE_MISSION, joaat("S_M_M_Pilot_02"), -1, true, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Pilot_02"));
			}
			else if (!PED::IS_PED_IN_VEHICLE(uLocal_29[0], uLocal_47[0], false))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_29[0], uLocal_47[0], -1);
			}
		
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), -1, false, true);
			AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", true);
			AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", true, true);
			break;
	
		case 4:
			STREAMING::REQUEST_MODEL(joaat("cargobob"));
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		
			while (!STREAMING::HAS_MODEL_LOADED(joaat("cargobob")))
			{
				SYSTEM::WAIT(0);
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(veLocal_46))
			{
				MISC::CLEAR_AREA(uLocal_309, 10f, true, false, false, false);
				veLocal_46 = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), -629.1677f, 2871.31f, 385.0313f, 283.1214f, true, true, false);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_46, true, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), true);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(veLocal_46, false);
				VEHICLE::SET_VEHICLE_STRONG(veLocal_46, true);
				VEHICLE::SET_VEHICLE_ENGINE_ON(veLocal_46, true, true, false);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(veLocal_46);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(veLocal_46, 30f);
				func_118(veLocal_46, 0);
			}
		
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), -1, false, true);
			break;
	
		case 5:
			STREAMING::REQUEST_MODEL(joaat("cargobob"));
			STREAMING::REQUEST_MODEL(joaat("sandking"));
		
			while (!STREAMING::HAS_MODEL_LOADED(joaat("cargobob")) || !STREAMING::HAS_MODEL_LOADED(joaat("sandking")))
			{
				SYSTEM::WAIT(0);
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(veLocal_46))
			{
				MISC::CLEAR_AREA(1749.6102f, 3272.9497f, 40.1533f, 5f, true, false, false, false);
				veLocal_46 = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), 1749.6102f, 3272.9497f, 40.1533f, 51.128f, true, true, false);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_46, true, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
				VEHICLE::SET_VEHICLE_STRONG(veLocal_46, true);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(veLocal_46, false);
				func_118(veLocal_46, 0);
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
			{
				uLocal_49[0] = VEHICLE::CREATE_VEHICLE(joaat("sandking"), 1754.9508f, 3290.994f, 40.1176f, 182.397f, true, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_49[0], true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sandking"));
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
				iLocal_212 = 1;
			break;
	}

	return;
}

Vehicle func_38(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x1F1F
{
	return func_39(&(Global_107357.f_2890), fParam0, fParam3, false);
}

Vehicle func_39(var uParam0, float fParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5) // Position - 0x1F39
{
	Vehicle vehicle;
	Vector3 entityCoords;
	BOOL unk;
	var unk2;
	int flag;

	if (func_114(uParam0))
	{
		if (func_8(fParam1, 0f, 0f, 0f, false))
		{
			fParam1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
	
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(fParam1, -816.87164f, 185.62384f, 71.40275f, -807.48944f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				fParam1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
	
		if (func_113(uParam0))
		{
			MISC::CLEAR_AREA(fParam1, 5f, true, false, false, false);
			func_112(fParam1, 5f, false);
			vehicle = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, fParam1, fParam4, true, true, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehicle))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(vehicle, true) };
			
				if (SYSTEM::VDIST2(entityCoords, -1151.15f, -1530.32f, 7.48925f) <= 3f)
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(vehicle, fParam1, false, false, true);
			
				func_83(vehicle, &(uParam0->f_12), false, true);
				flag = true;
			
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66))
					if (!WATER::TEST_PROBE_AGAINST_WATER(fParam1, fParam1.f_1, fParam1.f_2 + 30f, fParam1, fParam1.f_1, fParam1.f_2 - 30f, &result))
						flag = false;
			
				if (flag)
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(vehicle, 1084227584);
			
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(vehicle)))
							func_82(uParam0->f_11, 1);
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(vehicle)))
							func_82(uParam0->f_11, 2);
				
					VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(vehicle, false);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(vehicle, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(vehicle, true);
					func_81(vehicle, uParam0->f_11);
				}
				else if (!func_78(vehicle, uParam0->f_3, uParam0->f_8) && uParam0->f_10 && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					num = func_77(vehicle);
				
					if (num == -1)
						uParam0->f_10 = 0;
					else
						func_70(num);
				}
			
				if (Global_100833 != 13 && Global_100833 != 10 && Global_100833 != 11 && Global_100833 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_100833.f_3)) == Global_78467)
					{
						if (uParam0->f_12.f_66 == G_MissionStats.f_32752.f_69[21].f_66)
						{
							func_67(24, false);
							func_70(24);
						}
					}
				}
			
				if (uParam0->f_9 == 1)
					func_40(vehicle, uParam0->f_11);
			
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				entityCoords = { ENTITY::GET_ENTITY_COORDS(vehicle, true) };
			}
		
			return vehicle;
		}
	}

	return vehicle;
}

void func_40(Vehicle veParam0, eCharacter echParam1) // Position - 0x21EA
{
	Ped pedInVehicleSeat;
	int i;
	int j;

	if (!func_46(veParam0))
		return;

	if (echParam1 != CHAR_MICHAEL && echParam1 != CHAR_FRANKLIN && echParam1 != CHAR_TREVOR)
	{
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
			pedInVehicleSeat = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, -1);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
			if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_Zero"))
				echParam1 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_One"))
				echParam1 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_Two"))
				echParam1 = CHAR_TREVOR;
	
		if (echParam1 != CHAR_MICHAEL && echParam1 != CHAR_FRANKLIN && echParam1 != CHAR_TREVOR)
			echParam1 = G_MissionStats.f_2366.f_539.f_4321;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 2; j = j + 1)
		{
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == G_MissionStats.f_32752.f_5038[i][j].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(G_MissionStats.f_32752.f_5038[i][j].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(G_MissionStats.f_32752.f_5038[i][j].f_1)))
					{
						G_MissionStats.f_32752.f_5038[i][j].f_66 = 0;
						G_MissionStats.f_32752.f_5592[i] = j;
					}
				}
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == G_MissionStats.f_32752.f_5600[i].f_66)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(G_MissionStats.f_32752.f_5600[i].f_1)))
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(G_MissionStats.f_32752.f_5600[i].f_1)))
					G_MissionStats.f_32752.f_5600[i].f_66 = 0;
	}

	G_MissionStats.f_32752.f_5590 = echParam1;
	Global_78384 = veParam0;
	G_MissionStats.f_32752.f_5588 = 1;
	func_41(veParam0, &(G_MissionStats.f_32752.f_5510));
	return;
}

void func_41(Vehicle veParam0, var uParam1) // Position - 0x23EC
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_45(uParam1);
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
	
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
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
	
		func_43(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_42(i + 1));
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

int func_42(int iParam0) // Position - 0x2695
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

int func_43(var uParam0, var uParam1, var uParam2) // Position - 0x2745
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

BOOL func_44(int iParam0) // Position - 0x2938
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

void func_45(var uParam0) // Position - 0x2958
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

BOOL func_46(Vehicle veParam0) // Position - 0x2A08
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_65(veParam0, CHAR_MICHAEL, false) || func_65(veParam0, CHAR_FRANKLIN, false) || func_65(veParam0, CHAR_TREVOR, false) || func_64(veParam0) != _CHAR_NULL || func_63(veParam0) || func_62(veParam0) || func_61(veParam0) || func_60(veParam0) || !func_47(ENTITY::GET_ENTITY_MODEL(veParam0)))
	{
		func_62(veParam0);
		func_62(veParam0);
		func_65(veParam0, CHAR_MICHAEL, false);
		func_65(veParam0, CHAR_FRANKLIN, false);
		func_65(veParam0, CHAR_TREVOR, false);
		func_64(veParam0) != _CHAR_NULL;
		return false;
	}

	return true;
}

BOOL func_47(Hash hParam0) // Position - 0x2AE5
{
	if (hParam0 == 0)
		return false;

	if (!func_48(hParam0, false, -1))
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

BOOL func_48(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x2C97
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
		if (!func_58() && !func_57() && !func_56() && !func_55() && !_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	if (hParam0 == joaat("hotknife") || hParam0 == joaat("carbonrs") || hParam0 == joaat("khamelion"))
	{
		if (IS_XBOX_PLATFORM() || MISC::IS_PC_VERSION() || IS_PLAYSTATION_PLATFORM())
		{
		}
		else if (!func_56())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_51(hParam0, iParam2))
			return false;

	if (!func_49(hParam0))
		return false;

	return true;
}

BOOL func_49(Hash hParam0) // Position - 0x2E19
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

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x2EE4
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

BOOL func_51(Hash hParam0, int iParam1) // Position - 0x2EFB
{
	BOOL num;
	int cloudTimeAsInt;

	if (!Global_2764417 && iParam1 >= 0 && iParam1 <= 415)
		if (IS_BIT_SET(Global_1586488[iParam1].f_103, 2))
			return true;

	if (Global_2764416)
		return true;

	num = 1;
	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (hParam0 == joaat("btype3"))
		if (!Global_262145.f_7142 && !Global_262145.f_13570 && cloudTimeAsInt < Global_262145.f_13571)
			num = 0;

	if (hParam0 == joaat("faction3"))
		if (!Global_262145.f_14912 && cloudTimeAsInt < Global_262145.f_14924)
			num = 0;
	else if (hParam0 == joaat("virgo3") || hParam0 == joaat("virgo2"))
		if (!Global_262145.f_14908 && cloudTimeAsInt < Global_262145.f_14920)
			num = 0;
	else if (hParam0 == joaat("sabregt2"))
		if (!Global_262145.f_14909 && cloudTimeAsInt < Global_262145.f_14921)
			num = 0;
	else if (hParam0 == joaat("tornado5"))
		if (!Global_262145.f_14910 && cloudTimeAsInt < Global_262145.f_14922)
			num = 0;
	else if (hParam0 == joaat("minivan2"))
		if (!Global_262145.f_14911 && cloudTimeAsInt < Global_262145.f_14923)
			num = 0;
	else if (hParam0 == joaat("slamvan3"))
		if (!Global_262145.f_14913 && cloudTimeAsInt < Global_262145.f_14925)
			num = 0;

	if (hParam0 == joaat("prototipo"))
		if (!Global_262145.f_14914 && cloudTimeAsInt < Global_262145.f_14917)
			num = 0;
	else if (hParam0 == joaat("seven70"))
		if (!Global_262145.f_14915 && cloudTimeAsInt < Global_262145.f_14918)
			num = 0;
	else if (hParam0 == joaat("pfister811"))
		if (!Global_262145.f_14916 && cloudTimeAsInt < Global_262145.f_14919)
			num = 0;

	if (hParam0 == joaat("bf400"))
		if (!Global_262145.f_17493 && cloudTimeAsInt < Global_262145.f_17458)
			num = 0;
	else if (hParam0 == joaat("brioso"))
		if (!Global_262145.f_17488 && cloudTimeAsInt < Global_262145.f_17453)
			num = 0;
	else if (hParam0 == joaat("cliffhanger"))
		if (!Global_262145.f_17492 && cloudTimeAsInt < Global_262145.f_17457)
			num = 0;
	else if (hParam0 == joaat("contender"))
		if (!Global_262145.f_17491 && cloudTimeAsInt < Global_262145.f_17456)
			num = 0;
	else if (hParam0 == joaat("le7b"))
		if (!Global_262145.f_17485 && cloudTimeAsInt < Global_262145.f_17450)
			num = 0;
	else if (hParam0 == joaat("omnis"))
		if (!Global_262145.f_17486 && cloudTimeAsInt < Global_262145.f_17451)
			num = 0;
	else if (hParam0 == joaat("trophytruck"))
		if (!Global_262145.f_17489 && cloudTimeAsInt < Global_262145.f_17454)
			num = 0;
	else if (hParam0 == joaat("trophytruck2"))
		if (!Global_262145.f_17490 && cloudTimeAsInt < Global_262145.f_17455)
			num = 0;
	else if (hParam0 == joaat("tropos"))
		if (!Global_262145.f_17487 && cloudTimeAsInt < Global_262145.f_17452)
			num = 0;
	else if (hParam0 == joaat("gargoyle"))
		if (!Global_262145.f_17495 && cloudTimeAsInt < Global_262145.f_17460)
			num = 0;
	else if (hParam0 == joaat("rallytruck"))
		if (!Global_262145.f_17496 && cloudTimeAsInt < Global_262145.f_17461)
			num = 0;
	else if (hParam0 == joaat("tampa2"))
		if (!Global_262145.f_17484 && cloudTimeAsInt < Global_262145.f_17449)
			num = 0;
	else if (hParam0 == joaat("tyrus"))
		if (!Global_262145.f_17483 && cloudTimeAsInt < Global_262145.f_17448)
			num = 0;
	else if (hParam0 == joaat("sheava"))
		if (!Global_262145.f_17482 && cloudTimeAsInt < Global_262145.f_17447)
			num = 0;
	else if (hParam0 == joaat("lynx"))
		if (!Global_262145.f_17494 && cloudTimeAsInt < Global_262145.f_17459)
			num = 0;
	else if (hParam0 == joaat("stalion2"))
		if (!Global_262145.f_17497 && cloudTimeAsInt < Global_262145.f_17462)
			num = 0;
	else if (hParam0 == joaat("gauntlet2"))
		if (!Global_262145.f_17498 && cloudTimeAsInt < Global_262145.f_17463)
			num = 0;
	else if (hParam0 == joaat("dominator2"))
		if (!Global_262145.f_17499 && cloudTimeAsInt < Global_262145.f_17464)
			num = 0;
	else if (hParam0 == joaat("buffalo3"))
		if (!Global_262145.f_17500 && cloudTimeAsInt < Global_262145.f_17465)
			num = 0;

	if (hParam0 == joaat("defiler"))
		if (!Global_262145.f_17654 && cloudTimeAsInt < Global_262145.f_17676)
			num = 0;
	else if (hParam0 == joaat("nightblade"))
		if (!Global_262145.f_17655 && cloudTimeAsInt < Global_262145.f_17677)
			num = 0;
	else if (hParam0 == joaat("zombiea"))
		if (!Global_262145.f_17656 && cloudTimeAsInt < Global_262145.f_17678)
			num = 0;
	else if (hParam0 == joaat("esskey"))
		if (!Global_262145.f_17657 && cloudTimeAsInt < Global_262145.f_17679)
			num = 0;
	else if (hParam0 == joaat("avarus"))
		if (!Global_262145.f_17658 && cloudTimeAsInt < Global_262145.f_17680)
			num = 0;
	else if (hParam0 == joaat("zombieb"))
		if (!Global_262145.f_17659 && cloudTimeAsInt < Global_262145.f_17681)
			num = 0;
	else if (hParam0 == joaat("hakuchou2"))
		if (!Global_262145.f_17661 && cloudTimeAsInt < Global_262145.f_17682)
			num = 0;
	else if (hParam0 == joaat("vortex"))
		if (!Global_262145.f_17662 && cloudTimeAsInt < Global_262145.f_17683)
			num = 0;
	else if (hParam0 == joaat("shotaro"))
		if (!Global_262145.f_17663 && cloudTimeAsInt < Global_262145.f_17684)
			num = 0;
	else if (hParam0 == joaat("chimera"))
		if (!Global_262145.f_17664 && cloudTimeAsInt < Global_262145.f_17685)
			num = 0;
	else if (hParam0 == joaat("raptor"))
		if (!Global_262145.f_17665 && cloudTimeAsInt < Global_262145.f_17686)
			num = 0;
	else if (hParam0 == joaat("daemon2"))
		if (!Global_262145.f_17666 && cloudTimeAsInt < Global_262145.f_17687)
			num = 0;
	else if (hParam0 == joaat("blazer4"))
		if (!Global_262145.f_17667 && cloudTimeAsInt < Global_262145.f_17688)
			num = 0;
	else if (hParam0 == joaat("tornado6"))
		if (!Global_262145.f_17673 && cloudTimeAsInt < Global_262145.f_17695)
			num = 0;
	else if (hParam0 == joaat("youga2"))
		if (!Global_262145.f_17670 && cloudTimeAsInt < Global_262145.f_17691)
			num = 0;
	else if (hParam0 == joaat("wolfsbane"))
		if (!Global_262145.f_17671 && cloudTimeAsInt < Global_262145.f_17692)
			num = 0;
	else if (hParam0 == joaat("faggio3"))
		if (!Global_262145.f_17672 && cloudTimeAsInt < Global_262145.f_17693)
			num = 0;
	else if (hParam0 == joaat("faggio"))
		if (!Global_262145.f_17660 && cloudTimeAsInt < Global_262145.f_17694)
			num = 0;
	else if (hParam0 == joaat("bagger"))
		if (!Global_262145.f_17674 && cloudTimeAsInt < Global_262145.f_17696)
			num = 0;
	else if (hParam0 == joaat("sanctus"))
		if (!Global_262145.f_17668 && cloudTimeAsInt < Global_262145.f_17689)
			num = 0;
	else if (hParam0 == joaat("manchez"))
		if (!Global_262145.f_17669 && cloudTimeAsInt < Global_262145.f_17690)
			num = 0;
	else if (hParam0 == joaat("ratbike"))
		if (!Global_262145.f_17675 && cloudTimeAsInt < Global_262145.f_17697)
			num = 0;

	if (hParam0 == joaat("voltic2"))
		if (!Global_262145.f_19311 && cloudTimeAsInt < Global_262145.f_19408)
			num = 0;
	else if (hParam0 == joaat("ruiner2"))
		if (!Global_262145.f_19312 && cloudTimeAsInt < Global_262145.f_19409)
			num = 0;
	else if (hParam0 == joaat("dune4"))
		if (!Global_262145.f_19313 && cloudTimeAsInt < Global_262145.f_19410)
			num = 0;
	else if (hParam0 == joaat("dune5"))
		if (!Global_262145.f_19314 && cloudTimeAsInt < Global_262145.f_19411)
			num = 0;
	else if (hParam0 == joaat("phantom2"))
		if (!Global_262145.f_19315 && cloudTimeAsInt < Global_262145.f_19412)
			num = 0;
	else if (hParam0 == joaat("technical2"))
		if (!Global_262145.f_19316 && cloudTimeAsInt < Global_262145.f_19413)
			num = 0;
	else if (hParam0 == joaat("boxville5"))
		if (!Global_262145.f_19317 && cloudTimeAsInt < Global_262145.f_19414)
			num = 0;
	else if (hParam0 == joaat("wastelander"))
		if (!Global_262145.f_19318 && cloudTimeAsInt < Global_262145.f_19415)
			num = 0;
	else if (hParam0 == joaat("blazer5"))
		if (!Global_262145.f_19319 && cloudTimeAsInt < Global_262145.f_19416)
			num = 0;
	else if (hParam0 == joaat("comet2"))
		if (!Global_262145.f_19320 && cloudTimeAsInt < Global_262145.f_19417)
			num = 0;
	else if (hParam0 == joaat("comet3"))
		if (!Global_262145.f_19321 && cloudTimeAsInt < Global_262145.f_19418)
			num = 0;
	else if (hParam0 == joaat("diablous"))
		if (!Global_262145.f_19322 && cloudTimeAsInt < Global_262145.f_19419)
			num = 0;
	else if (hParam0 == joaat("diablous2"))
		if (!Global_262145.f_19323 && cloudTimeAsInt < Global_262145.f_19420)
			num = 0;
	else if (hParam0 == joaat("elegy"))
		if (!Global_262145.f_19324 && cloudTimeAsInt < Global_262145.f_19421)
			num = 0;
	else if (hParam0 == joaat("elegy2"))
		if (!Global_262145.f_19325 && cloudTimeAsInt < Global_262145.f_19422)
			num = 0;
	else if (hParam0 == joaat("fcr"))
		if (!Global_262145.f_19326 && cloudTimeAsInt < Global_262145.f_19423)
			num = 0;
	else if (hParam0 == joaat("fcr2"))
		if (!Global_262145.f_19327 && cloudTimeAsInt < Global_262145.f_19424)
			num = 0;
	else if (hParam0 == joaat("italigtb"))
		if (!Global_262145.f_19328 && cloudTimeAsInt < Global_262145.f_19425)
			num = 0;
	else if (hParam0 == joaat("italigtb2"))
		if (!Global_262145.f_19329 && cloudTimeAsInt < Global_262145.f_19426)
			num = 0;
	else if (hParam0 == joaat("nero"))
		if (!Global_262145.f_19330 && cloudTimeAsInt < Global_262145.f_19427)
			num = 0;
	else if (hParam0 == joaat("nero2"))
		if (!Global_262145.f_19331 && cloudTimeAsInt < Global_262145.f_19428)
			num = 0;
	else if (hParam0 == joaat("penetrator"))
		if (!Global_262145.f_19332 && cloudTimeAsInt < Global_262145.f_19429)
			num = 0;
	else if (hParam0 == joaat("specter"))
		if (!Global_262145.f_19333 && cloudTimeAsInt < Global_262145.f_19430)
			num = 0;
	else if (hParam0 == joaat("specter2"))
		if (!Global_262145.f_19334 && cloudTimeAsInt < Global_262145.f_19431)
			num = 0;
	else if (hParam0 == joaat("tempesta"))
		if (!Global_262145.f_19335 && cloudTimeAsInt < Global_262145.f_19432)
			num = 0;

	if (hParam0 == joaat("gp1"))
		if (!Global_262145.f_20392 && cloudTimeAsInt < Global_262145.f_20388)
			num = 0;
	else if (hParam0 == joaat("infernus2"))
		if (!Global_262145.f_20393 && cloudTimeAsInt < Global_262145.f_20389)
			num = 0;
	else if (hParam0 == joaat("ruston"))
		if (!Global_262145.f_20394 && cloudTimeAsInt < Global_262145.f_20390)
			num = 0;
	else if (hParam0 == joaat("turismo2"))
		if (!Global_262145.f_20395 && cloudTimeAsInt < Global_262145.f_20391)
			num = 0;

	if (hParam0 == joaat("xa21"))
		if (!Global_262145.f_21274 && cloudTimeAsInt < Global_262145.f_21282)
			num = 0;
	else if (hParam0 == joaat("cheetah2"))
		if (!Global_262145.f_21275 && cloudTimeAsInt < Global_262145.f_21283)
			num = 0;
	else if (hParam0 == joaat("torero"))
		if (!Global_262145.f_21276 && cloudTimeAsInt < Global_262145.f_21284)
			num = 0;
	else if (hParam0 == joaat("vagner"))
		if (!Global_262145.f_21277 && cloudTimeAsInt < Global_262145.f_21285)
			num = 0;
	else if (hParam0 == joaat("ardent"))
		if (!Global_262145.f_21278 && cloudTimeAsInt < Global_262145.f_21286)
			num = 0;
	else if (hParam0 == joaat("nightshark"))
		if (!Global_262145.f_21279 && cloudTimeAsInt < Global_262145.f_21287)
			num = 0;

	if (hParam0 == joaat("microlight"))
		if (!Global_262145.f_22073 && cloudTimeAsInt < Global_262145.f_22093)
			num = 0;
	else if (hParam0 == joaat("mogul"))
		if (!Global_262145.f_22085 && cloudTimeAsInt < Global_262145.f_22105)
			num = 0;
	else if (hParam0 == joaat("rogue"))
		if (!Global_262145.f_22076 && cloudTimeAsInt < Global_262145.f_22096)
			num = 0;
	else if (hParam0 == joaat("starling"))
		if (!Global_262145.f_22086 && cloudTimeAsInt < Global_262145.f_22106)
			num = 0;
	else if (hParam0 == joaat("seabreeze"))
		if (!Global_262145.f_22074 && cloudTimeAsInt < Global_262145.f_22094)
			num = 0;
	else if (hParam0 == joaat("tula"))
		if (!Global_262145.f_22090 && cloudTimeAsInt < Global_262145.f_22110)
			num = 0;
	else if (hParam0 == joaat("pyro"))
		if (!Global_262145.f_22088 && cloudTimeAsInt < Global_262145.f_22108)
			num = 0;
	else if (hParam0 == joaat("molotok"))
		if (!Global_262145.f_22089 && cloudTimeAsInt < Global_262145.f_22109)
			num = 0;
	else if (hParam0 == joaat("nokota"))
		if (!Global_262145.f_22084 && cloudTimeAsInt < Global_262145.f_22104)
			num = 0;
	else if (hParam0 == joaat("bombushka"))
		if (!Global_262145.f_22091 && cloudTimeAsInt < Global_262145.f_22111)
			num = 0;
	else if (hParam0 == joaat("hunter"))
		if (!Global_262145.f_22087 && cloudTimeAsInt < Global_262145.f_22107)
			num = 0;
	else if (hParam0 == joaat("havok"))
		if (!Global_262145.f_22083 && cloudTimeAsInt < Global_262145.f_22103)
			num = 0;
	else if (hParam0 == joaat("howard"))
		if (!Global_262145.f_22075 && cloudTimeAsInt < Global_262145.f_22095)
			num = 0;
	else if (hParam0 == joaat("alphaz1"))
		if (!Global_262145.f_22077 && cloudTimeAsInt < Global_262145.f_22097)
			num = 0;
	else if (hParam0 == joaat("cyclone"))
		if (!Global_262145.f_22078 && cloudTimeAsInt < Global_262145.f_22098)
			num = 0;
	else if (hParam0 == joaat("visione"))
		if (!Global_262145.f_22079 && cloudTimeAsInt < Global_262145.f_22099)
			num = 0;
	else if (hParam0 == joaat("vigilante"))
		if (!Global_262145.f_22080 && cloudTimeAsInt < Global_262145.f_22100)
			num = 0;
	else if (hParam0 == joaat("retinue"))
		if (!Global_262145.f_22081 && cloudTimeAsInt < Global_262145.f_22101)
			num = 0;
	else if (hParam0 == joaat("rapidgt3"))
		if (!Global_262145.f_22082 && cloudTimeAsInt < Global_262145.f_22102)
			num = 0;

	if (hParam0 == joaat("deluxo"))
		if (!Global_262145.f_23041 && cloudTimeAsInt < Global_262145.f_23069)
			num = 0;
	else if (hParam0 == joaat("stromberg"))
		if (!Global_262145.f_23042 && cloudTimeAsInt < Global_262145.f_23070)
			num = 0;
	else if (hParam0 == joaat("riot2"))
		if (!Global_262145.f_23043 && cloudTimeAsInt < Global_262145.f_23071)
			num = 0;
	else if (hParam0 == joaat("chernobog"))
		if (!Global_262145.f_23044 && cloudTimeAsInt < Global_262145.f_23072)
			num = 0;
	else if (hParam0 == joaat("khanjali"))
		if (!Global_262145.f_23045 && cloudTimeAsInt < Global_262145.f_23073)
			num = 0;
	else if (hParam0 == joaat("akula"))
		if (!Global_262145.f_23046 && cloudTimeAsInt < Global_262145.f_23074)
			num = 0;
	else if (hParam0 == joaat("thruster"))
		if (!Global_262145.f_23047 && cloudTimeAsInt < Global_262145.f_23075)
			num = 0;
	else if (hParam0 == joaat("barrage"))
		if (!Global_262145.f_23048 && cloudTimeAsInt < Global_262145.f_23076)
			num = 0;
	else if (hParam0 == joaat("volatol"))
		if (!Global_262145.f_23049 && cloudTimeAsInt < Global_262145.f_23077)
			num = 0;
	else if (hParam0 == joaat("comet4"))
		if (!Global_262145.f_23050 && cloudTimeAsInt < Global_262145.f_23078)
			num = 0;
	else if (hParam0 == joaat("neon"))
		if (!Global_262145.f_23051 && cloudTimeAsInt < Global_262145.f_23079)
			num = 0;
	else if (hParam0 == joaat("streiter"))
		if (!Global_262145.f_23052 && cloudTimeAsInt < Global_262145.f_23080)
			num = 0;
	else if (hParam0 == joaat("sentinel3"))
		if (!Global_262145.f_23053 && cloudTimeAsInt < Global_262145.f_23081)
			num = 0;
	else if (hParam0 == joaat("yosemite"))
		if (!Global_262145.f_23054 && cloudTimeAsInt < Global_262145.f_23082)
			num = 0;
	else if (hParam0 == joaat("sc1"))
		if (!Global_262145.f_23055 && cloudTimeAsInt < Global_262145.f_23083)
			num = 0;
	else if (hParam0 == joaat("autarch"))
		if (!Global_262145.f_23056 && cloudTimeAsInt < Global_262145.f_23084)
			num = 0;
	else if (hParam0 == joaat("gt500"))
		if (!Global_262145.f_23057 && cloudTimeAsInt < Global_262145.f_23085)
			num = 0;
	else if (hParam0 == joaat("hustler"))
		if (!Global_262145.f_23058 && cloudTimeAsInt < Global_262145.f_23086)
			num = 0;
	else if (hParam0 == joaat("revolter"))
		if (!Global_262145.f_23059 && cloudTimeAsInt < Global_262145.f_23087)
			num = 0;
	else if (hParam0 == joaat("pariah"))
		if (!Global_262145.f_23060 && cloudTimeAsInt < Global_262145.f_23088)
			num = 0;
	else if (hParam0 == joaat("raiden"))
		if (!Global_262145.f_23061 && cloudTimeAsInt < Global_262145.f_23089)
			num = 0;
	else if (hParam0 == joaat("savestra"))
		if (!Global_262145.f_23062 && cloudTimeAsInt < Global_262145.f_23090)
			num = 0;
	else if (hParam0 == joaat("riata"))
		if (!Global_262145.f_23063 && cloudTimeAsInt < Global_262145.f_23091)
			num = 0;
	else if (hParam0 == joaat("hermes"))
		if (!Global_262145.f_23064 && cloudTimeAsInt < Global_262145.f_23092)
			num = 0;
	else if (hParam0 == joaat("comet5"))
		if (!Global_262145.f_23065 && cloudTimeAsInt < Global_262145.f_23093)
			num = 0;
	else if (hParam0 == joaat("z190"))
		if (!Global_262145.f_23066 && cloudTimeAsInt < Global_262145.f_23094)
			num = 0;
	else if (hParam0 == joaat("viseris"))
		if (!Global_262145.f_23067 && cloudTimeAsInt < Global_262145.f_23095)
			num = 0;
	else if (hParam0 == joaat("kamacho"))
		if (!Global_262145.f_23068 && cloudTimeAsInt < Global_262145.f_23096)
			num = 0;

	if (hParam0 == joaat("gb200"))
		if (!Global_262145.f_24263 && cloudTimeAsInt < Global_262145.f_24279)
			num = 0;
	else if (hParam0 == joaat("fagaloa"))
		if (!Global_262145.f_24264 && cloudTimeAsInt < Global_262145.f_24280)
			num = 0;
	else if (hParam0 == joaat("ellie"))
		if (!Global_262145.f_24268 && cloudTimeAsInt < Global_262145.f_24284)
			num = 0;
	else if (hParam0 == joaat("issi3"))
		if (!Global_262145.f_24271 && cloudTimeAsInt < Global_262145.f_24287)
			num = 0;
	else if (hParam0 == joaat("michelli"))
		if (!Global_262145.f_24276 && cloudTimeAsInt < Global_262145.f_24292)
			num = 0;
	else if (hParam0 == joaat("flashgt"))
		if (!Global_262145.f_24270 && cloudTimeAsInt < Global_262145.f_24286)
			num = 0;
	else if (hParam0 == joaat("hotring"))
		if (!Global_262145.f_24262 && cloudTimeAsInt < Global_262145.f_24278)
			num = 0;
	else if (hParam0 == joaat("tezeract"))
		if (!Global_262145.f_24269 && cloudTimeAsInt < Global_262145.f_24285)
			num = 0;
	else if (hParam0 == joaat("tyrant"))
		if (!Global_262145.f_24275 && cloudTimeAsInt < Global_262145.f_24291)
			num = 0;
	else if (hParam0 == joaat("dominator3"))
		if (!Global_262145.f_24274 && cloudTimeAsInt < Global_262145.f_24290)
			num = 0;
	else if (hParam0 == joaat("taipan"))
		if (!Global_262145.f_24265 && cloudTimeAsInt < Global_262145.f_24281)
			num = 0;
	else if (hParam0 == joaat("entity2"))
		if (!Global_262145.f_24267 && cloudTimeAsInt < Global_262145.f_24283)
			num = 0;
	else if (hParam0 == joaat("jester3"))
		if (!Global_262145.f_24277 && cloudTimeAsInt < Global_262145.f_24293)
			num = 0;
	else if (hParam0 == joaat("cheburek"))
		if (!Global_262145.f_24273 && cloudTimeAsInt < Global_262145.f_24289)
			num = 0;
	else if (hParam0 == joaat("caracara"))
		if (!Global_262145.f_24266 && cloudTimeAsInt < Global_262145.f_24282)
			num = 0;
	else if (hParam0 == joaat("seasparrow"))
		if (!Global_262145.f_24272 && cloudTimeAsInt < Global_262145.f_24288)
			num = 0;

	if (hParam0 == joaat("terbyte"))
		if (!Global_262145.f_24353 && cloudTimeAsInt < Global_262145.f_24340)
			num = 0;
	else if (hParam0 == joaat("pbus2"))
		if (!Global_262145.f_24354 && cloudTimeAsInt < Global_262145.f_24341)
			num = 0;
	else if (hParam0 == joaat("mule4"))
		if (!Global_262145.f_24359 && cloudTimeAsInt < Global_262145.f_24346)
			num = 0;
	else if (hParam0 == joaat("pounder2"))
		if (!Global_262145.f_24358 && cloudTimeAsInt < Global_262145.f_24345)
			num = 0;
	else if (hParam0 == joaat("swinger"))
		if (!Global_262145.f_24356 && cloudTimeAsInt < Global_262145.f_24343)
			num = 0;
	else if (hParam0 == joaat("menacer"))
		if (!Global_262145.f_24362 && cloudTimeAsInt < Global_262145.f_24349)
			num = 0;
	else if (hParam0 == joaat("scramjet"))
		if (!Global_262145.f_24364 && cloudTimeAsInt < Global_262145.f_24351)
			num = 0;
	else if (hParam0 == joaat("strikeforce"))
		if (!Global_262145.f_24365 && cloudTimeAsInt < Global_262145.f_24352)
			num = 0;
	else if (hParam0 == joaat("oppressor2"))
		if (!Global_262145.f_24363 && cloudTimeAsInt < Global_262145.f_24350)
			num = 0;
	else if (hParam0 == joaat("patriot2"))
		if (!Global_262145.f_24355 && cloudTimeAsInt < Global_262145.f_24342)
			num = 0;
	else if (hParam0 == joaat("stafford"))
		if (!Global_262145.f_24357 && cloudTimeAsInt < Global_262145.f_24344)
			num = 0;
	else if (hParam0 == joaat("freecrawler"))
		if (!Global_262145.f_24361 && cloudTimeAsInt < Global_262145.f_24348)
			num = 0;
	else if (hParam0 == joaat("blimp3"))
		if (!Global_262145.f_24360 && cloudTimeAsInt < Global_262145.f_24347)
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
		if (!Global_262145.f_26956 && cloudTimeAsInt < Global_262145.f_26958)
			num = 0;
	}
	else if (hParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25969 && cloudTimeAsInt < Global_262145.f_25962)
			num = 0;
	}
	else if (hParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25970 && cloudTimeAsInt < Global_262145.f_25963)
			num = 0;
	}
	else if (hParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25971 && cloudTimeAsInt < Global_262145.f_25964)
			num = 0;
	}
	else if (hParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25972 && cloudTimeAsInt < Global_262145.f_25965)
			num = 0;
	}
	else if (hParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26957 && cloudTimeAsInt < Global_262145.f_26959)
			num = 0;
	}
	else if (hParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25973 && cloudTimeAsInt < Global_262145.f_25966)
			num = 0;
	}
	else if (hParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25974 && cloudTimeAsInt < Global_262145.f_25967)
			num = 0;
	}
	else if (hParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25975 && cloudTimeAsInt < Global_262145.f_25968)
			num = 0;
	}
	else if (hParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25980 && cloudTimeAsInt < Global_262145.f_26001)
			num = 0;
	}
	else if (hParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25981 && cloudTimeAsInt < Global_262145.f_26002)
			num = 0;
	}
	else if (hParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25982 && cloudTimeAsInt < Global_262145.f_26003)
			num = 0;
	}
	else if (hParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25983 && cloudTimeAsInt < Global_262145.f_26004)
			num = 0;
	}
	else if (hParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25984 && cloudTimeAsInt < Global_262145.f_26005)
			num = 0;
	}
	else if (hParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25985 && cloudTimeAsInt < Global_262145.f_26006)
			num = 0;
	}
	else if (hParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25986 && cloudTimeAsInt < Global_262145.f_26007)
			num = 0;
	}
	else if (hParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25987 && cloudTimeAsInt < Global_262145.f_26008)
			num = 0;
	}
	else if (hParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25988 && cloudTimeAsInt < Global_262145.f_26009)
			num = 0;
	}
	else if (hParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25989 && cloudTimeAsInt < Global_262145.f_26010)
			num = 0;
	}
	else if (hParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25990 && cloudTimeAsInt < Global_262145.f_26011)
			num = 0;
	}
	else if (hParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25991 && cloudTimeAsInt < Global_262145.f_26012)
			num = 0;
	}
	else if (hParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25992 && cloudTimeAsInt < Global_262145.f_26013)
			num = 0;
	}
	else if (hParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25993 && cloudTimeAsInt < Global_262145.f_26014)
			num = 0;
	}
	else if (hParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25994 && cloudTimeAsInt < Global_262145.f_26015)
			num = 0;
	}
	else if (hParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25995 && cloudTimeAsInt < Global_262145.f_26016)
			num = 0;
	}
	else if (hParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25996 && cloudTimeAsInt < Global_262145.f_26017)
			num = 0;
	}
	else if (hParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25997 && cloudTimeAsInt < Global_262145.f_26018)
			num = 0;
	}
	else if (hParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25998 && cloudTimeAsInt < Global_262145.f_26019)
			num = 0;
	}
	else if (hParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25999 && cloudTimeAsInt < Global_262145.f_26020)
			num = 0;
	}
	else if (hParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_26000 && cloudTimeAsInt < Global_262145.f_26021)
			num = 0;
	}
	else if (hParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28820 && cloudTimeAsInt < Global_262145.f_28841)
			num = 0;
	}
	else if (hParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28821 && cloudTimeAsInt < Global_262145.f_28842)
			num = 0;
	}
	else if (hParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28822 && cloudTimeAsInt < Global_262145.f_28843)
			num = 0;
	}
	else if (hParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28823 && cloudTimeAsInt < Global_262145.f_28844)
			num = 0;
	}
	else if (hParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28824 && cloudTimeAsInt < Global_262145.f_28845)
			num = 0;
	}
	else if (hParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28825 && cloudTimeAsInt < Global_262145.f_28846)
			num = 0;
	}
	else if (hParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28826 && cloudTimeAsInt < Global_262145.f_28847)
			num = 0;
	}
	else if (hParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28827 && cloudTimeAsInt < Global_262145.f_28848)
			num = 0;
	}
	else if (hParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28828 && cloudTimeAsInt < Global_262145.f_28849)
			num = 0;
	}
	else if (hParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28829 && cloudTimeAsInt < Global_262145.f_28850)
			num = 0;
	}
	else if (hParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28830 && cloudTimeAsInt < Global_262145.f_28851)
			num = 0;
	}
	else if (hParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28831 && cloudTimeAsInt < Global_262145.f_28852)
			num = 0;
	}
	else if (hParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28832 && cloudTimeAsInt < Global_262145.f_28853)
			num = 0;
	}
	else if (hParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28833 && cloudTimeAsInt < Global_262145.f_28854)
			num = 0;
	}
	else if (hParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28834 && cloudTimeAsInt < Global_262145.f_28855)
			num = 0;
	}
	else if (hParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28835 && cloudTimeAsInt < Global_262145.f_28856)
			num = 0;
	}
	else if (hParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28836 && cloudTimeAsInt < Global_262145.f_28857)
			num = 0;
	}
	else if (hParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28837 && cloudTimeAsInt < Global_262145.f_28858)
			num = 0;
	}
	else if (hParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28838 && cloudTimeAsInt < Global_262145.f_28859)
			num = 0;
	}
	else if (hParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28839 && cloudTimeAsInt < Global_262145.f_28860)
			num = 0;
	}
	else if (hParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28840 && cloudTimeAsInt < Global_262145.f_28861)
			num = 0;
	}
	else if (hParam0 == joaat("formula"))
	{
		if (!Global_262145.f_28863 && cloudTimeAsInt < Global_262145.f_28864 && !Global_262145.f_28818)
			num = 0;
	}
	else if (hParam0 == joaat("formula2"))
	{
		if (!Global_262145.f_28866 && cloudTimeAsInt < Global_262145.f_28867 && !Global_262145.f_28819)
			num = 0;
	}
	else if (hParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28871 && cloudTimeAsInt < Global_262145.f_28874)
			num = 0;
	}
	else if (hParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28872 && cloudTimeAsInt < Global_262145.f_28875)
			num = 0;
	}
	else if (hParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28873 && cloudTimeAsInt < Global_262145.f_28876)
			num = 0;
	}
	else if (hParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29889 && cloudTimeAsInt < Global_262145.f_29554)
			num = 0;
	}
	else if (hParam0 == joaat("club"))
	{
		if (!Global_262145.f_29540 && cloudTimeAsInt < Global_262145.f_29561)
			num = 0;
	}
	else if (hParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29541 && cloudTimeAsInt < Global_262145.f_29547)
			num = 0;
	}
	else if (hParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29887 && cloudTimeAsInt < Global_262145.f_29555)
			num = 0;
	}
	else if (hParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29888 && cloudTimeAsInt < Global_262145.f_29556)
			num = 0;
	}
	else if (hParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29534 && cloudTimeAsInt < Global_262145.f_29553)
			num = 0;
	}
	else if (hParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29535 && cloudTimeAsInt < Global_262145.f_29562)
			num = 0;
	}
	else if (hParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29536 && cloudTimeAsInt < Global_262145.f_29552)
			num = 0;
	}
	else if (hParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29537 && cloudTimeAsInt < Global_262145.f_29550)
			num = 0;
	}
	else if (hParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29883 && cloudTimeAsInt < Global_262145.f_29557)
			num = 0;
	}
	else if (hParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29884 && cloudTimeAsInt < Global_262145.f_29558)
			num = 0;
	}
	else if (hParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29885 && cloudTimeAsInt < Global_262145.f_29559)
			num = 0;
	}
	else if (hParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29886 && cloudTimeAsInt < Global_262145.f_29560)
			num = 0;
	}
	else if (hParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29538 && cloudTimeAsInt < Global_262145.f_29549)
			num = 0;
	}
	else if (hParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29539 && cloudTimeAsInt < Global_262145.f_29551)
			num = 0;
	}
	else if (hParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30348 && cloudTimeAsInt < Global_262145.f_30331)
			num = 0;
	}
	else if (hParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30349 && cloudTimeAsInt < Global_262145.f_30332)
			num = 0;
	}
	else if (hParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30350 && cloudTimeAsInt < Global_262145.f_30333)
			num = 0;
	}
	else if (hParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30351 && cloudTimeAsInt < Global_262145.f_30334)
			num = 0;
	}
	else if (hParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30352 && cloudTimeAsInt < Global_262145.f_30335)
			num = 0;
	}
	else if (hParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30353 && cloudTimeAsInt < Global_262145.f_30336)
			num = 0;
	}
	else if (hParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30354 && cloudTimeAsInt < Global_262145.f_30337)
			num = 0;
	}
	else if (hParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30355 && cloudTimeAsInt < Global_262145.f_30338)
			num = 0;
	}
	else if (hParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30356 && cloudTimeAsInt < Global_262145.f_30339)
			num = 0;
	}
	else if (hParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30365)
		{
		}
		else if (!Global_262145.f_30357 && cloudTimeAsInt < Global_262145.f_30340)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30358 && cloudTimeAsInt < Global_262145.f_30341)
			num = 0;
	}
	else if (hParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30359 && cloudTimeAsInt < Global_262145.f_30342)
			num = 0;
	}
	else if (hParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30360 && cloudTimeAsInt < Global_262145.f_30343)
			num = 0;
	}
	else if (hParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30361 && cloudTimeAsInt < Global_262145.f_30344)
			num = 0;
	}
	else if (hParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30366)
		{
		}
		else if (!Global_262145.f_30362 && cloudTimeAsInt < Global_262145.f_30345)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30363 && cloudTimeAsInt < Global_262145.f_30346)
			num = 0;
	}
	else if (hParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30364 && cloudTimeAsInt < Global_262145.f_30347)
			num = 0;
	}
	else if (hParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31216 && cloudTimeAsInt < Global_262145.f_31199)
			num = 0;
	}
	else if (hParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31217 && cloudTimeAsInt < Global_262145.f_31200)
			num = 0;
	}
	else if (hParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31218 && cloudTimeAsInt < Global_262145.f_31201)
			num = 0;
	}
	else if (hParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31219 && cloudTimeAsInt < Global_262145.f_31202)
			num = 0;
	}
	else if (hParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31220 && cloudTimeAsInt < Global_262145.f_31203)
			num = 0;
	}
	else if (hParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31221 && cloudTimeAsInt < Global_262145.f_31204)
			num = 0;
	}
	else if (hParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31222 && cloudTimeAsInt < Global_262145.f_31205)
			num = 0;
	}
	else if (hParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31223 && cloudTimeAsInt < Global_262145.f_31206)
			num = 0;
	}
	else if (hParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31224 && cloudTimeAsInt < Global_262145.f_31207)
			num = 0;
	}
	else if (hParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31225 && cloudTimeAsInt < Global_262145.f_31208)
			num = 0;
	}
	else if (hParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31226 && cloudTimeAsInt < Global_262145.f_31209)
			num = 0;
	}
	else if (hParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31227 && cloudTimeAsInt < Global_262145.f_31210)
			num = 0;
	}
	else if (hParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31228 && cloudTimeAsInt < Global_262145.f_31211)
			num = 0;
	}
	else if (hParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31229 && cloudTimeAsInt < Global_262145.f_31212)
			num = 0;
	}
	else if (hParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31230 && cloudTimeAsInt < Global_262145.f_31213)
			num = 0;
	}
	else if (hParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31231 && cloudTimeAsInt < Global_262145.f_31214)
			num = 0;
	}
	else if (hParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31232 && cloudTimeAsInt < Global_262145.f_31215)
			num = 0;
	}
	else if (hParam0 == joaat("champion"))
	{
		if (!Global_262145.f_32099 && cloudTimeAsInt < Global_262145.f_32084)
			num = 0;
	}
	else if (hParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_32100 && cloudTimeAsInt < Global_262145.f_32085)
			num = 0;
	}
	else if (hParam0 == joaat("deity"))
	{
		if (!Global_262145.f_32101 && cloudTimeAsInt < Global_262145.f_32086)
			num = 0;
	}
	else if (hParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_32102 && cloudTimeAsInt < Global_262145.f_32087)
			num = 0;
	}
	else if (hParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_32103 && cloudTimeAsInt < Global_262145.f_32088)
			num = 0;
	}
	else if (hParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_32104 && cloudTimeAsInt < Global_262145.f_32089)
			num = 0;
	}
	else if (hParam0 == joaat("astron"))
	{
		if (!Global_262145.f_32105 && cloudTimeAsInt < Global_262145.f_32090)
			num = 0;
	}
	else if (hParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_32106 && cloudTimeAsInt < Global_262145.f_32091)
			num = 0;
	}
	else if (hParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_32107 && cloudTimeAsInt < Global_262145.f_32092)
			num = 0;
	}
	else if (hParam0 == joaat("reever"))
	{
		if (!Global_262145.f_32108 && cloudTimeAsInt < Global_262145.f_32093)
			num = 0;
	}
	else if (hParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_32109 && cloudTimeAsInt < Global_262145.f_32094)
			num = 0;
	}
	else if (hParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_32110 && cloudTimeAsInt < Global_262145.f_32095)
			num = 0;
	}
	else if (hParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_32111 && cloudTimeAsInt < Global_262145.f_32096)
			num = 0;
	}
	else if (hParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_32112 && cloudTimeAsInt < Global_262145.f_32097)
			num = 0;
	}
	else if (hParam0 == joaat("baller7"))
	{
		if (Global_262145.f_32177)
		{
		}
		else if (!Global_262145.f_32113 && cloudTimeAsInt < Global_262145.f_32098)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("brioso3"))
	{
		if (!*Global_262145.f_33350 && cloudTimeAsInt < *Global_262145.f_33331)
			num = 0;
	}
	else if (hParam0 == joaat("corsita"))
	{
		if (!*Global_262145.f_33344 && cloudTimeAsInt < *Global_262145.f_33325)
			num = 0;
	}
	else if (hParam0 == joaat("draugur"))
	{
		if (!*Global_262145.f_33348 && cloudTimeAsInt < *Global_262145.f_33329)
			num = 0;
	}
	else if (hParam0 == joaat("greenwood"))
	{
		if (!*Global_262145.f_33342 && cloudTimeAsInt < *Global_262145.f_33323)
			num = 0;
	}
	else if (hParam0 == joaat("kanjosj"))
	{
		if (!*Global_262145.f_33353 && cloudTimeAsInt < *Global_262145.f_33334)
			num = 0;
	}
	else if (hParam0 == joaat("lm87"))
	{
		if (!*Global_262145.f_33345 && cloudTimeAsInt < *Global_262145.f_33326)
			num = 0;
	}
	else if (hParam0 == joaat("postlude"))
	{
		if (!*Global_262145.f_33354 && cloudTimeAsInt < *Global_262145.f_33335)
			num = 0;
	}
	else if (hParam0 == joaat("rhinehart"))
	{
		if (!*Global_262145.f_33356 && cloudTimeAsInt < *Global_262145.f_33337)
			num = 0;
	}
	else if (hParam0 == joaat("sm722"))
	{
		if (!*Global_262145.f_33347 && cloudTimeAsInt < *Global_262145.f_33328)
			num = 0;
	}
	else if (hParam0 == joaat("tenf"))
	{
		if (!*Global_262145.f_33355 && cloudTimeAsInt < *Global_262145.f_33336)
			num = 0;
	}
	else if (hParam0 == joaat("tenf2"))
	{
		if (!*Global_262145.f_33358 && cloudTimeAsInt < *Global_262145.f_33339)
			num = 0;
	}
	else if (hParam0 == joaat("torero2"))
	{
		if (!*Global_262145.f_33343 && cloudTimeAsInt < *Global_262145.f_33324)
			num = 0;
	}
	else if (hParam0 == joaat("vigero2"))
	{
		if (!*Global_262145.f_33351 && cloudTimeAsInt < *Global_262145.f_33332)
			num = 0;
	}
	else if (hParam0 == joaat("weevil2"))
	{
		if (!*Global_262145.f_33357 && cloudTimeAsInt < *Global_262145.f_33338)
			num = 0;
	}
	else if (hParam0 == joaat("ruiner4"))
	{
		if (!*Global_262145.f_33349 && cloudTimeAsInt < *Global_262145.f_33330)
			num = 0;
	}
	else if (hParam0 == joaat("sentinel4"))
	{
		if (!*Global_262145.f_33359 && cloudTimeAsInt < *Global_262145.f_33340)
			num = 0;
	}
	else if (hParam0 == joaat("conada"))
	{
		if (!*Global_262145.f_33346 && cloudTimeAsInt < *Global_262145.f_33327)
			num = 0;
	}
	else if (hParam0 == joaat("omnisegt"))
	{
		if (!*Global_262145.f_33341 && cloudTimeAsInt < *Global_262145.f_33322)
			num = 0;
	}
	else if (hParam0 == 1384502824)
	{
		if (!*Global_262145.f_34217 && cloudTimeAsInt < *Global_262145.f_34201)
			num = 0;
	}
	else if (hParam0 == -1576586413)
	{
		if (!*Global_262145.f_34217 && cloudTimeAsInt < *Global_262145.f_34201)
			num = 0;
	}
	else if (hParam0 == -1249788006)
	{
		if (!*Global_262145.f_34226 && cloudTimeAsInt < *Global_262145.f_34209)
			num = 0;
	}
	else if (hParam0 == -1386336041)
	{
		if (!*Global_262145.f_34220 && cloudTimeAsInt < *Global_262145.f_34204)
			num = 0;
	}
	else if (hParam0 == -1627077503)
	{
		if (!*Global_262145.f_34214 && cloudTimeAsInt < *Global_262145.f_34198)
			num = 0;
	}
	else if (hParam0 == -1035489563)
	{
		if (!*Global_262145.f_34215 && cloudTimeAsInt < *Global_262145.f_34199)
			num = 0;
	}
	else if (hParam0 == 1748565021)
	{
		if (!*Global_262145.f_34212 && cloudTimeAsInt < *Global_262145.f_34196)
			num = 0;
	}
	else if (hParam0 == 2100457220)
	{
		if (!*Global_262145.f_34223 && cloudTimeAsInt < *Global_262145.f_34207)
			num = 0;
	}
	else if (hParam0 == 996383885)
	{
		if (!*Global_262145.f_34227 && cloudTimeAsInt < *Global_262145.f_34211)
			num = 0;
	}
	else if (hParam0 == -131348178)
	{
		if (!*Global_262145.f_34224 && cloudTimeAsInt < *Global_262145.f_34208)
			num = 0;
	}
	else if (hParam0 == 268758436)
	{
		if (!*Global_262145.f_34213 && cloudTimeAsInt < *Global_262145.f_34197)
			num = 0;
	}
	else if (hParam0 == 1076201208)
	{
		if (!*Global_262145.f_34216 && cloudTimeAsInt < *Global_262145.f_34200)
			num = 0;
	}
	else if (hParam0 == 669204833)
	{
		if (!*Global_262145.f_34225 && cloudTimeAsInt < *Global_262145.f_34210)
			num = 0;
	}
	else if (hParam0 == 1550581940)
	{
		if (!*Global_262145.f_34221 && cloudTimeAsInt < *Global_262145.f_34205)
			num = 0;
	}
	else if (hParam0 == -1933242328)
	{
		if (!*Global_262145.f_34222 && cloudTimeAsInt < *Global_262145.f_34206)
			num = 0;
	}
	else if (hParam0 == -461850249)
	{
		if (!*Global_262145.f_34219 && cloudTimeAsInt < *Global_262145.f_34203)
			num = 0;
	}
	else if (hParam0 == joaat("taxi"))
	{
		if (!*Global_262145.f_34218 && cloudTimeAsInt < *Global_262145.f_34202)
			num = 0;
	}

	if (hParam0 == joaat("exemplar"))
		if (!*Global_262145.f_35167 && !*Global_262145.f_35168)
			num = 0;
	else if (hParam0 == joaat("cogcabrio"))
		if (!*Global_262145.f_35169 && !*Global_262145.f_35170)
			num = 0;
	else if (hParam0 == joaat("thrust"))
		if (!*Global_262145.f_35171 && !*Global_262145.f_35172)
			num = 0;
	else if (hParam0 == joaat("vindicator"))
		if (!*Global_262145.f_35173 && !*Global_262145.f_35174)
			num = 0;
	else if (hParam0 == joaat("coquette3"))
		if (!*Global_262145.f_35175 && !*Global_262145.f_35176)
			num = 0;
	else if (hParam0 == joaat("brawler"))
		if (!*Global_262145.f_35177 && !*Global_262145.f_35178)
			num = 0;
	else if (hParam0 == joaat("cognoscenti"))
		if (!*Global_262145.f_35179 && !*Global_262145.f_35180)
			num = 0;
	else if (hParam0 == joaat("cognoscenti2"))
		if (!*Global_262145.f_35181 && !*Global_262145.f_35182)
			num = 0;
	else if (hParam0 == joaat("cog55"))
		if (!*Global_262145.f_35183 && !*Global_262145.f_35184)
			num = 0;
	else if (hParam0 == joaat("cog552"))
		if (!*Global_262145.f_35185 && !*Global_262145.f_35186)
			num = 0;
	else if (hParam0 == joaat("superd"))
		if (!*Global_262145.f_35187 && !*Global_262145.f_35188)
			num = 0;
	else if (hParam0 == joaat("schafter4"))
		if (!*Global_262145.f_35189 && !*Global_262145.f_35190)
			num = 0;
	else if (hParam0 == joaat("schafter6"))
		if (!*Global_262145.f_35191 && !*Global_262145.f_35192)
			num = 0;
	else if (hParam0 == joaat("alpha"))
		if (!*Global_262145.f_35193 && !*Global_262145.f_35194)
			num = 0;
	else if (hParam0 == joaat("feltzer2"))
		if (!*Global_262145.f_35195 && !*Global_262145.f_35196)
			num = 0;
	else if (hParam0 == joaat("massacro"))
		if (!*Global_262145.f_35197 && !*Global_262145.f_35198)
			num = 0;
	else if (hParam0 == joaat("rapidgt"))
		if (!*Global_262145.f_35199 && !*Global_262145.f_35200)
			num = 0;
	else if (hParam0 == joaat("rapidgt2"))
		if (!*Global_262145.f_35201 && !*Global_262145.f_35202)
			num = 0;
	else if (hParam0 == joaat("seven70"))
		if (!*Global_262145.f_35203 && !*Global_262145.f_35204)
			num = 0;
	else if (hParam0 == joaat("jester"))
		if (!*Global_262145.f_35205 && !*Global_262145.f_35206)
			num = 0;
	else if (hParam0 == joaat("bestiagts"))
		if (!*Global_262145.f_35207 && !*Global_262145.f_35208)
			num = 0;
	else if (hParam0 == joaat("carbonizzare"))
		if (!*Global_262145.f_35209 && !*Global_262145.f_35210)
			num = 0;
	else if (hParam0 == joaat("coquette"))
		if (!*Global_262145.f_35211 && !*Global_262145.f_35212)
			num = 0;
	else if (hParam0 == joaat("furoregt"))
		if (!*Global_262145.f_35213 && !*Global_262145.f_35214)
			num = 0;
	else if (hParam0 == joaat("ninef"))
		if (!*Global_262145.f_35215 && !*Global_262145.f_35216)
			num = 0;
	else if (hParam0 == joaat("ninef2"))
		if (!*Global_262145.f_35217 && !*Global_262145.f_35218)
			num = 0;
	else if (hParam0 == joaat("verlierer2"))
		if (!*Global_262145.f_35219 && !*Global_262145.f_35220)
			num = 0;
	else if (hParam0 == joaat("btype"))
		if (!*Global_262145.f_35221 && !*Global_262145.f_35222)
			num = 0;
	else if (hParam0 == joaat("feltzer3"))
		if (!*Global_262145.f_35223 && !*Global_262145.f_35224)
			num = 0;
	else if (hParam0 == joaat("stingergt"))
		if (!*Global_262145.f_35225 && !*Global_262145.f_35226)
			num = 0;
	else if (hParam0 == joaat("stinger"))
		if (!*Global_262145.f_35227 && !*Global_262145.f_35228)
			num = 0;
	else if (hParam0 == joaat("coquette2"))
		if (!*Global_262145.f_35229 && !*Global_262145.f_35230)
			num = 0;
	else if (hParam0 == joaat("jb700"))
		if (!*Global_262145.f_35231 && !*Global_262145.f_35232)
			num = 0;
	else if (hParam0 == joaat("mamba"))
		if (!*Global_262145.f_35233 && !*Global_262145.f_35234)
			num = 0;
	else if (hParam0 == joaat("monroe"))
		if (!*Global_262145.f_35235 && !*Global_262145.f_35236)
			num = 0;
	else if (hParam0 == joaat("btype3"))
		if (!*Global_262145.f_35237 && !*Global_262145.f_35238)
			num = 0;
	else if (hParam0 == joaat("ztype"))
		if (!*Global_262145.f_35239 && !*Global_262145.f_35240)
			num = 0;
	else if (hParam0 == joaat("voltic"))
		if (!*Global_262145.f_35241 && !*Global_262145.f_35242)
			num = 0;
	else if (hParam0 == joaat("sheava"))
		if (!*Global_262145.f_35243 && !*Global_262145.f_35244)
			num = 0;
	else if (hParam0 == joaat("cheetah"))
		if (!*Global_262145.f_35245 && !*Global_262145.f_35246)
			num = 0;
	else if (hParam0 == joaat("entityxf"))
		if (!*Global_262145.f_35247 && !*Global_262145.f_35248)
			num = 0;
	else if (hParam0 == joaat("infernus"))
		if (!*Global_262145.f_35249 && !*Global_262145.f_35250)
			num = 0;
	else if (hParam0 == joaat("vacca"))
		if (!*Global_262145.f_35251 && !*Global_262145.f_35252)
			num = 0;
	else if (hParam0 == joaat("bullet"))
		if (!*Global_262145.f_35253 && !*Global_262145.f_35254)
			num = 0;
	else if (hParam0 == joaat("fmj"))
		if (!*Global_262145.f_35255 && !*Global_262145.f_35256)
			num = 0;
	else if (hParam0 == joaat("baller2"))
		if (!*Global_262145.f_35257 && !*Global_262145.f_35258)
			num = 0;
	else if (hParam0 == joaat("baller3"))
		if (!*Global_262145.f_35259 && !*Global_262145.f_35260)
			num = 0;
	else if (hParam0 == joaat("baller5"))
		if (!*Global_262145.f_35261 && !*Global_262145.f_35262)
			num = 0;
	else if (hParam0 == joaat("baller4"))
		if (!*Global_262145.f_35263 && !*Global_262145.f_35264)
			num = 0;
	else if (hParam0 == joaat("baller6"))
		if (!*Global_262145.f_35265 && !*Global_262145.f_35266)
			num = 0;
	else if (hParam0 == joaat("xls"))
		if (!*Global_262145.f_35267 && !*Global_262145.f_35268)
			num = 0;
	else if (hParam0 == joaat("xls2"))
		if (!*Global_262145.f_35269 && !*Global_262145.f_35270)
			num = 0;
	else if (hParam0 == joaat("prairie"))
		if (!*Global_262145.f_35271 && !*Global_262145.f_35272)
			num = 0;
	else if (hParam0 == joaat("issi2"))
		if (!*Global_262145.f_35273 && !*Global_262145.f_35274)
			num = 0;
	else if (hParam0 == joaat("dilettante"))
		if (!*Global_262145.f_35275 && !*Global_262145.f_35276)
			num = 0;
	else if (hParam0 == joaat("felon"))
		if (!*Global_262145.f_35277 && !*Global_262145.f_35278)
			num = 0;
	else if (hParam0 == joaat("felon2"))
		if (!*Global_262145.f_35279 && !*Global_262145.f_35280)
			num = 0;
	else if (hParam0 == joaat("f620"))
		if (!*Global_262145.f_35281 && !*Global_262145.f_35282)
			num = 0;
	else if (hParam0 == joaat("jackal"))
		if (!*Global_262145.f_35283 && !*Global_262145.f_35284)
			num = 0;
	else if (hParam0 == joaat("oracle2"))
		if (!*Global_262145.f_35285 && !*Global_262145.f_35286)
			num = 0;
	else if (hParam0 == joaat("oracle"))
		if (!*Global_262145.f_35287 && !*Global_262145.f_35288)
			num = 0;
	else if (hParam0 == joaat("sentinel2"))
		if (!*Global_262145.f_35289 && !*Global_262145.f_35290)
			num = 0;
	else if (hParam0 == joaat("zion"))
		if (!*Global_262145.f_35291 && !*Global_262145.f_35292)
			num = 0;
	else if (hParam0 == joaat("zion2"))
		if (!*Global_262145.f_35293 && !*Global_262145.f_35294)
			num = 0;
	else if (hParam0 == joaat("akuma"))
		if (!*Global_262145.f_35295 && !*Global_262145.f_35296)
			num = 0;
	else if (hParam0 == joaat("double"))
		if (!*Global_262145.f_35297 && !*Global_262145.f_35298)
			num = 0;
	else if (hParam0 == joaat("enduro"))
		if (!*Global_262145.f_35299 && !*Global_262145.f_35300)
			num = 0;
	else if (hParam0 == joaat("hexer"))
		if (!*Global_262145.f_35301 && !*Global_262145.f_35302)
			num = 0;
	else if (hParam0 == joaat("innovation"))
		if (!*Global_262145.f_35303 && !*Global_262145.f_35304)
			num = 0;
	else if (hParam0 == joaat("sanchez"))
		if (!*Global_262145.f_35305 && !*Global_262145.f_35306)
			num = 0;
	else if (hParam0 == joaat("sanchez2"))
		if (!*Global_262145.f_35307 && !*Global_262145.f_35308)
			num = 0;
	else if (hParam0 == joaat("bati2"))
		if (!*Global_262145.f_35309 && !*Global_262145.f_35310)
			num = 0;
	else if (hParam0 == joaat("faggio2"))
		if (!*Global_262145.f_35311 && !*Global_262145.f_35312)
			num = 0;
	else if (hParam0 == joaat("ruffian"))
		if (!*Global_262145.f_35313 && !*Global_262145.f_35314)
			num = 0;
	else if (hParam0 == joaat("nemesis"))
		if (!*Global_262145.f_35315 && !*Global_262145.f_35316)
			num = 0;
	else if (hParam0 == joaat("hakuchou"))
		if (!*Global_262145.f_35317 && !*Global_262145.f_35318)
			num = 0;
	else if (hParam0 == joaat("pcj"))
		if (!*Global_262145.f_35319 && !*Global_262145.f_35320)
			num = 0;
	else if (hParam0 == joaat("vader"))
		if (!*Global_262145.f_35321 && !*Global_262145.f_35322)
			num = 0;
	else if (hParam0 == joaat("sovereign"))
		if (!*Global_262145.f_35323 && !*Global_262145.f_35324)
			num = 0;
	else if (hParam0 == joaat("gauntlet"))
		if (!*Global_262145.f_35325 && !*Global_262145.f_35326)
			num = 0;
	else if (hParam0 == joaat("ratloader"))
		if (!*Global_262145.f_35327 && !*Global_262145.f_35328)
			num = 0;
	else if (hParam0 == joaat("picador"))
		if (!*Global_262145.f_35329 && !*Global_262145.f_35330)
			num = 0;
	else if (hParam0 == joaat("vigero"))
		if (!*Global_262145.f_35331 && !*Global_262145.f_35332)
			num = 0;
	else if (hParam0 == joaat("ruiner"))
		if (!*Global_262145.f_35333 && !*Global_262145.f_35334)
			num = 0;
	else if (hParam0 == joaat("tampa"))
		if (!*Global_262145.f_35335 && !*Global_262145.f_35336)
			num = 0;
	else if (hParam0 == joaat("blade"))
		if (!*Global_262145.f_35337 && !*Global_262145.f_35338)
			num = 0;
	else if (hParam0 == joaat("bifta"))
		if (!*Global_262145.f_35339 && !*Global_262145.f_35340)
			num = 0;
	else if (hParam0 == joaat("dune"))
		if (!*Global_262145.f_35341 && !*Global_262145.f_35342)
			num = 0;
	else if (hParam0 == joaat("bfinjection"))
		if (!*Global_262145.f_35343 && !*Global_262145.f_35344)
			num = 0;
	else if (hParam0 == joaat("bodhi2"))
		if (!*Global_262145.f_35345 && !*Global_262145.f_35346)
			num = 0;
	else if (hParam0 == joaat("kalahari"))
		if (!*Global_262145.f_35347 && !*Global_262145.f_35348)
			num = 0;
	else if (hParam0 == joaat("rancherxl"))
		if (!*Global_262145.f_35349 && !*Global_262145.f_35350)
			num = 0;
	else if (hParam0 == joaat("rebel2"))
		if (!*Global_262145.f_35351 && !*Global_262145.f_35352)
			num = 0;
	else if (hParam0 == joaat("rebel"))
		if (!*Global_262145.f_35353 && !*Global_262145.f_35354)
			num = 0;
	else if (hParam0 == joaat("blazer"))
		if (!*Global_262145.f_35355 && !*Global_262145.f_35356)
			num = 0;
	else if (hParam0 == joaat("blazer3"))
		if (!*Global_262145.f_35357 && !*Global_262145.f_35358)
			num = 0;
	else if (hParam0 == joaat("sandking2"))
		if (!*Global_262145.f_35359 && !*Global_262145.f_35360)
			num = 0;
	else if (hParam0 == joaat("washington"))
		if (!*Global_262145.f_35361 && !*Global_262145.f_35362)
			num = 0;
	else if (hParam0 == joaat("schafter2"))
		if (!*Global_262145.f_35363 && !*Global_262145.f_35364)
			num = 0;
	else if (hParam0 == joaat("romero"))
		if (!*Global_262145.f_35365 && !*Global_262145.f_35366)
			num = 0;
	else if (hParam0 == joaat("fugitive"))
		if (!*Global_262145.f_35367 && !*Global_262145.f_35368)
			num = 0;
	else if (hParam0 == joaat("surge"))
		if (!*Global_262145.f_35369 && !*Global_262145.f_35370)
			num = 0;
	else if (hParam0 == joaat("asea"))
		if (!*Global_262145.f_35371 && !*Global_262145.f_35372)
			num = 0;
	else if (hParam0 == joaat("premier"))
		if (!*Global_262145.f_35373 && !*Global_262145.f_35374)
			num = 0;
	else if (hParam0 == joaat("regina"))
		if (!*Global_262145.f_35375 && !*Global_262145.f_35376)
			num = 0;
	else if (hParam0 == joaat("asterope"))
		if (!*Global_262145.f_35377 && !*Global_262145.f_35378)
			num = 0;
	else if (hParam0 == joaat("intruder"))
		if (!*Global_262145.f_35379 && !*Global_262145.f_35380)
			num = 0;
	else if (hParam0 == joaat("tailgater"))
		if (!*Global_262145.f_35381 && !*Global_262145.f_35382)
			num = 0;
	else if (hParam0 == joaat("stanier"))
		if (!*Global_262145.f_35383 && !*Global_262145.f_35384)
			num = 0;
	else if (hParam0 == joaat("ingot"))
		if (!*Global_262145.f_35385 && !*Global_262145.f_35386)
			num = 0;
	else if (hParam0 == joaat("warrener"))
		if (!*Global_262145.f_35387 && !*Global_262145.f_35388)
			num = 0;
	else if (hParam0 == joaat("stratum"))
		if (!*Global_262145.f_35389 && !*Global_262145.f_35390)
			num = 0;
	else if (hParam0 == joaat("schwarzer"))
		if (!*Global_262145.f_35391 && !*Global_262145.f_35392)
			num = 0;
	else if (hParam0 == joaat("surano"))
		if (!*Global_262145.f_35393 && !*Global_262145.f_35394)
			num = 0;
	else if (hParam0 == joaat("buffalo"))
		if (!*Global_262145.f_35395 && !*Global_262145.f_35396)
			num = 0;
	else if (hParam0 == joaat("buffalo2"))
		if (!*Global_262145.f_35397 && !*Global_262145.f_35398)
			num = 0;
	else if (hParam0 == joaat("massacro2"))
		if (!*Global_262145.f_35399 && !*Global_262145.f_35400)
			num = 0;
	else if (hParam0 == joaat("jester2"))
		if (!*Global_262145.f_35401 && !*Global_262145.f_35402)
			num = 0;
	else if (hParam0 == joaat("futo"))
		if (!*Global_262145.f_35403 && !*Global_262145.f_35404)
			num = 0;
	else if (hParam0 == joaat("penumbra"))
		if (!*Global_262145.f_35405 && !*Global_262145.f_35406)
			num = 0;
	else if (hParam0 == joaat("fusilade"))
		if (!*Global_262145.f_35407 && !*Global_262145.f_35408)
			num = 0;
	else if (hParam0 == joaat("btype2"))
		if (!*Global_262145.f_35409 && !*Global_262145.f_35410)
			num = 0;
	else if (hParam0 == joaat("pigalle"))
		if (!*Global_262145.f_35411 && !*Global_262145.f_35412)
			num = 0;
	else if (hParam0 == joaat("cavalcade"))
		if (!*Global_262145.f_35413 && !*Global_262145.f_35414)
			num = 0;
	else if (hParam0 == joaat("cavalcade2"))
		if (!*Global_262145.f_35415 && !*Global_262145.f_35416)
			num = 0;
	else if (hParam0 == joaat("bjxl"))
		if (!*Global_262145.f_35417 && !*Global_262145.f_35418)
			num = 0;
	else if (hParam0 == joaat("serrano"))
		if (!*Global_262145.f_35419 && !*Global_262145.f_35420)
			num = 0;
	else if (hParam0 == joaat("gresley"))
		if (!*Global_262145.f_35421 && !*Global_262145.f_35422)
			num = 0;
	else if (hParam0 == joaat("seminole"))
		if (!*Global_262145.f_35423 && !*Global_262145.f_35424)
			num = 0;
	else if (hParam0 == joaat("granger"))
		if (!*Global_262145.f_35425 && !*Global_262145.f_35426)
			num = 0;
	else if (hParam0 == joaat("landstalker"))
		if (!*Global_262145.f_35427 && !*Global_262145.f_35428)
			num = 0;
	else if (hParam0 == joaat("habanero"))
		if (!*Global_262145.f_35429 && !*Global_262145.f_35430)
			num = 0;
	else if (hParam0 == joaat("fq2"))
		if (!*Global_262145.f_35431 && !*Global_262145.f_35432)
			num = 0;
	else if (hParam0 == joaat("baller"))
		if (!*Global_262145.f_35433 && !*Global_262145.f_35434)
			num = 0;
	else if (hParam0 == joaat("patriot"))
		if (!*Global_262145.f_35435 && !*Global_262145.f_35436)
			num = 0;
	else if (hParam0 == joaat("rocoto"))
		if (!*Global_262145.f_35437 && !*Global_262145.f_35438)
			num = 0;
	else if (hParam0 == joaat("radi"))
		if (!*Global_262145.f_35439 && !*Global_262145.f_35440)
			num = 0;
	else if (hParam0 == joaat("mesa3"))
		if (!*Global_262145.f_35441 && !*Global_262145.f_35442)
			num = 0;
	else if (hParam0 == joaat("monster"))
		if (!*Global_262145.f_35443 && !*Global_262145.f_35444)
			num = 0;
	else if (hParam0 == 1336514315)
		if (!*Global_262145.f_35473 && cloudTimeAsInt < *Global_262145.f_35460)
			num = 0;
	else if (hParam0 == -1659004814)
		if (!*Global_262145.f_35472 && cloudTimeAsInt < *Global_262145.f_35459)
			num = 0;
	else if (hParam0 == -654498607)
		if (!*Global_262145.f_35474 && cloudTimeAsInt < *Global_262145.f_35461)
			num = 0;
	else if (hParam0 == -979292575)
		if (!*Global_262145.f_35465 && cloudTimeAsInt < *Global_262145.f_35452)
			num = 0;
	else if (hParam0 == -1763675285)
		if (!*Global_262145.f_35462 && cloudTimeAsInt < *Global_262145.f_35449)
			num = 0;
	else if (hParam0 == func_52(true))
		num = 1;
	else if (hParam0 == -536105557)
		if (!*Global_262145.f_35463 && cloudTimeAsInt < *Global_262145.f_35450)
			num = 0;
	else if (hParam0 == 1447690049)
		if (!*Global_262145.f_35466 && cloudTimeAsInt < *Global_262145.f_35453)
			num = 0;
	else if (hParam0 == 165968051)
		if (!*Global_262145.f_35469 && cloudTimeAsInt < *Global_262145.f_35456)
			num = 0;
	else if (hParam0 == 191916658)
		if (!*Global_262145.f_35467 && cloudTimeAsInt < *Global_262145.f_35454)
			num = 0;
	else if (hParam0 == 802856453)
		if (!*Global_262145.f_35464 && cloudTimeAsInt < *Global_262145.f_35451)
			num = 0;
	else if (hParam0 == 610429990)
		if (!*Global_262145.f_35471 && cloudTimeAsInt < *Global_262145.f_35458)
			num = 0;
	else if (hParam0 == 239897677)
		if (!*Global_262145.f_35468 && cloudTimeAsInt < *Global_262145.f_35455)
			num = 0;
	else if (hParam0 == -897824023)
		if (!*Global_262145.f_35470 && cloudTimeAsInt < *Global_262145.f_35457)
			num = 0;
	else if (hParam0 == -1983622024)
		if (!*Global_262145.f_35470 && cloudTimeAsInt < *Global_262145.f_35457)
			num = 0;

	return num;
}

Hash func_52(BOOL bParam0) // Position - 0x80D7
{
	if (bParam0)
		return -426933872;

	return joaat("avenger");
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x80F1
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL IS_XBOX_PLATFORM() // Position - 0x8107
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

BOOL func_55() // Position - 0x811D
{
	return false;
}

BOOL func_56() // Position - 0x8126
{
	return true;
}

BOOL func_57() // Position - 0x812F
{
	return true;
}

BOOL func_58() // Position - 0x8138
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return true;

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x8151
{
	int profileSetting;

	if (Global_152686 == 2)
		return true;
	else if (Global_152686 == 3)
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

BOOL func_60(Vehicle veParam0) // Position - 0x8209
{
	Hash entityModel;
	const char* vehicleNumberPlateText;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	vehicleNumberPlateText = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);

	if (entityModel == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G "))
		return true;

	if (!func_48(entityModel, false, -1))
		return true;

	return false;
}

BOOL func_61(Vehicle veParam0) // Position - 0x8250
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98174[i]))
			if (Global_98174[i] == veParam0)
				return true;
	}

	return false;
}

BOOL func_62(Vehicle veParam0) // Position - 0x828B
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98144[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98144[i], false))
				if (Global_98144[i] == veParam0 && ENTITY::GET_ENTITY_MODEL(Global_98144[i]) == ENTITY::GET_ENTITY_MODEL(veParam0))
					return true;
		}
	}

	return false;
}

BOOL func_63(Vehicle veParam0) // Position - 0x8307
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[24]))
		if (veParam0 == Global_77479.f_484[24])
			return false;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[i]))
			if (i != 24 && i != 21 && i != 22 && i != 23 && i != 27 && i != 30 && i != 33 && i != 28 && i != 31 && i != 34 && i != 26 && i != 29 && i != 32)
				if (veParam0 == Global_77479.f_484[i])
					return true;
	}

	return false;
}

eCharacter func_64(Vehicle veParam0) // Position - 0x83EF
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return _CHAR_NULL;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return _CHAR_NULL;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98144[i]))
			if (Global_98144[i] == veParam0)
				return Global_98154[i];
	}

	return _CHAR_NULL;
}

BOOL func_65(Vehicle veParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x8452
{
	int i;
	var garageName;
	int unk;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_66(echParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(G_MissionStats.f_7232[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_66(eCharacter echParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x84C0
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (echParam0)
	{
		case CHAR_MICHAEL:
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
	
		case CHAR_FRANKLIN:
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
	
		case CHAR_TREVOR:
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

void func_67(int iParam0, BOOL bParam1) // Position - 0x8598
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		if (!func_69(iParam0, 0))
		{
			func_68(iParam0, 1, false);
			func_68(iParam0, 2, false);
			func_68(iParam0, 3, false);
			func_68(iParam0, 4, false);
			func_68(iParam0, 0, true);
			Global_77479[iParam0] = 1;
		}
	}
	else
	{
		func_68(iParam0, 0, false);
	}

	return;
}

void func_68(int iParam0, int iParam1, BOOL bParam2) // Position - 0x85F5
{
	if (iParam0 == -1)
		return;

	if (bParam2)
		MISC::SET_BIT(&G_MissionStats.f_32752[iParam0], iParam1);
	else
		MISC::CLEAR_BIT(&G_MissionStats.f_32752[iParam0], iParam1);

	return;
}

BOOL func_69(int iParam0, int iParam1) // Position - 0x8630
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(G_MissionStats.f_32752[iParam0], iParam1);
}

void func_70(int iParam0) // Position - 0x8650
{
	BOOL flag;

	if (iParam0 == -1)
		return;

	if (func_74(&Global_77479.f_555[0], iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0]))
		{
			flag = true;
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_139[iParam0], false))
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_139[iParam0], false))
						flag = false;
		
			if (flag)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_139[iParam0], true, true);
				VEHICLE::DELETE_VEHICLE(&Global_77479.f_139[iParam0]);
			}
		}
	
		Global_77479[iParam0] = 1;
	
		if (IS_BIT_SET(Global_77479.f_555[0].f_9, 13))
		{
			if (iParam0 == 24 && func_69(iParam0, 0) && Global_78388.f_66 == 0 && G_MissionStats.f_32752.f_1958[Global_77479.f_555[0].f_14] != 0 && G_MissionStats.f_32752.f_1958[Global_77479.f_555[0].f_14] > 3 && !func_72(0, Global_77479.f_555[0].f_12) || !func_72(1, Global_77479.f_555[0].f_12))
			{
				func_71(&G_MissionStats.f_32752.f_69[Global_77479.f_555[0].f_14], &Global_78388);
				Global_78466 = G_MissionStats.f_32752.f_5591;
			}
		
			func_67(iParam0, false);
		}
	}

	return;
}

void func_71(var uParam0, var uParam1) // Position - 0x87BF
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
	return;
}

BOOL func_72(int iParam0, int iParam1) // Position - 0x888B
{
	int num;

	switch (iParam1)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 2;
			break;
	}

	if (iParam0 < 0 || iParam0 >= func_73(&G_MissionStats.f_32752.f_5038[num]))
		return false;

	return func_48(G_MissionStats.f_32752.f_5038[num][iParam0].f_66, false, -1);
}

int func_73(var uParam0) // Position - 0x88FE
{
	return *uParam0;
}

BOOL func_74(var uParam0, int iParam1) // Position - 0x8909
{
	BOOL num;
	int num2;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };

	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_75(CHAR_MICHAEL, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_75(CHAR_MICHAEL, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_75(CHAR_FRANKLIN, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_75(CHAR_FRANKLIN, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_75(CHAR_FRANKLIN, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_75(CHAR_FRANKLIN, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_75(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_75(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_75(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			num = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			num = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.0043f, -3142.3484f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.6487f, -3380.6853f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.9036f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.6093f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.0676f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.8293f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.9572f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 26:
		case 27:
		case 28:
			num2 = iParam1 - 26;
			uParam0->f_14 = 12 + num2;
			*uParam0 = { 196.2794f, -1020.4791f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 29:
		case 30:
		case 31:
			num2 = iParam1 - 29;
			uParam0->f_14 = 15 + num2;
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 32:
		case 33:
		case 34:
			num2 = iParam1 - 32;
			uParam0->f_14 = 18 + num2;
			*uParam0 = { 203.6006f, -1019.7762f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 38:
			*uParam0 = { 1744.3083f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			num = 1;
			break;
	
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			num = 1;
			break;
	
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			num = 1;
			break;
	
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			num = 1;
			break;
	
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			num = 1;
			break;
	
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			num = 1;
			break;
	
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
		
			if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
				uParam0->f_4 = joaat("blimp2");
			else
				uParam0->f_4 = joaat("blimp");
		
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
		
			if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
				uParam0->f_4 = joaat("blimp2");
			else
				uParam0->f_4 = joaat("blimp");
		
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			num = 1;
			break;
	
		case 64:
			*uParam0 = { 1257.7295f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	}

	if (IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = G_MissionStats.f_32752.f_69[uParam0->f_14].f_66;
	
		if (iParam1 == 14)
		{
			if (uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra") || uParam0->f_4 == joaat("luxor") || uParam0->f_4 == joaat("shamal") || uParam0->f_4 == joaat("titan") || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
	
		if (!func_8(G_MissionStats.f_32752.f_1864[uParam0->f_14], 0f, 0f, 0f, false))
			*uParam0 = { G_MissionStats.f_32752.f_1864[uParam0->f_14] };
	
		if (G_MissionStats.f_32752.f_1934[uParam0->f_14] != -1f)
			uParam0->f_3 = G_MissionStats.f_32752.f_1934[uParam0->f_14];
	}

	if (IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_8(G_MissionStats.f_2366.f_539.f_3588[1][uParam0->f_12], 0f, 0f, 0f, false))
		{
			*uParam0 = { G_MissionStats.f_2366.f_539.f_3588[1][uParam0->f_12] };
			uParam0->f_3 = G_MissionStats.f_2366.f_539.f_3609[1][uParam0->f_12];
		}
	}
	else if (IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_8(G_MissionStats.f_2366.f_539.f_3588[0][uParam0->f_12], 0f, 0f, 0f, false))
		{
			*uParam0 = { G_MissionStats.f_2366.f_539.f_3588[0][uParam0->f_12] };
			uParam0->f_3 = G_MissionStats.f_2366.f_539.f_3609[0][uParam0->f_12];
		}
	}

	return num;
}

Hash func_75(eCharacter echParam0, int iParam1) // Position - 0x9FF7
{
	int num;

	if (func_23(echParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_76(echParam0, &num, iParam1);
		return num;
	}
	else
	{
		echParam0 != _CHAR_NULL;
	}

	return 0;
}

void func_76(eCharacter echParam0, var uParam1, int iParam2) // Position - 0xA039
{
	int num;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = joaat("tailgater");
		
			if (G_MissionStats.f_9088.f_99.f_58[128] && !G_MissionStats.f_9088.f_99.f_58[131])
				num = joaat("premier");
		
			switch (num)
			{
				case joaat("tailgater"):
					*uParam1 = num;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case joaat("premier"):
					*uParam1 = num;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
	
		case CHAR_TREVOR:
			num = joaat("bodhi2");
		
			switch (num)
			{
				case joaat("bodhi2"):
					*uParam1 = num;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (G_MissionStats.f_9088.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam2 == 1)
				num = joaat("buffalo2");
			else if (iParam2 == 2)
				num = joaat("bagger");
			else if (G_MissionStats.f_9088.f_99.f_58[118])
				num = joaat("bagger");
			else
				num = joaat("buffalo2");
		
			switch (num)
			{
				case joaat("bagger"):
					*uParam1 = num;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case joaat("buffalo2"):
					*uParam1 = num;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
	
		default:
			break;
	}

	return;
}

int func_77(Vehicle veParam0) // Position - 0xA295
{
	int i;
	var colorPrimary;
	var colorSecondary;
	var colorPrimary2;
	var colorSecondary2;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[i]) && !ENTITY::IS_ENTITY_DEAD(Global_77479.f_484[i], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[i], false))
		{
			VEHICLE::GET_VEHICLE_COLOURS(veParam0, &colorPrimary, &colorSecondary);
			VEHICLE::GET_VEHICLE_COLOURS(Global_77479.f_484[i], &colorPrimary2, &colorSecondary2);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[i]) && VEHICLE::GET_VEHICLE_LIVERY(veParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_77479.f_484[i]) && colorPrimary == colorSecondary && colorPrimary2 == colorSecondary2)
				return i;
		}
	}

	return -1;
}

BOOL func_78(Vehicle veParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xA358
{
	Hash entityModel;
	var sizeAndVehs;
	int unk;
	int unk2;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	sizeAndVehs = 3;

	switch (entityModel)
	{
		case joaat("cargobob"):
			if (func_80(veParam0, Global_77479.f_139[38], false))
			{
				func_70(38);
				return true;
			}
			break;
	
		case joaat("firetruk"):
			if (func_80(veParam0, Global_77479.f_139[43], true))
			{
				func_70(43);
				return true;
			}
			break;
	
		case joaat("cuban800"):
			pedNearbyVehicles = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &sizeAndVehs);
		
			for (i = 0; i <= pedNearbyVehicles - 1; i = i + 1)
			{
				if (func_80(veParam0, sizeAndVehs[i], true) && func_79(ENTITY::GET_ENTITY_COORDS(sizeAndVehs[i], true), 2136.133f, 4780.5635f, 39.9702f, 5f, false))
				{
					if (!bParam4 || func_8(uParam1, 0f, 0f, 0f, false) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(veParam0, true), ENTITY::GET_ENTITY_COORDS(sizeAndVehs[i], true), true) < 10f)
					{
						VEHICLE::DELETE_VEHICLE(&veParam0);
						return true;
					}
					else
					{
						return false;
					}
				}
			}
			break;
	
		case joaat("luxor2"):
			if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[14], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[14]) == joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(veParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_77479.f_484[14]))
				{
					func_70(14);
					return true;
				}
			}
			break;
	
		case joaat("swift2"):
			if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[20], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[20]) == joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(veParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_77479.f_484[20]))
				{
					func_70(20);
					return true;
				}
			}
			break;
	}

	return false;
}

BOOL func_79(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, int iParam6, BOOL bParam7) // Position - 0xA560
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (!bParam7)
		if (MISC::ABSF(fParam0 - fParam3) <= iParam6)
			if (MISC::ABSF(fParam0.f_1 - fParam3.f_1) <= iParam6)
				if (MISC::ABSF(fParam0.f_2 - fParam3.f_2) <= iParam6)
					return true;
	else if (MISC::ABSF(fParam0 - fParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - fParam3.f_1) <= iParam6)
			return true;

	return false;
}

BOOL func_80(Vehicle veParam0, Vehicle veParam1, BOOL bParam2) // Position - 0xA5DB
{
	var colorPrimary;
	var colorSecondary;
	var colorPrimary2;
	var colorSecondary2;

	if (ENTITY::DOES_ENTITY_EXIST(veParam1) && !ENTITY::IS_ENTITY_DEAD(veParam1, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
	{
		if (bParam2)
		{
			VEHICLE::GET_VEHICLE_COLOURS(veParam0, &colorPrimary, &colorSecondary);
			VEHICLE::GET_VEHICLE_COLOURS(veParam1, &colorPrimary2, &colorSecondary2);
		
			if (colorPrimary == colorPrimary2 && colorSecondary == colorSecondary2)
				return true;
		}
		else
		{
			return true;
		}
	}

	return false;
}

void func_81(Vehicle veParam0, eCharacter echParam1) // Position - 0xA63C
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_98144[i]))
		{
			Global_98144[i] = veParam0;
			Global_98154[i] = echParam1;
			Global_98164[i] = ENTITY::GET_ENTITY_MODEL(veParam0);
		
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_98164[i]))
				Global_98192[echParam1][0] = -1;
			else
				Global_98192[echParam1][1] = -1;
		
			i = 9;
		}
	
		i == 8;
	}

	return;
}

void func_82(eCharacter echParam0, int iParam1) // Position - 0xA6BE
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98144[i]))
		{
			if (echParam0 == 145 || Global_98154[i] == echParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_98144[i]) == func_75(echParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_98144[i], false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98144[i], false, true);
						VEHICLE::DELETE_VEHICLE(&Global_98144[i]);
						Global_98154[i] = _CHAR_NULL;
					}
				}
			}
		}
	}

	return;
}

void func_83(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA75C
{
	int num;
	int num2;
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		uParam1->f_66 != 0;
	
		if (!func_103(veParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(veParam0, &(uParam1->f_1));
		
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0, *uParam1);
		}
	
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			num = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_42(num + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_42(num + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			num2 = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_42(num2 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_42(num2 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			for (i = 1; i <= 9; i = i + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_42(i)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_42(i));
				}
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			for (j = 1; j <= 6; j = j + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_42(j)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_42(j));
				}
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			for (k = 1; k <= 11; k = k + 1)
			{
				if (k != 9 && k != 10)
				{
					if (IS_BIT_SET(uParam1->f_77, func_42(k)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_42(k));
					}
				}
			}
		}
		else if (uParam1->f_66 == -1035489563)
		{
			for (l = 1; l <= 2; l = l + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_42(l)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_42(l));
				}
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (IS_BIT_SET(uParam1->f_77, func_42(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_42(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) != 0)
				MISC::SET_BIT(&(uParam1->f_77), 0);
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_42(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			for (m = 1; m <= 2; m = m + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_42(m)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_42(m));
				}
			}
		}
	
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, false);
		
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) != -1)
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, true);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 13))
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0);
	
		if (IS_BIT_SET(uParam1->f_77, 12))
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0);
	
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_101(uParam1->f_5) || func_101(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(veParam0, uParam1->f_5, uParam1->f_6);
			}
		}
	
		if (uParam1->f_7 < 0)
			uParam1->f_7 = 0;
	
		if (uParam1->f_8 < 0)
			uParam1->f_8 = 0;
	
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veParam0, uParam1->f_7, uParam1->f_8);
	
		if (IS_BIT_SET(uParam1->f_77, 15) || func_100(veParam0) || uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0 && uParam1->f_9[20] > 0 && func_99())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if (uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
	
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
	
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, uParam1->f_65);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, false);
			VEHICLE::SET_DRIFT_TYRES(veParam0, false);
		}
	
		if (bParam2)
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(veParam0, uParam1->f_70);
	
		VEHICLE::SET_VEHICLE_NEON_COLOUR(veParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 2, IS_BIT_SET(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 3, IS_BIT_SET(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 0, IS_BIT_SET(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 1, IS_BIT_SET(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(veParam0, IS_BIT_SET(uParam1->f_77, 10));
	
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(veParam0) > 1 && uParam1->f_67 >= 0)
			VEHICLE::SET_VEHICLE_LIVERY(veParam0, uParam1->f_67);
	
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(veParam0)))
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(veParam0)))
					if (uParam1->f_69 == 6)
						func_98(veParam0, uParam1->f_69);
				else
					func_98(veParam0, uParam1->f_69);
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			if (uParam1->f_68 == 0 || uParam1->f_68 == 3 || uParam1->f_68 == 5)
				VEHICLE::RAISE_CONVERTIBLE_ROOF(veParam0, true);
			else
				VEHICLE::LOWER_CONVERTIBLE_ROOF(veParam0, true);
	
		if (bParam3)
			func_90(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			for (n = 0; n <= 11; n = n + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_42(n + 1)))
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1))
						VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, false);
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1))
					VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, true);
			}
		}
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("omnis") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("le7b"))
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 0) == -1)
				VEHICLE::SET_VEHICLE_EXTRA(veParam0, 1, false);
	
		if (func_84() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(veParam0) && !VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("avenger")) && !VEHICLE::IS_VEHICLE_MODEL(veParam0, func_52(true)))
			if (!IS_BIT_SET(uParam1->f_77, 23))
				if (IS_BIT_SET(uParam1->f_77, 22))
					VEHICLE::CONTROL_LANDING_GEAR(veParam0, 2);
				else
					VEHICLE::CONTROL_LANDING_GEAR(veParam0, 3);
			else
				VEHICLE::CONTROL_LANDING_GEAR(veParam0, 4);
	
		if (IS_BIT_SET(uParam1->f_77, 27))
			DECORATOR::DECOR_SET_BOOL(veParam0, "IgnoredByQuickSave", true);
		else
			DECORATOR::DECOR_SET_BOOL(veParam0, "IgnoredByQuickSave", false);
	}

	return;
}

BOOL func_84() // Position - 0xAE52
{
	if (*Global_4718592.f_108230 == 6 || *Global_4718592.f_108230 == 7 || *Global_4718592.f_108230 == 18 || *Global_4718592.f_108230 == 19 && Global_4718592.f_2 == 20)
		return false;

	if (func_88(7))
		if (func_86(Global_2672524.f_4.f_16) || func_85(Global_2672524.f_4.f_16))
			return false;

	return true;
}

BOOL func_85(int iParam0) // Position - 0xAEE1
{
	int num;

	num = iParam0;

	if (num != -1)
		return Global_1890739[num].f_77.f_60 != 0;

	return false;
}

BOOL func_86(Player plParam0) // Position - 0xAF05
{
	Player player;

	player = plParam0;

	if (player != -1)
		return func_87(plParam0, 9);

	return false;
}

BOOL func_87(Player plParam0, int iParam1) // Position - 0xAF23
{
	return IS_BIT_SET(Global_1895156[plParam0].f_10.f_4, iParam1);
}

BOOL func_88(int iParam0) // Position - 0xAF3B
{
	return func_89(&(Global_2672524.f_184), iParam0);
}

BOOL func_89(var uParam0, int iParam1) // Position - 0xAF4F
{
	int num;
	int num2;
	int num3;

	num = iParam1;
	num2 = num / 32;
	num3 = num % 32;
	return IS_BIT_SET(uParam0->[num2], num3);
}

int func_90(var uParam0, var uParam1, var uParam2) // Position - 0xAF72
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, uParam1->[i] > 0);
		}
		else if (modType == 22)
		{
			if (uParam1->[i] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, true);
			
				if (uParam1->[i] == 1)
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, 255);
				else
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, uParam1->[i] - 2);
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*uParam0, modType) != uParam1->[i] - 1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, modType);
		
			if (uParam1->[i] > 0)
			{
				if (modType == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[0] > 0);
				}
				else if (modType == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[1] > 0);
				}
				else if (func_96(*uParam0, modType, uParam1->[i] - 1))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, false);
				}
			}
		}
	}

	if (func_95(ENTITY::GET_ENTITY_MODEL(*uParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) != func_93(*uParam0, uParam1->[38] - 1))
		VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_93(*uParam0, uParam1->[38] - 1), false);

	func_92(uParam0);

	if (func_91(*uParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*uParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
	}

	return 1;
}

BOOL func_91(Vehicle veParam0) // Position - 0xB14C
{
	int i;
	int modType;
	Hash hashKey;
	var unk;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
	
		for (i = 0; i < 49; i = i + 1)
		{
			modType = i;
		
			if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21 || modType == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(veParam0, modType) != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, VEHICLE::GET_MOD_TEXT_LABEL(veParam0, modType, VEHICLE::GET_VEHICLE_MOD(veParam0, modType)), 32);
				hashKey = MISC::GET_HASH_KEY(&unk);
			
				if (hashKey != 0)
					if (hashKey == MISC::GET_HASH_KEY("MNU_CAGE" /*Roll Cage and Chassis Upgrade*/) || hashKey == MISC::GET_HASH_KEY("SABRE_CAG" /*Stunt Cage*/))
						return true;
			}
		}
	}

	return false;
}

void func_92(var uParam0) // Position - 0xB228
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("starling"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			else
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			break;
	
		case joaat("slamtruck"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
	
		default:
			break;
	}

	return;
}

int func_93(Vehicle veParam0, int iParam1) // Position - 0xB27F
{
	int value;
	int value2;
	float num;
	int num2;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(veParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
				
					case 1:
						return 1;
				
					case 2:
						return 2;
				
					case 3:
						return 3;
				
					case 4:
						return 4;
				
					case 5:
						return 4;
				}
				break;
		
			case joaat("faction3"):
				return 3;
		}
	
		value = func_94(veParam0, 38) + 1;
		value2 = func_94(veParam0, 24) + 1;
		num = SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(value);
		num2 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value2) * num) - 1;
	
		if (num2 < 0)
			num2 = 0;
	
		if (num2 >= value)
			num2 = value - 1;
	
		return num2;
	}

	return 0;
}

int func_94(Vehicle veParam0, int iParam1) // Position - 0xB368
{
	int i;

	if (STREAMING::IS_MODEL_VALID(Global_152698) && VEHICLE::IS_VEHICLE_MODEL(veParam0, Global_152698) && Global_152699 == iParam1)
		return Global_152700;

	for (i = VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) - 1; i >= 0 && func_96(veParam0, iParam1, i); i = i - 1)
	{
	}

	return i;
}

BOOL func_95(Hash hParam0, int iParam1) // Position - 0xB3CA
{
	switch (hParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return true;
	
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("sabregt2"):
			if (!Global_262145.f_14909)
				return false;
			else
				return true;
			break;
	
		case joaat("tornado5"):
			if (!Global_262145.f_14910)
				return false;
			else
				return true;
			break;
	
		case joaat("virgo2"):
			if (!Global_262145.f_14908)
				return false;
			else
				return true;
			break;
	
		case joaat("minivan2"):
			if (!Global_262145.f_14911)
				return false;
			else
				return true;
			break;
	
		case joaat("slamvan3"):
			if (!Global_262145.f_14913)
				return false;
			else
				return true;
			break;
	
		case joaat("faction3"):
			if (!Global_262145.f_14912)
				return false;
			else
				return true;
			break;
	
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("comet3"):
			if (Global_262145.f_19321)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("diablous2"):
			if (Global_262145.f_19323)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("fcr2"):
			if (Global_262145.f_19327)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("elegy"):
			if (Global_262145.f_19324)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("nero2"):
			if (Global_262145.f_19331)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("italigtb2"):
			if (Global_262145.f_19329)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("specter2"):
			if (Global_262145.f_19334)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("technical3"):
			if (Global_262145.f_21280)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("insurgent3"):
			if (Global_262145.f_21281)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return true;
	}

	return false;
}

BOOL func_96(Vehicle veParam0, int iParam1, int iParam2) // Position - 0xB7A9
{
	if (!func_97() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(veParam0, iParam1, iParam2))
		return true;

	return false;
}

BOOL func_97() // Position - 0xB7CD
{
	return false;
}

void func_98(Vehicle veParam0, int iParam1) // Position - 0xB7D6
{
	int vehicleMod;
	int vehicleModVariation;

	if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
		vehicleMod = VEHICLE::GET_VEHICLE_MOD(veParam0, 24);
		vehicleModVariation = VEHICLE::GET_VEHICLE_MOD_VARIATION(veParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(veParam0, iParam1);
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("peyote2"))
			return;
	
		if (vehicleMod == -1)
			VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 24);
		else
			VEHICLE::SET_VEHICLE_MOD(veParam0, 24, vehicleMod, vehicleModVariation == 1);
	}

	return;
}

BOOL func_99() // Position - 0xB84E
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

BOOL func_100(Vehicle veParam0) // Position - 0xB85F
{
	int _int;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
			{
				if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
					_int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
			
				return IS_BIT_SET(_int, 4);
			}
		}
	}

	return false;
}

int func_101(var uParam0) // Position - 0xB8A7
{
	if (!func_97() && func_102(uParam0))
		return 1;

	return 0;
}

BOOL func_102(int iParam0) // Position - 0xB8C7
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return true;
	}

	return false;
}

BOOL func_103(Vehicle veParam0) // Position - 0xB91A
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (!_IS_PLAYER_IN_VEHICLE_SEAT(PLAYER::PLAYER_ID(), -1))
			veParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(veParam0, false))
		return false;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	if (func_105(PLAYER::PLAYER_ID()) == 3)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (func_104(veParam0) != -1)
				return true;

	return false;
}

int func_104(Vehicle veParam0) // Position - 0xB9A1
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", INT))
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "FMDeliverableID"))
			return DECORATOR::DECOR_GET_INT(veParam0, "FMDeliverableID");

	return -1;
}

int func_105(Player plParam0) // Position - 0xB9D0
{
	if (func_109(plParam0) == 233)
		return func_106(plParam0);

	return -1;
}

int func_106(Player plParam0) // Position - 0xB9ED
{
	if (func_107(plParam0, false))
		return Global_1895156[plParam0].f_10.f_182;

	return -1;
}

BOOL func_107(Player plParam0, BOOL bParam1) // Position - 0xBA10
{
	if (func_108(plParam0))
		if (Global_1895156[plParam0].f_10.f_33 != -1 || bParam1 && Global_1895156[plParam0].f_10.f_32 != -1)
			return true;

	return false;
}

BOOL func_108(Player plParam0) // Position - 0xBA54
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

int func_109(Player plParam0) // Position - 0xBA76
{
	if (func_108(plParam0))
		if (func_107(plParam0, false))
			return Global_1895156[plParam0].f_10.f_33;

	return -1;
}

BOOL _IS_PLAYER_IN_VEHICLE_SEAT(Player plParam0, int iParam1) // Position - 0xBAA2
{
	Vehicle vehiclePedIsIn;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(plParam0), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(plParam0), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, iParam1, false))
					return true;
		}
	}

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0xBAEF
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

void func_112(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0xBB4F
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		if (func_74(&Global_77479.f_555[0], i))
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_77479.f_555[0], bParam4) <= fParam3)
				func_70(i);
	}

	return;
}

BOOL func_113(var uParam0) // Position - 0xBB9F
{
	if (func_114(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_66))
			return 1;
		else
			return 0;
	
		return 1;
	}
	else
	{
		return 0;
	}

	return 1;
}

BOOL func_114(var uParam0) // Position - 0xBBD4
{
	if (uParam0->f_12.f_66 == 0)
		return 0;

	if (!func_48(uParam0->f_12.f_66, false, -1))
		return 0;

	if (uParam0->f_12.f_66 == joaat("stunt") && func_79(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, false))
		return 0;

	return 1;
}

void func_115() // Position - 0xBC34
{
	if (iLocal_199 == 0)
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Marine_01")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Pilot_02")))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
				uLocal_31[0] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_Marine_01"), -1590.5227f, 2796.3022f, 15.9184f, 247.0896f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_31[1]))
				uLocal_31[1] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_Marine_01"), -2303.7996f, 3387.99f, 30.034f, 58.5763f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_31[2]))
				uLocal_31[2] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_Marine_01"), -1697.329f, 2909.9414f, 31.9506f, 245.656f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_31[3]))
				uLocal_31[3] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_Marine_01"), -1696.3693f, 2905.7722f, 31.9454f, 6.3714f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_31[4]))
				uLocal_31[4] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_Marine_01"), -1843.7073f, 2821.6106f, 31.8528f, 271.6265f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_31[5]))
				uLocal_31[5] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_Marine_01"), -2006.8772f, 2955.1013f, 31.8103f, 332.0101f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_31[6]))
				uLocal_31[6] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_Marine_01"), -2010.022f, 2956.8052f, 31.8103f, 288.1283f, true, true);
		
			if (iLocal_26 != 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_31[7]))
					uLocal_31[7] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_Marine_01"), -2140.2131f, 3034.6091f, 31.81f, 302.4493f, true, true);
			
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_31[8]))
					uLocal_31[8] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_Marine_01"), -2136.053f, 3031.4944f, 31.81f, 38.6856f, true, true);
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_31[9]))
				uLocal_31[9] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_Marine_01"), -2035.4293f, 3058.8765f, 31.8103f, 169.8222f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_31[10]))
				uLocal_31[10] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_Marine_01"), -2146.4666f, 3160.749f, 31.8106f, 356.4766f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_31[11]))
				uLocal_31[11] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_Marine_01"), -2280.087f, 3172.4233f, 31.8103f, 353.663f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_31[12]))
				uLocal_31[12] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_Marine_01"), -2277.3762f, 3177.8f, 31.8103f, 175.0685f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
			{
				uLocal_29[0] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_M_Pilot_02"), -1859.8307f, 3071.7576f, 31.8104f, 139.3607f, true, true);
				PED::SET_PED_PROP_INDEX(uLocal_29[0], 0, 2, 0, false, 1);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_29[0], PV_COMP_ACCS, 0, 0, 0);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_29[0], true, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_29[0], joaat("WEAPON_ASSAULTRIFLE"), 2000, true, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_29[0], hLocal_58);
				PED::SET_PED_ACCURACY(uLocal_29[0], 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_29[0], true);
				func_117(uLocal_29[0], 595);
				func_116(uLocal_29[0], false);
			}
		
			for (iLocal_174 = 0; iLocal_174 <= 12; iLocal_174 = iLocal_174 + 1)
			{
				if (uLocal_273[iLocal_174] == 0)
				{
					if (!PED::IS_PED_INJURED(uLocal_31[iLocal_174]))
					{
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_31[iLocal_174], true, 1);
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_31[iLocal_174], joaat("WEAPON_ASSAULTRIFLE"), 2000, true, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_31[iLocal_174], hLocal_58);
						PED::SET_PED_ACCURACY(uLocal_31[iLocal_174], 10);
						func_117(uLocal_31[iLocal_174], 595);
						func_116(uLocal_31[iLocal_174], false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_31[iLocal_174], true);
						uLocal_273[iLocal_174] = 1;
					}
				}
			}
		
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Marine_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Pilot_02"));
			iLocal_199 = 1;
		}
	}

	return;
}

void func_116(int iParam0, BOOL bParam1) // Position - 0xC04D
{
	int i;
	int num;
	int j;

	i = 0;

	if (bParam1)
	{
		for (i = 0; i < 64; i = i + 1)
		{
			if (Global_63515[i] != 0)
				if (Global_63515[i] == iParam0)
					return;
		}
	}

	if (64 == Global_63514)
		return;

	num = -1;

	for (j = 0; num == -1 && j != 64; j = j + 1)
	{
		if (Global_63515[j] == 0)
			num = j;
	}

	if (num == -1)
		return;

	Global_63515[num] = iParam0;
	Global_63515[num].f_1 = 7;
	Global_63514 = Global_63514 + 1;
	return;
}

void func_117(int iParam0, int iParam1) // Position - 0xC0E8
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_75733[i] == 0)
		{
			Global_75733[i] = iParam0;
			Global_75733[i].f_1 = iParam1;
		
			if (i == Global_75766)
				Global_75766 = Global_75766 + 1;
		
			return;
		}
	}

	return;
}

void func_118(Vehicle veParam0, int iParam1) // Position - 0xC13E
{
	Global_100833.f_22[iParam1] = veParam0;
	return;
}

BOOL func_119() // Position - 0xC152
{
	return func_113(&(Global_107357.f_2890));
}

void func_120() // Position - 0xC165
{
	func_121(&(Global_107357.f_2890));
	return;
}

void func_121(var uParam0) // Position - 0xC178
{
	if (func_114(uParam0))
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_66);

	return;
}

Hash func_122() // Position - 0xC196
{
	return Global_107357.f_2890.f_12.f_66;
}

BOOL func_123() // Position - 0xC1A9
{
	return func_114(&(Global_107357.f_2890));
}

void func_124(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15) // Position - 0xC1BC
{
	func_125(fParam0, fParam3, fParam6, fParam7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
	return;
}

void func_125(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, Vector3 vParam7, var uParam8, var uParam9, float fParam10, float fParam11, float fParam12, float fParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18) // Position - 0xC1E5
{
	Vehicle playersLastVehicle;
	BOOL flag;
	BOOL flag2;
	int num;
	var out1;
	float unk;
	var unk2;
	Hash out2;
	Ped unk3;
	int unk4;

	if (bParam15)
		bParam15 = false;

	flag2 = true;
	num = 0;
	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, false);
			num = 1;
		}
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
		{
			if (bParam18)
				func_130(playersLastVehicle);
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(playersLastVehicle, vParam0, vParam3, fParam6, false, true, 0))
			{
				flag = true;
			}
			else
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true) };
			
				if (entityCoords.f_2 > vParam0.f_2 && entityCoords.f_2 < vParam3.f_2 || entityCoords.f_2 > vParam3.f_2 && entityCoords.f_2 < vParam0.f_2)
					if (func_127(playersLastVehicle, vParam0, vParam3, fParam6))
						flag = true;
			}
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(playersLastVehicle, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, -1, false) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, -1, false) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS((vParam0 + vParam3) / { 2f, 2f, 2f }, ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true), true) < 20f)
						{
							flag = true;
							flag2 = false;
						}
					}
				}
			}
		
			if (bParam16)
				if (func_65(playersLastVehicle, _GET_CURRENT_PLAYER_CHARACTER(), true))
					flag = false;
		
			if (flag)
			{
				if (!_IS_NULL_VECTOR(fParam11))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
					{
						entityModel = ENTITY::GET_ENTITY_MODEL(playersLastVehicle);
						VEHICLE::GET_VEHICLE_SIZE(playersLastVehicle, &out1, &out2);
					
						if (VEHICLE::IS_THIS_MODEL_A_HELI(entityModel))
						{
							fParam11 = fParam11 + 3f;
							fParam11.f_1 = fParam11.f_1 + 3f;
						}
					
						if (entityModel == joaat("zentorno") || entityModel == joaat("btype") || entityModel == joaat("dubsta3") || entityModel == joaat("monster"))
							fParam11 = { fParam11 * { 1.1f, 1.1f, 1.1f } };
						else if (entityModel == joaat("t20") || entityModel == joaat("virgo"))
							fParam11 = { fParam11 * { 1.2f, 1.2f, 1.2f } };
					
						if (out2 - out1 > fParam11)
							flag2 = false;
						else if (out2.f_1 - out1.f_1 > fParam11.f_1)
							flag2 = false;
						else if (out2.f_2 - out1.f_2 > fParam11.f_2)
							flag2 = false;
					}
				}
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
				{
					if (flag2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(vParam7, 5f, false, false, false, false, false, false, 0);
						ENTITY::SET_ENTITY_HEADING(playersLastVehicle, fParam10);
						ENTITY::SET_ENTITY_COORDS(playersLastVehicle, vParam7, true, false, false, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
					
						if (bParam17)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(playersLastVehicle, false, true, false);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(playersLastVehicle, true);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(playersLastVehicle, true))
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, true);
					
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), playersLastVehicle, false))
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true), true, false, false, true);
					
						VEHICLE::DELETE_VEHICLE(&playersLastVehicle);
					}
				}
			}
		
			if (bParam14)
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(vParam0, vParam3, fParam6, false, false, false, false, false, 0, 0);
		
			if (num == 1)
				if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle))
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&playersLastVehicle);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, false);
		
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, -1, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
				ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
		
			vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(playersLastVehicle));
		
			if (vehicleModelNumberOfSeats <= 2)
			{
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, 0, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
					ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
			}
		
			if (vehicleModelNumberOfSeats <= 4)
			{
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, 1, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
					ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
			
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, 2, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
					ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
			}
		
			VEHICLE::DELETE_VEHICLE(&playersLastVehicle);
		}
	}

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xC5DB
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_127(Vehicle veParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7) // Position - 0xC605
{
	float num;
	var unk;
	var unk2;
	var unk3;
	var unk4;
	var unk5;
	var unk6;
	float unk7;
	float unk8;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		uParam1.f_2 = uParam4.f_2;
		num = { func_129(uParam1 - uParam4) };
		unk3 = { num };
		unk18 = 4;
		num = -unk3.f_1;
		num.f_1 = unk3;
		num.f_2 = 0f;
		unk6 = { uParam1 - (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk9 = { uParam1 + (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk12 = { uParam4 - (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk15 = { uParam4 + (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veParam0), &minimum, &maximum);
		unk18[0] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, minimum, minimum.f_1, 0f) };
		unk18[1] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, minimum, maximum.f_1, 0f) };
		unk18[2] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, maximum, minimum.f_1, 0f) };
		unk18[3] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, maximum, maximum.f_1, 0f) };
	
		if (func_128(unk18[0], unk18[1], unk6, unk9) || func_128(unk18[0], unk18[1], unk9, unk15) || func_128(unk18[0], unk18[1], unk12, unk15) || func_128(unk18[0], unk18[1], unk6, unk12) || func_128(unk18[1], unk18[3], unk6, unk9) || func_128(unk18[1], unk18[3], unk9, unk15) || func_128(unk18[1], unk18[3], unk12, unk15) || func_128(unk18[1], unk18[3], unk6, unk12) || func_128(unk18[3], unk18[2], unk6, unk9) || func_128(unk18[3], unk18[2], unk9, unk15) || func_128(unk18[3], unk18[2], unk12, unk15) || func_128(unk18[3], unk18[2], unk6, unk12) || func_128(unk18[2], unk18[0], unk6, unk9) || func_128(unk18[2], unk18[0], unk9, unk15) || func_128(unk18[2], unk18[0], unk12, unk15) || func_128(unk18[2], unk18[0], unk6, unk12))
			return true;
	}

	return false;
}

BOOL func_128(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, var uParam10, var uParam11) // Position - 0xC8FB
{
	float num;
	float num2;
	float num3;
	float num4;
	var unk;
	var unk2;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;
	float num11;
	float num12;

	num = fParam0;
	num2 = fParam0.f_1;
	num3 = fParam3;
	num4 = fParam3.f_1;
	unk = uParam6;
	unk2 = uParam6.f_1;
	num5 = fParam9;
	num6 = fParam9.f_1;
	num7 = num3 - num;
	num8 = num4 - num2;
	num9 = num5 - unk;
	num10 = num6 - unk2;
	num11 = ((-num8 * (num - unk)) + (num7 * (num2 - unk2))) / ((-num9 * num8) + (num7 * num10));
	num12 = ((num9 * (num2 - unk2)) - (num10 * (num - unk))) / ((-num9 * num8) + (num7 * num10));

	if (num11 >= 0f && num11 <= 1f && num12 >= 0f && num12 <= 1f)
		return true;

	return false;
}

Vector3 func_129(float fParam0, var uParam1, var uParam2) // Position - 0xC9AF
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

void func_130(Vehicle veParam0) // Position - 0xC9EE
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(veParam0) <= 200f)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veParam0, 500f);
		
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(veParam0) <= 700f)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veParam0, 900f);
		
			if (ENTITY::GET_ENTITY_HEALTH(veParam0) < 200)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veParam0, 500f);
		}
	}

	return;
}

void func_131() // Position - 0xCA53
{
	if (!func_36())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1738.1306f, 3283.3796f, 40.1261f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 25.3545f);
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
		PED::DELETE_PED(&uLocal_29[0]);

	for (iLocal_174 = 0; iLocal_174 <= 12; iLocal_174 = iLocal_174 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[iLocal_174]))
			PED::DELETE_PED(&uLocal_31[iLocal_174]);
	}

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_323[0]))
			PED::DELETE_PED(&uLocal_323[0]);

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_323[2]))
			PED::DELETE_PED(&uLocal_323[2]);

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_47[0], 0);

	AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", true);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", false, false);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENTER_CHOPPER"))
		AUDIO::STOP_AUDIO_SCENE("DH_P_2B_ENTER_CHOPPER");

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
		AUDIO::STOP_AUDIO_SCENE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");

	if (ENTITY::DOES_ENTITY_EXIST(eLocal_45))
		VEHICLE::DELETE_VEHICLE(&eLocal_45);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_53))
		VEHICLE::DELETE_VEHICLE(&veLocal_53);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
		VEHICLE::DELETE_VEHICLE(&veLocal_46);

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
		VEHICLE::DELETE_VEHICLE(&uLocal_47[0]);

	if (ENTITY::DOES_ENTITY_EXIST(Global_97310[0]))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_97310[0], true))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[0], true, true);
	
		VEHICLE::DELETE_VEHICLE(&Global_97310[0]);
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_97310[1]))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_97310[1], true))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[1], true, true);
	
		VEHICLE::DELETE_VEHICLE(&Global_97310[1]);
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_97310[2]))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_97310[2], true))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[2], true, true);
	
		VEHICLE::DELETE_VEHICLE(&Global_97310[2]);
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
		VEHICLE::DELETE_VEHICLE(&uLocal_49[0]);

	if (ENTITY::DOES_ENTITY_EXIST(eLocal_56))
		OBJECT::DELETE_OBJECT(&eLocal_56);

	if (ENTITY::DOES_ENTITY_EXIST(eLocal_57))
		OBJECT::DELETE_OBJECT(&eLocal_57);

	if (CAM::DOES_CAM_EXIST(caLocal_54))
	{
		if (CAM::IS_CAM_ACTIVE(caLocal_54))
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	
		CAM::DESTROY_CAM(caLocal_54, false);
	}

	return;
}

void func_132() // Position - 0xCC9D
{
	if (HUD::DOES_BLIP_EXIST(blLocal_59))
		HUD::REMOVE_BLIP(&blLocal_59);

	if (HUD::DOES_BLIP_EXIST(blLocal_60))
		HUD::REMOVE_BLIP(&blLocal_60);

	if (HUD::DOES_BLIP_EXIST(blLocal_63))
		HUD::REMOVE_BLIP(&blLocal_63);

	for (iLocal_174 = 0; iLocal_174 <= 12; iLocal_174 = iLocal_174 + 1)
	{
		func_133(&uLocal_68[iLocal_174]);
	}

	HUD::CLEAR_GPS_MULTI_ROUTE();
	return;
}

void func_133(Blip* pblParam0) // Position - 0xCCF3
{
	BOOL flag;
	var unk;

	if (HUD::DOES_BLIP_EXIST(*pblParam0))
	{
		HUD::REMOVE_BLIP(pblParam0);
		flag = true;
	}

	if (HUD::DOES_BLIP_EXIST(pblParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(pblParam0->f_1));
		flag = true;
	}

	if (ENTITY::DOES_ENTITY_EXIST(pblParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pblParam0->f_7, false))
			if (HUD::DOES_PED_HAVE_AI_BLIP(pblParam0->f_7))
				HUD::SET_PED_HAS_AI_BLIP(pblParam0->f_7, false);
	
		flag = true;
	}

	if (flag)
		*pblParam0 = { unk };

	return;
}

void func_134() // Position - 0xCD65
{
	if (iLocal_26 == 5)
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_59))
			HUD::REMOVE_BLIP(&blLocal_59);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_60))
			HUD::REMOVE_BLIP(&blLocal_60);
	}

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, false))
			{
				if (HUD::DOES_BLIP_EXIST(blLocal_59))
					HUD::REMOVE_BLIP(&blLocal_59);
			
				if (iLocal_298 == 1)
					if (MISC::GET_GAME_TIMER() < iLocal_187 + 7500)
						HUD::CLEAR_PRINTS();
			
				if (iLocal_26 == 4)
				{
					if (!HUD::DOES_BLIP_EXIST(blLocal_60))
						blLocal_60 = func_141(uLocal_312, false);
				
					if (iLocal_197 == 0)
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								_SHOW_SUBTITLE_CLEAR_EXISTING("DP_GOD4", 7500, 1);
								iLocal_188 = MISC::GET_GAME_TIMER();
								iLocal_197 = 1;
							}
						}
					}
				}
			
				if (iLocal_26 == 3)
					if (!HUD::DOES_BLIP_EXIST(uLocal_61[0]))
						uLocal_61[0] = func_138(uLocal_29[0], true, false);
			}
			else if (iLocal_26 != 5)
			{
				if (!HUD::DOES_BLIP_EXIST(blLocal_59))
					blLocal_59 = func_135(veLocal_46, false, false);
			
				if (iLocal_26 == 3 || iLocal_26 == 4)
				{
					if (iLocal_298 == 0)
					{
						HUD::CLEAR_PRINTS();
						_SHOW_SUBTITLE_CLEAR_EXISTING("DP_GOD6", 7500, 1);
						iLocal_187 = MISC::GET_GAME_TIMER();
						iLocal_298 = 1;
					}
				}
			
				if (HUD::DOES_BLIP_EXIST(blLocal_60))
					HUD::REMOVE_BLIP(&blLocal_60);
			
				if (iLocal_26 == 3)
					if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
						HUD::REMOVE_BLIP(&uLocal_61[0]);
			
				if (iLocal_26 == 4)
					if (iLocal_197 == 1)
						if (MISC::GET_GAME_TIMER() < iLocal_188 + 7500)
							HUD::CLEAR_PRINTS();
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_59))
				HUD::REMOVE_BLIP(&blLocal_59);
		
			if (iLocal_195 == 1)
				iLocal_198 = 1;
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_59))
			HUD::REMOVE_BLIP(&blLocal_59);
	
		if (iLocal_195 == 1)
			iLocal_198 = 1;
	}

	return;
}

Blip func_135(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0xCF18
{
	return func_136(veParam0, !bParam1, bParam2);
}

Blip func_136(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0xCF2B
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

var func_137(BOOL bParam0, var uParam1, var uParam2) // Position - 0xCFCF
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

Blip func_138(Entity eParam0, BOOL bParam1, BOOL bParam2) // Position - 0xCFE6
{
	return func_136(eParam0, !bParam1, bParam2);
}

void _SHOW_SUBTITLE_CLEAR_EXISTING(char* sParam0, int iParam1, int iParam2) // Position - 0xCFF9
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
	return;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0xD012
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

Blip func_141(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0xD034
{
	Blip blip;

	blip = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(blip, bParam3);
	return blip;
}

void func_142() // Position - 0xD060
{
	if (iLocal_173 > 0)
	{
		func_134();
		func_248();
	}

	if (iLocal_173 == 0)
	{
		if (iLocal_194 == 1)
		{
			iLocal_195 = 0;
			func_34();
			iLocal_194 = 0;
		}
	
		iLocal_302 = 0;
		iLocal_303 = 0;
		iLocal_306 = 0;
		iLocal_307 = 0;
	
		if (HUD::DOES_BLIP_EXIST(blLocal_63))
			HUD::REMOVE_BLIP(&blLocal_63);
	
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
			ENTITY::FREEZE_ENTITY_POSITION(veLocal_46, false);
	
		PLAYER::SET_POLICE_RADAR_BLIPS(false);
	
		for (iLocal_174 = 0; iLocal_174 <= 12; iLocal_174 = iLocal_174 + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[iLocal_174]))
			{
				if (!PED::IS_PED_INJURED(uLocal_31[iLocal_174]))
				{
					PED::SET_PED_KEEP_TASK(uLocal_31[iLocal_174], true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_31[iLocal_174]);
				}
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_47[0]);
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_29[0]);
	
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENTER_CHOPPER"))
			AUDIO::START_AUDIO_SCENE("DH_P_2B_ENTER_CHOPPER");
	
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_36())
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		
			func_246(veLocal_46, -1, 1);
		}
	
		if (!CAM::IS_SCREEN_FADED_IN())
			CAM::DO_SCREEN_FADE_IN(800);
	
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
		iLocal_195 = 1;
		iLocal_173 = 1;
	}

	if (iLocal_173 == 1)
	{
		if (iLocal_306 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, false))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_309, true) > 800f)
						{
							func_164(2, "STAGE_FLY_CARGOBOB_TO_HANGER", 1, 0, 0, 1);
							iLocal_306 = 1;
						}
					}
				}
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, false))
				{
					if (ENTITY::IS_ENTITY_IN_AIR(veLocal_46))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_309, true) > 800f)
						{
							if (iLocal_302 == 0 && iLocal_197 == 1)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
									
										if (_CONVERSATION_ADD_LINE(&uLocal_401, "DP2BAUD", "DP2B_CHAT59", 7, 0, 0, 0))
											iLocal_302 = 1;
									}
								}
							}
						
							if (iLocal_302 == 1 && iLocal_307 == 0)
							{
								if (func_161(72) == 0)
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 3, 0, "Wade", 0, 1);
										
											if (func_146(&uLocal_401, 24, "DP2BAUD", "DP2B_WADEP3", 7, 1, 0, 0, false))
												iLocal_307 = 1;
										}
									}
								}
								else if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 3, 0, "Wade", 0, 1);
									
										if (func_146(&uLocal_401, 24, "DP2BAUD", "DP2B_WADEP4", 7, 1, 0, 0, false))
											iLocal_307 = 1;
									}
								}
							}
						}
						else if (func_145(71) == false)
						{
							if (iLocal_303 == 0)
							{
								if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										_DISPLAY_HELP_TEXT("DP_HELP4", -1);
										iLocal_303 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, false))
				{
					ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_312, 2f, 2f, 2f, true, true, 0);
				
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1721.0015f, 3264.2483f, 38.400642f, 1765.5089f, 3276.518f, 46.053852f, 48.25f, false, true, 0))
					{
						if (!ENTITY::IS_ENTITY_IN_AIR(veLocal_46) && VEHICLE::IS_VEHICLE_STOPPED(veLocal_46))
						{
							func_143(true, 600);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 5f, 4);
							iLocal_173 = 0;
							iLocal_26 = 5;
						}
					}
				}
			}
		}
	}

	return;
}

void func_143(BOOL bParam0, int iParam1) // Position - 0xD406
{
	int i;

	if (Global_63493)
	{
	}

	Global_63493 = false;

	if (bParam0)
		Global_63494 = 1;

	i = 0;

	if (iParam1 == -1)
	{
		for (i = 0; i < Global_75580; i = i + 1)
		{
			if (Global_63710[Global_75581[i]] == 4)
			{
				Global_75581[i].f_5 = 0;
				return;
			}
		}
	}
	else
	{
		for (i = 0; i < Global_75580; i = i + 1)
		{
			if (Global_75581[i] > 0)
			{
				if (Global_75581[i] == iParam1)
				{
					Global_75581[i].f_5 = 0;
					return;
				}
			}
		}
	}

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0xD4A0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_145(int iParam0) // Position - 0xD4B7
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return G_MissionStats.f_9088.f_99.f_58[iParam0];
}

BOOL func_146(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8) // Position - 0xD4E4
{
	func_160(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21893 = 0;
	Global_21852 = true;
	Global_21859 = 0;
	Global_21854 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_21850 = 0;
	Global_21897 = 0;
	Global_21899 = 0;

	if (iParam5 == 1)
		Global_21857 = 1;
	else
		Global_21857 = 0;

	Global_2883585 = 0;
	return func_147(sParam3, iParam4, bParam8);
}

BOOL func_147(char* sParam0, int iParam1, BOOL bParam2) // Position - 0xD543
{
	Global_21846 = 0;

	if (Global_21845 == 0 || Global_21847 == 2)
	{
		if (Global_21845 != 0)
		{
			if (iParam1 > Global_21847)
			{
				if (Global_21852 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20500.f_1 = 3;
					Global_21845 = 0;
					Global_21846 = 1;
					Global_21898 = 0;
					Global_21841 = 0;
					Global_21842 = 0;
					Global_21856 = 0;
					Global_21855 = false;
					Global_20499 = 0;
				}
				else
				{
					func_159();
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
	
		if (func_158(8, -1))
			return 0;
	
		Global_21921 = { Global_21915 };
		func_157();
		Global_21134 = { Global_21299 };
		Global_21851 = Global_21852;
		Global_21858 = Global_21859;
		Global_2883586 = Global_2883585;
		Global_21860 = { Global_21876 };
		Global_21853 = Global_21854;
		Global_22835 = Global_22836;
		Global_22843 = { Global_22849 };
		Global_22837 = Global_22838;
		Global_22839 = Global_22840;
		Global_22841 = Global_22842;
		Global_21464.f_370 = Global_22834;
		Global_21464.f_368 = Global_22832;
		Global_21464.f_369 = Global_22833;
		Global_21841 = Global_21842;
	
		if (Global_21851)
		{
			MISC::CLEAR_BIT(&Global_8370, 20);
			MISC::CLEAR_BIT(&Global_8371, 17);
			MISC::CLEAR_BIT(&Global_8372, 0);
		
			if (bParam2)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_9175[Global_20500][0].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_20500.f_1 > 3)
					return 0;
			}
		
			if (Global_20466 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_155())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_78689)
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
		
			if (func_154())
			{
				return 0;
			}
			else
			{
				switch (Global_20500.f_1)
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
			
				if (IS_BIT_SET(Global_8370, 9))
					return 0;
			}
		
			func_153();
			Global_21855 = bParam2;
		}
	
		Global_21847 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_152();
		func_148();
		return 1;
	}

	if (Global_21845 == 5)
		return 0;

	if (iParam1 < Global_21847 || iParam1 == Global_21847)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_159();
	}

	return 0;
}

void func_148() // Position - 0xD811
{
	if (!func_149())
		return;

	if (Global_21851)
	{
		TEXT_LABEL_COPY(&(Global_1978312.f_1), { Global_21464 }, 4);
		Global_1978312 = Global_7685;
		Global_1978312.f_6 = Global_21855;
	}

	return;
}

BOOL func_149() // Position - 0xD848
{
	if (!Global_262145.f_29085)
		return false;

	if (!Global_78689)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_150(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID()].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_150(Player plParam0) // Position - 0xD8AB
{
	return func_87(plParam0, 20);
}

Player _INVALID_PLAYER_INDEX() // Position - 0xD8BB
{
	return -1;
}

void func_152() // Position - 0xD8C4
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_20713[i], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21845 = 1;
	return;
}

void func_153() // Position - 0xD8F5
{
	Global_21898 = Global_21897;
	Global_21892 = Global_21893;
	Global_21939 = { Global_21927 };
	Global_21945 = { Global_21933 };
	Global_21900 = Global_21899;
	Global_21969 = { Global_21951 };
	Global_21975 = { Global_21957 };
	Global_21981 = { Global_21963 };
	Global_21987 = { Global_21993 };
	Global_7685 = Global_7686;
	Global_7687 = Global_7688;
	Global_21856 = Global_21857;
	Global_21858 = Global_21859;
	Global_21860 = { Global_21876 };
	Global_21849 = Global_21850;
	Global_22861 = 0;
	Global_21894 = 0;
	Global_21895 = 0;
	MISC::CLEAR_BIT(&Global_8371, 16);
	return;
}

BOOL func_154() // Position - 0xD98A
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
		return true;

	return false;
}

BOOL func_155() // Position - 0xD9B1
{
	int num;
	int weaponHash;

	if (Global_78689)
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xDA4A
{
	if (func_22(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == G_MissionStats.f_28053[0])
				Global_20500 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == G_MissionStats.f_28053[1])
				Global_20500 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == G_MissionStats.f_28053[2])
				Global_20500 = CHAR_TREVOR;
			else
				Global_20500 = CHAR_MICHAEL;
	}
	else
	{
		Global_20500 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20500 == _CHAR_NULL)
			Global_20500 = CHAR_MULTIPLAYER;
	
		if (Global_78689)
			Global_20500 = CHAR_MULTIPLAYER;
	
		if (Global_20500 > CHAR_MULTIPLAYER)
			Global_20500 = CHAR_MULTIPLAYER;
	}

	return;
}

void func_157() // Position - 0xDAEC
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_21134[i] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_21134[i].f_1), "", 24);
		Global_21134[i].f_7 = 0;
		Global_21134[i].f_8 = 0;
	}

	Global_21134.f_161 = -99;
	Global_21134.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_158(int iParam0, int iParam1) // Position - 0xDB43
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1654054.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1654054.f_1048, iParam0);
}

void func_159() // Position - 0xDB7B
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20500.f_1 == 9 || Global_20499 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
		Global_20500.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21845 = 6;
		return;
	}

	return;
}

void func_160(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0xDBD2
{
	Global_21299 = { *uParam0 };
	Global_7686 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_21915, sParam2, 24);
	Global_22834 = iParam5;

	if (iParam3 == 0)
	{
		Global_22832 = 1;
		Global_22830 = 0;
	}
	else
	{
		Global_22832 = 0;
		Global_22830 = 1;
	}

	if (iParam4 == 0)
	{
		Global_22833 = 1;
		Global_22831 = 0;
	}
	else
	{
		Global_22833 = 0;
		Global_22831 = 1;
	}

	return;
}

int func_161(int iParam0) // Position - 0xDC28
{
	if (iParam0 == 94 || iParam0 == -1)
		return 0;

	return G_MissionStats.f_9088.f_330[iParam0];
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xDC54
{
	func_160(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_21852 = 0;
	Global_21854 = 0;
	Global_21859 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_2883585 = 0;
	return func_147(sParam2, iParam3, false);
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0xDCA2
{
	uParam0->[iParam1].f_7 == 1;
	uParam0->[iParam1] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1].f_1), sParam3, 24);
	uParam0->[iParam1].f_7 = 1;
	uParam0->[iParam1].f_8 = iParam4;
	uParam0->[iParam1].f_9 = iParam5;

	if (!Global_78689)
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

void func_164(int iParam0, char* sParam1, int iParam2, int iParam3, Ped pedParam4, int iParam5) // Position - 0xDD3D
{
	int num;
	int num2;
	int num3;
	var unk;
	int unk2;
	var num4;
	int unk3;

	if (iParam3 == 1)
		!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME());

	num = 0;

	if (iParam3 == 1)
		if (iParam0 != Global_100870)
			num = 1;
	else if (iParam0 > Global_100870)
		num = 1;

	if (num == 1)
	{
		func_245(true);
		iParam0 <= Global_100870;
		num2 = func_243(SCRIPT::GET_THIS_SCRIPT_NAME(), true);
	
		if (num2 != -1 && num2 != 94)
		{
			G_MissionStats.f_9088.f_330[num2].f_1 = 0;
			num3 = func_241(num2);
			unk = { Global_91601[num2].f_8 };
		
			if (num2 == 90)
			{
				switch (G_MissionStats.f_9088.f_99.f_205[7])
				{
					case 1:
						TEXT_LABEL_APPEND_STRING(&unk, "A", 8);
						break;
				
					case 2:
						TEXT_LABEL_APPEND_STRING(&unk, "B", 8);
						break;
				}
			}
		
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&unk, num3, Global_100870, iParam0);
		}
		else
		{
			num4 = func_236(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		
			if (num4 != -1)
			{
				G_MissionStats.f_18577[num4].f_4 = 0;
				TEXT_LABEL_COPY(&unk3, { func_235(num4) }, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&unk3, 0, Global_100870, iParam0);
			}
			else
			{
				num5 = func_234(&(Global_100833.f_3));
			
				if (num5 > -1)
					G_MissionStats.f_24989.f_4[num5] = 0;
			}
		}
	
		Global_94991 = iParam2;
		Global_100870 = iParam0;
		func_165(iParam0, sParam1, pedParam4, iParam5);
		MISC::ARE_STRINGS_EQUAL(sParam1, "");
	}
	else if (iParam0 < Global_100870)
	{
	}

	return;
}

void func_165(int iParam0, char* sParam1, Ped pedParam2, int iParam3) // Position - 0xDEB2
{
	func_166(&Global_107357, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, sParam1, iParam3, pedParam2);
	return;
}

void func_166(var uParam0, const char* sParam1, int iParam2, char* sParam3, int iParam4, Ped pedParam5) // Position - 0xDECE
{
	int i;
	eCharacter j;

	*uParam0 = _GET_CURRENT_PLAYER_CHARACTER();
	uParam0->f_1 = func_223();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_193(&(uParam0->f_2884), 0);
		func_192(PLAYER::PLAYER_PED_ID());
		func_185(PLAYER::PLAYER_PED_ID(), false);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
	
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
			uParam0->f_2 = joaat("WEAPON_UNARMED");
	}

	for (j = CHAR_MICHAEL; j < CHAR_MULTIPLAYER; j = j + 1)
	{
		uParam0->f_17[j] = G_MissionStats.f_2366.f_539.f_294[j];
	
		if (j == _GET_CURRENT_PLAYER_CHARACTER_0())
		{
			func_175(PLAYER::PLAYER_PED_ID(), &uParam0->f_616[j], 1, -1);
		}
		else
		{
			for (i = 0; i < 12; i = i + 1)
			{
				uParam0->f_616[j][i] = Global_100558[j][i];
				uParam0->f_616[j].f_13[i] = Global_100558[j].f_13[i];
			}
		
			uParam0->f_616[j].f_59 = Global_100558[j].f_59;
			uParam0->f_616[j].f_60 = Global_100558[j].f_60;
			uParam0->f_616[j].f_61 = Global_100558[j].f_61;
			uParam0->f_616[j].f_62 = Global_100558[j].f_62;
			uParam0->f_616[j].f_63 = Global_100558[j].f_63;
			uParam0->f_616[j].f_64 = Global_100558[j].f_64;
		
			for (i = 0; i < 9; i = i + 1)
			{
				uParam0->f_616[j].f_39[i] = Global_100558[j].f_39[i];
				uParam0->f_616[j].f_49[i] = Global_100558[j].f_49[i];
			}
		}
	
		for (i = 0; i < 44; i = i + 1)
		{
			uParam0->f_812[j][i] = { G_MissionStats.f_2366.f_539.f_298[j][i] };
		}
	
		for (i = 0; i < 51; i = i + 1)
		{
			uParam0->f_812[j].f_221[i] = { G_MissionStats.f_2366.f_539.f_298[j].f_221[i] };
		}
	
		switch (j)
		{
			case CHAR_MICHAEL:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &uParam0->f_2244[j][0], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &uParam0->f_2244[j][1], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j].f_16[11], -1);
				break;
		
			case CHAR_FRANKLIN:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &uParam0->f_2244[j][0], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &uParam0->f_2244[j][1], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j].f_16[11], -1);
				break;
		
			case CHAR_TREVOR:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &uParam0->f_2244[j][0], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &uParam0->f_2244[j][1], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j].f_16[11], -1);
				break;
		}
	
		uParam0->f_9[j] = G_MissionStats.f_20567.f_233[j].f_1;
		uParam0->f_13[j] = Global_60659[j];
		uParam0->f_25[0][j] = { G_MissionStats.f_2366.f_539.f_2407[0][j] };
		uParam0->f_25[1][j] = { G_MissionStats.f_2366.f_539.f_2407[1][j] };
	
		for (i = 0; i <= 3; i = i + 1)
		{
			uParam0->f_2838[j][i] = G_MissionStats.f_2366.f_493[j][i];
			uParam0->f_2838[j].f_5[i] = G_MissionStats.f_2366.f_493[j].f_5[i];
			uParam0->f_2838[j].f_10[i] = G_MissionStats.f_2366.f_493[j].f_10[i];
		}
	
		for (i = 0; i <= 2; i = i + 1)
		{
			uParam0->f_2345[j][i] = G_MissionStats.f_2366[j][i];
			uParam0->f_2345[j].f_4[i] = G_MissionStats.f_2366[j].f_4[i];
			uParam0->f_2345[j].f_8[i] = G_MissionStats.f_2366[j].f_8[i];
			uParam0->f_2345[j].f_12[i] = G_MissionStats.f_2366[j].f_12[i];
			uParam0->f_2345[j].f_16[i] = G_MissionStats.f_2366[j].f_16[i];
			uParam0->f_2345[j].f_20[i] = G_MissionStats.f_2366[j].f_20[i];
			uParam0->f_2345[j].f_24[i] = G_MissionStats.f_2366[j].f_24[i];
			uParam0->f_2345[j].f_28[i] = G_MissionStats.f_2366[j].f_28[i];
			uParam0->f_2345[j].f_32[i] = G_MissionStats.f_2366[j].f_32[i];
			uParam0->f_2345[j].f_36[i] = G_MissionStats.f_2366[j].f_36[i];
			uParam0->f_2345[j].f_40[i] = G_MissionStats.f_2366[j].f_40[i];
			uParam0->f_2345[j].f_44[i] = G_MissionStats.f_2366[j].f_44[i];
			uParam0->f_2345[j].f_48[i] = G_MissionStats.f_2366[j].f_48[i];
			uParam0->f_2345[j].f_52[i] = G_MissionStats.f_2366[j].f_52[i];
			uParam0->f_2345[j].f_56[i] = G_MissionStats.f_2366[j].f_56[i];
			uParam0->f_2345[j].f_60[i] = G_MissionStats.f_2366[j].f_60[i];
			uParam0->f_2345[j].f_64[i] = G_MissionStats.f_2366[j].f_64[i];
			uParam0->f_2345[j].f_68[i] = G_MissionStats.f_2366[j].f_68[i];
			uParam0->f_2345[j].f_72[i] = G_MissionStats.f_2366[j].f_72[i];
			uParam0->f_2345[j].f_76[i] = G_MissionStats.f_2366[j].f_76[i];
			uParam0->f_2345[j].f_80[i] = G_MissionStats.f_2366[j].f_80[i];
			uParam0->f_2345[j].f_84[i] = G_MissionStats.f_2366[j].f_84[i];
			uParam0->f_2345[j].f_88[i] = G_MissionStats.f_2366[j].f_88[i];
			uParam0->f_2345[j].f_92[i] = G_MissionStats.f_2366[j].f_92[i];
			uParam0->f_2345[j].f_96[i] = G_MissionStats.f_2366[j].f_96[i];
			uParam0->f_2345[j].f_100[i] = G_MissionStats.f_2366[j].f_100[i];
			uParam0->f_2345[j].f_104[i] = G_MissionStats.f_2366[j].f_104[i];
			uParam0->f_2345[j].f_108[i] = G_MissionStats.f_2366[j].f_108[i];
			uParam0->f_2345[j].f_112[i] = G_MissionStats.f_2366[j].f_112[i];
			uParam0->f_2345[j].f_116[i] = G_MissionStats.f_2366[j].f_116[i];
			uParam0->f_2345[j].f_120[i] = G_MissionStats.f_2366[j].f_120[i];
			uParam0->f_2345[j].f_124[i] = G_MissionStats.f_2366[j].f_124[i];
			uParam0->f_2345[j].f_128[i] = G_MissionStats.f_2366[j].f_128[i];
			uParam0->f_2345[j].f_132[i] = G_MissionStats.f_2366[j].f_132[i];
			uParam0->f_2345[j].f_136[i] = G_MissionStats.f_2366[j].f_136[i];
			uParam0->f_2345[j].f_140[i] = G_MissionStats.f_2366[j].f_140[i];
			uParam0->f_2345[j].f_144[i] = G_MissionStats.f_2366[j].f_144[i];
			uParam0->f_2345[j].f_148[i] = G_MissionStats.f_2366[j].f_148[i];
			uParam0->f_2345[j].f_152[i] = G_MissionStats.f_2366[j].f_152[i];
			uParam0->f_2345[j].f_156[i] = G_MissionStats.f_2366[j].f_156[i];
			uParam0->f_2345[j].f_160[i] = G_MissionStats.f_2366[j].f_160[i];
		}
	}

	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &uParam0->f_2341[0], -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &uParam0->f_2341[1], -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &uParam0->f_2341[2], -1);
	uParam0->f_5 = 145;

	if (iParam4 == 1)
		func_168(&(uParam0->f_2890), uParam0, pedParam5, 1, 1, 0);

	func_167(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
	return;
}

int func_167(var uParam0) // Position - 0xED57
{
	*uParam0 = Global_96662;
	uParam0->f_1 = Global_96663;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_168(var uParam0, var uParam1, Ped pedParam2, int iParam3, int iParam4, int iParam5) // Position - 0xED79
{
	Vehicle vehicle;

	if (pedParam2 == 0)
		pedParam2 = PLAYER::PLAYER_PED_ID();

	if (ENTITY::DOES_ENTITY_EXIST(pedParam2))
		uParam1->f_5 = _GET_PLAYER_CHARACTER_FROM_PED(pedParam2);

	if (func_174(pedParam2, &vehicle, iParam3, iParam5))
		func_169(uParam0, uParam1, vehicle, iParam4);
	else if (ENTITY::DOES_ENTITY_EXIST(vehicle))
		if (!ENTITY::IS_ENTITY_DEAD(vehicle, false))
			if (VEHICLE::IS_VEHICLE_MODEL(vehicle, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), vehicle, false))
				func_169(uParam0, uParam1, vehicle, iParam4);

	return;
}

int func_169(var uParam0, var uParam1, Vehicle veParam2, int iParam3) // Position - 0xEE01
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam2, false))
	{
		func_171(uParam0, veParam2, iParam3);
		uParam1->f_4 = veParam2;
	
		if (func_170(veParam2))
			uParam1->f_3 = 1;
		else
			uParam1->f_3 = 0;
	
		return 1;
	}

	return 0;
}

BOOL func_170(Vehicle veParam0) // Position - 0xEE41
{
	int i;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (Global_100833.f_22[i] == veParam0)
			return true;
	}

	return false;
}

void func_171(var uParam0, Vehicle veParam1, int iParam2) // Position - 0xEE6F
{
	func_41(veParam1, &(uParam0->f_12));
	uParam0->f_7 = func_173(veParam1, _CHAR_NULL, 0);
	uParam0->f_11 = func_64(veParam1);

	if (!uParam0->f_7)
		if (!uParam0->f_10)
			uParam0->f_10 = func_172(veParam1);

	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(veParam1, true) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(veParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(veParam1) };
	
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(veParam1, -1154.3256f, -1523.8713f, 3.262189f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
	
		if (Global_78384 == veParam1)
			uParam0->f_9 = 1;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		uParam0->f_8 = 1;
	else
		uParam0->f_8 = 0;

	return;
}

int func_172(Vehicle veParam0) // Position - 0xEF4B
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[i]))
			if (veParam0 == Global_77479.f_484[i])
				return 1;
	}

	return 0;
}

int func_173(Vehicle veParam0, eCharacter echParam1, int iParam2) // Position - 0xEF8D
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 0;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98144[i]))
			if (Global_98144[i] == veParam0)
				if (echParam1 == _CHAR_NULL || echParam1 == Global_98154[i])
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(veParam0) == func_75(echParam1, iParam2))
						return 1;
	}

	return 0;
}

BOOL func_174(Ped pedParam0, var uParam1, int iParam2, int iParam3) // Position - 0xF01B
{
	const char* thisScriptName;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (pedParam0 == PLAYER::PLAYER_PED_ID())
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			else
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(pedParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != pedParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != 0)
								return false;
					
						if (func_65(*uParam1, _GET_CURRENT_PLAYER_CHARACTER(), true))
						{
							thisScriptName = SCRIPT::GET_THIS_SCRIPT_NAME();
						
							if (!MISC::ARE_STRINGS_EQUAL(thisScriptName, "save_anywhere"))
								return false;
							else if (!PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true))
								return false;
						}
					
						if (iParam3 == 1)
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
									return false;
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
							return false;
					
						return true;
					}
				}
			}
		}
	}

	return false;
}

void func_175(Ped pedParam0, var uParam1, int iParam2, int iParam3) // Position - 0xF148
{
	eCharacter character;
	ePedComponentType i;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);
	
		for (i = PV_COMP_HEAD; i < PV_COMP_MAX; i = i + 1)
		{
			func_183(pedParam0, i, &uParam1->f_13[i], &uParam1->[i], &uParam1->f_26[i], iParam2, 145);
		}
	
		for (i = PV_COMP_HEAD; i < PV_COMP_TASK; i = i + 1)
		{
			func_182(pedParam0, i, &uParam1->f_39[i], &uParam1->f_49[i], iParam2, 145);
		}
	
		if (func_23(character))
		{
			uParam1->f_59 = G_MissionStats.f_2366.f_539[character].f_59;
			uParam1->f_60 = G_MissionStats.f_2366.f_539[character].f_60;
			uParam1->f_61 = G_MissionStats.f_2366.f_539[character].f_61;
			uParam1->f_62 = G_MissionStats.f_2366.f_539[character].f_62;
			uParam1->f_63 = G_MissionStats.f_2366.f_539[character].f_63;
			uParam1->f_64 = G_MissionStats.f_2366.f_539[character].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(pedParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_180(161, iParam3))
				uParam1->f_59 = func_176(2053, iParam3);
			else
				uParam1->f_59 = func_176(753, iParam3);
		
			uParam1->f_60 = func_176(754, iParam3);
			uParam1->f_61 = func_176(755, iParam3);
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && pedParam0 == PLAYER::PLAYER_PED_ID())
			if (func_180(161, iParam3))
				uParam1->f_59 = func_176(2053, iParam3);
			else
				uParam1->f_59 = func_176(753, iParam3);
	}

	return;
}

int func_176(int iParam0, int iParam1) // Position - 0xF2E2
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14385)
	{
		statHash = func_177(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_177(int iParam0, int iParam1) // Position - 0xF311
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_178(iParam1));
}

int func_178(int iParam0) // Position - 0xF326
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_179();
	
		if (num2 > -1)
		{
			Global_2805862 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2805862 = 1;
		}
	}

	return num;
}

int func_179() // Position - 0xF35A
{
	return Global_1574918;
}

BOOL func_180(int iParam0, int iParam1) // Position - 0xF366
{
	Hash statHash;
	BOOL outValue;

	statHash = func_181(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

Hash func_181(int iParam0, int iParam1) // Position - 0xF38A
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_178(iParam1));
}

void func_182(Ped pedParam0, ePedComponentType epctParam1, var uParam2, var uParam3, int iParam4, eCharacter echParam5) // Position - 0xF39F
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (pedParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(pedParam0, epctParam1, 1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, epctParam1);
	}
	else
	{
		character = echParam5;
	}

	if (iParam4 == 0)
		return;

	if (epctParam1 == PV_COMP_HEAD)
	{
		if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
		{
			if (pedParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(pedParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(pedParam0) != -1)
				{
					*uParam2 = PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(pedParam0);
					*uParam3 = PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(pedParam0);
				}
			}
		}
	}

	switch (character)
	{
		case CHAR_MICHAEL:
			if (epctParam1 == PV_COMP_HEAD)
			{
				if (*uParam2 == 7)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (epctParam1 == PV_COMP_BERD)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	
		case CHAR_FRANKLIN:
			if (epctParam1 == PV_COMP_HEAD)
			{
				if (*uParam2 == 2)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	
		case CHAR_TREVOR:
			if (epctParam1 == PV_COMP_HEAD)
			{
				if (*uParam2 == 9)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20 || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}

	return;
}

void func_183(Ped pedParam0, ePedComponentType epctParam1, var uParam2, var uParam3, var uParam4, int iParam5, eCharacter echParam6) // Position - 0xF8E8
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (pedParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, epctParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(pedParam0, epctParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(pedParam0, epctParam1);
	}
	else
	{
		character = echParam6;
	}

	if (iParam5 == 0)
		return;

	switch (character)
	{
		case CHAR_MICHAEL:
			if (epctParam1 == PV_COMP_ACCS)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (epctParam1 == PV_COMP_TASK)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	
		case CHAR_FRANKLIN:
			if (epctParam1 == PV_COMP_ACCS)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (epctParam1 == PV_COMP_TASK)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	
		case CHAR_TREVOR:
			if (epctParam1 == PV_COMP_ACCS)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (epctParam1 == PV_COMP_TASK)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER_0() // Position - 0xFB29
{
	func_21();
	return G_MissionStats.f_2366.f_539.f_4321;
}

void func_185(Ped pedParam0, BOOL bParam1) // Position - 0xFB42
{
	eCharacter character;
	Hash weaponWheelCurrentlyHighlighted;
	int i;
	int tintIndex;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (func_23(character) && !PED::IS_PED_INJURED(pedParam0))
	{
		if (pedParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_186(pedParam0, &G_MissionStats.f_2366.f_539.f_298[character]);
		
			for (i = 0; i <= 8 - 1; i = i + 1)
			{
				G_MissionStats.f_2366.f_539.f_1730[i][character] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(i);
			
				if (bParam1)
				{
					weaponWheelCurrentlyHighlighted = HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
				
					if (G_MissionStats.f_2366.f_539.f_1730[i][character] == weaponWheelCurrentlyHighlighted)
						G_MissionStats.f_2366.f_539.f_1763 = i;
				}
			}
		
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &tintIndex);
		
			if (character == CHAR_MICHAEL)
				STATS::STAT_SET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), tintIndex, true);
			else if (character == CHAR_FRANKLIN)
				STATS::STAT_SET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), tintIndex, true);
			else if (character == CHAR_TREVOR)
				STATS::STAT_SET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), tintIndex, true);
		}
	}

	return;
}

void func_186(Ped pedParam0, var uParam1) // Position - 0xFC35
{
	int i;
	int j;
	Hash k;
	Hash hash;
	Hash pedWeapontypeInSlot;
	int unk;
	int unk2;
	Hash unk3;
	var unk4;
	int l;
	int numDlcWeaponsSp;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			uParam1->[i].f_1 = 0;
		}
	
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			hash = func_191(i);
		
			if (hash != 0)
			{
				pedWeapontypeInSlot = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(pedParam0, func_191(i));
				pedWeapontypeInSlot.f_1 = 0;
				pedWeapontypeInSlot.f_2 = 0;
				pedWeapontypeInSlot.f_3 = 0;
				pedWeapontypeInSlot.f_4 = 0;
			
				if (pedWeapontypeInSlot != 0 && pedWeapontypeInSlot != joaat("WEAPON_UNARMED"))
				{
					pedWeapontypeInSlot.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot);
				
					if (pedWeapontypeInSlot == joaat("GADGET_PARACHUTE"))
						pedWeapontypeInSlot.f_1 = 1;
				
					pedWeapontypeInSlot.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, pedWeapontypeInSlot);
					pedWeapontypeInSlot.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(pedParam0, pedWeapontypeInSlot);
				
					if (pedWeapontypeInSlot.f_1 == -1)
						if (!WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &(pedWeapontypeInSlot.f_1)))
							pedWeapontypeInSlot.f_1 = 0;
				
					uParam1->[i].f_1 = pedWeapontypeInSlot.f_1;
					j = 0;
				
					for (k = func_189(pedWeapontypeInSlot, j); k != 0; k = func_189(pedWeapontypeInSlot, j))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, pedWeapontypeInSlot, k))
							MISC::SET_BIT(&(pedWeapontypeInSlot.f_2), j);
					
						j = j + 1;
					}
				}
			
				uParam1->[i] = { pedWeapontypeInSlot };
			}
		}
	
		for (i = 0; i <= 50; i = i + 1)
		{
			uParam1->f_221[i].f_1 = 0;
		}
	
		numDlcWeaponsSp = FILES::GET_NUM_DLC_WEAPONS_SP();
	
		for (l = 0; l < numDlcWeaponsSp; l = l + 1)
		{
			if (FILES::GET_DLC_WEAPON_DATA_SP(l, &outData) && !func_188(outData.f_1) && num < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(outData))
				{
					pedWeapontypeInSlot = outData.f_1;
					pedWeapontypeInSlot.f_1 = 0;
					pedWeapontypeInSlot.f_2 = 0;
					pedWeapontypeInSlot.f_3 = 0;
					pedWeapontypeInSlot.f_4 = 0;
					pedWeapontypeInSlot.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot);
				
					if (WEAPON::HAS_PED_GOT_WEAPON(pedParam0, pedWeapontypeInSlot, false))
					{
						pedWeapontypeInSlot.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, pedWeapontypeInSlot);
						pedWeapontypeInSlot.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(pedParam0, pedWeapontypeInSlot);
					}
				
					if (pedWeapontypeInSlot.f_1 == -1)
						if (!WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &(pedWeapontypeInSlot.f_1)))
							pedWeapontypeInSlot.f_1 = 0;
				
					uParam1->f_221[num].f_1 = pedWeapontypeInSlot.f_1;
					offset = 0;
				
					for (j = 0; j < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(l); j = j + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(l, j, &ComponentDataPtr))
						{
							if (!func_187(ComponentDataPtr.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, pedWeapontypeInSlot, ComponentDataPtr.f_3))
									MISC::SET_BIT(&(pedWeapontypeInSlot.f_2), offset);
							
								offset = offset + 1;
							}
						}
					}
				}
			
				if (pedWeapontypeInSlot != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(pedParam0, pedWeapontypeInSlot, false))
					{
						pedWeapontypeInSlot = 0;
						pedWeapontypeInSlot.f_1 = 0;
					}
				}
			
				uParam1->f_221[num] = { pedWeapontypeInSlot };
				num = num + 1;
			}
		}
	}

	return;
}

BOOL func_187(int iParam0) // Position - 0xFEBD
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
		case 1011473080:
			return true;
	}

	return false;
}

BOOL func_188(int iParam0) // Position - 0xFF5E
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return false;
		
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return false;
		
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return false;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				return false;
		
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return false;
		
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return false;
		
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return false;
		
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return false;
		
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return false;
		
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case joaat("WEAPON_AMRIFLE"):
			case joaat("WEAPON_CROSSBOW"):
			case joaat("WEAPON_HARPOON"):
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case joaat("WEAPON_GADGETPISTOL"):
			case joaat("WEAPON_MILITARYRIFLE"):
			case joaat("WEAPON_COMBATSHOTGUN"):
			case joaat("WEAPON_EMPLAUNCHER"):
			case joaat("WEAPON_FERTILIZERCAN"):
			case joaat("WEAPON_STUNGUN_MP"):
			case joaat("WEAPON_METALDETECTOR"):
			case joaat("WEAPON_PRECISIONRIFLE"):
			case joaat("WEAPON_TACTICALRIFLE"):
			case 465894841:
			case 1703483498:
			case -22923932:
			case 350597077:
				return true;
		}
	}

	return false;
}

Hash func_189(Hash hParam0, int iParam1) // Position - 0x101CF
{
	int num;
	int dlcWeaponIndex;
	int i;
	int num2;
	var unk;
	var unk2;

	num = 0;

	switch (hParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			
				case 5:
					num = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			
				case 6:
					num = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
			
				case 7:
					num = -1566778158;
					break;
			
				case 8:
					num = 1694268374;
					break;
			}
			break;
	
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_SMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_SMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_SMG_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 8:
					num = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 8:
					num = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 8:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 9:
					num = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			
				case 10:
					num = 1605520746;
					break;
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_SR_SUPP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			
				case 3:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
			
				case 4:
					num = 330905451;
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 7:
					num = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
			
				case 1:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
			
				case 2:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
			
				case 3:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
			
				case 4:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
			
				case 5:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
			
				case 6:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
			
				case 7:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
			
				case 8:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
			
				case 1:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
			
				case 2:
					num = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
	
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_BAT"):
			switch (iParam1)
			{
				case 0:
					num = 716207715;
					break;
			
				case 1:
					num = 446271089;
					break;
			
				case 2:
					num = 1045616099;
					break;
			
				case 3:
					num = 1336277129;
					break;
			
				case 4:
					num = -513369076;
					break;
			
				case 5:
					num = -447700000;
					break;
			
				case 6:
					num = -149207179;
					break;
			
				case 7:
					num = 166784288;
					break;
			
				case 8:
					num = 2068729789;
					break;
			
				case 9:
					num = 1761389338;
					break;
			}
			break;
	
		case joaat("WEAPON_RPG"):
			switch (iParam1)
			{
				case 0:
					num = -1240142720;
					break;
			}
			break;
	
		default:
			if (hParam0 != 0)
			{
				dlcWeaponIndex = func_190(hParam0, &unk);
			
				if (dlcWeaponIndex != -1)
				{
					for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
						{
							if (!func_187(ComponentDataPtr.f_3))
							{
								if (num2 == iParam1)
									return ComponentDataPtr.f_3;
							
								num2 = num2 + 1;
							}
						}
					}
				}
			}
			break;
	}

	return num;
}

int func_190(Hash hParam0, Any* panParam1) // Position - 0x10E80
{
	int i;
	int numDlcWeapons;

	numDlcWeapons = FILES::GET_NUM_DLC_WEAPONS();

	for (i = 0; i < numDlcWeapons; i = i + 1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(i, panParam1))
			if (panParam1->f_1 == hParam0)
				return i;
	}

	return -1;
}

Hash func_191(int iParam0) // Position - 0x10EBB
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
			num = joaat("SLOT_UNARMED");
			break;
	
		case 1:
			num = joaat("SLOT_KNIFE");
			break;
	
		case 2:
			num = joaat("SLOT_NIGHTSTICK");
			break;
	
		case 3:
			num = joaat("SLOT_HAMMER");
			break;
	
		case 4:
			num = joaat("SLOT_BAT");
			break;
	
		case 5:
			num = joaat("SLOT_CROWBAR");
			break;
	
		case 6:
			num = joaat("SLOT_GOLFCLUB");
			break;
	
		case 7:
			num = joaat("SLOT_STUNGUN");
			break;
	
		case 8:
			num = joaat("SLOT_PISTOL");
			break;
	
		case 9:
			num = joaat("SLOT_COMBATPISTOL");
			break;
	
		case 10:
			num = joaat("SLOT_APPISTOL");
			break;
	
		case 11:
			num = joaat("SLOT_MICROSMG");
			break;
	
		case 12:
			num = joaat("SLOT_SMG");
			break;
	
		case 13:
			num = joaat("SLOT_ASSAULTRIFLE");
			break;
	
		case 14:
			num = joaat("SLOT_CARBINERIFLE");
			break;
	
		case 15:
			num = joaat("SLOT_ADVANCEDRIFLE");
			break;
	
		case 16:
			num = joaat("SLOT_MG");
			break;
	
		case 17:
			num = joaat("SLOT_COMBATMG");
			break;
	
		case 18:
			num = joaat("SLOT_PUMPSHOTGUN");
			break;
	
		case 19:
			num = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
	
		case 20:
			num = joaat("SLOT_ASSAULTSHOTGUN");
			break;
	
		case 21:
			num = joaat("SLOT_SNIPERRIFLE");
			break;
	
		case 22:
			num = joaat("SLOT_HEAVYSNIPER");
			break;
	
		case 23:
			num = joaat("SLOT_GRENADELAUNCHER");
			break;
	
		case 24:
			num = joaat("SLOT_RPG");
			break;
	
		case 25:
			num = joaat("SLOT_MINIGUN");
			break;
	
		case 26:
			num = joaat("SLOT_GRENADE");
			break;
	
		case 27:
			num = joaat("SLOT_STICKYBOMB");
			break;
	
		case 28:
			num = joaat("SLOT_SMOKEGRENADE");
			break;
	
		case 29:
			num = joaat("SLOT_MOLOTOV");
			break;
	
		case 30:
			num = joaat("SLOT_FIREEXTINGUISHER");
			break;
	
		case 31:
			num = joaat("SLOT_PETROLCAN");
			break;
	
		case 33:
			num = joaat("SLOT_PARACHUTE");
			break;
	
		case 34:
			num = joaat("SLOT_DIGISCANNER");
			break;
	
		case 35:
			num = joaat("SLOT_OBJECT");
			break;
	
		case 36:
			num = joaat("SLOT_ASSAULTSMG");
			break;
	
		case 37:
			num = joaat("SLOT_BULLPUPSHOTGUN");
			break;
	
		case 38:
			num = joaat("SLOT_PISTOL50");
			break;
	}

	return num;
}

void func_192(Ped pedParam0) // Position - 0x1112F
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (func_23(character) && !PED::IS_PED_INJURED(pedParam0))
		G_MissionStats.f_2366.f_539.f_294[character] = PED::GET_PED_ARMOUR(pedParam0);

	return;
}

void func_193(var uParam0, int iParam1) // Position - 0x1116B
{
	var unk;
	var unk2;
	var unk3;
	eCharacter unk4;

	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());

	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.5645f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.4724f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (IS_BIT_SET(Global_78938, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (IS_BIT_SET(Global_78938, 5))
	{
		*uParam0 = { -745.4462f, 5595.1465f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (IS_BIT_SET(Global_78938, 6))
	{
		*uParam0 = { -1675.5215f, -1125.5901f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (IS_BIT_SET(Global_78938, 7))
	{
		*uParam0 = { -1631.2192f, -1112.8052f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.6588f, -1715.4669f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.9564f, -1725.1892f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.1973f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.39264f, -477.95844f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.3756f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.8085f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.9323f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.5266f, 2571.3113f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.9304f, 2594.1528f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}

	if (iParam1 == 1)
	{
		if (func_196(&unk))
		{
			if (func_195(unk, &unk2, &unk5))
			{
				unk2.f_2 = unk2.f_2 + 1f;
				*uParam0 = { unk2 };
				uParam0->f_3 = unk5;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0))
		{
			character = _GET_CURRENT_PLAYER_CHARACTER();
		
			if (character == CHAR_MICHAEL)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (character == CHAR_FRANKLIN)
			{
				*uParam0 = { -68.5531f, -1824.3774f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (character == CHAR_TREVOR)
			{
				*uParam0 = { -220.8189f, -1162.3016f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.0801f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_194(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}

	return;
}

BOOL func_194(Vector3 vParam0, var uParam1, var uParam2, char* sParam3, float fParam4, float fParam5, float fParam6) // Position - 0x116BA
{
	Interior interiorAtCoordsWithType;
	Interior interiorFromCollision;

	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
	{
		interiorAtCoordsWithType = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(fParam4, sParam3);
	
		if (!INTERIOR::IS_VALID_INTERIOR(interiorAtCoordsWithType))
			return false;
	
		interiorFromCollision = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
	
		if (interiorFromCollision == interiorAtCoordsWithType)
			return true;
	}

	return false;
}

BOOL func_195(int iParam0, var uParam1, var uParam2) // Position - 0x116FE
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;

	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
	
		case 1:
			*uParam1 = { 129.8484f, -1716.5278f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
	
		case 2:
			*uParam1 = { -1296.9128f, -1120.9985f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
	
		case 3:
			*uParam1 = { 1938.0281f, 3718.7358f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
	
		case 4:
			*uParam1 = { 1197.8656f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
	
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
	
		case 6:
			*uParam1 = { -287.7696f, 6238.0806f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
	
		case 7:
			*uParam1 = { 99.2876f, -1395.1599f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
	
		case 8:
			*uParam1 = { 1679.4451f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
	
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
	
		case 10:
			*uParam1 = { -1088.0536f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
	
		case 11:
			*uParam1 = { 1194.163f, 2695.6436f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
	
		case 12:
			*uParam1 = { -821.2829f, -1088.0271f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
	
		case 13:
			*uParam1 = { -3.3416f, 6521.3027f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
	
		case 14:
			*uParam1 = { -1208.4172f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
	
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
	
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
	
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
	
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
	
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
	
		case 20:
			*uParam1 = { -1461.3552f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
	
		case 21:
			*uParam1 = { -1347.7391f, -1278.5734f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
	
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
	
		case 23:
			*uParam1 = { 1858.774f, 3742.3928f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
	
		case 24:
			*uParam1 = { -286.3272f, 6202.8022f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
	
		case 25:
			*uParam1 = { -1161.5958f, -1417.6997f, 3.712f };
			*uParam2 = 246.9161f;
			break;
	
		case 26:
			*uParam1 = { 1308.9523f, -1660.6111f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
	
		case 27:
			*uParam1 = { -3161.585f, 1074.2136f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
	
		case 28:
			*uParam1 = { 28.423f, -1110.8136f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
	
		case 29:
			*uParam1 = { 1704.9661f, 3749.7092f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
	
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
	
		case 31:
			*uParam1 = { 837.7854f, -1017.9628f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
	
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
	
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
	
		case 34:
			*uParam1 = { -1323.0597f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
	
		case 35:
			*uParam1 = { -1106.1018f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
	
		case 36:
			*uParam1 = { -3157.9321f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
	
		case 37:
			*uParam1 = { 2562.8818f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
	
		case 38:
			*uParam1 = { 822.48f, -2142.8745f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
	
		case 39:
			*uParam1 = { -1137.0531f, -1993.9161f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
	
		case 40:
			*uParam1 = { 717.8107f, -1084.0814f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
	
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
	
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
	
		case 43:
			*uParam1 = { 1201.7089f, 2664.8135f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
	
		case 44:
			*uParam1 = { -200.1521f, -1297.5024f, 30.296f };
			*uParam2 = 269.0687f;
			break;
	
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}

	return !func_8(*uParam1, 0f, 0f, 0f, false);
}

BOOL func_196(var uParam0) // Position - 0x11E7D
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_222())
		{
			*uParam0 = func_202(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 6, -1, false, true, -1);
		
			if (func_201(*uParam0) && !func_197(*uParam0))
				return true;
		}
	}

	return false;
}

BOOL func_197(int iParam0) // Position - 0x11ED8
{
	return func_198(iParam0, 0, true);
}

BOOL func_198(int iParam0, int iParam1, BOOL bParam2) // Position - 0x11EE8
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100885.f_1414[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_200() == 0)
			return IS_BIT_SET(func_176(func_199(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(G_MissionStats.f_668[iParam0], iParam1);

	return false;
}

int func_199(int iParam0) // Position - 0x11F48
{
	switch (iParam0)
	{
		case 0:
			return 828;
	
		case 1:
			return 829;
	
		case 2:
			return 830;
	
		case 3:
			return 831;
	
		case 4:
			return 832;
	
		case 5:
			return 833;
	
		case 6:
			return 834;
	
		case 7:
			return 835;
	
		case 8:
			return 836;
	
		case 9:
			return 837;
	
		case 10:
			return 838;
	
		case 11:
			return 839;
	
		case 12:
			return 840;
	
		case 13:
			return 841;
	
		case 14:
			return 842;
	
		case 15:
			return 844;
	
		case 16:
			return 845;
	
		case 17:
			return 846;
	
		case 18:
			return 847;
	
		case 19:
			return 848;
	
		case 20:
			return 849;
	
		case 21:
			return 850;
	
		case 22:
			return 851;
	
		case 23:
			return 852;
	
		case 24:
			return 853;
	
		case 25:
			return 854;
	
		case 26:
			return 855;
	
		case 27:
			return 856;
	
		case 28:
			return 857;
	
		case 29:
			return 858;
	
		case 30:
			return 859;
	
		case 31:
			return 860;
	
		case 32:
			return 861;
	
		case 33:
			return 862;
	
		case 34:
			return 863;
	
		case 35:
			return 864;
	
		case 36:
			return 865;
	
		case 37:
			return 866;
	
		case 38:
			return 867;
	
		case 39:
			return 868;
	
		case 40:
			return 872;
	
		case 41:
			return 873;
	
		case 42:
			return 874;
	
		case 43:
			return 875;
	
		case 44:
			return 12514;
	
		case 45:
			return 3811;
	
		case 46:
			return 5386;
	
		case 47:
			return 6158;
	
		case 48:
			return 7235;
	
		case 49:
			return 7881;
	
		case 52:
			return 8917;
	
		case 50:
			return 8268;
	
		case 51:
			return 8270;
	
		case 53:
			return 9557;
	
		case 54:
			return 9633;
	
		case 55:
			return 9848;
	
		case 56:
			return 9916;
	
		case 57:
			return 9918;
	
		case 58:
			return 11433;
	
		case 59:
			return 11844;
	
		case 60:
			return 11901;
	
		default:
			break;
	}

	return 14385;
}

int func_200() // Position - 0x122F0
{
	return Global_32283;
}

BOOL func_201(int iParam0) // Position - 0x122FB
{
	return func_198(iParam0, 5, true);
}

int func_202(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x1230B
{
	int i;
	float distanceBetweenCoords;
	float num;
	int num2;

	num = 1000000f;
	num2 = -1;

	for (i = 0; i <= 60; i = i + 1)
	{
		if (iParam3 == 6 || iParam3 == func_221(i))
		{
			if (!bParam5 || func_220(i))
			{
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_203(i, false), true);
			
				if (distanceBetweenCoords < num && distanceBetweenCoords <= (float)iParam4 || iParam4 == -1 && bParam6 || i != 21 && i != iParam7)
				{
					num = distanceBetweenCoords;
					num2 = i;
				}
			}
		}
	}

	return num2;
}

Vector3 func_203(int iParam0, BOOL bParam1) // Position - 0x123AD
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
	
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
	
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
	
		case 2:
			return -1287.0822f, -1116.5576f, 5.9901f;
	
		case 3:
			return 1933.1191f, 3726.079f, 31.8444f;
	
		case 4:
			return 1208.3335f, -470.917f, 65.208f;
	
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
	
		case 6:
			return -280.8165f, 6231.7705f, 30.6955f;
	
		case 7:
			return 80.665f, -1391.6694f, 28.3761f;
	
		case 8:
			return 1687.8812f, 4820.55f, 41.0096f;
	
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
	
		case 10:
			return -1094.0487f, 2704.1707f, 18.0873f;
	
		case 11:
			return 1197.9722f, 2704.2205f, 37.1572f;
	
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
	
		case 13:
			return -0.2361f, 6516.0454f, 30.8684f;
	
		case 14:
			return -1199.8092f, -776.6886f, 16.3237f;
	
		case 15:
			return 618.1857f, 2752.5667f, 41.0881f;
	
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
	
		case 17:
			return -3168.9663f, 1055.2869f, 19.8632f;
	
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
	
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
	
		case 20:
			return -1455.0045f, -233.1862f, 48.7936f;
	
		case 21:
			return -1335.973f, -1278.5549f, 3.8598f;
	
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
	
		case 23:
			return 1861.6853f, 3750.0798f, 32.0318f;
	
		case 24:
			return -290.1603f, 6199.0947f, 30.4871f;
	
		case 25:
			return -1153.9481f, -1425.0186f, 3.9544f;
	
		case 26:
			return 1322.4547f, -1651.1252f, 51.1885f;
	
		case 27:
			return -3169.4204f, 1074.7272f, 19.8343f;
	
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
	
		case 29:
			return 1697.9788f, 3753.2002f, 33.7053f;
	
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
	
		case 31:
			return 844.1248f, -1025.5707f, 27.1948f;
	
		case 32:
			return -325.8904f, 6077.0264f, 30.4548f;
	
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
	
		case 34:
			return -1313.9485f, -390.9637f, 35.592f;
	
		case 35:
			return -1111.2375f, 2688.4626f, 17.6131f;
	
		case 36:
			return -3165.2307f, 1082.8551f, 19.8438f;
	
		case 37:
			return 2569.6116f, 302.576f, 107.7349f;
	
		case 38:
			return 811.8699f, -2149.1016f, 28.6363f;
	
		case 39:
			return -1147.3138f, -1992.4344f, 12.1803f;
	
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
	
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
	
		case 42:
			return 113.2615f, 6624.2803f, 30.7871f;
	
		case 43:
			return 1174.7074f, 2644.4497f, 36.7552f;
	
		case 44:
			if (bParam1)
				return -211.5f, -1324.2f, 30.296f;
			else
				return -205.6654f, -1311.1127f, 30.296f;
			break;
	
		case 45:
			return func_217(Global_102986);
	
		case 46:
			if (Global_1853823 != _INVALID_PLAYER_INDEX())
				if (func_216(Global_1853823))
					return func_209(2, 2);
				else if (func_208(Global_1853823))
					return func_209(45, 3);
				else
					return 1000000f, 1000000f, 1000000f;
			else
				return 1000000f, 1000000f, 1000000f;
			break;
	
		case 47:
			return func_206(-9.9f, -0.5f, 1f);
	
		case 48:
			return -1422.1969f, -3015.8027f, -79.1603f;
	
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
	
		case 52:
			return 2714.5466f, -354.2701f, -55.1867f;
	
		case 50:
			return Global_1971274;
	
		case 51:
			return 1100f, 220f, -50f;
	
		case 53:
			return 1560f, 400f, -50f;
	
		case 54:
			return -2159.901f, 1075.2125f, -25.361736f;
	
		case 55:
			return -2194.1226f, 1103.8047f, -24.2451f;
	
		case 56:
			switch (Global_2657704[PLAYER::PLAYER_ID()].f_321.f_7)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
			
				case 156:
					return -1029.1659f, -426.3766f, 72.2069f;
			
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
			
				case 158:
					return -1013.7179f, -768.3539f, 69.4942f;
			}
		
			return 1000000f, 1000000f, 1000000f;
	
		case 57:
			return -1010f, -70f, -100f;
	
		case 58:
			return func_204();
	
		case 59:
			return 560f, -405f, -69.6591f;
	
		case 60:
			return -1299.6909f, -3017.1646f, -48.2612f;
	}

	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_204() // Position - 0x12B18
{
	if (!_IS_NULL_VECTOR(Global_1956855))
		return Global_1956855;

	switch (func_205())
	{
		case 0:
			return -29.532f, 6435.136f, 31.162f;
	
		case 1:
			return 1705.214f, 4819.167f, 41.75f;
	
		case 2:
			return 1795.522f, 3899.753f, 33.869f;
	
		case 3:
			return 1335.536f, 2758.746f, 51.099f;
	
		case 4:
			return 795.583f, 1210.78f, 338.962f;
	
		case 5:
			return -3192.67f, 1077.205f, 20.594f;
	
		case 6:
			return -789.719f, 5400.921f, 33.915f;
	
		case 7:
			return -24.384f, 3048.167f, 40.703f;
	
		case 8:
			return 2666.786f, 1469.324f, 24.237f;
	
		case 9:
			return -1454.966f, 2667.503f, 3.2f;
	
		case 10:
			return 2340.418f, 3054.188f, 47.888f;
	
		case 11:
			return 1509.183f, -2146.795f, 76.853f;
	
		case 12:
			return 1137.404f, -1358.654f, 34.322f;
	
		case 13:
			return -57.208f, -2658.793f, 5.737f;
	
		case 14:
			return 1905.017f, 565.222f, 175.558f;
	
		case 15:
			return 974.484f, -1718.798f, 30.296f;
	
		case 16:
			return 779.077f, -3266.297f, 5.719f;
	
		case 17:
			return -587.728f, -1637.208f, 19.611f;
	
		case 18:
			return 733.99f, -736.803f, 26.165f;
	
		case 19:
			return -1694.632f, -454.082f, 40.712f;
	
		case 20:
			return -1330.726f, -1163.948f, 4.313f;
	
		case 21:
			return -496.618f, 40.231f, 52.316f;
	
		case 22:
			return 275.527f, 66.509f, 94.108f;
	
		case 23:
			return 260.928f, -763.35f, 30.559f;
	
		case 24:
			return -478.025f, -741.45f, 30.299f;
	
		case 25:
			return 894.94f, 3603.911f, 32.56f;
	
		case 26:
			return -2166.511f, 4289.503f, 48.733f;
	
		case 27:
			return 1465.633f, 6553.67f, 13.771f;
	
		case 28:
			return 1101.032f, -335.172f, 66.944f;
	
		case 29:
			return 149.683f, -1655.674f, 29.028f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_205() // Position - 0x12E13
{
	return Global_2652364.f_2650;
}

Vector3 func_206(float fParam0, float fParam1, float fParam2) // Position - 0x12E22
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_207(), 0f, fParam0);
}

Vector3 func_207() // Position - 0x12E37
{
	return -880f, -2770f, -50f;
}

BOOL func_208(Player plParam0) // Position - 0x12E4E
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (IS_BIT_SET(Global_1853988[plParam0].f_267.f_288, 0) || IS_BIT_SET(Global_1853988[plParam0].f_267.f_288, 1) || IS_BIT_SET(Global_1853988[plParam0].f_267.f_288, 2))
			return true;

	return false;
}

Vector3 func_209(int iParam0, int iParam1) // Position - 0x12EA6
{
	var unk;
	var unk2;

	unk7 = { 1000000f, 1000000f, 1000000f };

	if (Global_1853823 != _INVALID_PLAYER_INDEX())
		if (iParam1 == 3)
			if (func_210(iParam0, 1, &unk, 0, false))
				unk7 = { unk };
		else if (iParam1 == 2)
			if (IS_BIT_SET(Global_1853988[Global_1853823].f_267.f_288, 4))
				if (func_210(iParam0, 1, &unk, 0, false))
					unk7 = { unk };
			else if (IS_BIT_SET(Global_1853988[Global_1853823].f_267.f_288, 5))
				if (func_210(iParam0, 2, &unk, 0, false))
					unk7 = { unk };

	return unk7;
}

BOOL func_210(int iParam0, int iParam1, var uParam2, int iParam3, BOOL bParam4) // Position - 0x12F50
{
	var unk;
	Vector3 unk2;
	var unk3;
	Vector3 unk4;

	if (!func_215(iParam3, &unk))
		return false;

	if (!func_215(iParam1, &vector))
		return false;

	if (!bParam4)
		unk12 = { func_213(iParam0) };
	else
		unk12 = { func_212(iParam0) };

	vector2 = { unk12 - unk };
	vector2 = { func_211(vector2, -unk.f_3.f_2) };
	vector2 = { func_211(vector2, vector.f_3.f_2) };
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, 0f, vector2) };
	uParam2->f_3 = { unk12.f_3 };
	return true;
}

Vector3 func_211(float fParam0, var uParam1, var uParam2, float fParam3) // Position - 0x12FE5
{
	float num;
	float unk;
	float unk2;

	num2 = SYSTEM::SIN(fParam3);
	num3 = SYSTEM::COS(fParam3);
	num = (fParam0 * num3) - (fParam0.f_1 * num2);
	num.f_1 = (fParam0 * num2) + (fParam0.f_1 * num3);
	num.f_2 = fParam0.f_2;
	return num;
}

struct<6> func_212(int iParam0) // Position - 0x13029
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 1102.1f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 115.92f };
			break;
	
		case 1:
			unk = { 1105.05f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -103.32f };
			break;
	
		case 2:
			unk = { 1105.05f, -3008.75f, -39.35f };
			unk.f_3 = { 0f, 0f, -77.76f };
			break;
	
		case 3:
			unk = { 1102.1f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, 102.96f };
			break;
	
		case 4:
			unk = { 1105.05f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, -101.88f };
			break;
	
		case 5:
			unk = { 1105.05f, -3000.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -81.36f };
			break;
	
		case 6:
			unk = { 1102.1f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 103.32f };
			break;
	
		case 7:
			unk = { 1105.05f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -109.8f };
			break;
	
		case 8:
			unk = { 1105.05f, -2992.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -84.96f };
			break;
	}

	return unk;
}

struct<6> func_213(int iParam0) // Position - 0x131AD
{
	return func_214(iParam0);
}

struct<6> func_214(int iParam0) // Position - 0x131BB
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 1105.22f, -3013.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 1:
			unk = { 1104.105f, -3013.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 19:
			unk = { 1105.22f, -3005.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 20:
			unk = { 1104.105f, -3005.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 2:
			unk = { 1102f, -3011.925f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 3:
			unk = { 1103f, -3010f, -38.125f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 4:
			unk = { 1103.213f, -3013.483f, -39.03f };
			unk.f_3 = { 0f, 0f, 31.32f };
			break;
	
		case 5:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1101.4084f, -3012.3198f, -38.45339f };
			break;
	
		case 6:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1103.0374f, -3012.3184f, -39.998745f };
			break;
	
		case 7:
			unk = { 1105.645f, -3012.04f, -39.542f };
			unk.f_3 = { 0f, 0f, -86.04f };
			break;
	
		case 8:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1104.0634f, -3012.3677f, -39.998753f };
			break;
	
		case 9:
			unk = { 1105.6648f, -3012.3345f, -38.50835f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 10:
			unk = { 1102.504f, -3012.35f, -39.341f };
			unk.f_3 = { 0f, 0f, -96.48f };
			break;
	
		case 11:
			unk = { 1102.9282f, -3012.6934f, -39.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 12:
			unk = { 1102.9421f, -3011.315f, -37.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 61:
			unk = { 1101.9943f, -3012.8777f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 62:
			unk = { 1103.1519f, -3013.0325f, -38.24946f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 13:
			unk = { 1102.465f, -3009.515f, -39.341f };
			unk.f_3 = { 0f, 0f, -12.96f };
			break;
	
		case 14:
			unk = { 1102.9167f, -3009.525f, -39.99945f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 15:
			unk = { 1102.9218f, -3010.8872f, -37.99945f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 63:
			unk = { 1101.6818f, -3009.227f, -39.949997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 64:
			unk = { 1102.4534f, -3008.5105f, -38.199997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 16:
			unk = { 1104.684f, -3009.561f, -39.341f };
			unk.f_3 = { 0f, 0f, 169.56f };
			break;
	
		case 17:
			unk = { 1104.3401f, -3008.6982f, -39.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 18:
			unk = { 1104.3442f, -3009.618f, -37.981716f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 65:
			unk = { 1105.4595f, -3009.7935f, -39.949997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 66:
			unk = { 1104.7828f, -3010.433f, -38.199997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 44:
			unk = { 1104.0251f, -3007.3157f, -39.9987f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 21:
			unk = { 1103.562f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 22:
			unk = { 1103.562f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 23:
			unk = { 1102.1f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 115.92f };
			break;
	
		case 24:
			unk = { 1105.05f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -103.32f };
			break;
	
		case 25:
			unk = { 1105.05f, -3008.75f, -39.35f };
			unk.f_3 = { 0f, 0f, -77.76f };
			break;
	
		case 26:
			unk = { 1102.05f, -3011.717f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 27:
			unk = { 1102.05f, -3012.653f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 28:
			unk = { 1105.05f, -3012.653f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 29:
			unk = { 1105.05f, -3011.717f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 30:
			unk = { 1102.1f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, 102.96f };
			break;
	
		case 31:
			unk = { 1105.05f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, -101.88f };
			break;
	
		case 32:
			unk = { 1105.05f, -3000.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -81.36f };
			break;
	
		case 33:
			unk = { 1102.05f, -3003.592f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 34:
			unk = { 1102.05f, -3004.541f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 35:
			unk = { 1105.05f, -3004.541f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 36:
			unk = { 1105.05f, -3003.592f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 37:
			unk = { 1102.1f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 103.32f };
			break;
	
		case 38:
			unk = { 1105.05f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -109.8f };
			break;
	
		case 39:
			unk = { 1105.05f, -2992.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -84.96f };
			break;
	
		case 40:
			unk = { 1102.05f, -2995.582f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 41:
			unk = { 1102.05f, -2996.501f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 42:
			unk = { 1105.05f, -2996.501f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 43:
			unk = { 1105.05f, -2995.582f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 45:
			unk = { 1101f, -3011.9f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 46:
			unk = { 1102f, -3010f, -38.115f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 47:
			unk = { 1105.174f, -3004.1602f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 48:
			unk = { 1105.1749f, -3005.818f, -37.919476f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 49:
			unk = { 1106.5996f, -3000.8472f, -39.89988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 50:
			unk = { 1106.6013f, -3002.171f, -37.89988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 51:
			unk = { 1101.95f, -3011.9f, -39.2f };
			unk.f_3 = { 0f, 0f, 49.5f };
			break;
	
		case 52:
			unk = { 1101.95f, -3010f, -39.2f };
			unk.f_3 = { 0f, 0f, 130.32f };
			break;
	
		case 53:
			unk = { 1105.16f, -3009.06f, -39.2f };
			unk.f_3 = { 0f, 0f, -44.64f };
			break;
	
		case 54:
			unk = { 1102.4756f, -3008.5076f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 55:
			unk = { 1099f, -3008.5076f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 56:
			unk = { 1103.5928f, -3008.2698f, -39.9987f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 57:
			unk = { 1103.565f, -3014f, -39.988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 58:
			unk = { 1103.565f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 59:
			unk = { 1103.565f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 60:
			unk = { 1103.55f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 67:
			unk = { 1103.55f, -3013.762f, -40f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 68:
			unk = { 1103.55f, -3006.186f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			unk = { 1103.6f, -3013.933f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	}

	return unk;
}

BOOL func_215(int iParam0, var uParam1) // Position - 0x13C82
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_216(Player plParam0) // Position - 0x13D04
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (IS_BIT_SET(Global_1853988[plParam0].f_267.f_288, 3) || IS_BIT_SET(Global_1853988[plParam0].f_267.f_288, 4) || IS_BIT_SET(Global_1853988[plParam0].f_267.f_288, 5))
			return true;

	return false;
}

Vector3 func_217(int iParam0) // Position - 0x13D5C
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
	
		case 2:
			return 1060f, -2990f, -35f;
	
		case 3:
			return 974.9542f, -3000.0908f, -35f;
	
		case 6:
			return -1586.36f, -566.6f, 106.17f;
	
		case 7:
			return -1389.87f, -465.17f, 82.68f;
	
		case 8:
			return -145.81f, -590.2f, 171.13f;
	
		case 9:
			return -62.49f, -823.55f, 288.74f;
	
		case 4:
			return 1102.5149f, -3158.888f, -38.5186f;
	
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
	
		case 10:
			return 1103.5624f, -3000f, -40f;
	
		case 11:
			return 938.3077f, -3196.1116f, -100f;
	
		case 12:
			return -1266.802f, -3014.8364f, -49.4895f;
	
		case 13:
			return func_207();
	
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
	
		case 15:
			return -1604.6643f, -3012.5828f, -79.9999f;
	
		case 16:
			return -1421.0149f, -3012.5867f, -80f;
	
		case 17:
			if (func_218() == 0)
				return 205f, 5180f, -90f;
			else
				return 170f, 5190f, 10f;
			break;
	
		case 18:
			return -2000f, 1250f, 50f;
	
		case 19:
			return -1350f, 160f, -100f;
	
		case 20:
			return -1070f, -70f, -100f;
	
		case 21:
			return 570f, -415f, -70f;
	
		default:
			return 0f, 0f, -200f;
	}

	return 0f, 0f, -200f;
}

int func_218() // Position - 0x13FC8
{
	return func_219(PLAYER::PLAYER_ID());
}

int func_219(Player plParam0) // Position - 0x13FD8
{
	return MISC::GET_BITS_IN_RANGE(Global_2657704[plParam0].f_321.f_3, 28, 31);
}

BOOL func_220(int iParam0) // Position - 0x13FF5
{
	return func_198(iParam0, 0, false);
}

int func_221(int iParam0) // Position - 0x14007
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
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
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	}

	return 6;
}

BOOL func_222() // Position - 0x1433D
{
	return Global_100885.f_393 > 0;
}

var func_223() // Position - 0x1434E
{
	var unk;

	func_233(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_232(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_231(&unk, CLOCK::GET_CLOCK_HOURS());
	func_226(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_225(&unk, CLOCK::GET_CLOCK_MONTH());
	func_224(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_224(var uParam0, int iParam1) // Position - 0x14394
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

void func_225(var uParam0, int iParam1) // Position - 0x1441A
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_226(var uParam0, int iParam1) // Position - 0x1444D
{
	int num;
	int num2;

	num = func_230(*uParam0);
	num2 = func_228(*uParam0);

	if (iParam1 < 1 || iParam1 > func_227(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_227(int iParam0, int iParam1) // Position - 0x1449E
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

int func_228(int iParam0) // Position - 0x14540
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_229(BOOL bParam0, var uParam1, var uParam2) // Position - 0x14562
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_230(int iParam0) // Position - 0x14579
{
	return iParam0 & 15;
}

void func_231(var uParam0, int iParam1) // Position - 0x14586
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_232(var uParam0, int iParam1) // Position - 0x145C0
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_233(var uParam0, int iParam1) // Position - 0x145FB
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

int func_234(const char* sParam0) // Position - 0x14637
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0))
		return 0;
	else if (MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0))
		return 1;
	else if (MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0))
		return 2;
	else if (MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0))
		return 3;

	return -1;
}

struct<2> func_235(int iParam0) // Position - 0x1468D
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

int func_236(const char* sParam0, int iParam1) // Position - 0x14AD9
{
	int num;
	const char* str;
	Hash unk;
	int unk2;

	hashKey = MISC::GET_HASH_KEY(sParam0);
	i = 0;

	for (i = 0; i < 63; i = i + 1)
	{
		num = i;
		func_237(num, &str);
	
		if (MISC::GET_HASH_KEY(str) == hashKey)
			return num;
	}

	iParam1 == 0;
	return -1;
}

void func_237(int iParam0, var uParam1) // Position - 0x14B22
{
	switch (iParam0)
	{
		case 0:
			func_238(uParam1, "Abigail1", func_240(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_239(iParam0), 1, 0);
			break;
	
		case 1:
			func_238(uParam1, "Abigail2", func_240(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_239(iParam0), 1, 0);
			break;
	
		case 2:
			func_238(uParam1, "Barry1", func_240(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_239(iParam0), 1, 0);
			break;
	
		case 3:
			func_238(uParam1, "Barry2", func_240(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_239(iParam0), 1, 1);
			break;
	
		case 4:
			func_238(uParam1, "Barry3", func_240(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_239(iParam0), 0, 0);
			break;
	
		case 5:
			func_238(uParam1, "Barry3A", func_240(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 6:
			func_238(uParam1, "Barry3C", func_240(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 7:
			func_238(uParam1, "Barry4", func_240(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_239(iParam0), 0, 0);
			break;
	
		case 8:
			func_238(uParam1, "Dreyfuss1", func_240(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_239(iParam0), 0, 0);
			break;
	
		case 9:
			func_238(uParam1, "Epsilon1", func_240(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_239(iParam0), 0, 0);
			break;
	
		case 10:
			func_238(uParam1, "Epsilon2", func_240(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_239(iParam0), 1, 0);
			break;
	
		case 11:
			func_238(uParam1, "Epsilon3", func_240(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_239(iParam0), 0, 0);
			break;
	
		case 12:
			func_238(uParam1, "Epsilon4", func_240(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_239(iParam0), 0, 0);
			break;
	
		case 13:
			func_238(uParam1, "Epsilon5", func_240(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_239(iParam0), 1, 0);
			break;
	
		case 14:
			func_238(uParam1, "Epsilon6", func_240(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 15:
			func_238(uParam1, "Epsilon7", func_240(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_239(iParam0), 0, 0);
			break;
	
		case 16:
			func_238(uParam1, "Epsilon8", func_240(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_239(iParam0), 1, 0);
			break;
	
		case 17:
			func_238(uParam1, "Extreme1", func_240(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 18:
			func_238(uParam1, "Extreme2", func_240(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 19:
			func_238(uParam1, "Extreme3", func_240(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 20:
			func_238(uParam1, "Extreme4", func_240(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_239(iParam0), 0, 0);
			break;
	
		case 21:
			func_238(uParam1, "Fanatic1", func_240(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_239(iParam0), 1, 0);
			break;
	
		case 22:
			func_238(uParam1, "Fanatic2", func_240(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_239(iParam0), 1, 0);
			break;
	
		case 23:
			func_238(uParam1, "Fanatic3", func_240(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_239(iParam0), 0, 1);
			break;
	
		case 24:
			func_238(uParam1, "Hao1", func_240(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_239(iParam0), 0, 1);
			break;
	
		case 25:
			func_238(uParam1, "Hunting1", func_240(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 26:
			func_238(uParam1, "Hunting2", func_240(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 27:
			func_238(uParam1, "Josh1", func_240(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_239(iParam0), 1, 0);
			break;
	
		case 28:
			func_238(uParam1, "Josh2", func_240(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_239(iParam0), 1, 1);
			break;
	
		case 29:
			func_238(uParam1, "Josh3", func_240(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_239(iParam0), 1, 1);
			break;
	
		case 30:
			func_238(uParam1, "Josh4", func_240(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_239(iParam0), 1, 0);
			break;
	
		case 31:
			func_238(uParam1, "Maude1", func_240(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 32:
			func_238(uParam1, "Minute1", func_240(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 33:
			func_238(uParam1, "Minute2", func_240(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 34:
			func_238(uParam1, "Minute3", func_240(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 35:
			func_238(uParam1, "MrsPhilips1", func_240(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_239(iParam0), 0, 0);
			break;
	
		case 36:
			func_238(uParam1, "MrsPhilips2", func_240(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_239(iParam0), 0, 0);
			break;
	
		case 37:
			func_238(uParam1, "Nigel1", func_240(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_239(iParam0), 1, 0);
			break;
	
		case 38:
			func_238(uParam1, "Nigel1A", func_240(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_239(iParam0), 1, 1);
			break;
	
		case 39:
			func_238(uParam1, "Nigel1B", func_240(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_239(iParam0), 1, 1);
			break;
	
		case 40:
			func_238(uParam1, "Nigel1C", func_240(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_239(iParam0), 1, 1);
			break;
	
		case 41:
			func_238(uParam1, "Nigel1D", func_240(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_239(iParam0), 1, 1);
			break;
	
		case 42:
			func_238(uParam1, "Nigel2", func_240(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_239(iParam0), 1, 1);
			break;
	
		case 43:
			func_238(uParam1, "Nigel3", func_240(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_239(iParam0), 1, 1);
			break;
	
		case 44:
			func_238(uParam1, "Omega1", func_240(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_239(iParam0), 0, 0);
			break;
	
		case 45:
			func_238(uParam1, "Omega2", func_240(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_239(iParam0), 0, 0);
			break;
	
		case 46:
			func_238(uParam1, "Paparazzo1", func_240(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 47:
			func_238(uParam1, "Paparazzo2", func_240(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 48:
			func_238(uParam1, "Paparazzo3", func_240(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_239(iParam0), 0, 0);
			break;
	
		case 49:
			func_238(uParam1, "Paparazzo3A", func_240(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 50:
			func_238(uParam1, "Paparazzo3B", func_240(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 51:
			func_238(uParam1, "Paparazzo4", func_240(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_239(iParam0), 0, 0);
			break;
	
		case 52:
			func_238(uParam1, "Rampage1", func_240(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_239(iParam0), 0, 0);
			break;
	
		case 54:
			func_238(uParam1, "Rampage3", func_240(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_239(iParam0), 1, 0);
			break;
	
		case 55:
			func_238(uParam1, "Rampage4", func_240(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_239(iParam0), 1, 0);
			break;
	
		case 56:
			func_238(uParam1, "Rampage5", func_240(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_239(iParam0), 0, 0);
			break;
	
		case 53:
			func_238(uParam1, "Rampage2", func_240(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_239(iParam0), 1, 0);
			break;
	
		case 57:
			func_238(uParam1, "TheLastOne", func_240(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 58:
			func_238(uParam1, "Tonya1", func_240(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 59:
			func_238(uParam1, "Tonya2", func_240(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 60:
			func_238(uParam1, "Tonya3", func_240(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 61:
			func_238(uParam1, "Tonya4", func_240(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		case 62:
			func_238(uParam1, "Tonya5", func_240(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_238(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x15CD7
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

int func_239(int iParam0) // Position - 0x15D68
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

struct<2> func_240(int iParam0) // Position - 0x160AE
{
	var unk;
	var unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_235(iParam0) };

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

int func_241(int iParam0) // Position - 0x160E5
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_242(G_MissionStats.f_9088.f_99.f_205[10]);
	
		case 74:
		case 75:
			return func_242(G_MissionStats.f_9088.f_99.f_205[8]);
	
		case 84:
		case 85:
			return func_242(G_MissionStats.f_9088.f_99.f_205[11]);
	
		case 90:
			return func_242(G_MissionStats.f_9088.f_99.f_205[7]);
	
		case 93:
			return func_242(G_MissionStats.f_9088.f_99.f_205[9]);
	}

	return 0;
}

int func_242(int iParam0) // Position - 0x161A1
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
	
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
	}

	return -1;
}

int func_243(const char* sParam0, BOOL bParam1) // Position - 0x161F5
{
	Hash hashKey;
	int num;

	hashKey = MISC::GET_HASH_KEY(sParam0);
	num = func_244(hashKey, true);
	num == -1 && !bParam1;
	return num;
}

int func_244(Hash hParam0, BOOL bParam1) // Position - 0x1621F
{
	int i;

	for (i = 0; i < 94; i = i + 1)
	{
		if (Global_91601[i].f_6 == hParam0)
			return i;
	}

	!bParam1;
	return -1;
}

void func_245(BOOL bParam0) // Position - 0x16255
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			G_MissionStats.f_20567.f_233[i].f_2[j].f_3 = G_MissionStats.f_20567.f_233[i].f_2[j];
			G_MissionStats.f_20567.f_233[i].f_2[j].f_4 = G_MissionStats.f_20567.f_233[i].f_2[j].f_1;
			G_MissionStats.f_20567.f_233[i].f_2[j].f_5 = G_MissionStats.f_20567.f_233[i].f_2[j].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_60667[i][0] = G_MissionStats.f_20567[i];
		Global_60667.f_31[i][0] = G_MissionStats.f_20567.f_11[i];
		Global_60667.f_62[i][0] = G_MissionStats.f_20567.f_22[i];
		Global_60667.f_93[i][0] = G_MissionStats.f_20567.f_33[i];
		Global_60667.f_124[i][0] = G_MissionStats.f_20567.f_44[i];
		Global_60667.f_155[i][0] = G_MissionStats.f_20567.f_55[i];
		Global_60667.f_186[i][0] = G_MissionStats.f_20567.f_66[i];
		Global_60667.f_217[i][0] = G_MissionStats.f_20567.f_77[i];
		Global_60667.f_248[i][0] = G_MissionStats.f_20567.f_88[i];
	
		if (!bParam0)
		{
			Global_60667[i][1] = G_MissionStats.f_20567[i];
			Global_60667.f_31[i][1] = G_MissionStats.f_20567.f_11[i];
			Global_60667.f_62[i][1] = G_MissionStats.f_20567.f_22[i];
			Global_60667.f_93[i][1] = G_MissionStats.f_20567.f_33[i];
			Global_60667.f_124[i][1] = G_MissionStats.f_20567.f_44[i];
			Global_60667.f_155[i][1] = G_MissionStats.f_20567.f_55[i];
			Global_60667.f_186[i][1] = G_MissionStats.f_20567.f_66[i];
			Global_60667.f_217[i][1] = G_MissionStats.f_20567.f_77[i];
			Global_60667.f_248[i][1] = G_MissionStats.f_20567.f_88[i];
		}
	}

	return;
}

void func_246(Vehicle veParam0, int iParam1, int iParam2) // Position - 0x164D7
{
	if (_IS_MISSION_REPLAY_IN_PROGRESS() && func_36())
	{
		while (Global_100828 != 6)
		{
			SYSTEM::WAIT(0);
		}
	
		MISC::SET_GAME_PAUSED(false);
	
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	
		if (veParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(veParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam0, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
	
		if (iParam2 == 1)
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_247(0);
	}

	return;
}

void func_247(int iParam0) // Position - 0x1659B
{
	if (iParam0 == 1)
		MISC::SET_BIT(&(Global_100833.f_20), 13);
	else
		MISC::CLEAR_BIT(&(Global_100833.f_20), 13);

	return;
}

void func_248() // Position - 0x165C4
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_312, true) < 500f)
	{
		if (iLocal_212 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
			{
				STREAMING::REQUEST_MODEL(joaat("sandking"));
			
				if (STREAMING::HAS_MODEL_LOADED(joaat("sandking")))
				{
					uLocal_49[0] = VEHICLE::CREATE_VEHICLE(joaat("sandking"), 1754.9508f, 3290.994f, 40.1176f, 182.397f, true, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_49[0], true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sandking"));
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
				iLocal_212 = 1;
		}
	}
	else if (iLocal_212 == 1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_312, true) > 550f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
				VEHICLE::DELETE_VEHICLE(&uLocal_49[0]);
		
			iLocal_212 = 0;
		}
	}

	return;
}

void func_249() // Position - 0x16694
{
	if (iLocal_173 > 0)
	{
		func_134();
		func_255();
		func_248();
	
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 4)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
	
		func_254();
		func_253();
	
		for (iLocal_174 = 0; iLocal_174 <= 12; iLocal_174 = iLocal_174 + 1)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, false))
				func_252(uLocal_31[iLocal_174], &uLocal_68[iLocal_174], -1, 0, false, false, -1082130432, 0, -1, -1, true, false, false);
			else
				func_133(&uLocal_68[iLocal_174]);
		}
	}

	if (iLocal_173 == 0)
	{
		if (iLocal_194 == 1)
		{
			iLocal_195 = 0;
			func_34();
			iLocal_194 = 0;
		}
	
		iLocal_197 = 0;
		uLocal_200[0] = 0;
		uLocal_200[1] = 0;
		iLocal_203 = 0;
		uLocal_204[0] = 0;
		uLocal_204[1] = 0;
		iLocal_207 = 0;
		iLocal_212 = 0;
		uLocal_213[0] = 0;
		iLocal_271 = 0;
		iLocal_272 = 0;
		iLocal_293 = 0;
		iLocal_294 = 0;
		iLocal_295 = 0;
		iLocal_296 = 0;
		iLocal_297 = 0;
		iLocal_298 = 0;
		iLocal_181 = MISC::GET_GAME_TIMER();
		iLocal_186 = MISC::GET_GAME_TIMER();
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
			ENTITY::FREEZE_ENTITY_POSITION(veLocal_46, false);
	
		func_164(1, "STAGE_ESCAPE_MILITARY", 0, 0, 0, 1);
	
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_36())
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		
			func_246(veLocal_46, -1, 1);
		}
	
		if (!CAM::IS_SCREEN_FADED_IN())
			CAM::DO_SCREEN_FADE_IN(800);
	
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENTER_CHOPPER"))
			AUDIO::START_AUDIO_SCENE("DH_P_2B_ENTER_CHOPPER");
	
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
			AUDIO::START_AUDIO_SCENE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
	
		func_251(602, false);
		PLAYER::SET_POLICE_RADAR_BLIPS(false);
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
				func_250(veLocal_46, -1);
	
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
		iLocal_195 = 1;
		iLocal_173 = 1;
	}

	if (iLocal_173 == 1)
	{
		if (uLocal_204[0] == 1)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
				HUD::REMOVE_BLIP(&uLocal_61[0]);
		
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_47[0], 0);
		
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
				AUDIO::STOP_AUDIO_SCENE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
		
			func_143(true, 602);
			func_251(600, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(veLocal_46, 1721.0015f, 3264.2483f, 38.400642f, 1765.5089f, 3276.518f, 46.053852f, 48.25f, false, true, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, false))
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							iLocal_173 = 0;
							iLocal_26 = 5;
						}
						else
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							func_30();
						}
					}
					else
					{
						iLocal_173 = 0;
						iLocal_26 = 4;
					}
				}
			}
		}
		else if (iLocal_207 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, false))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_181 + 10000)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								_SHOW_SUBTITLE_CLEAR_EXISTING("DP_GOD5", 7500, 1);
								iLocal_207 = 1;
							}
						}
					}
				}
			}
		}
	}

	return;
}

void func_250(Vehicle veParam0, int iParam1) // Position - 0x16978
{
	Global_63496 = veParam0;
	Global_63497 = iParam1;
	return;
}

void func_251(int iParam0, BOOL bParam1) // Position - 0x1698A
{
	int i;

	Global_63495 = iParam0;

	if (!Global_63493)
		Global_63493 = true;

	if (bParam1)
	{
		for (i = 0; i < Global_75580; i = i + 1)
		{
			if (Global_75581[i] == iParam0)
				Global_75581[i].f_1 = 0;
		}
	}

	return;
}

int func_252(Ped pedParam0, var uParam1, int iParam2, Player plParam3, BOOL bParam4, BOOL bParam5, int iParam6, const char* sParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12) // Position - 0x169D4
{
	BOOL flag;

	if (plParam3 == 0)
		plParam3 = PLAYER::GET_PLAYER_INDEX();

	if (iParam6 < 0f)
		iParam6 = 100f;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(pedParam0))
		{
			flag = true;
		
			if (PED::IS_PED_IN_FLYING_VEHICLE(pedParam0) && bParam11)
				flag = false;
		
			if (flag)
			{
				if (iParam8 == -1)
					HUD::SET_PED_HAS_AI_BLIP(pedParam0, true);
				else
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(pedParam0, true, iParam8);
			
				uParam1->f_7 = pedParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(pedParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(pedParam0, iParam6);
			
				if (HUD::DOES_BLIP_EXIST(*uParam1))
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
	
		if (!(iParam9 == -1))
			HUD::SET_PED_AI_BLIP_SPRITE(pedParam0, iParam9);
	
		HUD::SET_PED_AI_BLIP_FORCED_ON(pedParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(pedParam0, bParam5);
		*uParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(pedParam0);
	
		if (!(iParam9 == -1) || bParam12)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!(iParam8 == -1))
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
				
					if (bParam10)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
			
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
	
		if (!IS_BIT_SET(uParam1->f_6, 2))
			if (HUD::DOES_BLIP_EXIST(*uParam1))
				MISC::SET_BIT(&(uParam1->f_6), 2);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
		{
			uParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(pedParam0);
		
			if (!IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!(iParam8 == -1))
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					
						if (bParam10)
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						else
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
				
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}

	return 0;
}

void func_253() // Position - 0x16BC8
{
	veLocal_51 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 300f, joaat("lazer"), 4);
	veLocal_52 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 300f, joaat("lazer"), 16386);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_51) && ENTITY::IS_ENTITY_IN_AIR(veLocal_51))
	{
		if (!HUD::DOES_BLIP_EXIST(blLocal_63))
		{
			blLocal_63 = HUD::ADD_BLIP_FOR_ENTITY(veLocal_51);
			HUD::SET_BLIP_AS_FRIENDLY(blLocal_63, false);
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_52) && ENTITY::IS_ENTITY_IN_AIR(veLocal_52))
	{
		if (!HUD::DOES_BLIP_EXIST(blLocal_64))
		{
			blLocal_64 = HUD::ADD_BLIP_FOR_ENTITY(veLocal_52);
			HUD::SET_BLIP_AS_FRIENDLY(blLocal_64, false);
		}
	}

	return;
}

void func_254() // Position - 0x16C60
{
	if (iLocal_26 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, false))
				{
					uLocal_318 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_47[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_29[0]))
								{
									if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_29[0], true) < 600f)
									{
										if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_318, -75.8f, -819.9f, 326f, true) > 1600f && MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_318, -2159f, 3067f, 33f, true) < 1000f)
										{
											if (uLocal_318.f_2 > 70f)
											{
												if (iLocal_28 != 2)
												{
													uLocal_213[0] = 1;
													iLocal_28 = 2;
												}
											}
											else if (iLocal_28 != 1)
											{
												uLocal_213[0] = 1;
												iLocal_28 = 1;
											}
										
											if (iLocal_271 == 1)
											{
												if (iLocal_272 == 0)
												{
													if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
													{
														if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														{
															_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 4, 0, "PilotDispatch", 0, 1);
															_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 5, 0, "PilotDispatch2", 0, 1);
														
															if (_CONVERSATION_ADD_LINE(&uLocal_401, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
																iLocal_272 = 1;
														}
													}
												}
											}
										}
										else
										{
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_318, -75.8f, -819.9f, 326f, true) < 1600f)
											{
												if (iLocal_28 != 3)
												{
													uLocal_213[0] = 1;
													iLocal_28 = 3;
												}
											
												if (iLocal_271 == 0)
												{
													if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
													{
														if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														{
															_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 4, 0, "PilotDispatch", 0, 1);
															_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 5, 0, "PilotDispatch2", 0, 1);
														
															if (_CONVERSATION_ADD_LINE(&uLocal_401, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
																iLocal_271 = 1;
														}
													}
												}
											}
										
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_318, -2159f, 3067f, 33f, true) > 1000f)
											{
												if (iLocal_28 != 3)
												{
													uLocal_213[0] = 1;
													iLocal_28 = 3;
												}
											}
										}
									}
									else if (iLocal_28 != 4)
									{
										uLocal_213[0] = 1;
										iLocal_28 = 4;
									}
								}
							}
						}
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_318, -75.8f, -819.9f, 326f, true) > 1600f)
				{
					if (iLocal_28 != 0)
					{
						uLocal_213[0] = 1;
						iLocal_28 = 0;
					}
				
					if (iLocal_271 == 1)
					{
						if (iLocal_272 == 0)
						{
							if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 4, 0, "PilotDispatch", 0, 1);
									_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 5, 0, "PilotDispatch2", 0, 1);
								
									if (_CONVERSATION_ADD_LINE(&uLocal_401, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
										iLocal_272 = 1;
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_28 != 3)
					{
						uLocal_213[0] = 1;
						iLocal_28 = 3;
					}
				
					if (iLocal_271 == 0)
					{
						if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 4, 0, "PilotDispatch", 0, 1);
								_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 5, 0, "PilotDispatch2", 0, 1);
							
								if (_CONVERSATION_ADD_LINE(&uLocal_401, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
									iLocal_271 = 1;
							}
						}
					}
				}
			}
		}
	}

	if (uLocal_200[0] == 0)
	{
		if (iLocal_26 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_47[0], false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_29[0]))
						{
							if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_29[0], true) < 200f)
							{
								fLocal_315 = { ENTITY::GET_ENTITY_COORDS(uLocal_47[0], true) };
								TASK::CLEAR_PED_TASKS(uLocal_29[0]);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_29[0], fLocal_315, 10f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_29[0], 250f, 0);
								uLocal_200[0] = 1;
							}
						}
					}
				}
			}
		}
	
		if (iLocal_26 == 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_47[0], false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_29[0]))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_61[0]))
								uLocal_61[0] = func_138(uLocal_29[0], true, false);
						
							fLocal_315 = { ENTITY::GET_ENTITY_COORDS(uLocal_47[0], true) };
							TASK::CLEAR_PED_TASKS(uLocal_29[0]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_570);
						
							if (!PED::IS_PED_IN_VEHICLE(uLocal_29[0], uLocal_47[0], false))
								TASK::TASK_ENTER_VEHICLE(0, uLocal_47[0], 20000, -1, 1073741824, 1, 0);
						
							TASK::TASK_HELI_MISSION(0, uLocal_47[0], 0, 0, fLocal_315, fLocal_315.f_1, fLocal_315.f_2 + 20f, 4, 30f, 10f, -1f, 170, 40, -1082130432, 0);
							TASK::TASK_HELI_MISSION(0, uLocal_47[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 40, -1082130432, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_570);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_29[0], iLocal_570);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_570);
							uLocal_200[0] = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_26 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_47[0], false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_29[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_29[0], uLocal_47[0], false))
						{
							if (MISC::GET_GAME_TIMER() > iLocal_186 + 90000)
							{
								if (iLocal_295 == 0)
								{
									PED::SET_PED_ACCURACY(uLocal_29[0], 100);
									iLocal_294 = 0;
									iLocal_295 = 1;
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_186 + 10000 && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, false))
							{
								if (iLocal_295 == 0)
								{
									PED::SET_PED_ACCURACY(uLocal_29[0], 100);
									iLocal_294 = 0;
									iLocal_295 = 1;
								}
							}
							else if (iLocal_294 == 0)
							{
								PED::SET_PED_ACCURACY(uLocal_29[0], 0);
								iLocal_295 = 0;
								iLocal_294 = 1;
							}
						
							if (func_2(uLocal_47[0], PLAYER::PLAYER_PED_ID(), true) < 300f)
							{
								if (iLocal_297 == 0)
								{
									WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(uLocal_29[0], joaat("VEHICLE_WEAPON_SPACE_ROCKET"));
									PED::SET_PED_FIRING_PATTERN(uLocal_29[0], joaat("FIRING_PATTERN_BURST_FIRE_HELI"));
									iLocal_296 = 0;
									iLocal_297 = 1;
								}
							}
							else if (iLocal_296 == 0)
							{
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(uLocal_29[0], joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
								PED::SET_PED_FIRING_PATTERN(uLocal_29[0], joaat("FIRING_PATTERN_SINGLE_SHOT"));
								iLocal_297 = 0;
								iLocal_296 = 1;
							}
						}
					}
				}
			}
		}
	
		if (iLocal_203 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_47[0], false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_29[0]))
						{
							if (PED::IS_PED_IN_VEHICLE(uLocal_29[0], uLocal_47[0], false))
							{
								PED::SET_PED_ACCURACY(uLocal_29[0], 0);
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(uLocal_29[0], joaat("VEHICLE_WEAPON_SPACE_ROCKET"));
								iLocal_203 = 1;
							}
						}
					}
				}
			}
		}
	
		switch (iLocal_28)
		{
			case 0:
				if (uLocal_213[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_47[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_29[0]))
								{
									TASK::TASK_HELI_MISSION(uLocal_29[0], uLocal_47[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 15, 10, -1082130432, 0);
									uLocal_213[0] = 0;
								}
							}
						}
					}
				}
				break;
		
			case 1:
				if (uLocal_213[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_47[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_29[0]))
								{
									TASK::TASK_HELI_MISSION(uLocal_29[0], uLocal_47[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 50, 20, -1082130432, 0);
									uLocal_213[0] = 0;
								}
							}
						}
					}
				}
				break;
		
			case 2:
				if (uLocal_213[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_47[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_29[0]))
								{
									TASK::TASK_HELI_MISSION(uLocal_29[0], uLocal_47[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 70, -1082130432, 0);
									uLocal_213[0] = 0;
								}
							}
						}
					}
				}
				break;
		
			case 3:
				if (uLocal_213[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_47[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_29[0]))
								{
									TASK::TASK_HELI_MISSION(uLocal_29[0], uLocal_47[0], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_47[0], 20f, 0f, 0f), 4, 10f, 10f, ENTITY::GET_ENTITY_HEADING(uLocal_47[0]), SYSTEM::ROUND(ENTITY::GET_ENTITY_HEIGHT(uLocal_47[0], ENTITY::GET_ENTITY_COORDS(uLocal_47[0], true), true, true)), 100, -1082130432, 0);
									uLocal_213[0] = 0;
								}
							}
						}
					}
				}
			
				if (iLocal_293 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_318, -2159f, 3067f, 33f, true) > 1000f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_47[0], false))
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
								{
									if (!PED::IS_PED_INJURED(uLocal_29[0]))
									{
										TASK::TASK_HELI_MISSION(uLocal_29[0], uLocal_47[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 170, 70, -1082130432, 0);
										iLocal_293 = 1;
									}
								}
							}
						}
					}
				}
				break;
		
			case 4:
				if (uLocal_213[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_47[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_29[0]))
								{
									TASK::TASK_HELI_MISSION(uLocal_29[0], uLocal_47[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, 50f, -1f, 200, 170, -1082130432, 0);
									uLocal_213[0] = 0;
								}
							}
						}
					}
				}
				break;
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
	{
		if (PED::IS_PED_INJURED(uLocal_29[0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
				HUD::REMOVE_BLIP(&uLocal_61[0]);
		
			uLocal_204[0] = 1;
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
			HUD::REMOVE_BLIP(&uLocal_61[0]);
	
		uLocal_204[0] = 1;
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_47[0], false))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
				HUD::REMOVE_BLIP(&uLocal_61[0]);
		
			uLocal_204[0] = 1;
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
			HUD::REMOVE_BLIP(&uLocal_61[0]);
	
		uLocal_204[0] = 1;
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_47[0], false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
			{
				if (!PED::IS_PED_INJURED(uLocal_29[0]))
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_29[0], uLocal_47[0], false))
						if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
							HUD::SET_BLIP_SCALE(uLocal_61[0], 1f);
				
					if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_29[0], true) > 600f)
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
							HUD::REMOVE_BLIP(&uLocal_61[0]);
					
						uLocal_204[0] = 1;
					}
				}
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_29[0]))
	{
		if (!PED::IS_PED_INJURED(uLocal_29[0]))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(uLocal_29[0]))
			{
				TASK::CLEAR_PED_TASKS(uLocal_29[0]);
				ENTITY::SET_ENTITY_HEALTH(uLocal_29[0], 0, 0);
			
				if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
					HUD::REMOVE_BLIP(&uLocal_61[0]);
			
				uLocal_204[0] = 1;
			}
		}
	}

	return;
}

void func_255() // Position - 0x1776C
{
	if (iLocal_208 == 0)
		if (func_256(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 0, false) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1601.5138f, 2794.1477f, 14.84222f, -1587.6917f, 2806.1013f, 20.295572f, 16f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1598.2782f, 2803.9797f, 17.017721f, -1665.9796f, 2895.3977f, 34.589527f, 14.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1648.5542f, 2873.74f, 24.850174f, -1673.8643f, 2889.6978f, 38.188564f, 14.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1647.446f, 2873.9688f, 24.82373f, -1667.3163f, 2914.302f, 39.394775f, 14.5f, false, true, 0))
			iLocal_208 = 1;

	if (iLocal_208 == 1)
		if (!func_256(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 0, false) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1601.5138f, 2794.1477f, 14.84222f, -1587.6917f, 2806.1013f, 20.295572f, 16f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1598.2782f, 2803.9797f, 17.017721f, -1665.9796f, 2895.3977f, 34.589527f, 14.5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1648.5542f, 2873.74f, 24.850174f, -1673.8643f, 2889.6978f, 38.188564f, 14.5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1647.446f, 2873.9688f, 24.82373f, -1667.3163f, 2914.302f, 39.394775f, 14.5f, false, true, 0))
			iLocal_208 = 0;

	if (iLocal_199 == 1)
	{
		if (iLocal_208 == 1 || iLocal_287 == 1 || iLocal_300 == 1 || iLocal_209 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 4)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		
			for (iLocal_174 = 0; iLocal_174 <= 12; iLocal_174 = iLocal_174 + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[iLocal_174]))
				{
					if (!PED::IS_PED_INJURED(uLocal_31[iLocal_174]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, false) || iLocal_210 == 1)
								{
									if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[iLocal_174], true) < 39f)
									{
										if (uLocal_215[iLocal_174] == 0)
										{
											TASK::CLEAR_PED_TASKS(uLocal_31[iLocal_174]);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_31[iLocal_174], ENTITY::GET_ENTITY_COORDS(uLocal_31[iLocal_174], true), 50f, false, false);
											TASK::TASK_COMBAT_PED(uLocal_31[iLocal_174], PLAYER::PLAYER_PED_ID(), 0, 16);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_31[iLocal_174], BF_0xDA8C2BD3, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_31[iLocal_174], BF_SwitchToAdvanceIfCantFindCover, true);
											uLocal_229[iLocal_174] = 0;
											uLocal_243[iLocal_174] = 0;
											uLocal_257[iLocal_174] = 0;
											uLocal_215[iLocal_174] = 1;
										}
									}
									else if (uLocal_229[iLocal_174] == 0)
									{
										TASK::CLEAR_PED_TASKS(uLocal_31[iLocal_174]);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_570);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(veLocal_46, true), 2f, -1, 20f, 0, 1193033728);
										TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_570);
										TASK::TASK_PERFORM_SEQUENCE(uLocal_31[iLocal_174], iLocal_570);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_570);
										uLocal_243[iLocal_174] = 0;
										uLocal_257[iLocal_174] = 0;
										uLocal_215[iLocal_174] = 0;
										uLocal_229[iLocal_174] = 1;
									}
								}
								else
								{
									if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[iLocal_174], true) < 39f)
									{
										if (uLocal_243[iLocal_174] == 0)
										{
											TASK::CLEAR_PED_TASKS(uLocal_31[iLocal_174]);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_31[iLocal_174], ENTITY::GET_ENTITY_COORDS(uLocal_31[iLocal_174], true), 50f, false, false);
											TASK::TASK_COMBAT_PED(uLocal_31[iLocal_174], PLAYER::PLAYER_PED_ID(), 0, 16);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_31[iLocal_174], BF_0xDA8C2BD3, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_31[iLocal_174], BF_SwitchToAdvanceIfCantFindCover, true);
											uLocal_229[iLocal_174] = 0;
											uLocal_257[iLocal_174] = 0;
											uLocal_215[iLocal_174] = 0;
											uLocal_243[iLocal_174] = 1;
										}
									}
								
									if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[iLocal_174], true) > 41f && func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[iLocal_174], true) < 400f)
									{
										if (uLocal_257[iLocal_174] == 0)
										{
											iLocal_193 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
											TASK::CLEAR_PED_TASKS(uLocal_31[iLocal_174]);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_31[iLocal_174], ENTITY::GET_ENTITY_COORDS(uLocal_31[iLocal_174], true), 50f, false, false);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_570);
										
											if (iLocal_193 == 0)
											{
												TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 25f, 1073741824, 1073741824, 0);
											}
											else if (iLocal_193 == 1)
											{
												TASK::TASK_STAND_STILL(0, 500);
												TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 25f, 1073741824, 1073741824, 0);
											}
											else if (iLocal_193 == 2)
											{
												TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 25f, 3f, 1073741824, 0);
											}
											else if (iLocal_193 == 3)
											{
												TASK::TASK_STAND_STILL(0, 500);
												TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 25f, 3f, 1073741824, 0);
											}
										
											TASK::CLOSE_SEQUENCE_TASK(iLocal_570);
											TASK::TASK_PERFORM_SEQUENCE(uLocal_31[iLocal_174], iLocal_570);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_570);
											uLocal_229[iLocal_174] = 0;
											uLocal_243[iLocal_174] = 0;
											uLocal_215[iLocal_174] = 0;
											uLocal_257[iLocal_174] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	
		if (iLocal_208 == 0 && iLocal_287 == 0 && iLocal_300 == 0 && iLocal_209 == 0)
		{
			for (iLocal_191 = 0; iLocal_191 <= 1; iLocal_191 = iLocal_191 + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[iLocal_191]))
				{
					if (!PED::IS_PED_INJURED(uLocal_31[iLocal_191]))
					{
						if (func_2(uLocal_31[iLocal_191], PLAYER::PLAYER_PED_ID(), true) < 25f)
						{
							if (uLocal_290[iLocal_191] == 0)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_31[iLocal_191]))
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_31[iLocal_191]);
								else
									TASK::CLEAR_PED_TASKS(uLocal_31[iLocal_191]);
							
								TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_31[iLocal_191], PLAYER::PLAYER_PED_ID(), -1, false);
								uLocal_290[iLocal_191] = 1;
							}
						
							if (iLocal_301 == 1)
								if (MISC::GET_GAME_TIMER() > iLocal_189 + 20000)
									iLocal_300 = 1;
						}
						else if (func_2(uLocal_31[iLocal_191], PLAYER::PLAYER_PED_ID(), true) > 30f)
						{
							if (uLocal_290[iLocal_191] == 1)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_31[iLocal_191]))
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_31[iLocal_191]);
								else
									TASK::CLEAR_PED_TASKS(uLocal_31[iLocal_191]);
							
								TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_31[iLocal_191], PLAYER::PLAYER_PED_ID(), 1, false);
								uLocal_290[iLocal_191] = 0;
							}
						}
					}
				}
			}
		}
	}

	return;
}

BOOL func_256(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x17DF6
{
	var unk;
	var unk2;
	var unk3;
	int unk4;
	int unk5;
	BOOL unk6;
	int unk7;

	unk = 15;
	unk47 = 15;
	unk93 = 15;
	debug = false;

	switch (iParam3)
	{
		case 1:
			unk[0] = { -1332.2113f, 100.46083f, 40.384373f };
			unk47[0] = { -1094.2382f, 148.42744f, 73f };
			unk93[0] = 171.25f;
			unk[1] = { -999.7344f, -110.22309f, 25.257057f };
			unk47[1] = { -1149.4938f, 109.25583f, 73f };
			unk93[1] = 132f;
			unk[2] = { -1035.1129f, -84.958855f, 28.274601f };
			unk47[2] = { -1261.1031f, 50.081482f, 73f };
			unk93[2] = 132f;
			num = 3;
			break;
	
		case 2:
			unk[0] = { -804.3439f, -3346.5005f, 10f };
			unk47[0] = { -1816.9539f, -2768.8933f, (float)250 + iParam4 };
			unk93[0] = 247f;
			unk[1] = { -1911.4879f, -2934.197f, 10f };
			unk47[1] = { -968.6236f, -3477.7476f, (float)250 + iParam4 };
			unk93[1] = 149f;
			unk[2] = { -844.9433f, -2802.7852f, 10f };
			unk47[2] = { -1011.08105f, -3086.9038f, (float)250 + iParam4 };
			unk93[2] = 185.5f;
			unk[3] = { -1021.0861f, -2952.277f, 10f };
			unk47[3] = { -1599.0082f, -2616.2705f, (float)250 + iParam4 };
			unk93[3] = 250f;
			unk[4] = { -1027.1364f, -2436.457f, 10f };
			unk47[4] = { -1392.6105f, -2226.7634f, (float)250 + iParam4 };
			unk93[4] = 193.5f;
			unk[5] = { -1497.5493f, -2408.7122f, 10f };
			unk47[5] = { -1136.9174f, -2617.9546f, (float)250 + iParam4 };
			unk93[5] = 234.5f;
			unk[6] = { -982.79236f, -2831.7087f, 12.93313f };
			unk47[6] = { -966.46765f, -2803.458f, 16.68313f };
			unk93[6] = 16f;
			unk[7] = { -1110.0831f, -3496.8057f, 12f };
			unk47[7] = { -1955.2982f, -3010.4314f, (float)250 + iParam4 };
			unk93[7] = 80f;
			unk[8] = { -1886.8994f, -3193.0237f, 12f };
			unk47[8] = { -1836.143f, -3105.2683f, (float)250 + iParam4 };
			unk93[8] = 142f;
			unk[9] = { -1134.3367f, -3535.6482f, 12f };
			unk47[9] = { -1259.6486f, -3463.4863f, (float)250 + iParam4 };
			unk93[9] = 30.75f;
			unk[10] = { -969.12787f, -3463.8994f, 12f };
			unk47[10] = { -896.3734f, -3505.7148f, (float)250 + iParam4 };
			unk93[10] = 150f;
			unk[11] = { -1369.4913f, -2173.5789f, 10f };
			unk47[11] = { -1685.6256f, -2720.3635f, (float)250 + iParam4 };
			unk93[11] = 29.25f;
			unk[12] = { -1010.9256f, -3550.9434f, 10f };
			unk47[12] = { -1110.1978f, -3493.6172f, (float)250 + iParam4 };
			unk93[12] = 43f;
			num = 13;
			break;
	
		case 3:
			unk[0] = { -1773.944f, 3287.3342f, 30f };
			unk47[0] = { -2029.7765f, 2845.0833f, (float)250 + iParam4 };
			unk93[0] = 255f;
			unk[1] = { -2725.8894f, 3291.0986f, 30f };
			unk47[1] = { -2009.1815f, 2879.8352f, (float)250 + iParam4 };
			unk93[1] = 180f;
			unk[2] = { -2442.0261f, 3326.6987f, 30f };
			unk47[2] = { -2033.9279f, 3089.0488f, (float)250 + iParam4 };
			unk93[2] = 205f;
			unk[3] = { -1917.1654f, 3374.209f, 30f };
			unk47[3] = { -2016.7909f, 3195.058f, (float)250 + iParam4 };
			unk93[3] = 86.25f;
			unk[4] = { -2192.753f, 3373.2778f, 30f };
			unk47[4] = { -2191.5444f, 3150.4165f, (float)250 + iParam4 };
			unk93[4] = 150.5f;
			unk[5] = { -2077.6633f, 3344.5142f, 30f };
			unk47[5] = { -2191.5444f, 3150.4165f, (float)250 + iParam4 };
			unk93[5] = 140.5f;
			unk[6] = { -2861.7554f, 3352.6606f, 30f };
			unk47[6] = { -2715.8708f, 3269.9155f, (float)250 + iParam4 };
			unk93[6] = 90f;
			unk[7] = { -2005.5745f, 3364.5327f, 30f };
			unk47[7] = { -1977.5688f, 3330.8882f, (float)250 + iParam4 };
			unk93[7] = 100f;
			unk[8] = { -1682.235f, 3004.2852f, 30f };
			unk47[8] = { -1942.747f, 2947.4412f, (float)250 + iParam4 };
			unk93[8] = 248.75f;
			unk[9] = { -2393.2954f, 2936.406f, 31.680103f };
			unk47[9] = { -2453.0366f, 3006.863f, 52.310028f };
			unk93[9] = 128f;
			unk[10] = { -2347.1848f, 3023.8298f, 31.56573f };
			unk47[10] = { -2517.3298f, 2989.0635f, 49.956444f };
			unk93[10] = 140f;
			unk[11] = { -2259.9219f, 3358.0398f, 29.999718f };
			unk47[11] = { -2299.772f, 3385.79f, 38.060143f };
			unk93[11] = 16f;
			unk[12] = { -2476.3093f, 3363.914f, 31.679329f };
			unk47[12] = { -2431.9807f, 3287.6694f, 39.978264f };
			unk93[12] = 214.25f;
			unk[13] = { -2103.0813f, 2797.7834f, 29.37864f };
			unk47[13] = { -2096.8213f, 2874.4233f, 57.80989f };
			unk93[13] = 65.75f;
		
			if (bParam5)
				num2 = iParam4;
			else
				num2 = 0;
		
			unk47[9].f_2 = unk47[9].f_2 + (float)num2;
			unk47[10].f_2 = unk47[10].f_2 + (float)num2;
			unk47[11].f_2 = unk47[11].f_2 + (float)num2;
			unk47[12].f_2 = unk47[12].f_2 + (float)num2;
			unk47[13].f_2 = unk47[13].f_2 + (float)num2;
			num = 14;
			break;
	
		case 4:
			unk[0] = { 1541.6072f, 2527.555f, 40f };
			unk47[0] = { 1815.5753f, 2535.0596f, (float)150 + iParam4 };
			unk93[0] = 114f;
			unk[1] = { 1788.8787f, 2445.7273f, 40f };
			unk47[1] = { 1716.9603f, 2502.957f, (float)150 + iParam4 };
			unk93[1] = 88.5f;
			unk[2] = { 1601.1575f, 2436.2441f, 40f };
			unk47[2] = { 1650.0776f, 2515.9226f, (float)150 + iParam4 };
			unk93[2] = 133.25f;
			unk[3] = { 1706.3307f, 2407.5972f, 40f };
			unk47[3] = { 1698.5546f, 2460.2078f, (float)150 + iParam4 };
			unk93[3] = 104.5f;
			unk[4] = { 1712.4517f, 2756.2175f, 40f };
			unk47[4] = { 1718.8477f, 2589.1616f, (float)150 + iParam4 };
			unk93[4] = 121.75f;
			unk[5] = { 1830.2278f, 2661.2402f, 40f };
			unk47[5] = { 1774.8124f, 2679.4187f, (float)150 + iParam4 };
			unk93[5] = 84.5f;
			unk[6] = { 1559.0503f, 2632.2205f, 40f };
			unk47[6] = { 1657.2083f, 2595.4844f, (float)150 + iParam4 };
			unk93[6] = 103.75f;
			unk[7] = { 1612.0209f, 2716.869f, 40f };
			unk47[7] = { 1657.1647f, 2669.721f, (float)150 + iParam4 };
			unk93[7] = 104.25f;
			unk[8] = { 1809.8721f, 2729.827f, 40f };
			unk47[8] = { 1789.8551f, 2705.0369f, (float)150 + iParam4 };
			unk93[8] = 91f;
			unk[9] = { 1818.7888f, 2605.9478f, 40f };
			unk47[9] = { 1783.1143f, 2606.7832f, (float)150 + iParam4 };
			unk93[9] = 51.25f;
			num = 10;
			break;
	
		case 5:
			unk[0] = { 3411.002f, 3663.1846f, 20f };
			unk47[0] = { 3615.583f, 3626.1936f, (float)40 + iParam4 };
			unk93[0] = 45.75f;
			unk[1] = { 3426.66f, 3733.078f, 20f };
			unk47[1] = { 3643.8008f, 3694.3618f, (float)40 + iParam4 };
			unk93[1] = 99f;
			unk[2] = { 3446.0364f, 3795.6882f, 20f };
			unk47[2] = { 3650.9143f, 3766.1516f, (float)40 + iParam4 };
			unk93[2] = 81.5f;
			num = 3;
			break;
	
		case 6:
			unk[0] = { 526.05304f, -3391.4968f, -10f };
			unk47[0] = { 523.22894f, -3118.678f, (float)10 + iParam4 };
			unk93[0] = 120f;
			unk[1] = { 459.4397f, -3199.9895f, 4.819676f };
			unk47[1] = { 593.89276f, -3199.998f, 30.069256f };
			unk93[1] = 170f;
			unk[2] = { 552.8467f, -3111.0537f, 4.819394f };
			unk47[2] = { 585.3137f, -3111.8442f, 17.569231f };
			unk93[2] = 12.5f;
			unk[3] = { 598.46655f, -3140.1475f, 4.819257f };
			unk47[3] = { 597.4973f, -3117.0627f, 17.319258f };
			unk93[3] = 9.75f;
			num = 4;
			break;
	
		case 7:
			unk[0] = { -1108.5497f, -570.87976f, 20f };
			unk47[0] = { -1187.8108f, -477.50366f, (float)50 + iParam4 };
			unk93[0] = 162f;
			unk[1] = { -1201.3776f, -485.96732f, 20f };
			unk47[1] = { -1215.7959f, -464.82806f, (float)50 + iParam4 };
			unk93[1] = 124f;
			unk[2] = { -985.6311f, -525.42334f, 20f };
			unk47[2] = { -1013.3932f, -475.20575f, (float)50 + iParam4 };
			unk93[2] = 55f;
			unk[3] = { -1055.8492f, -477.8226f, 20f };
			unk47[3] = { -1073.3325f, -498.717f, (float)50 + iParam4 };
			unk93[3] = 142f;
			num = 4;
			break;
	
		case 8:
			unk[0] = { 461.5684f, -984.57196f, 29.439508f };
			unk47[0] = { 471.17004f, -984.4292f, 40.14212f };
			unk93[0] = 7.75f;
			unk[1] = { 457.3404f, -984.75604f, 34.439507f };
			unk47[1] = { 457.20837f, -993.71893f, 29.389584f };
			unk93[1] = 14.75f;
			unk[2] = { 477.62268f, -986.60004f, 40.00819f };
			unk47[2] = { 424.8687f, -986.3279f, 48.712406f };
			unk93[2] = 31.5f;
			unk[3] = { 474.38895f, -974.4613f, 39.557606f };
			unk47[3] = { 474.0358f, -1021.9721f, 49.10033f };
			unk93[3] = 30.5f;
			unk[4] = { 442.17685f, -974.1888f, 29.689508f };
			unk47[4] = { 442.18552f, -979.8635f, 33.439507f };
			unk93[4] = 6.75f;
			num = 5;
			break;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, unk[i], unk47[i], unk93[i], debug, true))
			return true;
	}

	return false;
}

void func_257() // Position - 0x18B4C
{
	if (iLocal_173 > 0)
	{
		func_134();
		func_255();
		func_254();
	}

	if (iLocal_173 == 0)
	{
		if (iLocal_194 == 1)
		{
			iLocal_195 = 0;
			func_34();
			iLocal_194 = 0;
		}
	
		iLocal_196 = 0;
		iLocal_199 = 0;
		uLocal_200[0] = 0;
		uLocal_200[1] = 0;
		iLocal_208 = 0;
		iLocal_209 = 0;
		iLocal_210 = 0;
		iLocal_288 = 0;
		iLocal_289 = 0;
		uLocal_290[0] = 0;
		uLocal_290[1] = 0;
		iLocal_300 = 0;
		iLocal_301 = 0;
		iLocal_304 = 0;
		iLocal_305 = 0;
		iLocal_308 = 0;
		iLocal_189 = 0;
	
		for (iLocal_174 = 0; iLocal_174 <= 12; iLocal_174 = iLocal_174 + 1)
		{
			uLocal_215[iLocal_174] = 0;
			uLocal_229[iLocal_174] = 0;
			uLocal_243[iLocal_174] = 0;
			uLocal_257[iLocal_174] = 0;
		}
	
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		AUDIO::PREPARE_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
		iLocal_180 = MISC::GET_GAME_TIMER();
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("lazer"), true);
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Marine_01"));
		STREAMING::REQUEST_MODEL(joaat("S_M_M_Pilot_02"));
	
		if (!ENTITY::DOES_ENTITY_EXIST(veLocal_46))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_97310[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97310[0], false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[0], true, true);
					veLocal_46 = Global_97310[0];
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(veLocal_46, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_46, true, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), true);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(veLocal_46, false);
					VEHICLE::SET_VEHICLE_STRONG(veLocal_46, true);
					func_118(veLocal_46, 0);
				}
			}
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_97310[1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97310[1], false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[1], true, true);
					uLocal_47[0] = Global_97310[1];
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(uLocal_47[0], true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_47[0], true, 1);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_47[0], false);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_47[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_47[0], false);
				}
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(Global_97310[2]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97310[2], false))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Global_97310[2])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[2], true, true);
					func_265(1734.799f, 3234.8335f, 40.7041f, 321.0399f, 0, 145);
				}
			
				if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_97310[2])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_97310[2])) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(Global_97310[2])) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(Global_97310[2])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[2], true, true);
					func_265(1748.0499f, 3294.7f, 40.106f, 204.2419f, 0, 145);
				}
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310.f_9[0], true, true);
			uLocal_31[0] = Global_97310.f_9[0];
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310.f_9[1], true, true);
			uLocal_31[1] = Global_97310.f_9[1];
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
			ENTITY::FREEZE_ENTITY_POSITION(veLocal_46, false);
	
		AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", true);
	
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_36())
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		
			func_246(veLocal_53, -1, 1);
		}
	
		if (!CAM::IS_SCREEN_FADED_IN())
			CAM::DO_SCREEN_FADE_IN(800);
	
		func_264(PLAYER::PLAYER_PED_ID(), -1);
		func_263(73);
		iLocal_195 = 1;
		iLocal_173 = 1;
	}

	if (iLocal_173 == 1)
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_GUARD"))
			if (TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_GUARD"))
				TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_GUARD", false);
	
		func_115();
	
		if (iLocal_209 == 0)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_180 + 3000)
			{
				for (iLocal_182 = 0; iLocal_182 <= 12; iLocal_182 = iLocal_182 + 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[iLocal_182]))
					{
						if (!PED::IS_PED_INJURED(uLocal_31[iLocal_182]))
						{
							if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[iLocal_182], true) < 40f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_31[iLocal_182], PLAYER::PLAYER_PED_ID()))
								{
									if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
									{
										AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
										AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", true, true);
										iLocal_209 = 1;
									}
								
									if (iLocal_208 == 1)
									{
										AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
										AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", true, true);
										iLocal_209 = 1;
									}
								
									if (iLocal_305 == 0)
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_262(0))
										{
											if (func_261(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED"))
											{
												iLocal_192 = MISC::GET_GAME_TIMER();
												iLocal_305 = 1;
											}
										}
									}
									else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_262(0))
									{
										if (func_261(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED"))
										{
											if (MISC::GET_GAME_TIMER() > iLocal_192 + 3000)
											{
												AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
												AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", true, true);
												iLocal_209 = 1;
											}
										}
										else if (iLocal_304 == 0)
										{
											iLocal_305 = 0;
											iLocal_304 = 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	
		if (iLocal_196 == 0)
		{
			HUD::CLEAR_PRINTS();
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
			_SHOW_SUBTITLE_CLEAR_EXISTING("DP_GOD2", 7500, 1);
			iLocal_196 = 1;
		}
	
		if (iLocal_208 == 1)
			if (!func_260(5))
				func_259(5);
		else if (func_260(5))
			func_258(5);
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
			{
				if (func_2(PLAYER::PLAYER_PED_ID(), veLocal_46, true) < 30f)
					iLocal_210 = 1;
			
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, false))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), -1, false, true);
					iLocal_173 = 0;
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 4);
					iLocal_26 = 3;
				}
			}
		}
	}

	return;
}

void func_258(int iParam0) // Position - 0x190B2
{
	MISC::CLEAR_BIT(&Global_96668, iParam0);
	return;
}

void func_259(int iParam0) // Position - 0x190C4
{
	MISC::SET_BIT(&Global_96668, iParam0);
	return;
}

BOOL func_260(int iParam0) // Position - 0x190D6
{
	return IS_BIT_SET(Global_96668, iParam0);
}

int func_261(Ped pedParam0) // Position - 0x190E5
{
	int weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);
	return weaponHash;
}

BOOL func_262(int iParam0) // Position - 0x190F9
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

void func_263(int iParam0) // Position - 0x19150
{
	if (Global_97735 != -1)
	{
		if (iParam0 == Global_97735)
		{
			Global_97739 = 1;
			return;
		}
	}

	return;
}

void func_264(Ped pedParam0, int iParam1) // Position - 0x19174
{
	int i;

	Global_63498 = pedParam0;

	for (i = 0; i < Global_75580; i = i + 1)
	{
		if (iParam1 == -1 || Global_75581[i] == iParam1)
		{
			if (Global_75581[i].f_6 != pedParam0)
			{
				Global_75581[i].f_6 = pedParam0;
				Global_75581[i].f_7 = 1;
				Global_75581[i].f_8 = 0;
			}
		}
	}

	return;
}

void func_265(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5) // Position - 0x191DF
{
	var unk;
	float unk2;

	if (ENTITY::DOES_ENTITY_EXIST(Global_104373.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_104373.f_4, false))
		{
			if (func_274(24) != Global_104373.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_271(ENTITY::GET_ENTITY_COORDS(Global_104373.f_4, true), iParam5, &unk, &num))
					{
						fParam0 = { unk };
						fParam3 = num;
					}
				}
			
				func_266(Global_104373.f_4, fParam0, fParam3, 24, false);
			}
		}
	}

	return;
}

void func_266(Vehicle veParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, BOOL bParam6) // Position - 0x1925A
{
	var unk;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (iParam5 != 24 && iParam5 != 25)
			return;
	
		if (iParam5 == 24)
			if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[25], false))
				if (Global_77479.f_484[25] == veParam0)
					return;
	
		if (!bParam6)
			if (VEHICLE::IS_BIG_VEHICLE(veParam0) || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("bus") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("tourbus"))
				return;
	
		func_270(iParam5);
		unk.f_9 = 49;
		unk.f_59 = 2;
		func_41(veParam0, &unk);
	
		if (func_8(uParam1, 0f, 0f, 0f, false))
		{
			uParam1 = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(veParam0);
		}
	
		if (iParam5 == 24)
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
				Global_78467 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	
		func_268(iParam5, &unk, uParam1, fParam4, func_64(veParam0));
		func_267(iParam5, veParam0, 0);
	}

	return;
}

void func_267(int iParam0, Vehicle veParam1, int iParam2) // Position - 0x19383
{
	Vehicle vehicle;

	if (iParam0 == -1)
		return;

	if (!func_74(&Global_77479.f_555[0], iParam0))
		return;

	if (!IS_BIT_SET(Global_77479.f_555[0].f_9, 12) && !IS_BIT_SET(Global_77479.f_555[0].f_9, 10))
		if (Global_77479.f_555[0].f_4 != ENTITY::GET_ENTITY_MODEL(veParam1))
			return;

	if (Global_78386 != -1 && Global_78386 != iParam0)
		return;

	if (ENTITY::DOES_ENTITY_EXIST(veParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(veParam1))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veParam1, true, true);
		
			if (iParam0 == 24)
				G_MissionStats.f_32752.f_4801 = func_223();
		
			if (veParam1 != Global_77479.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					vehicle = func_274(iParam0);
				
					if (ENTITY::DOES_ENTITY_EXIST(vehicle) && VEHICLE::IS_VEHICLE_DRIVEABLE(vehicle, false) && veParam1 != vehicle)
						func_40(vehicle, _CHAR_NULL);
				}
			
				Global_78385 = veParam1;
				Global_78386 = iParam0;
				Global_78387 = iParam2;
			}
		}
	}

	return;
}

void func_268(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, eCharacter echParam6) // Position - 0x1949A
{
	if (func_74(&Global_77479.f_555[0], iParam0))
	{
		if (IS_BIT_SET(Global_77479.f_555[0].f_9, 10))
		{
			func_269(iParam0);
			func_71(uParam1, &G_MissionStats.f_32752.f_69[Global_77479.f_555[0].f_14]);
		
			if (IS_BIT_SET(Global_77479.f_555[0].f_9, 11))
			{
				G_MissionStats.f_32752.f_1864[Global_77479.f_555[0].f_14] = { uParam2 };
				G_MissionStats.f_32752.f_1934[Global_77479.f_555[0].f_14] = fParam5;
			}
			else
			{
				G_MissionStats.f_32752.f_1864[Global_77479.f_555[0].f_14] = { 0f, 0f, 0f };
				G_MissionStats.f_32752.f_1934[Global_77479.f_555[0].f_14] = -1f;
			}
		
			G_MissionStats.f_32752.f_1958[Global_77479.f_555[0].f_14] = echParam6 + 1;
			func_67(iParam0, true);
		}
	}

	return;
}

void func_269(int iParam0) // Position - 0x19593
{
	if (iParam0 == -1)
		return;

	if (func_74(&Global_77479.f_555[0], iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_77479.f_139[iParam0]);
			Global_77479.f_139[iParam0] = 0;
		}
	
		if (IS_BIT_SET(Global_77479.f_555[0].f_9, 13))
			func_67(iParam0, false);
	}

	return;
}

void func_270(int iParam0) // Position - 0x1960A
{
	iParam0 != 24 && iParam0 != 25;
	func_269(iParam0);
	func_67(iParam0, false);
	return;
}

BOOL func_271(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5) // Position - 0x19631
{
	int num;

	num = func_272(uParam0, iParam3, 1);

	switch (num)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return true;
	
		case 1:
		case 2:
			*uParam4 = { 1992.5234f, 3813.9158f, 31.1008f };
			*uParam5 = 122.1498f;
			return true;
	
		case 3:
			*uParam4 = { -1184.2582f, -1496.5555f, 3.3895f };
			*uParam5 = 303.2098f;
			return true;
	
		case 4:
			*uParam4 = { 118.1067f, -1325.9058f, 28.3706f };
			*uParam5 = 123.5016f;
			return true;
	
		case 5:
			*uParam4 = { -18.118f, -1455.1265f, 29.5004f };
			*uParam5 = 273.2822f;
			return true;
	
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.46439f };
			*uParam5 = 310.7556f;
			return true;
	
		default:
			break;
	}

	return false;
}

int func_272(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0x19747
{
	int i;
	float distanceBetweenCoords;
	float num;
	int num2;

	num = 1000000f;
	num2 = 10;

	for (i = 0; i <= 10 - 1; i = i + 1)
	{
		if (Global_95851[i].f_7 != 263)
		{
			if (Global_95851[i].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_273(i) || iParam4 == 0)
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_95851[i].f_3, true);
				
					if (distanceBetweenCoords < num)
					{
						num = distanceBetweenCoords;
						num2 = i;
					}
				}
			}
		}
	}

	return num2;
}

BOOL func_273(int iParam0) // Position - 0x197D6
{
	return IS_BIT_SET(G_MissionStats.f_7232[iParam0], 0);
}

Vehicle func_274(int iParam0) // Position - 0x197EB
{
	if (iParam0 == -1)
		return 0;

	return Global_77479.f_139[iParam0];
}

void func_275() // Position - 0x19807
{
	if (iLocal_173 == 0)
	{
		func_279(DT_PoliceAutomobile, false);
		func_279(DT_PoliceHelicopter, false);
		func_279(DT_PoliceVehicleRequest, false);
		func_279(DT_PoliceRoadBlock, false);
		func_279(DT_PoliceAutomobileWaitPulledOver, false);
		func_279(DT_PoliceAutomobileWaitCruising, false);
		func_279(DT_SwatAutomobile, false);
		func_279(DT_SwatHelicopter, false);
		PED::ADD_RELATIONSHIP_GROUP("MarineGroupHash", &hLocal_58);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_58, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("ARMY"), joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_58, joaat("ARMY"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("ARMY"), hLocal_58);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), hLocal_58);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_58, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), joaat("ARMY"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("ARMY"), joaat("COP"));
	
		if (_IS_MISSION_REPLAY_IN_PROGRESS())
		{
			if (Global_94990 == 1)
			{
				if (func_278() == 0)
				{
					func_277(uLocal_309, fLocal_321, 1, 0);
					iLocal_194 = 1;
					iLocal_173 = 0;
					iLocal_26 = 3;
				}
			
				if (func_278() == 1)
				{
					func_277(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 0);
					iLocal_194 = 1;
					iLocal_173 = 0;
					iLocal_26 = 4;
				}
			
				if (func_278() == 2)
					func_276();
			}
			else
			{
				if (func_278() == 0)
				{
					func_277(-1565.0836f, 2780.813f, 16.4022f, 53.6086f, 1, 0);
					iLocal_194 = 1;
					iLocal_173 = 0;
					iLocal_26 = 2;
				}
			
				if (func_278() == 1)
				{
					func_277(uLocal_309, fLocal_321, 1, 0);
					iLocal_194 = 1;
					iLocal_173 = 0;
					iLocal_26 = 3;
				}
			
				if (func_278() == 2)
				{
					func_277(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 0);
					iLocal_194 = 1;
					iLocal_173 = 0;
					iLocal_26 = 4;
				}
			}
		}
		else if (_IS_MISSION_REPEAT_ACTIVE(false))
		{
			func_277(-1565.0836f, 2780.813f, 16.4022f, 53.6086f, 1, 0);
			iLocal_194 = 1;
			iLocal_173 = 0;
			iLocal_26 = 2;
		}
		else
		{
			iLocal_173 = 0;
			iLocal_26 = 2;
		}
	}

	return;
}

void func_276() // Position - 0x199D1
{
	iLocal_195 = 0;

	if (!CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_OUT(0);

	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1747.0403f, 3267.4558f, 40.246f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 229.0887f);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
		VEHICLE::DELETE_VEHICLE(&veLocal_46);

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_46))
	{
		STREAMING::REQUEST_MODEL(joaat("cargobob"));
	
		while (!STREAMING::HAS_MODEL_LOADED(joaat("cargobob")))
		{
			SYSTEM::WAIT(0);
		}
	
		veLocal_46 = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), 1740.8517f, 3263.1614f, 40.2743f, 280.3712f, true, true, false);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(veLocal_46, 0, true);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(veLocal_46, 1, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_46, 2);
		VEHICLE::SET_VEHICLE_STRONG(veLocal_46, true);
		ENTITY::FREEZE_ENTITY_POSITION(veLocal_46, true);
		VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(veLocal_46, false);
		func_118(veLocal_46, 0);
	}

	if (CAM::IS_SCREEN_FADED_OUT())
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));

	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);

	if (!CAM::IS_SCREEN_FADED_IN())
		CAM::DO_SCREEN_FADE_IN(800);

	while (!CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(800);
		SYSTEM::WAIT(0);
	}

	func_30();
	return;
}

void func_277(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5) // Position - 0x19AE0
{
	if (_IS_MISSION_REPLAY_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		MISC::CLEAR_BIT(&(Global_100833.f_20), 2);
		MISC::SET_GAME_PAUSED(true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	
		Global_100829 = { fParam0 };
		Global_100832 = fParam3;
		Global_100828 = 1;
	
		if (iParam4 == 1)
			MISC::SET_BIT(&(Global_100833.f_20), 14);
		else
			MISC::CLEAR_BIT(&(Global_100833.f_20), 14);
	
		if (iParam5 == 1)
			MISC::SET_BIT(&(Global_100833.f_20), 24);
		else
			MISC::CLEAR_BIT(&(Global_100833.f_20), 24);
	
		func_247(1);
	}

	return;
}

int func_278() // Position - 0x19B75
{
	if (!(Global_100833 == 10) && !(Global_100833 == 9))
		return 0;

	return Global_100833.f_2;
}

void func_279(eDispatchType edtParam0, BOOL bParam1) // Position - 0x19B9F
{
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(edtParam0, !bParam1);
	MISC::ENABLE_DISPATCH_SERVICE(edtParam0, bParam1);
	return;
}

void func_280() // Position - 0x19BB8
{
	if (!_IS_MISSION_REPLAY_IN_PROGRESS())
	{
		if (iLocal_173 == 0)
			iLocal_26 = 1;
	}
	else
	{
		iLocal_173 = 0;
		iLocal_26 = 1;
	}

	return;
}

void func_281() // Position - 0x19BDA
{
	if (ENTITY::DOES_ENTITY_EXIST(veLocal_46))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_46, false))
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46, false))
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_46))
						if (func_282(PLAYER::PLAYER_PED_ID(), veLocal_46) == -1)
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);

	return;
}

int func_282(Ped pedParam0, Vehicle veParam1) // Position - 0x19C32
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false) && !ENTITY::IS_ENTITY_DEAD(veParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(pedParam0, veParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, -1, false) == pedParam0)
				return -1;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 0, false) == pedParam0)
				return 0;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 1, false) == pedParam0)
				return 1;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 2, false) == pedParam0)
				return 2;
		}
	}

	return -2;
}

void func_283() // Position - 0x19CA4
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_26 == 2 || iLocal_26 == 3)
		{
			if (func_256(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 200, false) || iLocal_209 == 1)
			{
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			}
		}
	
		if (iLocal_26 == 4)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_309, true) > 1000f)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
	}

	return;
}

void func_284() // Position - 0x19D3B
{
	return;
}

void func_285() // Position - 0x19D43
{
	if (iLocal_287 == 0)
	{
		for (iLocal_183 = 0; iLocal_183 <= 12; iLocal_183 = iLocal_183 + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[iLocal_183]))
			{
				if (!PED::IS_PED_INJURED(uLocal_31[iLocal_183]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_31[iLocal_183], PLAYER::PLAYER_PED_ID()))
					{
						if (func_2(uLocal_31[iLocal_183], PLAYER::PLAYER_PED_ID(), true) < 40f)
							if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
								iLocal_287 = 1;
					
						if (func_2(uLocal_31[iLocal_183], PLAYER::PLAYER_PED_ID(), true) < 25f)
							if (func_261(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED"))
								if (func_290(uLocal_31[iLocal_183], 6))
									iLocal_287 = 1;
					}
				}
			}
		}
	}

	if (iLocal_211 == 0)
	{
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
		{
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			iLocal_211 = 1;
		}
	}

	if (iLocal_208 == 0)
	{
		for (iLocal_190 = 0; iLocal_190 <= 1; iLocal_190 = iLocal_190 + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[iLocal_190]))
			{
				if (!PED::IS_PED_INJURED(uLocal_31[iLocal_190]))
				{
					if (iLocal_288 == 0 && iLocal_289 == 0)
					{
						if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[iLocal_190], true) < 25f)
								{
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_31[iLocal_190], PLAYER::PLAYER_PED_ID()))
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_262(0))
										{
											if (func_261(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED"))
											{
												if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
													if (!PED::IS_PED_INJURED(uLocal_31[0]))
														if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[0], true) < 30f)
															_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 4, uLocal_31[0], "ARMY_Guard01", 0, 1);
											
												if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[1]))
													if (!PED::IS_PED_INJURED(uLocal_31[1]))
														if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[1], true) < 30f)
															_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 4, uLocal_31[1], "ARMY_Guard01", 0, 1);
											
												if (_CONVERSATION_ADD_LINE(&uLocal_401, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_185 = MISC::GET_GAME_TIMER();
													iLocal_184 = MISC::GET_GAME_TIMER();
													iLocal_288 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
				
					if (iLocal_289 == 0 && iLocal_288 == 0)
					{
						if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[iLocal_190], true) < 25f)
								{
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_31[iLocal_190], PLAYER::PLAYER_PED_ID()))
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
										{
											if (func_261(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || func_262(0))
											{
												if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
													if (!PED::IS_PED_INJURED(uLocal_31[0]))
														if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[0], true) < 30f)
															_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 4, uLocal_31[0], "ARMY_Guard01", 0, 1);
											
												if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[1]))
													if (!PED::IS_PED_INJURED(uLocal_31[1]))
														if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[1], true) < 30f)
															_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 4, uLocal_31[1], "ARMY_Guard01", 0, 1);
											
												if (_CONVERSATION_ADD_LINE(&uLocal_401, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_185 = MISC::GET_GAME_TIMER();
													iLocal_184 = MISC::GET_GAME_TIMER();
													iLocal_289 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
				
					if (iLocal_288 == 1 || iLocal_289 == 1)
					{
						if (iLocal_287 == 0 && iLocal_208 == 0)
						{
							if (iLocal_308 == 0)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_184 + 8000)
								{
									if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[iLocal_190], true) < 25f)
											{
												if (PED::CAN_PED_SEE_HATED_PED(uLocal_31[iLocal_190], PLAYER::PLAYER_PED_ID()))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_262(0))
													{
														if (func_261(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED"))
														{
															if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
																if (!PED::IS_PED_INJURED(uLocal_31[0]))
																	if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[0], true) < 30f)
																		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 4, uLocal_31[0], "ARMY_Guard01", 0, 1);
														
															if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[1]))
																if (!PED::IS_PED_INJURED(uLocal_31[1]))
																	if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[1], true) < 30f)
																		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 4, uLocal_31[1], "ARMY_Guard01", 0, 1);
														
															if (_CONVERSATION_ADD_LINE(&uLocal_401, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_184 = MISC::GET_GAME_TIMER();
																iLocal_308 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						
							if (MISC::GET_GAME_TIMER() > iLocal_185 + 8000)
							{
								if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[iLocal_190], true) < 25f)
										{
											if (PED::CAN_PED_SEE_HATED_PED(uLocal_31[iLocal_190], PLAYER::PLAYER_PED_ID()))
											{
												if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
												{
													if (func_261(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || func_262(0))
													{
														if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
															if (!PED::IS_PED_INJURED(uLocal_31[0]))
																if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[0], true) < 30f)
																	_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 4, uLocal_31[0], "ARMY_Guard01", 0, 1);
													
														if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[1]))
															if (!PED::IS_PED_INJURED(uLocal_31[1]))
																if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[1], true) < 30f)
																	_CONVERSATION_INITIALIZE_ACTOR(&uLocal_401, 4, uLocal_31[1], "ARMY_Guard01", 0, 1);
													
														if (iLocal_308 == 0)
														{
															if (_CONVERSATION_ADD_LINE(&uLocal_401, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_185 = MISC::GET_GAME_TIMER();
																iLocal_308 = 1;
															}
														}
													
														if (iLocal_301 == 0)
														{
															iLocal_189 = MISC::GET_GAME_TIMER();
															iLocal_301 = 1;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	if (MISC::GET_GAME_TIMER() > iLocal_175 + 12000)
	{
		if (iLocal_208 == 1 || iLocal_287 == 1)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
				{
					if (func_289())
					{
						iLocal_179 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					
						if (iLocal_179 == 0)
						{
							func_286(func_288(), "OVER_THERE", 9);
							iLocal_175 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_179 == 1)
						{
							func_286(func_288(), "PROVOKE_TRESSPASS", 9);
							iLocal_175 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_179 == 2)
						{
							func_286(func_288(), "UP_THERE", 9);
							iLocal_175 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_179 == 3)
						{
							func_286(func_288(), "suspect_spotted", 9);
							iLocal_175 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_179 == 4)
						{
							func_286(func_288(), "GENERIC_INSULT_HIGH", 9);
							iLocal_175 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_179 == 5)
						{
							func_286(func_288(), "GENERIC_INSULT_MED", 9);
							iLocal_175 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}

	return;
}

void func_286(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x1A410
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam2), 1);
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x1A427
{
	char* str;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	str = 0;
	return str;
}

Ped func_288() // Position - 0x1A61C
{
	var outPed;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f, false, true, &outPed, false, true, -1);

	for (iLocal_177 = 0; iLocal_177 <= 9; iLocal_177 = iLocal_177 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[iLocal_177]))
			if (!PED::IS_PED_INJURED(uLocal_31[iLocal_177]))
				if (outPed == uLocal_31[iLocal_177])
					return uLocal_31[iLocal_177];
	}

	return 0;
}

BOOL func_289() // Position - 0x1A68D
{
	for (iLocal_178 = 0; iLocal_178 <= 9; iLocal_178 = iLocal_178 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[iLocal_178]))
			if (!PED::IS_PED_INJURED(uLocal_31[iLocal_178]))
				if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[iLocal_178], true) < 25f)
					return true;
	}

	return false;
}

BOOL func_290(Ped pedParam0, int iParam1) // Position - 0x1A6E0
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !PED::IS_PED_INJURED(pedParam0))
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam1))
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0))
				return true;

	return false;
}

void func_291() // Position - 0x1A72C
{
	if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_HELI"))
		if (TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_HELI"))
			TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_HELI", false);

	return;
}

BOOL _IS_MISSION_REPLAY_IN_PROGRESS() // Position - 0x1A753
{
	if (Global_100833 == 10 || Global_100833 == 9)
		return true;

	return false;
}

void func_293() // Position - 0x1A777
{
	func_294(73);
	HUD::REQUEST_ADDITIONAL_TEXT("DOCKP2B", 0);

	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);

	MISC::ENABLE_DISPATCH_SERVICE(DT_AmbulanceDepartment, false);
	MISC::ENABLE_DISPATCH_SERVICE(DT_FireDepartment, false);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatAutomobile, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2024.2f, 2968f, 30.2f, -2004f, 2921.5f, 37.6f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2133.3f, 2993.7f, 41.1f, -2152.7f, 3039.4f, 31.6f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, false, true);
	iLocal_65 = PED::ADD_SCENARIO_BLOCKING_AREA(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, false, true, true, true);
	iLocal_67 = PED::ADD_SCENARIO_BLOCKING_AREA(-2168.3f, 3223.6f, 52.8f, -2156.2f, 3205f, 29f, false, true, true, true);
	MISC::CLEAR_AREA(-1876.8f, 2806.1f, 32.3f, 8f, true, false, false, false);
	MISC::CLEAR_AREA(-1857.7f, 2797.9f, 32.4f, 8f, true, false, false, false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicOnMission", true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buzzard"), true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 0);
	return;
}

void func_294(int iParam0) // Position - 0x1A95D
{
	Global_96668 = 0;

	switch (iParam0)
	{
		case 72:
			func_259(2);
			func_259(4);
			break;
	
		case 73:
			func_259(0);
			func_259(1);
			func_259(7);
			break;
	
		case 92:
			func_259(10);
			func_259(9);
			func_259(13);
			func_259(6);
			break;
	
		case 68:
			func_259(11);
			break;
	
		case 78:
			func_259(14);
			break;
	
		case 79:
			func_259(3);
			break;
	
		default:
			break;
	}

	return;
}

void func_295() // Position - 0x1A9EB
{
	func_296();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buzzard"), false);
	PLAYER::SET_POLICE_RADAR_BLIPS(true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, true, true);
	VEHICLE::CLEAR_VEHICLE_GENERATOR_AREA_OF_INTEREST();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_65, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(anLocal_66, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_67, false);
	func_279(DT_PoliceAutomobile, true);
	func_279(DT_PoliceHelicopter, true);
	func_279(DT_PoliceVehicleRequest, true);
	func_279(DT_PoliceRoadBlock, true);
	func_279(DT_PoliceAutomobileWaitPulledOver, true);
	func_279(DT_PoliceAutomobileWaitCruising, true);
	func_279(DT_SwatAutomobile, true);
	func_279(DT_SwatHelicopter, true);
	func_132();

	if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_GUARD"))
		if (!TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_GUARD"))
			TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_GUARD", true);

	AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", true);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", false, false);
	AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicOnMission", false);

	for (iLocal_174 = 0; iLocal_174 <= 12; iLocal_174 = iLocal_174 + 1)
	{
		func_133(&uLocal_68[iLocal_174]);
	}

	if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_HELI"))
		if (!TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_HELI"))
			TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_HELI", true);

	PED::REMOVE_RELATIONSHIP_GROUP(hLocal_58);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_296() // Position - 0x1AB33
{
	Global_96668 = 0;
	return;
}

void func_297() // Position - 0x1AB40
{
	int num;

	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", DEFAULT);

	if (G_MissionStats.f_9088 || _IS_MISSION_REPEAT_ACTIVE(false))
	{
		if (!func_298())
		{
			num = func_27();
		
			if (num != -1)
			{
				if (!func_14(num))
					return;
			
				MISC::SET_BIT(&(Global_91565[num].f_1), 5);
				return;
			}
		}
		else
		{
			func_19();
		}
	}

	return;
}

BOOL func_298() // Position - 0x1ABB1
{
	if (Global_100833 == 13 || Global_100833 == 10 || Global_100833 == 11 || Global_100833 == 12)
		return false;

	return true;
}

