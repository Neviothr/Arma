class CfgPatches
{
	class ace_sys_flashlight
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"ace_c_weapon"
		};
		version="1.14.0.593";
		author[]=
		{
			"Rocko"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ace_sys_flashlight
		{
			list[]=
			{
				"ace_sys_flashlight"
			};
		};
	};
};
class CfgWeapons
{
	class Pistol;
	class ACE_Flashlight: Pistol
	{
		scope=1;
		displayName="Fleshlight";
		model="\x\ace\addons\sys_flashlight\ace_muglite.p3d";
		modelOptics="-";
		picture="\x\ace\addons\sys_flashlight\data\equip\w_muglite_ca.paa";
		magazines[]={};
		drySound[]=
		{
			"",
			0.0099999998,
			1,
			20
		};
		class FlashLight
		{
			color[]={0.89999998,0.89999998,0.69999999,0.89999998};
			ambient[]={0.1,0.1,0.1,1};
			position="flash dir";
			direction="flash";
			angle=30;
			scale[]={1,1,0.5};
			brightness=0.1;
		};
		descriptionShort="";
	};
	class ACE_MugLite: ACE_Flashlight
	{
		scope=2;
		displayName="MUG Lite";
		model="\x\ace\addons\sys_flashlight\ace_muglite.p3d";
		picture="\x\ace\addons\sys_flashlight\data\equip\w_muglite_ca.paa";
	};
};
class CfgVehicles
{
	class NonStrategic;
	class ACE_Flashlight: NonStrategic
	{
		displayName="";
		model="\x\ace\addons\sys_flashlight\ace_light.p3d";
		animated=0;
		typicalCargo[]={};
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		vehicleClass="training";
		mapsize=0;
		icon="\ca\data\library\data\icons\obstacle_saddle_CA.paa";
		scope=1;
		nameSound="";
		accuracy=0.2;
		class DestructionEffects
		{
		};
		class Reflectors
		{
			class LampLight
			{
				color[]={0.89999998,0.80000001,0.60000002,1};
				ambient[]={0.1,0.1,0.1,1};
				position="Light";
				direction="LightDown";
				hitpoint="lampa";
				selection="";
				size=0.050000001;
				brightness=0.039999999;
			};
		};
	};
	class ACE_Dashlight: ACE_Flashlight
	{
		model="\x\ace\addons\sys_flashlight\ace_dash.p3d";
		class Reflectors
		{
		};
		class Markerlights
		{
			class Lamplight
			{
				color[]={0.89999998,0.80000001,0.60000002,1};
				ambient[]={0.1,0.1,0.1,1};
				name="Light";
				brightness=0.0020000001;
				blinking=0;
				size=0.035;
			};
		};
	};
};
