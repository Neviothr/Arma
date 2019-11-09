#include "script_component.hpp"

params ["_side"];

private _factions = [];

{
    private _unitSide = str side _x;

    if (_unitSide == _side) then {
        private _faction = faction _x;

        if (_faction in FACTION_BLACKLIST) then {
            INFO_1("Unable to add %1 to faction list, is blacklisted.", _faction);
        } else {
            _factions pushBackUnique _faction;
        };
    };
} forEach allUnits;

INFO_1("_factions - %1", _factions);

_factions;
