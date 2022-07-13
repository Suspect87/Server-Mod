class cfgPatches
{
	class UsefulContainers_Containers_Config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Containers"
		};
	};
};
class cfgVehicles
{
	class Container_Base;
	class FirstAidKit: Container_Base
	{
		repairableWithKits[]={5};
		repairCosts[]={5};
		itemSize[]={3,3};
		itemsCargoSize[]={4,4};
	};
	class SmallProtectorCase: Container_Base
	{
		repairableWithKits[]={5};
		repairCosts[]={5};
		itemSize[]={3,3};
		itemsCargoSize[]={4,4};
	};
	class AmmoBox: Container_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={5};
		itemSize[]={4,4};
		itemsCargoSize[]={5,5};
	};
	class WaterproofBag_ColorBase: Container_Base
	{
		repairableWithKits[]={5};
		repairCosts[]={5};
		itemSize[]={4,4};
		itemsCargoSize[]={5,5};
	};
	class Bear_ColorBase: Container_Base
	{
		repairableWithKits[]={2};
		repairCosts[]={5};
		itemSize[]={2,3};
		itemsCargoSize[]={3,4};
	};
};
