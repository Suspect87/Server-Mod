modded class DayZPlayerImplementAiming
{	
	override protected float CalculateSwayMultiplier()
	{
		float max;
		float time;
		float time_clamped;
		float ret;
		
		if( m_PlayerPb.IsHoldingBreath() )
		{
			float MODDED_SWAY_TIME_STABLE = StaminaConfig.GetInstance().GetStaminaMultipliers().Get("m_HoldBreathSwayTimeStable");
			float MODDED_SWAY_TIME_IN = StaminaConfig.GetInstance().GetStaminaMultipliers().Get("m_HoldBreathSwayTimeIn");
			
			time = m_TotalTime - m_ReferenceTime;
			
			if (time < MODDED_SWAY_TIME_IN)
			{
				UpdateSwayState(eSwayStates.HOLDBREATH_IN);
				max = MODDED_SWAY_TIME_IN;
				time_clamped = Math.Clamp((m_TotalTime - m_SwayStateStartTime),0,max);
				ret = Math.Lerp(m_LastSwayMultiplier,PlayerSwayConstants.SWAY_MULTIPLIER_STABLE,time_clamped/max);
			}
			else if (time >= MODDED_SWAY_TIME_IN && time < (MODDED_SWAY_TIME_IN + MODDED_SWAY_TIME_STABLE))
			{
				UpdateSwayState(eSwayStates.HOLDBREATH_STABLE);
				ret = PlayerSwayConstants.SWAY_MULTIPLIER_STABLE;
			}
			else
			{
				UpdateSwayState(eSwayStates.HOLDBREATH_EXHAUSTED);
				max = PlayerSwayConstants.SWAY_TIME_EXHAUSTED;
				time_clamped = Math.Clamp((m_TotalTime - m_SwayStateStartTime),0,max);
				ret = Math.Lerp(PlayerSwayConstants.SWAY_MULTIPLIER_STABLE,PlayerSwayConstants.SWAY_MULTIPLIER_EXHAUSTED,(time_clamped/max));
			}
		}
		else
		{
			UpdateSwayState(eSwayStates.DEFAULT);
			max = PlayerSwayConstants.SWAY_TIME_OUT;
			time_clamped = Math.Clamp((m_TotalTime - m_SwayStateStartTime),0,max);
			ret = Math.Lerp(m_LastSwayMultiplier,1,time_clamped/max);
		}
		return ret;
	}
}

