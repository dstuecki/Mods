class CfgPatches
{
	class stuecki_lunchbox
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Gear_Drinks",
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
	class Bottle_Base;
	class Lunchbox : FirstAidKit
	{
		scope = 2;
		displayName = "Lunchbox";
		descriptionShort = "Kleine Dose fuers Essen";
		rotationFlags = 17;
		weight = 140;
		itemSize[] = { 2,2 };
		itemsCargoSize[] = { 0,0 };
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		canBeDigged = 1;
		repairableWithKits[] = { 2 };
		repairCosts[] = { 25 };
		isMeleeWeapon = 1;
		hiddenSelections[] = { "zbytek", "camo" };
		hiddenSelectionsTextures[] =
		{
			"stuecki_lunchbox\data\auroraLunchbox_co.paa",
			"stuecki_lunchbox\data\auroraLunchbox_co.paa",
			"stuecki_lunchbox\data\auroraLunchbox_co.paa"
		};
		attachments[] =
		{
			"AllYouCanEat",
			"AllYouCanEat1",
			"AllYouCanEat2",
			"AllYouCanEat3",
			"AllYouCanEat4",
			"AllYouCanEat5",
			"AllYouCanEat6",
			"AllYouCanEat7"
		};
	};
	class Potato : Edible_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
		class SambucusBerry : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class CaninaBerry : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class GoatSteakMeat : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class MouflonSteakMeat : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class BoarSteakMeat : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class PigSteakMeat : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class DeerSteakMeat : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class WolfSteakMeat : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class BearSteakMeat : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class CowSteakMeat : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class SheepSteakMeat : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class ChickenBreastMeat : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class CarpFilletMeat : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class MackerelFilletMeat : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class Lard : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class Carp : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class Sardines : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class Mackerel : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class MushroomBase : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class Bitterlings : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
	class SlicedPumpkin : Edible_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
	class Pumpkin : Edible_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
	class GreenBellPepper : Edible_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
		class Zucchini : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
	class BoxCerealCrunchin : Edible_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
	class PowderedMilk : Edible_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
	class SmallGuts : Edible_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
	class Guts : Edible_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
	class Rice : Edible_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
	class Marmalade : Edible_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
	class Honey : Edible_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
	class Zagorky_ColorBase : Edible_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
	class Snack_ColorBase : Edible_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
	class BakedBeansCan : Edible_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
	class BakedBeansCan_Opened : Edible_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
	class PeachesCan : Edible_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
		class PeachesCan_Opened : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class TacticalBaconCan : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class TacticalBaconCan_Opened : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class SpaghettiCan : Edible_Base 
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class SpaghettiCan_Opened : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class SardinesCan : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class SardinesCan_Opened : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class TunaCan : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class TunaCan_Opened : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class FoodCan_250g_ColorBase : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class FoodCan_250g_Opened_ColorBase : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class UnknownFoodCan : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class UnknownFoodCan_Opened : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class FoodCan_100g_ColorBase : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class FoodCan_100g_Opened_ColorBase : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class Apple : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class Plum : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class Pear : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
		class Tomato : Edible_Base
		{
			inventorySlot[] +=
			{
				"AllYouCanEat",
					"AllYouCanEat1",
					"AllYouCanEat2",
					"AllYouCanEat3",
					"AllYouCanEat4",
					"AllYouCanEat5",
					"AllYouCanEat6",
					"AllYouCanEat7"
			};
		};
	class Canteen : Bottle_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
	class WaterBottle : Bottle_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
	class Vodka : Bottle_Base
	{
		inventorySlot[] +=
		{
			"AllYouCanEat",
				"AllYouCanEat1",
				"AllYouCanEat2",
				"AllYouCanEat3",
				"AllYouCanEat4",
				"AllYouCanEat5",
				"AllYouCanEat6",
				"AllYouCanEat7"
		};
	};
	class SodaCan_ColorBase : Edible_Base
	{

		inventorySlot[] +=
		{
			"AllYouCanEat",
			"AllYouCanEat1",
			"AllYouCanEat2",
			"AllYouCanEat3",
			"AllYouCanEat4",
			"AllYouCanEat5",
			"AllYouCanEat6",
			"AllYouCanEat7"
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
	class All_You_Can_Eat1
	{
		name = "AllYouCanEat1";
		displayName = "Food";
		ghostIcon = "food";
	};
	class All_You_Can_Eat2
	{
		name = "AllYouCanEat2";
		displayName = "Food";
		ghostIcon = "food";

	};
	class All_You_Can_Eat3
	{
		name = "AllYouCanEat3";
		displayName = "Food";
		ghostIcon = "food";
	};
	class All_You_Can_Eat4
	{
		name = "AllYouCanEat4";
		displayName = "Food";
		ghostIcon = "food";
	};
	class All_You_Can_Eat5
	{
		name = "AllYouCanEat5";
		displayName = "Food";
		ghostIcon = "food";
	};
	class All_You_Can_Eat6
	{
		name = "AllYouCanEat6";
		displayName = "Food";
		ghostIcon = "food";
	};
	class All_You_Can_Eat7
	{
		name = "AllYouCanEat7";
		displayName = "Food";
		ghostIcon = "food";
	};
};
