class CfgPatches
{
	class CSAT_Wood_Drones
	{
		units[] = {"O_UGV_01_Wood_F","O_UGV_01_Wood_rcws_F","O_UAV_01_Wood_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CSAT_Wood_Core"};
	};
};
class CfgFactionClasses
{
	class OPF_Wood_F;
};
class CfgVehicles
{
	class O_UGV_01_F;
	class O_UGV_01_rcws_F;
	class O_UAV_01_F;
    class O_UGV_01_Wood_F: O_UGV_01_F
	{
		_generalMacro = "O_UGV_01_F";
		scope = 2;
		side = 0;
		cargoCanControlUAV = 1;
		faction = "OPF_Wood_F";
		displayName = "UGV Saif";
		author = "Vasilyevich";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\CSAT_Wood_Drones\data\ugv\UGV_01_ext_Wood_co.paa","\CSAT_Wood_Drones\data\ugv\UGV_01_int_Wood_co.paa","\CSAT_Wood_Drones\data\ugv\UGV_01_gun_Wood_co.paa"};
	};
    class O_UGV_01_Wood_rcws_F: O_UGV_01_rcws_F
	{
		_generalMacro = "O_UGV_01_rcws_F";
		scope = 2;
		side = 0;
		cargoCanControlUAV = 1;
		faction = "OPF_Wood_F";
		displayName = "UGV Saif RCWS";
		author = "Vasilyevich";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\CSAT_Wood_Drones\data\ugv\UGV_01_ext_Wood_co.paa","\CSAT_Wood_Drones\data\ugv\UGV_01_int_Wood_co.paa","\CSAT_Wood_Drones\data\ugv\UGV_01_gun_Wood_co.paa"};
	};
	class O_UAV_01_Wood_F: O_UAV_01_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_UAV_01_F";
		scope = 2;
		side = 0;
		faction = "OPF_Wood_F";
		displayName = "$STR_A3_CFGVEHICLES_O_UAV_01";
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {"O_UAV_01_backpack_F"};
		};
		hiddenSelectionsTextures[] = {"\CSAT_Wood_Drones\data\uav\UAV_01_Wood_CO.paa"};
	};
};