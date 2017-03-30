#include "script_component.hpp"

private _i = 0;

if !(isFilePatchingEnabled) then {
	hint "FilePatching is not enabled. Please refer to the readme in the workshop page.";
} else {
	_fileCheck = "\userconfig\nev_debug_menu\settings.hpp" call FUNC(fileExists);

	if !(_FileCheck) then {
		hint "Settings.hpp was not found inside userconfig. Please refer to the readme in the workshop page.";
	};
};

for [{_i = 0}, {_i <= 5}, {_i = _i + 1}] do {
	_aiPos = [player, NEV_maxDistance] call CBA_fnc_randPos;
	if (((player distance _aiPos) < NEV_minDistance) || surfaceIsWater _aiPos) exitWith {};
	[_aiPos, NEV_groupSide, NEV_group] call BIS_fnc_spawnGroup;
};
systemChat format ["Created %1 groups", _i];
call FUNC(aggressiveAI);