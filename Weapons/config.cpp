class CfgPatches
{
	class ConvertedWpnsPack
	{
		units[]={};
		weapons[]=
		{
			"CityofWolves_Converted_M249",
			"TTC_m249"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
		magazines[]=
		{
			"CityofWolves_Converted_M249_Mag",
			"TTC_m249_Magazine"
		};
	};
};
class Rifle_Base;
class TTC_M249_Base;
class TTC_M249;
class cfgWeapons
{
	class CityofWolves_Converted_M249: TTC_M249
	{
		scope=2;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		magazines[]=
		{
			"CityofWolves_Converted_M249_Mag"
		};
		displayName="Converted M249";
		descriptionShort="Specially Converted M249 to .308 calibre";
	};
};

class CfgMagazines
{
	class Ammunition_Base;
	class Magazine_Base;	
	class TTC_M249_Mag_200rnd;
	class CityofWolves_Converted_M249_Mag: TTC_M249_Mag_200rnd
	{
		scope=2;
		displayName="Specially Converted M249 Magazine to .308";
		descriptionShort="M249 Mag 308";
		ammo="Bullet_308Win";
		ammoItems[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		count=100;
	};
};
