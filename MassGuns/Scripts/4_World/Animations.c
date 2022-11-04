modded class ModItemRegisterCallbacks
{
	override void RegisterFireArms(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {	//! Firearms
		super.RegisterFireArms( pType, pBehavior );	

		pType.AddItemInHandsProfileIK("Mass_ACR_Base", "MassGuns/Animations/MassACR.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/m4a1/w_m4a1_states.anm");

		pType.AddItemInHandsProfileIK("Mass_AN94_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ak101.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ak101.anm", "dz/anims/anm/player/reloads/AK101/w_AK101_states.anm");

		pType.AddItemInHandsProfileIK("MassB52_Base", "MassGuns/Animations/MassB52.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");

		pType.AddItemInHandsProfileIK("MassKivaari_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");

		pType.AddItemInHandsProfileIK("MassM110_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");

		pType.AddItemInHandsProfileIK("MassM19_Base", "MassGuns/Animations/MassMini14.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SKS.anm", "dz/anims/anm/player/reloads/SKS/w_SKS_states.anm");

		pType.AddItemInHandsProfileIK("MassM24_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_Scout.asi", pBehavior, "dz/anims/anm/player/ik/weapons/Scout.anm", "dz/anims/anm/player/reloads/Scout/w_scout_states.anm");

	    pType.AddItemInHandsProfileIK("MassM300_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_CZ527_states.anm");

		pType.AddItemInHandsProfileIK("MassM417_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");

		pType.AddItemInHandsProfileIK("MassMini14_Base", "MassGuns/Animations/MassMini14.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SKS.anm", "dz/anims/anm/player/reloads/SKS/w_SKS_states.anm");

		pType.AddItemInHandsProfileIK("MassMP153_Base", "MassGuns/Animations/MassAutoShotty.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mp133.anm", "dz/anims/anm/player/reloads/MP133/w_mp133_states.anm");
			
		pType.AddItemInHandsProfileIK("Mass_PKM_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");

        pType.AddItemInHandsProfileIK("MassPPSH41_Base", "MassGuns/Animations/MassPPSh.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SKS.anm", "dz/anims/anm/player/reloads/SKS/w_SKS_states.anm");

		pType.AddItemInHandsProfileIK("Mass_SPAS12", "MassGuns/Animations/MassSPAS12.asi", pBehavior, "dz/anims/anm/player/ik/weapons/Saiga.anm", "dz/anims/anm/player/reloads/Saiga/w_Saiga_states.anm");
			
        pType.AddItemInHandsProfileIK("MassSVT40_Base", "MassGuns/Animations/MassPPSh.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SKS.anm", "dz/anims/anm/player/reloads/SKS/w_SKS_states.anm");
	
		pType.AddItemInHandsProfileIK("MassType81_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
		
		pType.AddItemInHandsProfileIK("MassMP40_Base", "MassGuns/Animations/MassMP40.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/Famas/w_famas_states.anm");
		
		pType.AddItemInHandsProfileIK("Mass_SVU_Base", "MassGuns/Animations/MassSVU.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
		//pType.AddItemInHandsProfileIK("MassYHM_Base", "MassGuns/Animations/MassYHM.asi", pBehavior, "dz/anims/anm/player/ik/weapons/winchester70.anm", "dz/anims/anm/player/reloads/Winchester70/w_winchester70_states.anm");
	};
	
	
	override void RegisterOneHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    { //! Attachments 
		super.RegisterOneHanded( pType, pBehavior );
		//! optic
		pType.AddItemInHandsProfileIK("MassScope", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_hunting_scope_12x.anm");
		pType.AddItemInHandsProfileIK("Mass1P69", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_hunting_scope_12x.anm");
		
	}

	override void CustomBoneRemapping(DayZPlayerType pType)
	{
		super.CustomBoneRemapping(pType);
	
		// array<string> SVTBoneRemap = { "bolt", "Weapon_Bolt", "trigger", "Weapon_Trigger", "bullet", "Weapon_Bullet", "magazine", "Weapon_Magazine", "magazine", "Weapon_Bone_02", "cliprounds", "Weapon_Bone_01"};
		// pType.AddItemBoneRemap("MassSVT40_Base", SVTBoneRemap);
	}
}

//Guns I need to do next
//Scout556
//MassStevens301
//MassG18
//MassPPSKN
//MassAR15DMR
//Mass357M1911
//MassArmsan
//MassYHM_1022
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
