class CfgPatches
{
	class ace_c_useractions
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.59;
		requiredAddons[]=
		{
			"ace_main",
			"ace_sys_interaction"
		};
		version="1.12.1.510";
	};
};
class CfgActions
{
	class None;
	class LoadMagazine: None
	{
		textDefault="";
	};
	class LoadOtherMagazine: LoadMagazine
	{
		text="$STR_ACE_DN_ACTION_LOADMAGAZINE";
		textDefault="";
	};
	class LoadEmptyMagazine: LoadMagazine
	{
		text="$STR_ACE_DN_ACTION_LOADMAGAZINE";
		textDefault="";
	};
	class ManualFire: None
	{
		text="$STR_ACE_DN_ACTION_FIRECONTROL";
		textDefault="";
	};
	class ManualFireCancel: ManualFire
	{
		text="$STR_ACE_DN_ACTION_DISABLEFIRECONTROL";
		textDefault="";
	};
};
