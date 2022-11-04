class Mass1P69 extends ItemOptics
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionViewOptics);
		AddAction(ActionViewBinoculars);
	}
}