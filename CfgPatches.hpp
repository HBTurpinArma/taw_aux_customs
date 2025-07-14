class cfgPatches
{
	class TAW_AUX_CUSTOMS
	{
		name="TAW Aux Customs";
		author="TAW";
		requiredAddons[]={
			"A3_Characters_F",
			"A3_Characters_F_Exp",
			"A3_Characters_F_Orange",
			"aceax_gearinfo", //Ace Extended Arsenal Compat
			"A3_Soft_F_Exp" //Qilin
		};
		requiredVersion=1.0;
		weapons[]={"U_B_FullGhillie_alpine"};
		units[]={
			"B_ghillie_alpine_F", 
			"B_LSV_02_unarmed_F", "B_LSV_02_unarmed_F_custom_recon", "B_LSV_02_armed_F", "B_LSV_02_armed_F_custom_recon", "B_LSV_02_AT_F", "B_LSV_02_AT_F_custom_recon",
			"B_T_VTOL_02_infantry_dynamicLoadout_F", "B_T_VTOL_02_vehicle_dynamicLoadout_F"
		};
		magazines[]={};
		ammo[]={};
	};
};