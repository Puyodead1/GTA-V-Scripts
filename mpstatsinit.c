void main() // Position - 0x0
{
	Initialize();
	MPStatsInitialized = 1;
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void Initialize() // Position - 0x15
{
	MPStatHashes1[0] = joaat("MPPLY_AWD_FM_CR_RACES_MADE");
	MPStatHashes1[1] = joaat("MPPLY_AWD_FM_CR_DM_MADE");
	MPStatHashes1[2] = joaat("MPPLY_AWD_FM_CR_PLAYED_BY_PEEP");
	MPStatHashes1[3] = joaat("MPPLY_AWD_FM_CR_MISSION_SCORE");
	MPStatHashes1[4] = joaat("MPPLY_AWD_TEMPAWARD");

	MPStatHashes2[0] = joaat("MPPLY_AWD_TEMPAWARDFLOAT");

	MPStatHashes3[0] = joaat("MPPLY_AWD_TEMPAWARDBOOL");
	MPStatHashes3[1] = joaat("MPPLY_AWD_GANGOPS_IAA");
	MPStatHashes3[2] = joaat("MPPLY_AWD_GANGOPS_SUBMARINE");
	MPStatHashes3[3] = joaat("MPPLY_AWD_GANGOPS_ALLINORDER");
	MPStatHashes3[4] = joaat("MPPLY_AWD_GANGOPS_LOYALTY");
	MPStatHashes3[5] = joaat("MPPLY_AWD_GANGOPS_CRIMMASMD");
	MPStatHashes3[6] = joaat("MPPLY_AWD_GANGOPS_MISSILE");
	MPStatHashes3[7] = joaat("MPPLY_AWD_GANGOPS_LOYALTY2");
	MPStatHashes3[8] = joaat("MPPLY_AWD_GANGOPS_LOYALTY3");
	MPStatHashes3[9] = joaat("MPPLY_AWD_GANGOPS_CRIMMASMD2");
	MPStatHashes3[10] = joaat("MPPLY_AWD_GANGOPS_CRIMMASMD3");
	MPStatHashes3[11] = joaat("MPPLY_AWD_GANGOPS_SUPPORT");
	MPStatHashes3[12] = joaat("MPPLY_AWD_FLEECA_FIN");
	MPStatHashes3[13] = joaat("MPPLY_AWD_PRISON_FIN");
	MPStatHashes3[14] = joaat("MPPLY_AWD_HUMANE_FIN");
	MPStatHashes3[15] = joaat("MPPLY_AWD_SERIESA_FIN");
	MPStatHashes3[16] = joaat("MPPLY_AWD_PACIFIC_FIN");
	MPStatHashes3[17] = joaat("MPPLY_AWD_HST_ORDER");
	MPStatHashes3[18] = joaat("MPPLY_AWD_HST_SAME_TEAM");
	MPStatHashes3[19] = joaat("MPPLY_AWD_HST_ULT_CHAL");
	MPStatHashes3[20] = joaat("MPPLY_AWD_COMPLET_HEIST_1STPER");
	MPStatHashes3[21] = joaat("MPPLY_AWD_COMPLET_HEIST_MEM");

	MPStatHashes4[0] = joaat("MPPLY_AWD_TEMPAWARDDATE");
	return;
}

