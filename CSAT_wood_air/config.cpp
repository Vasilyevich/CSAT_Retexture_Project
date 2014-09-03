class DefaultEventHandlers;
class CfgPatches
{
	class CSAT_Wood_Air
	{
		units[] = {"O_Plane_CAS_02_Wood_F","O_Heli_Light_02_Wood_F","O_Heli_Attack_02_Wood_F"};
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
	class O_Plane_CAS_02_F;
    class O_Plane_CAS_02_Wood_F: O_Plane_CAS_02_F
	{
		_generalMacro = "O_Plane_CAS_02_F";
		scope = 2;
		side = 0;
		faction = "OPF_Wood_F";
		displayName = "To-199 Neophron (CAS)";
		author = "Vasilyevich";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"\CSAT_Wood_Air\data\fighter02_ext01_co.paa","\CSAT_Wood_Air\data\fighter02_ext02_co.paa"};
	};
	class O_Heli_Light_02_F;
	class O_Heli_Light_02_Wood_F: O_Heli_Light_02_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_Heli_Light_02_F";
		scope = 2;
		side = 0;
		faction = "OPF_Wood_F";
		crew = "O_helipilot_F";
		hiddenSelectionsTextures[] = {"\CSAT_Wood_Air\data\heli_light_02_ext_co.paa"};
		availableForSupportTypes[] = {"Drop","Transport"};
	};
	class O_Heli_Attack_02_F;
	class O_Heli_Attack_02_Wood_F: O_Heli_Attack_02_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_Heli_Attack_02_F";
		scope = 2;
		side = 0;
		faction = "OPF_Wood_F";
		crew = "O_helipilot_F";
		typicalCargo[] = {"O_helipilot_F"};
		accuracy = 1.5;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\CSAT_Wood_Air\data\heli_attack_02_body1_co.paa","\CSAT_Wood_Air\data\heli_attack_02_body2_co.paa"};
		availableForSupportTypes[] = {"CAS_Heli"};
	};
};