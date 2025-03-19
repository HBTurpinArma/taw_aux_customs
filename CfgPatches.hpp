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
			"A3_Soft_F_Exp", //Qilin
			"A3_Weapons_F",	
			"A3_Weapons_F_Exp",
			"ace_main",	
			"rhsusf_main",
			"rhsusf_weapons",
			"rhsusf_weapons2",
			"rhsusf_weapons3"
		};
		requiredVersion=1.0;
		weapons[]={"U_B_FullGhillie_alpine", "rhs_weap_m32_sidearm", "arifle_AK101_F", "arifle_AK101_GL_F"};
		units[]={"B_ghillie_alpine_F", "B_LSV_02_armed_F_custom_recon"};
		magazines[]={};
		ammo[]={};
	};
};