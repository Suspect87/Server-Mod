modded class PlayerBase
{
	// Trigger car horn
	void PlayCarHornSound()
	{
		// Client-side: Sends an RPC requesting the server to play a car horn sound
		if (m_IsVehicleSeatDriver && !GetGame().IsServer())
		{
			GetRPCManager().SendRPC("ZCH_RPC", "RPC_SendCarHornToServer", new Param1< PlayerBase >(this), true, NULL);
		}

		// Server-side: Sends a random horn sound to play on the car object, sync'd to all nearby clients
		if (m_IsVehicleSeatDriver && GetGame().IsServer())
		{
			HumanCommandVehicle vehicleCommand = GetCommand_Vehicle();
			if (vehicleCommand)
			{
				Transport t = vehicleCommand.GetTransport();
				if (t)
				{
					CarScript cs = CarScript.Cast(t);

					if (cs)
					{
						cs.m_HornSoundID = Math.RandomIntInclusive(1, 3);
						t.SetSynchDirty();
					}
				}
			}
		}
	}
};