#include "script_component.hpp"

class CfgPatches {
	class nev_editor {
		name = "A3 editor additions";
		author = "Neviothr & Cptnnick"; // https://github.com/cptnnick
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"cba_main"};
		version = 0.0.2;
		versionStr = "0.0.2";
		versionAr[] = {0, 0, 2};
	};
};

#include "CfgEventhandlers.hpp"
#include "CfgSettings.hpp"
#include "CfgVehicles.hpp"
#include "Cfg3DEN.hpp"