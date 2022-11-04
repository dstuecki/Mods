class CfgPatches
{
	class Mass_Guns
	{
		units[]=
		{
			"MassBinocs",
			"MassBinocsON"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Optics"
		};
	};
};
class CfgMods
{
	class MassGuns_Mod
	{
		dir="MassGuns";
		picture="";
		action="";
		hideName=0;
		hidePicture=1;
		name="MassGuns";
		credits="Mass";
		author="Mass";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"MassGuns\Scripts\4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Binoculars;
	class Inventory_Base;
	class MassBinocs: Binoculars
	{
		scope=2;
		displayName="Military Binoculars";
		descriptionShort="11.5 Magnification Binoculars with Toggle-able Night-Vision, Built in Rangefinder Reticle perfect for scouting and ranging even in the dead of night. Model by Mass.";
		model="MassGuns\Binocs\Binocs.p3d";
		itemSize[]={3,3};
		weight=1300;
		inventorySlot[]=
		{
			"Belt_Left"
		};
		attachments[]=
		{
			"BatteryD"
		};
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
		};
		NVOptic=0;
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="MassGuns\Binocs\opticview.p3d";
			distanceZoomMin=500;
			distanceZoomMax=500;
			opticsZoomMin="0.3926/11.5";
			opticsZoomMax="0.3926/11.5";
			opticsZoomInit="0.3926/11.5";
		};
	};
	class MassBinocsON: MassBinocs
	{
		NVOptic=1;
	};
	class Preload2DOptic_Binoc: Inventory_Base
	{
		scope=0;
		model="MassGuns\Binocs\opticview.p3d";
	};
};
