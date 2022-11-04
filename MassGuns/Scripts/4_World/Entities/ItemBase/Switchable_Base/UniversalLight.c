modded class UniversalLight extends Switchable_Base
{
	override bool CanPutAsAttachment( EntityAI parent )
    {
        if (parent.IsKindOf("MassM110"))
        {
            return true;
        }
		
		if (parent.IsKindOf("MassKivaari"))
        {
            return true;
        }
		
		if (parent.IsKindOf("MassG18"))
        {
            return true;
        }
        return super.CanPutAsAttachment(parent);
    };
	//copied from Flashlight, TODO redo
}