class CfgPatches
{
	class smokeandfire
	{
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class smokeandfire
	{
		dir="sus_server/smokeandfire";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="smoke less fire";
		author="";
		authorID="";
		version="1.5";
		extra=0;
		type="mod";
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"sus_server/smokeandfire/Scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"sus_server/smokeandfire/Scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"sus_server/smokeandfire/Scripts/5_Mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Inventory_Base;
	class House;
	class smokeandfire_base: Inventory_Base
	{
		scope=0;
		storageCategory=10;
		model="\dz\gear\consumables\SmallStone.p3d";
		hiddenSelectionsTextures[]=
		{
			"sus_server\smokeandfire\data\virtualbox.paa"
		};
		hiddenSelections[]=
		{
			"Zbytek"
		};
	};
	class smokelocation_1: smokeandfire_base
	{
		scope=2;
	};
	class smokelocation_2: smokeandfire_base
	{
		scope=2;
	};
	class smokelocation_3: smokeandfire_base
	{
		scope=2;
	};
	class smokelocation_4: smokeandfire_base
	{
		scope=2;
	};
};
