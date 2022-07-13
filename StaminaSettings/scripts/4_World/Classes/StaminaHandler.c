class StaminaConfig
{
	private const string CONFIG_PATH = "$profile:StaminaSettings/config.cfg";
	private const string DIRECTORY = "$profile:StaminaSettings";
	
	// GAINS
	private const float STAMINA_GAIN_JOG_MULT = 1.0;
	private const float STAMINA_GAIN_WALK_MULT = 1.0;
	private const float STAMINA_GAIN_SWIM_PER_SEC_MULT = 1.0;
	private const float STAMINA_GAIN_IDLE_PER_SEC_MULT = 1.0;
	private const float STAMINA_KG_TO_STAMINAPERCENT_PENALTY_MULT = 1.0;
	
	// DRAINS
	private const float STAMINA_DRAIN_SPRINTING_MULT = 1.0;
	private const float STAMINA_DRAIN_FAST_SWIM_MULT = 1.0;
	private const float STAMINA_DRAIN_CROUCHED_SPRINT_PER_SEC_MULT = 1.0;
	private const float STAMINA_DRAIN_LADDER_FAST_PER_SEC_MULT = 1.0;
	private const float STAMINA_DRAIN_HOLD_BREATH_START_MULT = 1.0;
	private const float STAMINA_DRAIN_HOLD_BREATH_EXPONENT_MULT = 1.0;
	private const float STAMINA_HOLD_BREATH_DURATION = GameConstants.STAMINA_DRAIN_HOLD_BREATH_DURATION;
	private const float STAMINA_DRAIN_JUMP_MULT = 1.0;
	private const float STAMINA_DRAIN_VAULT_MULT = 1.0;
	private const float STAMINA_DRAIN_CLIMB_MULT = 1.0;
	private const float STAMINA_DRAIN_MELEE_LIGHT_MULT = 1.0;
	private const float STAMINA_DRAIN_MELEE_HEAVY_MULT = 1.0;
	private const float STAMINA_DRAIN_MELEE_EVADE_MULT = 1.0;
	
	// THRESHOLDS
	private const float STAMINA_HOLD_BREATH_THRESHOLD_MULT = 1.0;
	private const float STAMINA_SPRINT_THRESHOLD_MULT = 1.0;
	private const float STAMINA_JUMP_THRESHOLD_MULT = 1.0;
	private const float STAMINA_VAULT_THRESHOLD_MULT = 1.0;
	private const float STAMINA_CLIMB_THRESHOLD_MULT = 1.0;
	private const float STAMINA_MELEE_HEAVY_THRESHOLD_MULT = 1.0;
	private const float STAMINA_MELEE_EVADE_THRESHOLD_MULT = 1.0;
	private const float STAMINA_WEIGHT_LIMIT_THRESHOLD_MULT = 1.0;
    
    private const float STAMINA_WHEN_SPRINT_DRAINS = GameConstants.STAMINA_MAX;
    
    // METABOLIC SHIT
    private const float METABOLIC_SPEED_ENERGY_WALK_MULT = 1.0;
    private const float METABOLIC_SPEED_ENERGY_JOG_MULT = 1.0;
    private const float METABOLIC_SPEED_ENERGY_SPRINT_MULT = 1.0;
    
    private const float METABOLIC_SPEED_WATER_WALK_MULT = 1.0;
    private const float METABOLIC_SPEED_WATER_JOG_MULT = 1.0;
    private const float METABOLIC_SPEED_WATER_SPRINT_MULT = 1.0;
	
	private const float HOLD_BREATH_SWAY_TIME_STABLE = PlayerSwayConstants.SWAY_TIME_STABLE;
	private const float HOLD_BREATH_SWAY_TIME_IN = PlayerSwayConstants.SWAY_TIME_IN;
	
	private static ref StaminaConfig instance;
	protected ref map<string, float> m_StaminaMultipliers;
	
	void StaminaConfig()
	{
		m_StaminaMultipliers = new map<string, float>;
		
		// SET DEFAULTS
		m_StaminaMultipliers.Set("m_StaminaGainJogMult", STAMINA_GAIN_JOG_MULT);
		m_StaminaMultipliers.Set("m_StaminaGainWalkMult", STAMINA_GAIN_WALK_MULT);
		m_StaminaMultipliers.Set("m_StaminaGainSwimMult", STAMINA_GAIN_SWIM_PER_SEC_MULT);
		m_StaminaMultipliers.Set("m_StaminaGainIdleMult", STAMINA_GAIN_IDLE_PER_SEC_MULT);
		
		m_StaminaMultipliers.Set("m_StaminaDrainSprintingMult", STAMINA_DRAIN_SPRINTING_MULT);
		m_StaminaMultipliers.Set("m_StaminaDrainFastSwimMult", STAMINA_DRAIN_FAST_SWIM_MULT);
		m_StaminaMultipliers.Set("m_StaminaDrainCrouchedSprintMult", STAMINA_DRAIN_CROUCHED_SPRINT_PER_SEC_MULT);
		m_StaminaMultipliers.Set("m_StaminaDrainLadderFastMult", STAMINA_DRAIN_LADDER_FAST_PER_SEC_MULT);
		m_StaminaMultipliers.Set("m_StaminaDrainHoldBreathStartMult", STAMINA_DRAIN_HOLD_BREATH_START_MULT);
		m_StaminaMultipliers.Set("m_StaminaDrainHoldBreathFasterMult", STAMINA_DRAIN_HOLD_BREATH_EXPONENT_MULT);
		m_StaminaMultipliers.Set("m_StaminaHoldBreathDuration", STAMINA_HOLD_BREATH_DURATION);
		m_StaminaMultipliers.Set("m_StaminaDrainJumpMult", STAMINA_DRAIN_JUMP_MULT);
		m_StaminaMultipliers.Set("m_StaminaDrainVaultMult", STAMINA_DRAIN_VAULT_MULT);
		m_StaminaMultipliers.Set("m_StaminaDrainClimbMult", STAMINA_DRAIN_CLIMB_MULT);
		m_StaminaMultipliers.Set("m_StaminaDrainMeleeLightMult", STAMINA_DRAIN_MELEE_LIGHT_MULT);
		m_StaminaMultipliers.Set("m_StaminaDrainMeleeHeavyMult", STAMINA_DRAIN_MELEE_HEAVY_MULT);
		m_StaminaMultipliers.Set("m_StaminaDrainMeleeEvadeMult", STAMINA_DRAIN_MELEE_EVADE_MULT);
		m_StaminaMultipliers.Set("m_StaminaKgPenaltyMult", STAMINA_KG_TO_STAMINAPERCENT_PENALTY_MULT);
		
		m_StaminaMultipliers.Set("m_StaminaThresholdHoldBreathMult", STAMINA_HOLD_BREATH_THRESHOLD_MULT);
		m_StaminaMultipliers.Set("m_StaminaThresholdSprintMult", STAMINA_SPRINT_THRESHOLD_MULT);
		m_StaminaMultipliers.Set("m_StaminaThresholdJumpMult", STAMINA_JUMP_THRESHOLD_MULT);
		m_StaminaMultipliers.Set("m_StaminaThresholdVaultMult", STAMINA_VAULT_THRESHOLD_MULT);
		m_StaminaMultipliers.Set("m_StaminaThresholdClimbMult", STAMINA_CLIMB_THRESHOLD_MULT);
		m_StaminaMultipliers.Set("m_StaminaThresholdMeleeHeavyMult", STAMINA_MELEE_HEAVY_THRESHOLD_MULT);
		m_StaminaMultipliers.Set("m_StaminaThresholdMeleeEvadeMult", STAMINA_MELEE_EVADE_THRESHOLD_MULT);
		m_StaminaMultipliers.Set("m_StaminaThresholdWeightLimitMult", STAMINA_WEIGHT_LIMIT_THRESHOLD_MULT);
        
        m_StaminaMultipliers.Set("m_StaminaWhenSprintDrains", STAMINA_WHEN_SPRINT_DRAINS);
        
        m_StaminaMultipliers.Set("m_MetabolicEnergyWalkMult", METABOLIC_SPEED_ENERGY_WALK_MULT);
        m_StaminaMultipliers.Set("m_MetabolicEnergyJogMult", METABOLIC_SPEED_ENERGY_JOG_MULT);
        m_StaminaMultipliers.Set("m_MetabolicEnergySprintMult", METABOLIC_SPEED_ENERGY_SPRINT_MULT);
        
        m_StaminaMultipliers.Set("m_MetabolicWaterWalkMult", METABOLIC_SPEED_WATER_WALK_MULT);
        m_StaminaMultipliers.Set("m_MetabolicWaterJogMult", METABOLIC_SPEED_WATER_JOG_MULT);
        m_StaminaMultipliers.Set("m_MetabolicWaterSprintMult", METABOLIC_SPEED_WATER_SPRINT_MULT);

        m_StaminaMultipliers.Set("m_HoldBreathSwayTimeStable", HOLD_BREATH_SWAY_TIME_STABLE);
        m_StaminaMultipliers.Set("m_HoldBreathSwayTimeIn", HOLD_BREATH_SWAY_TIME_IN);
		
		
		if (GetGame().IsServer() && GetGame().IsMultiplayer())
		{
			LoadFromConfigFile();
		}
	}
	
	static StaminaConfig GetInstance()
	{
		if (!instance) instance = new StaminaConfig;
		return instance;
	}
	
	// Loads values from config file if it exist, create one with default values otherwise.
	void LoadFromConfigFile()
	{
		if (FileExist(CONFIG_PATH))
		{
			Print("[DS_IncreasedStamina] Found config file, attempting to load values.");
			FileHandle f = OpenFile(CONFIG_PATH, FileMode.READ);
			string line;
			while (FGets(f, line) != -1)
			{
				// idiot proof
				line.Replace(" ", ""); 
				line.Replace(";", "");
				
				TStringArray tokens = new TStringArray;
				line.Split("=", tokens);
				
				m_StaminaMultipliers.Set(tokens.Get(0), tokens.Get(1).ToFloat());
				Print("[DS_IncreasedStamina] " + tokens.Get(0) + " set to " + tokens.Get(1));
				
			}
			CloseFile(f);
		}
		else
		{
			Print("[DS_IncreasedStamina] Config file not found, creating new one with default values.");
			CreateConfig();
		}
	}
	
	// Creates the config file and sets default values.
	void CreateConfig()
	{
		bool success = MakeDirectory(DIRECTORY);
		if (success)
		{
			FileHandle f = OpenFile(CONFIG_PATH, FileMode.WRITE);
			array<string> sortedKeys = m_StaminaMultipliers.GetKeyArray();
			sortedKeys.Sort();
			
			foreach (string key: sortedKeys)
			{
				FPrintln(f, key + "=" + m_StaminaMultipliers.Get(key));
			}
			
			CloseFile(f);
		}
	}
	
	map<string, float> GetStaminaMultipliers()
	{
		return m_StaminaMultipliers;
	}
	
	void SetStaminaMultiplier(string key, float val)
	{
		m_StaminaMultipliers.Set(key, val);
	}
	
}

