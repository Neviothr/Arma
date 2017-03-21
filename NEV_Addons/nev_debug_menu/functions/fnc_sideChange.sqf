#include "script_component.hpp"

params ["_control", "_index"];
private ["_dummySide", "_dummyGroup"];

switch (_index) do {
	case 0: {
		_dummySide = east;
	};
	case 1: {
		_dummySide = west;
	};
	case 2: {
		_dummySide = resistance;
	};
	case 3: {
		_dummySide = civilian;
	};
};

_dummyGroup = createGroup _dummySide;
[player] joinSilent _dummyGroup;