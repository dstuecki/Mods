modded class AtlasBipod extends Inventory_Base
{
    override bool CanPutAsAttachment( EntityAI parent )
    {  
        if ( parent.IsKindOf("MassM110") )
            return true;

        return super.CanPutAsAttachment(parent);
    }
	
	override bool CanDetachAttachment( EntityAI attachment )
    {
        return true;
    }
}