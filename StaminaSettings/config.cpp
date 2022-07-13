class CfgPatches
{
	class StaminaSettings
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};
class CfgMods
{
	class StaminaSettings
	{
		dir="Scripts";
		picture="";
		action="";
		hideName=0;
		hidePicture=1;
		name="Scripts";
		credits="tannerng";
		author="tannerng";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World",
			"Mission"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"StaminaSettings\scripts\4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"StaminaSettings\scripts\5_Mission"
				};
			};
		};
	};
};
