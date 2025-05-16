class cfgVehicles
{
	class Car;
	class Car_F: Car {
		class TextureSources;
		class Turrets;
	};
	/////////////////////////
	//LSV Standing Turn Out//
	/////////////////////////
	class LSV_01_base_F: Car_F {
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret
			{
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_03: CargoTurret_02
			{
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
		};
	};
	class LSV_01_unarmed_base_F: LSV_01_base_F {
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_02
			{
				gunnerInAction="passenger_inside_7";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				isPersonTurret=2;
				forceHideGunner=0;
				canHideGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_03: CargoTurret_03
			{
				gunnerInAction="passenger_inside_7";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				isPersonTurret=2;
				forceHideGunner=0;
				canHideGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_01: CargoTurret_02
			{
				gunnerInAction="passenger_inside_7";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
			};
			class CargoTurret_04: CargoTurret_02
			{
				gunnerInAction="passenger_inside_7";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
			};
			class CargoTurret_05: CargoTurret_02
			{
				gunnerInAction="passenger_inside_7";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
			};
			class CargoTurret_06: CargoTurret_01
			{
				gunnerInAction="vehicle_passenger_stand_2";
				forceHideGunner=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
		};
	};
	class LSV_01_light_base_F: LSV_01_base_F {
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_02
			{
				gunnerInAction="passenger_inside_7";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				isPersonTurret=2;
				forceHideGunner=0;
				canHideGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_03: CargoTurret_03
			{
				gunnerInAction="passenger_inside_7";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				isPersonTurret=2;
				forceHideGunner=0;
				canHideGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_01: CargoTurret_02
			{
				gunnerInAction="passenger_inside_7";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
			};
			class CargoTurret_04: CargoTurret_02
			{
				gunnerInAction="passenger_inside_7";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
			};
			class CargoTurret_05: CargoTurret_02
			{
				gunnerInAction="passenger_inside_7";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
			};
			class CargoTurret_06: CargoTurret_01
			{
				gunnerInAction="vehicle_passenger_stand_2";
				forceHideGunner=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
		};
	};
	class LSV_02_base_F: Car_F {
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
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_04: CargoTurret_01
			{
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_05: CargoTurret_01
			{
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
		};
	};
	class LSV_02_unarmed_base_F: LSV_02_base_F {
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01
			{
				gunnerInAction="passenger_inside_7";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				isPersonTurret=2;
				forceHideGunner=0;
				canHideGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
			};
			class CargoTurret_02: CargoTurret_02
			{
				gunnerInAction="passenger_inside_7";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				isPersonTurret=2;
				forceHideGunner=0;
				canHideGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
			};
			class CargoTurret_03: CargoTurret_03
			{
				gunnerInAction="passenger_inside_7";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				isPersonTurret=2;
				forceHideGunner=0;
				canHideGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
			};
			class CargoTurret_04: CargoTurret_04
			{
				gunnerInAction="passenger_inside_7";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				isPersonTurret=2;
				forceHideGunner=0;
				canHideGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
			};
			class CargoTurret_05: CargoTurret_05
			{
				gunnerInAction="passenger_inside_7";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				isPersonTurret=2;
				forceHideGunner=0;
				canHideGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
			};
			class CargoTurret_06: CargoTurret_01
			{
				gunnerInAction="vehicle_passenger_stand_2";
				forceHideGunner=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{55,-105},
						{55,105}
					};
					limitsArrayBottom[]=
					{
						{-40,-105},
						{-30,-40},
						{-30,40},
						{-40,105}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
		};
	};
	class LSV_02_armed_base_F;
	class O_T_LSV_02_unarmed_F;
	class O_T_LSV_02_armed_F;
	class O_T_LSV_02_AT_F;
	//////////////////////////
	//LSVMk2 (Qilin) CUSTOMS//
	//////////////////////////
	class B_LSV_02_unarmed_F: O_T_LSV_02_unarmed_F {
		displayName = "LSV Mk. II (Unarmed)";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_F"};

		hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};
		textureList[] = {"Custom_Black", 1, "Custom_Recon", 0};
	};
	class B_LSV_02_unarmed_F_custom_recon: O_T_LSV_02_unarmed_F {
		displayName = "LSV Mk. II (Unarmed) (Recon)";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_spotter_F";
		typicalCargo[] = {"B_spotter_F"};

		hiddenSelectionsTextures[] = {"\TAW_AUX_CUSTOMS\Data\lsv_02\lsv_01_custom_recon_co.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};
		textureList[] = {"Custom_Black", 0, "Custom_Recon", 1};
	};
	class B_LSV_02_armed_F: O_T_LSV_02_armed_F {
		displayName = "LSV Mk. II (M134)";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_F"};

		hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};
		textureList[] = {"Custom_Black", 1, "Custom_Recon", 0};
	};
	class B_LSV_02_armed_F_custom_recon: O_T_LSV_02_armed_F {
		displayName = "LSV Mk. II (M134) (Recon)";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_spotter_F";
		typicalCargo[] = {"B_spotter_F"};

		hiddenSelectionsTextures[] = {"\TAW_AUX_CUSTOMS\Data\lsv_02\lsv_01_custom_recon_co.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};
		textureList[] = {"Custom_Black", 0, "Custom_Recon", 1};
	};
	class B_LSV_02_AT_F: O_T_LSV_02_AT_F {
		displayName = "LSV Mk. II (Metis-M)";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_F"};

		hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};
		textureList[] = {"Custom_Black", 1, "Custom_Recon", 0};
	};
	class B_LSV_02_AT_F_custom_recon: O_T_LSV_02_AT_F {
		displayName = "LSV Mk. II (Metis-M) (Recon)";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_spotter_F";
		typicalCargo[] = {"B_spotter_F"};

		hiddenSelectionsTextures[] = {"\TAW_AUX_CUSTOMS\Data\lsv_02\lsv_01_custom_recon_co.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};
		textureList[] = {"Custom_Black", 0, "Custom_Recon", 1};
	};


	//////////////////////
	//Blufor Taru & Pods//
	//////////////////////
	class O_Heli_Transport_04_F;
	class B_Heli_Transport_04_F: O_Heli_Transport_04_F {
		//displayName = "Mi-290 Taru";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};

		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_Black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_Black_co.paa"};
		textureList[] = {"Black",1};

		class TextureSources {
			class Black {
				displayName = "Black (NATO)";
				factions[] = {"BLU_F"};
				textures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_Black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_Black_co.paa"};
			};
		};
		//hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_Black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_Black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"};
	};

	class Land_Pod_Heli_Transport_04_box_F;
	class Land_Pod_Heli_Transport_04_bench_F;
	class Land_Pod_Heli_Transport_04_covered_F;
	class Land_Pod_Heli_Transport_04_fuel_F;
	class Land_Pod_Heli_Transport_04_medevac_F;
	class Land_Pod_Heli_Transport_04_repair_F;
	class Land_Pod_Heli_Transport_04_ammo_F;

	class Land_Pod_Heli_Transport_04_box_black_F: Land_Pod_Heli_Transport_04_box_F {
		scope = 2;
		scopeCurator = 2;
	};
	class Land_Pod_Heli_Transport_04_bench_black_F: Land_Pod_Heli_Transport_04_bench_F {
		scope = 2;
		scopeCurator = 2;
	};
	class Land_Pod_Heli_Transport_04_covered_black_F: Land_Pod_Heli_Transport_04_covered_F {
		scope = 2;
		scopeCurator = 2;
	};
	class Land_Pod_Heli_Transport_04_fuel_black_F: Land_Pod_Heli_Transport_04_fuel_F {
		scope = 2;
		scopeCurator = 2;
	};
	class Land_Pod_Heli_Transport_04_medevac_black_F: Land_Pod_Heli_Transport_04_medevac_F {
		scope = 2;
		scopeCurator = 2;
	};
	class Land_Pod_Heli_Transport_04_repair_black_F: Land_Pod_Heli_Transport_04_repair_F {
		scope = 2;
		scopeCurator = 2;
	};
	class Land_Pod_Heli_Transport_04_ammo_black_F: Land_Pod_Heli_Transport_04_ammo_F {
		scope = 2;
		scopeCurator = 2;
	};

	////////////////
	//Blufor Units//
	////////////////
	class B_ghillie_lsh_F; 
	class B_ghillie_alpine_F: B_ghillie_lsh_F {
		displayName = "Sniper (Alpine)";
		uniformClass = "U_B_FullGhillie_alpine";
		hiddenSelectionsTextures[]=
		{
			"TAW_AUX_CUSTOMS\Data\ghillie\ghillie_coverall_alpine_co.paa",
			"TAW_AUX_CUSTOMS\Data\ghillie\ghillie_threads_alpine_ca.paa",
			"TAW_AUX_CUSTOMS\Data\ghillie\ghillie_threads_5LOD_alpine_co.paa"
		};
	};

	///////////////
	//Opfor Units//
	///////////////
	// Add heavy EOD / jugg unit with HMG and high armour, forced walking.
	





};