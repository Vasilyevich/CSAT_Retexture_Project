class CfgPatches
{
	class CSAT_Wood_Drones
	{
		units[] = {"O_MRAP_02_Wood_F","O_MRAP_02_Wood_hmg_F","O_MRAP_02_Wood_gmg_F","O_Quadbike_01_Wood_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CSAT_Wood_Core","CSAT_Wood_Units"};
	};
};
class CfgFactionClasses
{
	class OPF_Wood_F;
};
class CfgVehicles
{
	class MRAP_02_base_F;
	class O_MRAP_02_Wood_F: MRAP_02_base_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_MRAP_02_F";
		scope = 2;
		displayname = "$STR_A3_CfgVehicles_O_MRAP_02_F0";
		side = 0;
		faction = "OPF_Wood_F";
		crew = "O_soldier_Wood_f";
		typicalCargo[] = {"O_soldier_Wood_f","O_soldier_Wood_f"};
		class Turrets{};
		hiddenSelectionsTextures[] = {"\CSAT_Wood_Vehicles\data\ifrit\MRAP_02_ext_01_CO.paa","\CSAT_Wood_Vehicles\data\ifrit\MRAP_02_ext_02_CO.paa"};
	};
	class MRAP_02_hmg_base_F;
	class O_MRAP_02_Wood_hmg_F: MRAP_02_hmg_base_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_MRAP_02_hmg_F";
		scope = 2;
		displayname = "$STR_A3_CfgVehicles_O_MRAP_02_MG_F0";
		side = 0;
		faction = "OPF_Wood_F";
		crew = "O_soldier_Wood_f";
		typicalCargo[] = {"O_soldier_Wood_f","O_soldier_Wood_f"};
		hiddenSelectionsTextures[] = {"\CSAT_Wood_Vehicles\data\ifrit\MRAP_02_ext_01_CO.paa","\CSAT_Wood_Vehicles\data\ifrit\MRAP_02_ext_02_CO.paa","\CSAT_Wood_Vehicles\data\ifrit\mrap_02_gun_01_co.paa"};
	};
	class MRAP_02_gmg_base_F;
	class O_MRAP_02_Wood_gmg_F: MRAP_02_gmg_base_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_MRAP_02_gmg_F";
		scope = 2;
		displayname = "$STR_A3_CfgVehicles_O_MRAP_02_GMG_F0";
		side = 0;
		faction = "OPF_Wood_F";
		crew = "O_soldier_Wood_f";
		typicalCargo[] = {"O_soldier_Wood_f","O_soldier_Wood_f"};
		hiddenSelectionsTextures[] = {"\CSAT_Wood_Vehicles\data\ifrit\MRAP_02_ext_01_CO.paa","\CSAT_Wood_Vehicles\data\ifrit\MRAP_02_ext_02_CO.paa","\CSAT_Wood_Vehicles\data\ifrit\mrap_02_gun_01_co.paa"};
	};
	class Quadbike_01_base_F;
	class O_Quadbike_01_Wood_F: Quadbike_01_base_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_Quadbike_01_F";
		scope = 2;
		side = 0;
		faction = "OPF_Wood_F";
		crew = "O_Soldier_Wood_F";
		typicalCargo[] = {"O_Soldier_lite_Wood_F"};
		hiddenSelectionsTextures[] = {"\CSAT_Wood_Vehicles\data\quadbike\quadbike_01_opfor_co.paa","\CSAT_Wood_Vehicles\data\quadbike\quadbike_01_wheel_co.paa"};
	};
};