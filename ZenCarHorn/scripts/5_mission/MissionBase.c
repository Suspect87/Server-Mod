// This class is used to handle communication between the client & server for sending data relating to this mod
modded class MissionBase extends MissionBaseWorld
{
	void MissionBase()
	{
		if (!GetGame().IsDedicatedServer()) // Register server->client RPCs
		{
			//GetRPCManager().AddRPC("ZCH_RPC", "RPC_ReceiveServerDataOnClient", this, SingeplayerExecutionType.Client);
		}
		else // Register client->server RPCs
		{
			GetRPCManager().AddRPC("ZCH_RPC", "RPC_SendCarHornToServer", this, SingeplayerExecutionType.Server);
		}
	}

	// This is used by the client to request the server play a car horn sound
	void RPC_SendCarHornToServer(CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target)
	{
		if (type == CallType.Server && GetGame().IsDedicatedServer())
		{
			Param1 <PlayerBase> dataPlayer;
			if (!ctx.Read(dataPlayer))
			{
				Print("[ZenCarHorn] Error receiving data from player");
				return;
			}

			dataPlayer.param1.PlayCarHornSound();
		}
	}
}