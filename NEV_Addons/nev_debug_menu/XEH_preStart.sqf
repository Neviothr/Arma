#include "script_component.hpp"

if (isClass (configFile >> "CfgPatches" >> "RH_acc")) then {
	activateAddons ["nev_mod_overrides"];
};

#include "XEH_PREP.hpp"