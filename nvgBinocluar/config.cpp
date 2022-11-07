class CfgPatches
{
	class DZ_Gear_Optics
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Pistols"
		};
	};
};
class CfgVehicles
{
	class ItemOptics;
	class NVGBinoculars : ItemOptics
		{
			scope = 2;
			displayName = "$STR_CfgVehicles_NVGoggles0";
			descriptionShort = "$STR_CfgVehicles_NVGoggles1";
			model = "\dz\gear\optics\binoculars.p3d";
			simulation = "itemoptics";
			animClass = "Binoculars";
			itemSize[] = { 2,2 };
			weight = 300;
			rotationFlags = 1;
			hiddenSelections[] = { "zbytek" };
			hiddenSelectionsTextures[] =
			{
				"nvgBinocluar\data\nvgbinoculars_co.paa",
				"nvgBinocluar\data\nvgbinoculars_co.paa",
				"nvgBinocluar\data\nvgbinoculars_co.paa"
			};
			class OpticsInfo
			{
				memoryPointCamera = "eyeScope";
				cameraDir = "cameraDir";
				modelOptics = "-";
				distanceZoomMin = 100;
				distanceZoomMax = 500;
				opticsZoomMin = 0.52359998;
				opticsZoomMax = 0.52359998;
				opticsZoomInit = 0.52359998;
			};
			attachments[] =
			{
				"BatteryD"
			};
			NVOptic = 1;
			simpleHiddenSelections[] =
			{
				"hide"
			};
			class DamageSystem
			{
				class GlobalHealth
				{
					class Health
					{
						hitpoints = 100;
						healthLevels[] =
						{

							{
								1,

								{
									"DZ\characters\glasses\data\NVG_Headstrap.rvmat"
								}
							},

							{
								0.69999999,

								{
									"DZ\characters\glasses\data\NVG_Headstrap.rvmat"
								}
							},

							{
								0.5,

								{
									"DZ\characters\glasses\data\NVG_Headstrap_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"DZ\characters\glasses\data\NVG_Headstrap_damage.rvmat"
								}
							},

							{
								0,

								{
									"DZ\characters\glasses\data\NVG_Headstrap_destruct.rvmat"
								}
							}
						};
					};
				};
			};
			repairableWithKits[] = { 7 };
			repairCosts[] = { 25 };
			class EnergyManager
			{
				hasIcon = 1;
				energyUsagePerSecond = 0.0099999998;
				plugType = 1;
				attachmentAction = 1;
			};
			class AnimationSources
			{
				class hide
				{
					source = "user";
					animPeriod = 0.0099999998;
					initPhase = 0;
				};
				class rotate
				{
					source = "user";
					animPeriod = 0.30000001;
					initPhase = 0;
				};
			};
			soundImpactType = "glass";
		};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyNVG : ProxyAttachment
	{
		scope = 2;
		inventorySlot[] =
		{
			"NVG"
		};
		model = "\DZ\characters\glasses\NVG.p3d";
	};
};
