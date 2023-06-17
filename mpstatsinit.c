void main() // Position - 0x0
{
	Initialize();
	MPStatsInitialized = 1;
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void Initialize() // Position - 0x15
{
	G_MPStatHashes1[0] = joaat("MPPLY_AWD_FM_CR_RACES_MADE");
	G_MPStatHashes1[1] = joaat("MPPLY_AWD_FM_CR_DM_MADE");
	G_MPStatHashes1[2] = joaat("MPPLY_AWD_FM_CR_PLAYED_BY_PEEP");
	G_MPStatHashes1[3] = joaat("MPPLY_AWD_FM_CR_MISSION_SCORE");
	G_MPStatHashes1[4] = joaat("MPPLY_AWD_TEMPAWARD");

	G_MPStatHashes2[0] = joaat("MPPLY_AWD_TEMPAWARDFLOAT");

	G_MPStatHashes3[0] = joaat("MPPLY_AWD_TEMPAWARDBOOL");
	G_MPStatHashes3[1] = joaat("MPPLY_AWD_GANGOPS_IAA");
	G_MPStatHashes3[2] = joaat("MPPLY_AWD_GANGOPS_SUBMARINE");
	G_MPStatHashes3[3] = joaat("MPPLY_AWD_GANGOPS_ALLINORDER");
	G_MPStatHashes3[4] = joaat("MPPLY_AWD_GANGOPS_LOYALTY");
	G_MPStatHashes3[5] = joaat("MPPLY_AWD_GANGOPS_CRIMMASMD");
	G_MPStatHashes3[6] = joaat("MPPLY_AWD_GANGOPS_MISSILE");
	G_MPStatHashes3[7] = joaat("MPPLY_AWD_GANGOPS_LOYALTY2");
	G_MPStatHashes3[8] = joaat("MPPLY_AWD_GANGOPS_LOYALTY3");
	G_MPStatHashes3[9] = joaat("MPPLY_AWD_GANGOPS_CRIMMASMD2");
	G_MPStatHashes3[10] = joaat("MPPLY_AWD_GANGOPS_CRIMMASMD3");
	G_MPStatHashes3[11] = joaat("MPPLY_AWD_GANGOPS_SUPPORT");
	G_MPStatHashes3[12] = joaat("MPPLY_AWD_FLEECA_FIN");
	G_MPStatHashes3[13] = joaat("MPPLY_AWD_PRISON_FIN");
	G_MPStatHashes3[14] = joaat("MPPLY_AWD_HUMANE_FIN");
	G_MPStatHashes3[15] = joaat("MPPLY_AWD_SERIESA_FIN");
	G_MPStatHashes3[16] = joaat("MPPLY_AWD_PACIFIC_FIN");
	G_MPStatHashes3[17] = joaat("MPPLY_AWD_HST_ORDER");
	G_MPStatHashes3[18] = joaat("MPPLY_AWD_HST_SAME_TEAM");
	G_MPStatHashes3[19] = joaat("MPPLY_AWD_HST_ULT_CHAL");
	G_MPStatHashes3[20] = joaat("MPPLY_AWD_COMPLET_HEIST_1STPER");
	G_MPStatHashes3[21] = joaat("MPPLY_AWD_COMPLET_HEIST_MEM");

	MPStatHashes4[0] = joaat("MPPLY_AWD_TEMPAWARDDATE");
	return;
}

