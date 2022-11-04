class MassBinocs extends NVGoggles
{
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionViewOptics);
		AddAction(ActionTurnNVGOn);
		AddAction(ActionViewBinoculars);
	}
	
}
class MassBinocsON extends MassBinocs
{
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionTurnNVGOn);
		AddAction(ActionTurnNVGOff);
	}
	
	override bool IsNVG()
	{
		return true;
	}
}