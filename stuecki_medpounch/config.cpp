class CfgPatches
{
	class stuecki_medpounch
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
	class Edible_Base;
	class Container_Base;
	class Modular_Pouch_Base;
	class Aurora_Med_Pounch : Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Medpounch";
		descriptionShort = "Medpounch fuer nur Med Items";
		rotationFlags = 17;
		model = "\ModularVestSystem\data\modular_pouch_6.p3d";
		weight = 140;
		itemSize[] = { 2,2 };
		itemsCargoSize[] = { 0,0 };
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		inventorySlot[] = { "modular_pouch_6","modular_pouch_9","modular_pouch_10","modular_pouch_13" };
		canBeDigged = 1;
		repairableWithKits[] = { 2 };
		repairCosts[] = { 25 };
		isMeleeWeapon = 1;
		hiddenSelections[] = { "zbytek", "camo" };
		hiddenSelectionsTextures[] =
		{
			"stuecki_medpounch\data\aurora_medical.paa",
			"stuecki_medpounch\data\aurora_medical.paa",
			"stuecki_medpounch\data\aurora_medical.paa"
		};
		attachments[] =
		{
			"MedicalBandage",
			"Speedtest",
			"IVSet",
			"Kochsalz",
			"BlutSet",
			"AktivKohle",
			"Multivitamin",
			"Jod",
			"Tetracylin",
			"epinephrine",
			"morphine",
			"Gegengift"
		};
	};
	
	class BloodTestKit : Edible_Base
	{
		inventorySlot[] =
		{
			"Speedtest"
		};
	};
	class StartKitIV : Edible_Base
	{
		inventorySlot[] =
		{
			"IVSet"
		};
	};
	class SalineBag : Edible_Base
	{
		inventorySlot[] =
		{
			"Kochsalz"
		};
	};
	class SalineBagIV : Edible_Base
	{
		inventorySlot[] =
		{
			"Kochsalz"
		};
	};
	class BloodBagEmpty : Edible_Base
	{
		inventorySlot[] =
		{
			"BlutSet"
		};
	};
	class BloodBagFull : Edible_Base
	{
		inventorySlot[] =
		{
			"BlutSet"
		};
	};
	class BloodBagIV : Edible_Base
	{
		inventorySlot[] =
		{
			"BlutSet"
		};
	};
	class CharcoalTablets : Edible_Base
	{
		inventorySlot[] =
		{
			"AktivKohle"
		};
	};
	class VitaminBottle : Edible_Base
	{
		inventorySlot[] =
		{
			"Multivitamin"
		};
	};
	class IodineTincture : Edible_Base
	{
		inventorySlot[] =
		{
			"Jod"
		};
	};
	class TetracyclineAntibiotics : Edible_Base
	{
		inventorySlot[] =
		{
			"Tetracylin"
		};
	};
	class AntiChemInjector : Edible_Base
	{
		inventorySlot[] =
		{
			"Gegengift"
		};
	};
}
class CfgSlots
{
	class Bandage
	{
		name = "Bandage";
		displayName = "Medical";
		ghostIcon = "medicalbandage";
	};
	class Speedtest
	{
		name = "Speedtest";
		displayName = "Speedtest";
		ghostIcon = "paper";
	};
	class IVSet
	{
		name = "IVSet";
		displayName = "IVSet";
		ghostIcon = "book";
	};
	class Kochsalz
	{
		name = "Kochsalz";
		displayName = "Kochsalz";
		ghostIcon = "lime";
	};
	class BlutSet
	{
		name = "BlutSet";
		displayName = "BlutSet";
		ghostIcon = "lime";
	};
	class AktivKohle
	{
		name = "AktivKohle";
		displayName = "AktivKohle";
		ghostIcon = "false";
	};
	class Multivitamin
	{
		name = "Multivitamin";
		displayName = "Multivitamin";
		ghostIcon = "false";
	};
	class Jod
	{
		name = "Jod";
		displayName = "Jod";
		ghostIcon = "false";
	};
	class Tetracylin
	{
		name = "Tetracylin";
		displayName = "Tetracylin";
		ghostIcon = "false";
	};
	class Adrenalin
	{
		name = "Adrenalin";
		displayName = "Adrenalin";
		ghostIcon = "false";
	};
	class Morphin
	{
		name = "Morphin";
		displayName = "Morphin";
		ghostIcon = "false";
	};
	class Gegengift
	{
		name = "Gegengift";
		displayName = "Gegengift";
		ghostIcon = "false";
	};
};
