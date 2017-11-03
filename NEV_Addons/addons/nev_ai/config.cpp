#include "script_component.hpp"

class CfgPatches {
	class nev_ai {
		name = "A3 AI overrides";
		author = "Neviothr & Jameslkingsley"; // https://github.com/jameslkingsley
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"nev_main"};
		version = 0.0.6;
		versionStr = "0.0.6";
		versionAr[] = {0, 0, 6};
	};
};

#include "CfgSettings.hpp"
#include "CfgAmmo.hpp"
#include "CfgAISkill.hpp"
#include "CfgSurfaces.hpp"