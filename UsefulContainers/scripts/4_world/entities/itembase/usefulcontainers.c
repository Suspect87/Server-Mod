modded class FirstAidKit
{
	override bool CanPutInCargo(EntityAI parent)
	{
		TStringArray smallContainerList = {"FirstAidKit", "SmallProtectorCase", "Pot", "Bear_ColorBase", "Bear_Beige", "Bear_Dark", "Bear_Pink", "Bear_White"};
		if (!super.CanPutInCargo(parent))
		{
			return false;
		}

		foreach (string smallContainer : smallContainerList)
		{
			if (smallContainer == parent.GetType())
			{
				return false;
			}
		}

		if (parent != this && (this.GetType() != parent.GetType()))
		{
			return true;
		}
		return false;
	}
}
modded class SmallProtectorCase
{
	override bool CanPutInCargo(EntityAI parent)
	{
		TStringArray smallContainerList = {"FirstAidKit", "SmallProtectorCase", "Pot", "Bear_ColorBase", "Bear_Beige", "Bear_Dark", "Bear_Pink", "Bear_White"};
		if (!super.CanPutInCargo(parent))
		{
			return false;
		}

		foreach (string smallContainer : smallContainerList)
		{
			if (smallContainer == parent.GetType())
			{
				return false;
			}
		}

		if (parent != this && (this.GetType() != parent.GetType()))
		{
			return true;
		}
		return false;
	}
}
modded class Pot
{
	override bool CanPutInCargo(EntityAI parent)
	{
		TStringArray smallContainerList = {"FirstAidKit", "SmallProtectorCase", "Pot", "Bear_ColorBase", "Bear_Beige", "Bear_Dark", "Bear_Pink", "Bear_White"};
		if (!super.CanPutInCargo(parent))
		{
			return false;
		}

		foreach (string smallContainer : smallContainerList)
		{
			if (smallContainer == parent.GetType())
			{
				return false;
			}
		}

		if (parent != this && (this.GetType() != parent.GetType()))
		{
			return true;
		}
		return false;
	}
}
modded class AmmoBox
{
	override bool CanPutInCargo(EntityAI parent)
	{
		TStringArray smallContainerList = {"FirstAidKit", "SmallProtectorCase", "Pot", "Bear_ColorBase", "Bear_Beige", "Bear_Dark", "Bear_Pink", "Bear_White"};
		TStringArray largeContainerList = {"AmmoBox", "WaterproofBag_ColorBase" , "WaterproofBag_Yellow" , "WaterproofBag_Green" , "WaterproofBag_Orange"};
		if (!super.CanPutInCargo(parent))
		{
			return false;
		}

		foreach (string smallContainer : smallContainerList)
		{
			if (smallContainer == parent.GetType())
			{
				return false;
			}
		}

		foreach (string largeContainer : largeContainerList)
		{
			if (largeContainer == parent.GetType())
			{
				return false;
			}
		}

		if (parent != this && (this.GetType() != parent.GetType()))
		{
			return true;
		}
		return false;
	}
}
modded class WaterproofBag_ColorBase
{
	override bool CanPutInCargo(EntityAI parent)
	{
		TStringArray smallContainerList = {"FirstAidKit", "SmallProtectorCase", "Pot", "Bear_ColorBase", "Bear_Beige", "Bear_Dark", "Bear_Pink", "Bear_White"};
		TStringArray largeContainerList = {"AmmoBox", "WaterproofBag_ColorBase" , "WaterproofBag_Yellow" , "WaterproofBag_Green" , "WaterproofBag_Orange"};
		if (!super.CanPutInCargo(parent))
		{
			return false;
		}

		foreach (string smallContainer : smallContainerList)
		{
			if (smallContainer == parent.GetType())
			{
				return false;
			}
		}

		foreach (string largeContainer : largeContainerList)
		{
			if (largeContainer == parent.GetType())
			{
				return false;
			}
		}

		if (parent != this && (this.GetType() != parent.GetType()))
		{
			return true;
		}
		return false;
	}
}