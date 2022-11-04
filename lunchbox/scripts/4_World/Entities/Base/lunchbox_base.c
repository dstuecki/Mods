class lunchbox_Base : Msp_Item
{
	ref array<string> m_AllowedCargo = { "SodaCan_ColorBase", "Bottle_Base", "Edible_Base" };
	ref array<string> m_SpecialNotAllowedCargo = { "Weapon_Base" };
};