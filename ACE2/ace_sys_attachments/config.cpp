class CfgPatches
{
	class ace_sys_attachments
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"CAWeapons",
			"CAWeapons2",
			"ace_main",
			"ace_sys_interaction"
		};
		version="1.14.0.590";
		author[]=
		{
			"Sickboy"
		};
	};
};
class CfgSettings
{
	class ace
	{
		class sys_attachments
		{
			class Weapons
			{
				class Default
				{
					ACE_ATTACH_AVAILABLE[]={};
				};
			};
		};
	};
};
class CfgWeapons
{
	class Rifle;
};
