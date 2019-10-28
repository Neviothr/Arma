#include "script_component.hpp"

params ["_side"];

private _allFactions = [];
private _opforFactions = [];
private _bluFactions = [];
private _indFactions = [];
private _civFactions = [];

{
	_allFactions pushBackUnique faction _x;
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

		case 3: {
			_civFactions pushBackUnique _x;
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

	case "RESISTANCE": {
		_indFactions
	};

	case "CIVILIAN": {
		_civFactions
	};
};
