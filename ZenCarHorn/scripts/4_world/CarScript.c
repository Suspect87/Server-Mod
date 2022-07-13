modded class CarScript
{
	int m_HornSoundID = 0; // Car horn sound effect file ID
	ref EffectSound m_CarHornSound; // Car horn sound effect object

	void CarScript()
	{
		RegisterNetSyncVariableInt("m_HornSoundID"); // Register horn sound ID for syncing to clients
	}

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();

		if (m_HornSoundID != 0) // If vars have sync'd and the horn ID has changed, play a horn sound
		{
			if (m_CarHornSound && m_CarHornSound.IsPlaying())
			{
				m_HornSoundID = 0; // If a horn sound is already playing, stop here.
				return;
			}

			PlayHornSound(m_HornSoundID);
			m_HornSoundID = 0;
		}
	}

	// Play the given horn sound effect ID
	void PlayHornSound(int id)
	{
		m_CarHornSound = SEffectManager.PlaySoundOnObject("Zen_CarHorn_SoundSet" + id.ToString(), this);
		m_CarHornSound.SetSoundAutodestroy(true);
	}
}