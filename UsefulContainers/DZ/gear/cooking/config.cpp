class cfgPatches
{
	class UsefulContainers_Cooking_Config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Cooking"
		};
	};
};
class cfgVehicles
{
	class Bottle_Base;
	class Pot: Bottle_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={5};
		itemSize[]={3,3};
		itemsCargoSize[]={4,4};
	};
};
