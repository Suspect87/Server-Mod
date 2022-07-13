class cfgPatches
{
	class UsefulContainers_scripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class cfgMods
{
	class UsefulContainers
	{
		dir="UsefulContainers";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="UsefulContainers";
		credits="Novadose";
		author="Novadose";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"UsefulContainers/scripts/4_world"
				};
			};
		};
	};
};
