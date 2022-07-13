// These classes are used to override the car horn sound to suit larger truck vehicles
modded class Truck_01_Base
{
	override void PlayHornSound(int id)
	{
		m_CarHornSound = SEffectManager.PlaySoundOnObject("Zen_TruckHorn_SoundSet" + id.ToString(), this);
		m_CarHornSound.SetSoundAutodestroy(true);
	}
}

modded class Truck_02
{
	override void PlayHornSound(int id)
	{
		m_CarHornSound = SEffectManager.PlaySoundOnObject("Zen_TruckHorn_SoundSet" + id.ToString(), this);
		m_CarHornSound.SetSoundAutodestroy(true);
	}
}