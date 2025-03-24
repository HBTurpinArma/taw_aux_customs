class cfgWeapons
{
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