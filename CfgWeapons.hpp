class cfgWeapons
{
	/////////////////////////////
	//NATO 556 AK-101 Rechamber//
	/////////////////////////////
	class arifle_AK12_F;
	class arifle_AK101_F: arifle_AK12_F {
		displayName = "AK-101";
		magazines[] = {};
		magazineWell[] = {"CBA_556x45_AK"};
	};
	class arifle_AK12_GL_F;
	class arifle_AK101_GL_F: arifle_AK12_GL_F {
		displayName = "AK-101 (GL)";
		magazines[] = {};
		magazineWell[] = {"CBA_556x45_AK","CBA_40mm_M203"};
	};


	////////////////////////////
	//M32 Sidearm Custom Class//
	////////////////////////////
	class rhs_weap_m32_Base_F;
	class rhs_weap_m32: rhs_weap_m32_Base_F {
		class WeaponSlotsInfo;
	};
	class rhs_weap_m32_sidearm: rhs_weap_m32 {
		class WeaponSlotsInfo: WeaponSlotsInfo {
            allowedSlots[] = {701}; // Slots for sidearms
        };
		type = 2;
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_M32.rtm"};
	};





	class ItemCore;
	class UniformItem;
	////////////////////////////
	//Alpine Ghillie Retexture//
	////////////////////////////
	class U_B_FullGhillie_lsh; 
	class U_B_FullGhillie_alpine: U_B_FullGhillie_lsh
	{
		displayName = "Full Ghillie (Alpine) [NATO]";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_ghillie_alpine_F";
			containerClass="Supply60";
			mass=80;
		};
	}
};