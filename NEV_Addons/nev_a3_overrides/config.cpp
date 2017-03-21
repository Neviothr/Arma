class CfgPatches {
	class nev_a3_overrides {
		name = "A3 Vanilla Overrides";
		author = "Neviothr";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Weapons_F"};
		version = 1.4.0;
		versionStr = "1.4.0";
		versionAr[] = {1 ,4, 0};
	};
};

// CBA's versioning system
#include "CfgSettings.hpp"

// Waypoint replacement
#include "CfgEventhandlers.hpp"

// Brighter flares, reduce UGL round bounce
#include "CfgAmmo.hpp"

// Brighter flashlight
#include "CfgWeapons.hpp"

// Less explosive aircrafts
#include "CfgVehicles.hpp"