modded class MiscGameplayFunctions
{	
    override static float GetEnergyMetabolicSpeed(int movement_speed)
    {
        float speed;
        //PrintString(movement_speed.ToString());
        switch (movement_speed)
        {
            case 1:
            {
                speed = PlayerConstants.METABOLIC_SPEED_ENERGY_WALK * StaminaConfig.GetInstance().GetStaminaMultipliers().Get("m_MetabolicEnergyWalkMult");
                break;
            }
            case 2:
            {
                speed = PlayerConstants.METABOLIC_SPEED_ENERGY_JOG * StaminaConfig.GetInstance().GetStaminaMultipliers().Get("m_MetabolicEnergyJogMult");
                break;
            }
            case 3:
            {
                speed = PlayerConstants.METABOLIC_SPEED_ENERGY_SPRINT * StaminaConfig.GetInstance().GetStaminaMultipliers().Get("m_MetabolicEnergySprintMult");
                break;
            }
            default:
            {
                speed = 0;
                break;
            }
        }
        speed += PlayerConstants.METABOLIC_SPEED_ENERGY_BASAL;
        return speed;
    }
    
    override static float GetWaterMetabolicSpeed(int movement_speed)
    {
        float speed;
        switch (movement_speed)
        {
            case 1:
            {
                speed = PlayerConstants.METABOLIC_SPEED_WATER_WALK * StaminaConfig.GetInstance().GetStaminaMultipliers().Get("m_MetabolicWaterWalkMult");
                break;
            }
            case 2:
            {
                speed = PlayerConstants.METABOLIC_SPEED_WATER_JOG * StaminaConfig.GetInstance().GetStaminaMultipliers().Get("m_MetabolicWaterJogMult");
                break;
            }
            case 3:
            {
                speed = PlayerConstants.METABOLIC_SPEED_WATER_SPRINT * StaminaConfig.GetInstance().GetStaminaMultipliers().Get("m_MetabolicWaterSprintMult");
                break;
            }
            default:
            {
                speed = 0;
                break;
            }
        }
        speed += PlayerConstants.METABOLIC_SPEED_WATER_BASAL;
        return speed;
    }
};