modded class StaminaHandler
{
	map<string, float> GetStaminaMultipliers()
	{
		return StaminaConfig.GetInstance().GetStaminaMultipliers();
	}
	
	float GetStaminaMultiplier(string key)
	{
		return StaminaConfig.GetInstance().GetStaminaMultipliers().Get(key);
	}
	
	void SetStaminaMultiplier(string key, float val)
	{
		StaminaConfig.GetInstance().SetStaminaMultiplier(key, val);
	}
	
	void SendStaminaMultipliersToClient()
	{
		if (GetGame().IsMultiplayer() || GetGame().IsServer())
		{
			// send to client
			ref Param1<map<string, float>> m_StaminaModParams = new Param1<map<string, float>>(GetStaminaMultipliers());
			GetGame().RPCSingleParam(m_Player, 994995989, m_StaminaModParams, true, m_Player.GetIdentity());
		}
	}
	
	void SetClientMultipliers(ref map<string, float> mults) {
		if (GetGame().IsClient())
		{
			foreach (string key, float value: mults) {
				SetStaminaMultiplier(key, value);
			}
			RegisterStaminaConsumers();
			RegisterStaminaModifiers();
		}
	}
	
	// modded functions
	override void Update(float deltaT, int pCurrentCommandID)
	{
#ifdef DEVELOPER
		m_Debug = DiagMenu.GetBool(DiagMenuIDs.DM_CHEATS_STAMINA_DISABLE);
		if( m_Debug ) return;
#endif
		if( m_Player )
		{
			// Calculates actual max stamina based on player's load
			if ( GetGame().IsServer() && GetGame().IsMultiplayer() )
			{
				//! gets stamina from PlayerStat
				m_Stamina = m_Player.GetStatStamina().Get();
				//! gets the actual players load
				m_PlayerLoad = m_Player.GetPlayerLoad();

				//! StaminaCap calculation starts when PlayerLoad exceeds STAMINA_WEIGHT_LIMIT_THRESHOLD
				if (m_PlayerLoad >= (GameConstants.STAMINA_WEIGHT_LIMIT_THRESHOLD * GetStaminaMultiplier("m_StaminaThresholdWeightLimitMult")))
				{
					m_StaminaCap =  Math.Max((GameConstants.STAMINA_MAX - (((m_PlayerLoad - (GameConstants.STAMINA_WEIGHT_LIMIT_THRESHOLD * GetStaminaMultiplier("m_StaminaThresholdWeightLimitMult")))/GameConstants.STAMINA_KG_TO_GRAMS) * (GameConstants.STAMINA_KG_TO_STAMINAPERCENT_PENALTY * GetStaminaMultiplier("m_StaminaKgPenaltyMult")))),GameConstants.STAMINA_MIN_CAP);
				}
				else
				{
					m_StaminaCap = GameConstants.STAMINA_MAX;
				}
			}
			
			// Calculates stamina gain/loss based on movement and load
			m_Player.GetMovementState(m_State);

			switch (pCurrentCommandID)
			{
			case DayZPlayerConstants.COMMANDID_MOVE:
				StaminaProcessor_Move(m_State);
			break;
			case DayZPlayerConstants.COMMANDID_LADDER:
				StaminaProcessor_Ladder(m_State);
			break;
			case DayZPlayerConstants.COMMANDID_SWIM:
				StaminaProcessor_Swimming(m_State);
			break;
			case DayZPlayerConstants.COMMANDID_FALL:	//! processed on event
			case DayZPlayerConstants.COMMANDID_MELEE2:  //! processed on event
			case DayZPlayerConstants.COMMANDID_CLIMB:  //! processed on event
			break;
			default:
				if( !m_IsInCooldown )
				{
					m_StaminaDelta = GameConstants.STAMINA_GAIN_IDLE_PER_SEC;
				}
			break;
			}
			
			//Sets current stamina & stores + syncs data with client
			if (m_Stamina < 0)
			{
				m_Stamina = 0;
			}
			else
			{
				m_Stamina = Math.Max(0,Math.Min((m_Stamina + m_StaminaDelta*deltaT),m_StaminaCap));
				m_Stamina = m_Stamina - m_StaminaDepletion;
			}

			if ( GetGame().IsServer() && GetGame().IsMultiplayer() )
			{
				m_Player.GetStatStamina().Set(m_Stamina);
				m_Time += deltaT;
				if ( m_Time >= GameConstants.STAMINA_SYNC_RATE )
				{
					m_Time = 0;
					SyncStamina(m_Stamina, m_StaminaCap, m_IsInCooldown);
				}
			}
			else
			{
				m_Player.SetStamina(m_Stamina, m_StaminaCap);
			}

			//! sets exhaustion look of player based on stamina level
			HumanCommandAdditives ad = m_Player.GetCommandModifier_Additives();
			float exhaustion_value = 1-((m_Stamina/(m_StaminaCap*0.01))*0.01);
			exhaustion_value = Math.Min(1,exhaustion_value);
			if ( ad )
			{
				// do not apply exhaustion on local client if player is in ADS/Optics (camera shakes)
				if ( m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_CLIENT && (m_Player.IsInOptics() || m_Player.IsInIronsights()) )
				{
					ad.SetExhaustion(0, true);
				}
				else
				{
					ad.SetExhaustion(exhaustion_value, true);
				}
			}

			CheckStaminaState();

			m_StaminaDelta = 0;
			m_StaminaDepletion = 0; // resets depletion modifier
		}
	}
	
    override protected void StaminaProcessor_Move(HumanMovementState pHumanMovementState)
    {
        switch ( pHumanMovementState.m_iMovement )
        {
            case DayZPlayerConstants.MOVEMENTIDX_SPRINT: //sprint
                if (m_StaminaCap <= GetStaminaMultiplier("m_StaminaWhenSprintDrains")) 
                {
                    if ( pHumanMovementState.m_iStanceIdx == DayZPlayerConstants.STANCEIDX_ERECT )
                    {
                        m_StaminaDelta = -GameConstants.STAMINA_DRAIN_STANDING_SPRINT_PER_SEC * GetStaminaMultiplier("m_StaminaDrainSprintingMult");
                        SetCooldown(GameConstants.STAMINA_REGEN_COOLDOWN_DEPLETION);
                        break;
                    }
                    if ( pHumanMovementState.m_iStanceIdx == DayZPlayerConstants.STANCEIDX_CROUCH)
                    {
                        m_StaminaDelta = -GameConstants.STAMINA_DRAIN_CROUCHED_SPRINT_PER_SEC * GetStaminaMultiplier("m_StaminaDrainCrouchedSprintMult");
                        SetCooldown(GameConstants.STAMINA_REGEN_COOLDOWN_DEPLETION);
                        break;
                    }
                }
                m_StaminaDelta = GameConstants.STAMINA_GAIN_JOG_PER_SEC;
                break;
                
            case DayZPlayerConstants.MOVEMENTIDX_RUN: //jog
                if (!m_IsInCooldown)
                {
                    m_StaminaDelta = ((GameConstants.STAMINA_GAIN_JOG_PER_SEC * GetStaminaMultiplier("m_StaminaGainJogMult")) + CalcStaminaGainBonus());
                }
                break;
                
            case DayZPlayerConstants.MOVEMENTIDX_WALK: //walk
                if (!m_IsInCooldown)
                {
                    m_StaminaDelta = ((GameConstants.STAMINA_GAIN_WALK_PER_SEC * GetStaminaMultiplier("m_StaminaGainWalkMult")) + CalcStaminaGainBonus());
                }
                break;
                
            case DayZPlayerConstants.MOVEMENTIDX_IDLE: //idle
                if (!m_IsInCooldown)
                {
                    m_StaminaDelta = ((GameConstants.STAMINA_GAIN_IDLE_PER_SEC * GetStaminaMultiplier("m_StaminaGainIdleMult")) + CalcStaminaGainBonus());
                }
                break;
                
            default:
				if (!m_IsInCooldown)
                {
                	m_StaminaDelta = GameConstants.STAMINA_GAIN_IDLE_PER_SEC * GetStaminaMultiplier("m_StaminaGainIdleMult");
				}
                break;
        }
    }
	
	override protected void StaminaProcessor_Swimming(HumanMovementState pHumanMovementState)
	{
		switch ( pHumanMovementState.m_iMovement )
		{
		case 3: //swim fast
			m_StaminaDelta = -GameConstants.STAMINA_DRAIN_SWIM_FAST_PER_SEC * GetStaminaMultiplier("m_StaminaDrainFastSwimMult");
			SetCooldown(GameConstants.STAMINA_REGEN_COOLDOWN_DEPLETION);
			break;
		break;
			
		case 2: //swim slow
			if (!m_IsInCooldown)
			{
				m_StaminaDelta = ((GameConstants.STAMINA_GAIN_SWIM_PER_SEC * GetStaminaMultiplier("m_StaminaGainSwimMult")) + CalcStaminaGainBonus());
			}
		break;
			
		default:
			if( !m_IsInCooldown )
			{
				m_StaminaDelta = GameConstants.STAMINA_GAIN_IDLE_PER_SEC * GetStaminaMultiplier("m_StaminaGainIdleMult");
			}
		break;
		}
	}
	
	override protected void StaminaProcessor_Ladder(HumanMovementState pHumanMovementState)
	{
		switch ( pHumanMovementState.m_iMovement )
		{
		case 2: //climb up (fast)
			m_StaminaDelta = -GameConstants.STAMINA_DRAIN_LADDER_FAST_PER_SEC * GetStaminaMultiplier("m_StaminaDrainLadderFastMult");
			SetCooldown(GameConstants.STAMINA_REGEN_COOLDOWN_DEPLETION);
			break;
		break;
			
		case 1: //climb up (slow)
			if (!m_IsInCooldown)
			{
				m_StaminaDelta = (GameConstants.STAMINA_GAIN_LADDER_PER_SEC + CalcStaminaGainBonus());
			}
		break;
			
		default:
			if( !m_IsInCooldown )
			{
				m_StaminaDelta = GameConstants.STAMINA_GAIN_IDLE_PER_SEC * GetStaminaMultiplier("m_StaminaGainIdleMult");
			}
		break;
		}
	}
	
	override protected void RegisterStaminaConsumers()
	{
		//! stamina consumers registration
		m_StaminaConsumers = new StaminaConsumers;
		m_StaminaConsumers.RegisterConsumer(EStaminaConsumers.HOLD_BREATH, GameConstants.STAMINA_HOLD_BREATH_THRESHOLD_ACTIVATE * GetStaminaMultiplier("m_StaminaThresholdHoldBreathMult"), GameConstants.STAMINA_HOLD_BREATH_THRESHOLD_DRAIN);
		m_StaminaConsumers.RegisterConsumer(EStaminaConsumers.SPRINT, (GameConstants.STAMINA_MIN_CAP + 15) * GetStaminaMultiplier("m_StaminaThresholdSprintMult"));
		m_StaminaConsumers.RegisterConsumer(EStaminaConsumers.JUMP, GameConstants.STAMINA_JUMP_THRESHOLD * GetStaminaMultiplier("m_StaminaThresholdJumpMult"));
		m_StaminaConsumers.RegisterConsumer(EStaminaConsumers.VAULT, GameConstants.STAMINA_VAULT_THRESHOLD * GetStaminaMultiplier("m_StaminaThresholdVaultMult"));
		m_StaminaConsumers.RegisterConsumer(EStaminaConsumers.CLIMB, GameConstants.STAMINA_CLIMB_THRESHOLD * GetStaminaMultiplier("m_StaminaThresholdClimbMult"));
		m_StaminaConsumers.RegisterConsumer(EStaminaConsumers.MELEE_HEAVY, GameConstants.STAMINA_MELEE_HEAVY_THRESHOLD * GetStaminaMultiplier("m_StaminaThresholdMeleeHeavyMult"));
		m_StaminaConsumers.RegisterConsumer(EStaminaConsumers.MELEE_EVADE, GameConstants.STAMINA_MELEE_EVADE_THRESHOLD * GetStaminaMultiplier("m_StaminaThresholdMeleeEvadeMult"));
	}
	
	override protected void RegisterStaminaModifiers()
	{
		//! stamina modifiers registration
		m_StaminaModifiers = new StaminaModifiers;
		m_StaminaModifiers.RegisterExponential(EStaminaModifiers.HOLD_BREATH, GameConstants.STAMINA_DRAIN_HOLD_BREATH_START * GetStaminaMultiplier("m_StaminaDrainHoldBreathStartMult"), GameConstants.STAMINA_DRAIN_HOLD_BREATH_EXPONENT * GetStaminaMultiplier("m_StaminaDrainHoldBreathFasterMult"),0, GetStaminaMultiplier("m_StaminaHoldBreathDuration"));
		m_StaminaModifiers.RegisterFixed(EStaminaModifiers.JUMP, GameConstants.STAMINA_DRAIN_JUMP * GetStaminaMultiplier("m_StaminaDrainJumpMult"));
		m_StaminaModifiers.RegisterFixed(EStaminaModifiers.VAULT, GameConstants.STAMINA_DRAIN_VAULT * GetStaminaMultiplier("m_StaminaDrainVaultMult"));
		m_StaminaModifiers.RegisterFixed(EStaminaModifiers.CLIMB, GameConstants.STAMINA_DRAIN_CLIMB * GetStaminaMultiplier("m_StaminaDrainClimbMult"));
		m_StaminaModifiers.RegisterFixed(EStaminaModifiers.MELEE_LIGHT, GameConstants.STAMINA_DRAIN_MELEE_LIGHT * GetStaminaMultiplier("m_StaminaDrainMeleeLightMult"));
		m_StaminaModifiers.RegisterFixed(EStaminaModifiers.MELEE_HEAVY, GameConstants.STAMINA_DRAIN_MELEE_HEAVY * GetStaminaMultiplier("m_StaminaDrainMeleeHeavyMult"));
		m_StaminaModifiers.RegisterFixed(EStaminaModifiers.OVERALL_DRAIN, GameConstants.STAMINA_MAX, 5.0);
		m_StaminaModifiers.RegisterRandomized(EStaminaModifiers.MELEE_EVADE, 3 * GetStaminaMultiplier("m_StaminaDrainMeleeEvadeMult"), GameConstants.STAMINA_DRAIN_MELEE_EVADE * GetStaminaMultiplier("m_StaminaDrainMeleeEvadeMult"));
	}
	
	override void DepleteStamina(EStaminaModifiers modifier, float dT = -1)
	{
		float val = 0.0;
		float current_time = m_Player.GetSimulationTimeStamp();
		float time;
		StaminaModifier sm = m_StaminaModifiers.GetModifierData(modifier);

		//! select by modifier type and drain stamina
		switch (sm.GetType())
		{
			case m_StaminaModifiers.FIXED:
				m_StaminaDepletion = m_StaminaDepletion + sm.GetMaxValue();
			break;
			
			case m_StaminaModifiers.RANDOMIZED:
				val = Math.RandomFloat(sm.GetMinValue(), sm.GetMaxValue());
				m_StaminaDepletion = m_StaminaDepletion + val;
			break;
			
			case m_StaminaModifiers.LINEAR:
				if (!sm.IsInUse())
				{
				//Print("m_StaminaModifiers.LINEAR");
					sm.SetStartTime(current_time + ( (GetStaminaMultiplier("m_HoldBreathSwayTimeIn") + GetStaminaMultiplier("m_HoldBreathSwayTimeStable")) / dT ) );
					sm.SetRunTimeTick(dT);
					sm.SetInUse(true);
				//Print("GetStartTime" + sm.GetStartTime());
				//Print("GetDurationAdjusted" + sm.GetDurationAdjusted());
				}
				time = Math.Clamp( ((current_time - sm.GetStartTime()) / sm.GetDurationAdjusted()), 0, 1 );
				val = Math.Lerp(sm.GetMinValue(), sm.GetMaxValue(), time);
				m_StaminaDepletion = m_StaminaDepletion + val;
				/*Print(current_time);
				Print(time);
				Print(val);
				Print("-------------");*/
			
			break;
			
			case m_StaminaModifiers.EXPONENTIAL:
				if (!sm.IsInUse())
				{
				//Print("m_StaminaModifiers.EXPONENTIAL");
					sm.SetStartTime(current_time + ( (GetStaminaMultiplier("m_HoldBreathSwayTimeIn") + GetStaminaMultiplier("m_HoldBreathSwayTimeStable")) / dT ) );
					sm.SetRunTimeTick(dT);
					sm.SetInUse(true);
				//Print("GetStartTime" + sm.GetStartTime());
				//Print("GetDurationAdjusted" + sm.GetDurationAdjusted());
				}
				time = Math.Clamp( ((current_time - sm.GetStartTime()) / sm.GetDurationAdjusted()), 0, 1 );
				float exp;
				if (sm.GetMinValue() < 1)
				{
					exp = 1 - Math.Lerp(0, sm.GetMaxValue(), time);
				}
				else
				{
					exp = Math.Lerp(0, sm.GetMaxValue(), time);
				}
				val = Math.Pow(sm.GetMinValue(),exp);
				m_StaminaDepletion = m_StaminaDepletion + val;
				/*Print(exp);
				Print(current_time);
				Print(time);
				Print(val);
				Print("-------------");*/
			
			break;
		}

		//! run cooldown right after depletion
		SetCooldown(sm.GetCooldown(),modifier);
		m_StaminaDepletion = Math.Clamp(m_StaminaDepletion, 0, GameConstants.STAMINA_MAX);
	}
}
