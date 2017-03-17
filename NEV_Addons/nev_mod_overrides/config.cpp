class CfgPatches {
	class nev_a3_overrides {
		name = "A3 Mod Overrides";
		author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

// Ambient sound remover from MBG_Nam, if MBG_Nam_c is present - load modified config
#ifdef MBG_Nam_C
	#include "CfgWorlds.hpp"
#endif

// RH M4/M16 sound and zoom replacement, if RH_m4_cfg is present - load modified config
#ifdef RH_m4_cfg
	#include "CfgWeapons.hpp"
#endif