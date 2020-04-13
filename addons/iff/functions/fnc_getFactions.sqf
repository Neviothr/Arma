#include "script_component.hpp"

params ["_side"];

TRACE_1("",_side);

private _factions = [];

{
    if ((str side _x) == _side) then {
        private _faction = faction _x;

        if (_faction in FACTION_BLACKLIST) then {
            WARNING_1("Unable to add %1 to factions list, is blacklisted",_faction);
        } else {
            _factions pushBackUnique _faction;
        };
    };
} forEach allUnits;

_factions
