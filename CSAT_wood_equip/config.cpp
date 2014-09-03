	class CfgPatches {
    class CSAT_Wood_Equip
    {
        units[] = {"B_FieldPack_owood","B_Carryall_owood"};
        weapons[] = {"V_HarnessO_wood","H_HelmetCrew_Wood_O","H_HelmetO_owood","U_O_CombatUniform_owood","NVGoggles_Recon_OPFOR","H_MilCap_owood","H_HelmetLeaderO_owood","U_O_OfficerUniform_ocamo"};
        requiredVersion = 0.1;
	    requiredAddons[] = {"CSAT_Wood_Core"};
    };
	};
	class cfgWeapons {
		class Uniform_Base;
		class UniformItem;
		class ItemInfo;
		class V_HarnessO_brn;
		class VestItem;
		class V_PlateCarrier2_rgr;
		class V_PlateCarrier2_wood: V_PlateCarrier2_rgr
    {
    	_generalMacro = "V_PlateCarrier2_rgr";
        scope = 2;
        picture = "\NOR_Equip\data\carrier_rig\ui\icon_carrier_1.paa";
        displayName = "Nor Carrier Big (Green)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\CSAT_wood_equip\data\vests_rgr_co.paa"};
        author = "TEST";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 80;
			armor = 30;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"};
        };
    };
		class U_O_CombatUniform_owood: Uniform_Base
	{
		author = "Vasilyevich";
		scope = 2;
		displayName = "Fatigues (Wood) [CSAT]";
		picture = "\A3\characters_f\data\ui\icon_U_OI_CombatUniform_ocamo_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_Soldier_Wood_F";
			containerClass = "Supply40";
			mass = 80;
		};
	};
		class U_O_OfficerUniform_owood: Uniform_Base
	{
		author = "Vasilyevich";
		scope = 2;
		displayName = "Officer Fatigues (Wood)";
		picture = "\A3\characters_f\data\ui\icon_U_OI_Officer_ocamo_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_officer_Wood_F";
			containerClass = "Supply40";
			mass = 80;
		};
	};
		class H_HelmetO_ocamo;
		class H_HelmetO_owood: H_HelmetO_ocamo
	{
		scope = 2;
		weaponPoolAvailable = 1;
		author = "Vasilyevich";
		_generalMacro = "H_HelmetO_ocamo";
		displayName = "Protector Helmet (Wood)";
		picture = "\A3\characters_f\Data\UI\icon_H_HelmetO_ocamo_CA.paa";
		model = "\A3\Characters_F\OPFOR\headgear_o_helmet_ballistic";
		hiddenSelectionsTextures[] = {"\CSAT_wood_equip\data\helmets\tech_co.paa"};
	};
		class H_HelmetLeaderO_ocamo;
		class H_HelmetLeaderO_owood: H_HelmetLeaderO_ocamo
	{
		scope = 2;
		weaponPoolAvailable = 1;
		author = "Vasilyevich";
		_generalMacro = "H_HelmetLeaderO_ocamo";
		displayname = "Defender Helmet (Wood)";
		picture = "\A3\characters_f\Data\UI\icon_H_HelmetO_ocamo_CA.paa";
		model = "\A3\Characters_F\OPFOR\headgear_o_helmet_ballistic_hud";
		hiddenSelectionsTextures[] = {"\CSAT_wood_equip\data\helmets\tech_co.paa"};
	};
		class H_HelmetCrew_O;
		class H_HelmetCrew_Wood_O: H_HelmetCrew_O
	{
		author = "Vasilyevich";
		_generalMacro = "H_HelmetCrew_O";
		displayName = "Crew Helmet (Wood) (CSAT)";
		picture = "\A3\characters_f\Data\UI\icon_H_HelmetCrewO_ocamo_CA.paa";
		hiddenSelectionsTextures[] = {"\CSAT_wood_equip\data\helmets\helmet_crew_owood_co.paa"};
		class ItemInfo: ItemInfo
		{
			modelSides[] = {0,3};
		};
	};
		class H_MilCap_ocamo;
		class H_MilCap_owood: H_MilCap_ocamo
	{
		author = "Vasilyevich";
		_generalMacro = "H_MilCap_ocamo";
		displayName = "$STR_A3_H_MilCap_ocamo0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_ocamo_ca.paa";
		hiddenSelectionsTextures[] = {"\CSAT_wood_equip\data\helmets\cappatrol_co.paa"};
		model = "\A3\Characters_F\Common\cappatrol";
	};
		class NVGoggles_OPFOR;
		class NVGoggles_Recon_OPFOR : NVGoggles_OPFOR
	{
	scope = 2;
	displayName = "Recon NV Goggles (Black)";
    modelOptics = "\A3\weapons_f\reticle\optics_night";
    model = "\A3\Weapons_f\binocular\nvg_proxy";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\CSAT_wood_equip\data\nightvision\nv_co.paa"};
		class ItemInfo: ItemInfo
    {
        uniformModel = "A3\weapons_f\binocular\nvg_proxy.p3d";
        modelOff = "-";
        hiddenSelections[] = {"camo"};
    };
	};
	};
	class CfgVehicles {
		class B_FieldPack_Base;
		class B_FieldPack_owood: B_FieldPack_Base
	{
		author = "Vasilyevich";
		_generalMacro = "B_FieldPack_ocamo";
		scope = 2;
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Gorod_hex_ca.paa";
		hiddenSelectionsTextures[] = {"\CSAT_wood_equip\data\backpacks\backpack_gorod_wood_co.paa"};
		displayName = "Field Pack (Wood)";
	};
		class B_Carryall_Base;
		class B_Carryall_owood: B_Carryall_Base
	{
		author = "Vasilyevich";
		_generalMacro = "B_Carryall_ocamo";
		scope = 2;
		displayName = "Carryall Backpack (Wood)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_hex.paa";
		hiddenSelectionsTextures[] = {"\CSAT_wood_equip\data\backpacks\backpack_tortila_wood_co.paa"};
	};
		class B_FieldPack_wood_LAT: B_FieldPack_owood
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_RPG32_F
			{
				magazine = "RPG32_F";
				count = 2;
			};
			class _xx_RPG32_HE_F
			{
				magazine = "RPG32_HE_F";
				count = 2;
			};
		};
	};
		class B_FieldPack_owood_Medic: B_FieldPack_owood
	{
		scope = 1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
		class B_FieldPack_wood_Repair: B_FieldPack_owood
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
	};
		class B_Carryall_ocamo_Exp: B_Carryall_owood
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
		class B_Carryall_owood_Exp: B_Carryall_owood
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
		class B_FieldPack_wood_Ammo: B_Carryall_owood
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine = "30Rnd_65x39_caseless_green";
				count = 10;
			};
			class _xx_150Rnd_762x51_Box
			{
				magazine = "150Rnd_762x51_Box";
				count = 1;
			};
			class _xx_RPG32_F
			{
				magazine = "RPG32_F";
				count = 1;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 2;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 5;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_Chemlight_red
			{
				magazine = "Chemlight_red";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
		};
	};
		class B_FieldPack_wood_AT: B_FieldPack_owood
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
		};
	};
		class B_FieldPack_owood_AA: B_FieldPack_owood
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
	};
		class B_Carryall_owood_Eng: B_Carryall_owood
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
		};
	};

	};
class UniformSlotInfo
{
slotType = 0;
linkProxy = "-";
};