class cfgVehicles
{
	class Car;
	class Car_F: Car {
		class TextureSources;
	};
	//////////////////////////
	//LSVMk2 (Qilin) CUSTOMS//
	//////////////////////////
	class LSV_02_base_F: Car_F{
		class TextureSources: TextureSources {
			class Custom_Black {
				displayName = "Black (NATO)";
				factions[] = {"BLU_F"};
				textures[] = {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"};
			};
			class Custom_Recon {
				author = "TAW";
				displayName = "TAW Custom (Recon)";
				factions[] = {"BLU_F"};
				textures[] = {"\TAW_AUX_CUSTOMS\Data\lsv_02\lsv_01_custom_recon_co.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"};
			};
		};
	};
	class LSV_02_armed_base_F;
	class O_T_LSV_02_armed_F;
	//Recon
	class B_LSV_02_armed_F_custom_recon: O_T_LSV_02_armed_F {
		displayName = "LSV Mk. II (Recon)";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_spotter_F";
		typicalCargo[] = {"B_spotter_F"};

		hiddenSelectionsTextures[] = {"\TAW_AUX_CUSTOMS\Data\lsv_02\lsv_01_custom_recon_co.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};
		textureList[] = {"Custom_Black", 0, "Custom_Recon", 1};
	};
};