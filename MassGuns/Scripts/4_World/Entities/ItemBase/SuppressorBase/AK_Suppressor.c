modded class AK_Suppressor extends SuppressorBase
{
	override bool CanPutAsAttachment( EntityAI parent )
    {
        if ( parent.IsKindOf("MassArmsan") || parent.IsKindOf("MassTMP153") )
            return false;

		return super.CanPutAsAttachment(parent);
    }
}