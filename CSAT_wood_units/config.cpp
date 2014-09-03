	class CfgPatches {
    class CSAT_Wood_Units
    {
        units[] = {"O_Soldier_Wood_F"};
        weapons[] = {};
        requiredVersion = 0.1;
	    requiredAddons[] = {"CSAT_Wood_Core","CSAT_Wood_Equip"};
    };
	};
	class CfgFactionClasses
{
	class OPF_Wood_F;
};
	class cfgVehicles {
		class O_Soldier_F;
		class O_Soldier_Wood_F: O_Soldier_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_Soldier_F";
		side = 0;
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
		uniformClass = "U_O_CombatUniform_owood";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\CSAT_Wood_Equip\data\uniforms\clothing_owood_co.paa","\CSAT_Wood_Equip\data\helmets\tech_co.paa"};
		linkedItems[] = {"NOR_Carrier_Standard_2_Green","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Green","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
	};
		class O_officer_F;
		class O_officer_Wood_F: O_officer_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_officer_F";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\CSAT_Wood_Equip\data\uniforms\officer_wood_co.paa"};
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_officer_F0";
		uniformClass = "U_O_OfficerUniform_owood";
		linkedItems[] = {"V_BandollierB_rgr","H_Beret_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_Beret_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
		class O_Soldier_lite_F;
		class O_Soldier_lite_Wood_F: O_Soldier_lite_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_Soldier_lite_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_Soldier_lite_F0";
		uniformClass = "U_O_CombatUniform_owood";
		linkedItems[] = {"V_BandollierB_rgr","H_MilCap_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_MilCap_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
	};
		class O_Soldier_GL_F;
		class O_Soldier_GL_Wood_F: O_Soldier_GL_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_Soldier_GL_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_Soldier_GL_F0";
		uniformClass = "U_O_CombatUniform_owood";
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
	};
		class O_Soldier_AR_F;
		class O_Soldier_AR_Wood_F: O_Soldier_AR_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_Soldier_AR_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_Soldier_AR_F0";
		uniformClass = "U_O_CombatUniform_owood";
		linkedItems[] = {"NOR_Carrier_Standard_2_Green","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Green","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
	};
		class O_Soldier_SL_F;
		class O_Soldier_SL_Wood_F: O_Soldier_SL_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_Soldier_SL_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_Soldier_SL_F0";
		uniformClass = "U_O_CombatUniform_owood";
		linkedItems[] = {"V_TacVest_oli","H_HelmetLeaderO_owood","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_HelmetLeaderO_owood","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
	};
		class O_Soldier_TL_F;
		class O_Soldier_TL_Wood_F: O_Soldier_TL_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_Soldier_TL_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_Soldier_TL_F0";
		uniformClass = "U_O_CombatUniform_owood";
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_owood","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_owood","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
	};
		class O_soldier_M_F;
		class O_soldier_M_Wood_F: O_soldier_M_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_soldier_M_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_Soldier_M_F0";
		uniformClass = "U_O_CombatUniform_owood";
		linkedItems[] = {"V_TacVest_oli","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
	};
		class O_Soldier_LAT_F;
		class O_Soldier_LAT_Wood_F: O_Soldier_LAT_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_Soldier_LAT_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_Soldier_LAT_F0";
		backpack = "B_FieldPack_wood_LAT";
		uniformClass = "U_O_CombatUniform_owood";
		linkedItems[] = {"V_TacVest_oli","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
	};
		class O_medic_F;
		class O_medic_Wood_F: O_medic_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_medic_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_medic_F0";
		backpack = "B_FieldPack_owood_Medic";
		uniformClass = "U_O_CombatUniform_owood";
		linkedItems[] = {"V_TacVest_oli","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
	};
		class O_soldier_repair_F;
		class O_soldier_repair_Wood_F: O_soldier_repair_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_soldier_repair_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_Soldier_repair_F0";
		backpack = "B_FieldPack_wood_Repair";
		uniformClass = "U_O_CombatUniform_owood";
		linkedItems[] = {"NOR_Carrier_Standard_2_Green","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Green","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
	};
		class O_soldier_exp_F;
		class O_soldier_exp_Wood_F: O_soldier_exp_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_soldier_exp_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_Soldier_exp_F0";
		backpack = "B_Carryall_owood_Exp";
		uniformClass = "U_O_CombatUniform_owood";
		linkedItems[] = {"NOR_Carrier_Standard_2_Green","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Green","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
	};
		class O_Soldier_A_F;
		class O_Soldier_A_Wood_F: O_Soldier_A_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_Soldier_A_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_Soldier_A_F0";
		backpack = "B_FieldPack_wood_Ammo";
		uniformClass = "U_O_CombatUniform_owood";
		linkedItems[] = {"NOR_Carrier_Standard_2_Green","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Green","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
	};
		class O_Soldier_AT_F;
		class O_Soldier_AT_Wood_F: O_Soldier_AT_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_Soldier_AT_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_Soldier_AT_F0";
		backpack = "B_FieldPack_wood_AT";
		uniformClass = "U_O_CombatUniform_owood";
		linkedItems[] = {"V_TacVest_oli","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
	};
		class O_Soldier_AA_F;
		class O_Soldier_AA_Wood_F: O_Soldier_AA_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_Soldier_AA_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_Soldier_AA_F0";
		backpack = "B_FieldPack_owood_AA";
		uniformClass = "U_O_CombatUniform_owood";
		linkedItems[] = {"V_TacVest_oli","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
	};
		class O_engineer_F;
		class O_engineer_Wood_F: O_engineer_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_engineer_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_engineer_F0";
		backpack = "B_Carryall_owood_Eng";
		uniformClass = "U_O_CombatUniform_owood";
		linkedItems[] = {"NOR_Carrier_Standard_2_Green","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Green","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
	};
		class O_soldier_PG_F;
		class O_soldier_PG_Wood_F: O_soldier_PG_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_soldier_PG_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_Soldier_PG_F0";
		backpack = "B_Parachute";
		uniformClass = "U_O_CombatUniform_owood";
		linkedItems[] = {"NOR_Carrier_Standard_2_Green","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Green","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_Recon_OPFOR"};
	};
		class O_soldier_UAV_F;
		class O_soldier_UAV_Wood_F: O_soldier_UAV_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_soldier_UAV_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_A3_B_SOLDIER_UAV_F0";
		uniformClass = "U_O_CombatUniform_owood";
		linkedItems[] = {"V_TacVest_brn","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_Recon_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_brn","H_HelmetO_owood","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_Recon_OPFOR"};
		backpack = "O_UAV_01_backpack_F";
	};
		class O_crew_F;
		class O_crew_Wood_F: O_crew_F
	{
		author = "Vasilyevich";
		_generalMacro = "O_crew_F";
		faction = "OPF_Wood_F";
		scope = 2;
		displayName = "$STR_B_crew_F0";
		uniformClass = "U_O_SpecopsUniform_ocamo";
		linkedItems[] = {"V_BandollierB_oli","H_HelmetCrew_Wood_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_BandollierB_oli","H_HelmetCrew_Wood_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	}; // cfgVehicles end