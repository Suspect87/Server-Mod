modded class PlayerBase
{
	private ref Param1<map<string, float>> m_StaminaModParams;
	
	override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
	{
		super.OnRPC(sender, rpc_type, ctx);
		
		switch(rpc_type)
		{
			case 994995989: // sync stamina modifiers
				if (GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_CLIENT)
				{
					if (ctx.Read(m_StaminaModParams) && m_StaminaHandler)
					{
						m_StaminaHandler.SetClientMultipliers(m_StaminaModParams.param1);
					}
				}
				break;
		}
	}
	
	override void OnPlayerLoaded()
	{
		super.OnPlayerLoaded();
		
		if (GetGame().IsMultiplayer() || GetGame().IsServer())
		{
			if (m_StaminaHandler)
			{
				m_StaminaHandler.SendStaminaMultipliersToClient();
			}
		}
	}
}