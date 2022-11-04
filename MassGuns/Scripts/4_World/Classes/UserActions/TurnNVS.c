class ActionTurnNVGOn : ActionSingleUseBase
{
	void ActionTurnNVGOn ()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_ON;
	}

	override void CreateConditionComponents ()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return "Turn on NVG";
	}

	override bool HasTarget()
	{
		return false;
	}

	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		return true;
	}

	override bool ActionConditionContinue( ActionData action_data )
	{
		return true;
	}

	override void OnExecuteClient ( ActionData action_data )
	{
		ClearInventoryReservationEx(action_data);
	}

	override void OnExecuteServer ( ActionData action_data )
	{
		if ( !GetGame().IsMultiplayer() )
			ClearInventoryReservationEx(action_data);
		
		string Mlem = "MassBinocsON";
		
		UnfoldEntityLambda lambda = new UnfoldEntityLambda(action_data.m_MainItem, Mlem, action_data.m_Player);
		lambda.SetTransferParams(true, true, true, false, 1);
		action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);
	}
}	
class ActionTurnNVGOff : ActionTurnNVGOn
{
	void ActionTurnNVGOff ()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_OFF;
	}

	override string GetText()
	{
		return "Turn off NVG";
	}

	override void OnExecuteServer ( ActionData action_data )
	{
		if ( !GetGame().IsMultiplayer() )
			ClearInventoryReservationEx(action_data);
		
		string Mlem = "MassBinocs";
		
		UnfoldEntityLambda lambda = new UnfoldEntityLambda(action_data.m_MainItem, Mlem, action_data.m_Player);
		lambda.SetTransferParams(true, true, true, false, 1);
		action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);
	}
}	