class smokeandfire_base extends ItemBase
{
	SoundOnVehicle		m_LoopSoundEntity;
	
	string Get_StaticReturnItem()
	{
		return "smokeandfire_base";
	}

	override bool IsBuilding()
	{
		return true;
	}
	override bool IsHologram()
	{
		return true;
	}

};

class smokelocation_1 extends smokeandfire_base 
{
	string Get_StaticReturnItem()
	{
		return "smokelocation_1";
	}
	
	Particle m_ParticleEfx1;
	void smokelocation_1()
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			m_ParticleEfx1 = Particle.PlayOnObject(ParticleList.SMOKING_HELI_WRECK, this, Vector(0, 0.3, 0));
		}
	}
	
	override void EEDelete(EntityAI parent)
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			if ( m_ParticleEfx1 )
				m_ParticleEfx1.Stop();
		}
	}

};

class smokelocation_2 extends smokeandfire_base 
{
	string Get_StaticReturnItem()
	{
		return "smokelocation_2";
	}

	Particle m_ParticleEfx3;
	void smokelocation_2()
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			m_ParticleEfx3 = Particle.PlayOnObject(ParticleList.SMOKING_CAR_ENGINE, this, Vector(0, 0.3, 0));
		}
	}
	
	override void EEDelete(EntityAI parent)
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			if ( m_ParticleEfx3 )
				m_ParticleEfx3.Stop();
		}
	}

};

class smokelocation_3 extends smokeandfire_base 
{
	string Get_StaticReturnItem()
	{
		return "smokelocation_3";
	}
	
	Particle m_ParticleEfx4;
	void smokelocation_3()
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			m_ParticleEfx4 = Particle.PlayOnObject(ParticleList.SMOKE_GENERIC_WRECK, this, Vector(0, 0.3, 0));
		}
	}
	
	override void EEDelete(EntityAI parent)
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			if ( m_ParticleEfx4 )
				m_ParticleEfx4.Stop();
		}
	}
};
class smokelocation_4 extends smokeandfire_base 
{
	string Get_StaticReturnItem()
	{
		return "smokelocation_4";
	}
	
	Particle m_ParticleEfx5;
	void smokelocation_4()
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			m_ParticleEfx5 = Particle.PlayOnObject(ParticleList.SPOOKY_MIST, this, Vector(0, 0.3, 0));
		}
	}
	
	override void EEDelete(EntityAI parent)
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			if ( m_ParticleEfx5 )
				m_ParticleEfx5.Stop();
		}
	}	

};

