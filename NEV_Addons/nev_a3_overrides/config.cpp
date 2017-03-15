class CfgPatches {
	class nev_a3_overrides {
		name = "A3 Vanilla Overrides";
		author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

// Waypoint replacement
#include "CfgEventhandlers.hpp"

// Brighter flares, reduce UGL round bounce
#include "CfgAmmo.hpp"

// Brighter flashlight
#include "CfgWeapons.hpp"