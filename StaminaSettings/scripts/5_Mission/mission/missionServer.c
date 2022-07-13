modded class MissionServer
{ 
	override void OnMissionStart()
	{
		super.OnMissionStart();
		// load shit
		StaminaConfig.GetInstance();
	}
}
