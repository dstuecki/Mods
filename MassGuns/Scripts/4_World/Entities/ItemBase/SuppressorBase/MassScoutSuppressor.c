class MassScoutSuppressor extends SuppressorBase
{
	override bool CanPutAsAttachment( EntityAI parent )
    {
        if ( parent.IsKindOf("MassScout556") )
        {
            return true;
        }
		if ( parent.IsKindOf("M4A1") )
        {
            return true;
        }
		if ( parent.IsKindOf("M4A1_Green") )
        {
            return true;
        }
		if ( parent.IsKindOf("M4A1_Black") )
        {
            return true;
        }
		if ( parent.IsKindOf("GP_AugSteyr") )
        {
            return true;
        }
        
        return false;
    }
}