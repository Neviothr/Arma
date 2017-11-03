#include "script_component.hpp"

params ["_control", "_index"];
private ["_dummySide", "_dummyGroup"];

// Pick dummy side based on listbox's index
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

_dummyGroup = createGroup _dummySide; // Create an empty group on choosen side

// Join the player to created group, with any message
[player] joinSilent _dummyGroup;
