#include "script_component.hpp"

params ["_control", "_index"];

// Pick dummy side based on listbox's index
switch (_index) do {
    case 0: {
        private _dummySide = east;
    };
    case 1: {
        private _dummySide = west;
    };
    case 2: {
        private _dummySide = resistance;
    };
    case 3: {
        private _dummySide = civilian;
    };
};

private _dummyGroup = createGroup _dummySide; // Create an empty group on choosen side

// Join the player to created group, with any message
[player] joinSilent _dummyGroup;

systemChat format ["Changing side to %1", _dummySide];
