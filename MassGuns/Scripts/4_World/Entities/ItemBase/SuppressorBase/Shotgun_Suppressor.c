class Shotgun_Suppressor extends SuppressorBase
{
	override bool CanPutAsAttachment( EntityAI parent )
    {
        if (parent.IsKindOf("MassArmsan") || parent.IsKindOf("MassTMP153"))
            return true;
		
        return false;
    }
}