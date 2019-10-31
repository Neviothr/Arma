#include "script_component.hpp"

params ["_side"];

private _allFactions = [];
private _opforFactions = [];
private _bluFactions = [];
private _indFactions = [];

{
	private _faction = faction _x;

	if (_faction in FACTION_BLACKLIST) then {
		diag_log format ["UNABLE TO ADD %1 TO FACTION LIST, IS BLACKLISTED", _faction];
	} else {
		_allFactions pushBackUnique _faction;
	};
} forEach allUnits;

{
	private _factionNum = GET_FACTION_NUM(_x)

	switch (_factionNum) do {
		case 0: {
			_opforFactions pushBackUnique _x;
		};

		case 1: {
			_bluFactions pushBackUnique _x;
		};

		case 2: {
			_indFactions pushBackUnique _x;
		};
	};
} forEach _allFactions;

switch (_side) do {
	case  "EAST": {
		_opforFactions
	};

	case "WEST": {
		_bluFactions
	};

	case "GUER": {
		_indFactions
	};
};
