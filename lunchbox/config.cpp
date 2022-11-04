class CfgPatches
{
	class DZ_Gear_Containers
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class FirstAidKit;
	class SodaCan_ColorBase;
	class Lunchbox : FirstAidKit
	{
		scope = 2;
		displayName = "Lunchbox";
		descriptionShort = "Kleine Dose fuers Essen";
		rotationFlags = 17;
		weight = 140;
		itemSize[] = { 4,4 };
		itemsCargoSize[] = { 1,1 };
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		canBeDigged = 1;
		repairableWithKits[] = { 2 };
		repairCosts[] = { 25 };
		isMeleeWeapon = 1;
		hiddenSelections[] = { "zbytek", "camo" };
		m_SpecialNotAllowedCargo = { "Weapon_Base" };
		hiddenSelectionsTextures[] =
		{ 
			"lunchbox\data\lunchbox_co.paa",
			"lunchbox\data\lunchbox_co.paa",
			"lunchbox\data\lunchbox_co.paa"
		};
		attachments[]=
		{
			"AllCouCanEat"	
		}

		
	};
	class SodaCan_NewPipsi : SodaCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SodaCan_Pipsi0";
		descriptionShort = "$STR_CfgVehicles_SodaCan_Pipsi1";
		hiddenSelectionsTextures[] =
		{
			"\dz\gear\drinks\Data\SodaCan_pipsi_co.paa"
		};
		inventorySlot[] =
		{
			"AllCouCanEat"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SodaCan_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
}
