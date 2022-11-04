class CfgPatches
{
	class DZ_Gear_Containers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
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
	class Edible_Base;
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
		hiddenSelectionsTextures[] =
		{
			"lunchbox\data\lunchbox_co.paa",
			"lunchbox\data\lunchbox_co.paa",
			"lunchbox\data\lunchbox_co.paa"
		};
		attachments[] =
		{
			"AllYouCanEat"
		};
	};
	class SodaCan_NewPipsi : Edible_Base
	{
		model = "\dz\gear\drinks\SodaCan.p3d";
		debug_ItemCategory = 6;
		stackedRandom = 0;
		itemSize[] = { 1,2 };
		weight = 15;
		stackedUnit = "";
		varQuantityInit = 300;
		varQuantityMin = 0;
		varQuantityMax = 300;
		hiddenSelections[] =
		{
			"camoGround"
		};
		inventorySlot[] =
		{
			"AllYouCanEat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\drinks\data\sodacan.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\drinks\data\sodacan.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\drinks\data\sodacan_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\drinks\data\sodacan_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\drinks\data\sodacan_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType = "metal";
		class Nutrition
		{
			totalVolume = 1;
			energy = 50;
			water = 150;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		scope = 2;
		displayName = "$STR_CfgVehicles_SodaCan_Pipsi0";
		descriptionShort = "$STR_CfgVehicles_SodaCan_Pipsi1";
		hiddenSelectionsTextures[] =
		{
			"\dz\gear\drinks\Data\SodaCan_pipsi_co.paa"
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
class CfgSlots
{
	class All_You_Can_Eat
	{
		name = "AllYouCanEat";
		displayName = "Food";
		ghostIcon = "food";
	};
};
