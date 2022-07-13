class CfgPatches
{
	class ServerPapers
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Consumables"
		};
	};
	class Spray_cans
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Supports",
			"DZ_Weapons_Muzzles",
			"DZ_Sounds_Weapons",
			"DZ_Sounds_Effects",
			"DZ_Scripts"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Paper;
	class RecipeSheetBase: Paper
	{
		scope=0;
		displayName="Crafting Recipe";
		descriptionShort="Required to craft items with the workbench.";
		hiddenSelections[]=
		{
			"zbytek",
			"camo",
			"zasleh"
		};
	};
	class cityofwolves_wpns_paper: RecipeSheetBase
	{
		scope=2;
		displayName="Advanced Wpns Development";
		descriptionShort="Required for the manufacture of advanced weapons.";
		hiddenSelectionsTextures[]=
		{
			"Sus_Server\workbench_development\data\advance_wpns.paa"
		};
	};
	class cityofwolves_medical_paper: RecipeSheetBase
	{
		scope=2;
		displayName="Development of Medical Supplies";
		descriptionShort="Required for the development of advanced medical.";
		hiddenSelectionsTextures[]=
		{
			"Sus_Server\workbench_development\data\advance_medical.paa"
		};
	};
	class cityofwolves_special_paper: RecipeSheetBase
	{
		scope=2;
		displayName="Special Item Development";
		descriptionShort="Used in the production of more advanced items.";
		hiddenSelectionsTextures[]=
		{
			"Sus_Server\workbench_development\data\special_item.paa"
		};
	};
	class cityofwolves_ammo_paper: RecipeSheetBase
	{
		scope=2;
		displayName="Advanced Ammo Development";
		descriptionShort="Required for the development of more advanced ammo.";
		hiddenSelectionsTextures[]=
		{
			"Sus_Server\workbench_development\data\adavnce_ammo.paa"
		};
	};
	class cityofwolves_spraycan: Inventory_Base
	{
		scope=2;
		displayName="Coloured Spray Can";
		descriptionShort="Spray can used in work bench designs.";
		itemsize[]={1,2};
		itemsCargoSize[]={0,0};
		model="\DZ\gear\consumables\spraycan.p3d";
		weight=50;
	};
	class CityofWolves_Fridge: Inventory_Base
	{
		scope=2;
		displayName="Delux Fridge";
		descriptionShort="Hand Crafted Delux Fridge from Namalsk Store.";
		model="\DZ\structures\furniture\kitchen\fridge\fridge.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		handheld="true";
		carveNavmesh=1;
		canBeDigged=0;
		weight=5000;
		itemSize[]={10,10};
		physLayer="item_large";
		rotationFlags=0;
		class Cargo
		{
			itemsCargoSize[]={6,20};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class CityofWolves_Library: Inventory_Base
	{
		scope=2;
		displayName="Library";
		descriptionShort="For all your Library needs.";
		model="\DZ\structures\furniture\Cases\library_a\library_a.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		handheld="true";
		carveNavmesh=1;
		canBeDigged=0;
		weight=5000;
		itemSize[]={10,10};
		physLayer="item_large";
		rotationFlags=0;
		class Cargo
		{
			itemsCargoSize[]={10,20};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};	
	
	class CityofWolves_Table: Inventory_Base
	{
		scope=2;
		displayName="Wooden Table";
		descriptionShort="Hand crafted Wooden Table.";
		model="\DZ\structures\furniture\various\table_dz.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		handheld="true";
		carveNavmesh=1;
		canBeDigged=0;
		weight=5000;
		itemSize[]={10,10};
		physLayer="item_large";
		rotationFlags=0;
		class Cargo
		{
		};
	};
	class CityofWolves_SofaOld: Inventory_Base
	{
		scope=2;
		displayName="Old Leather Sofa";
		descriptionShort="Sometimes old is between and more comfortable.";
		model="\DZ\structures\furniture\chairs\sofa_leather\sofa_leather_old.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		handheld="true";
		carveNavmesh=1;
		canBeDigged=0;
		weight=5000;
		itemSize[]={10,10};
		physLayer="item_large";
		rotationFlags=0;
		class Cargo
		{
			itemsCargoSize[]={4,4};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class CityofWolves_SofaCorner: Inventory_Base
	{
		scope=2;
		displayName="Corner Sofa";
		descriptionShort="Delux Corner Sofa.";
		model="\DZ\structures\furniture\chairs\sofacorner\sofacorner.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		handheld="true";
		carveNavmesh=1;
		canBeDigged=0;
		weight=5000;
		itemSize[]={10,10};
		physLayer="item_large";
		rotationFlags=0;
		class Cargo
		{
			itemsCargoSize[]={5,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class CityofWolves_ChairOffice: Inventory_Base
	{
		scope=2;
		displayName="Office Chair";
		descriptionShort="Stolen from the local Government Building, Office Chair.";
		model="\DZ\structures\furniture\chairs\ch_office_b\ch_office_b.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		handheld="true";
		carveNavmesh=1;
		canBeDigged=0;
		weight=5000;
		itemSize[]={10,10};
		physLayer="item_large";
		rotationFlags=0;
		class Cargo
		{
		};
	};
	class CityofWolves_WoodenChair: Inventory_Base
	{
		scope=2;
		displayName="Wooden Chair";
		descriptionShort="Hand crafted Wooden Chair.";
		model="\DZ\structures\furniture\chairs\ch_mod_c\ch_mod_c.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		handheld="true";
		carveNavmesh=1;
		canBeDigged=0;
		weight=5000;
		itemSize[]={10,10};
		physLayer="item_large";
		rotationFlags=0;
		class Cargo
		{
		};
	};
	class CityofWolves_MetalCrate: Inventory_Base
	{
		scope=2;
		displayName="Metal Crate";
		descriptionShort="Metal Crate, storage.";
		model="\DZ\structures\furniture\cases\metalcrate\metalcrate.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		handheld="true";
		carveNavmesh=1;
		canBeDigged=0;
		weight=5000;
		itemSize[]={5,5};
		physLayer="item_large";
		rotationFlags=0;
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class CityofWolves_Chest: Inventory_Base
	{
		scope=2;
		displayName="Big Wooden Chest";
		descriptionShort="Big Wooden Chest, better storage.";
		model="\DZ\structures\furniture\various\chest_dz.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		handheld="true";
		carveNavmesh=1;
		canBeDigged=0;
		weight=5000;
		itemSize[]={10,10};
		physLayer="item_large";
		rotationFlags=0;
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};	
	class CityofWolves_MedicalCabinet: Inventory_Base
	{
		scope=2;
		displayName="Medical Closet";
		descriptionShort="Small Medical Cabinet.";
		model="\DZ\structures\furniture\decoration\lekarnicka\lekarnicka.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		handheld="true";
		carveNavmesh=1;
		canBeDigged=0;
		weight=25000;
		itemSize[]={6,8};
		physLayer="item_large";
		rotationFlags=0;
		attachments[]=
		{
			"firstaidkit"
		};
		class GUIInventoryAttachmentsProps
		{
			class Row_firstaidkit
			{
				name="Row 1";
				description="";
				attachmentSlots[]=
				{
					"firstaidkit"
				};
				icon="missing";
			};
		};
		class Cargo
		{
			itemsCargoSize[]={6,8};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
};
