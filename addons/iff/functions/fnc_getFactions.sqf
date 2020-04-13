#include "script_component.hpp"

/*
 * Author: Neviothr
 * Get a list of all factions of a certain side, of all units in the scenario.
 *
 * Arguments:
 * 0: Side <SIDE>
 *
 * Return Value:
 * Array of faction name as strings <ARRAY of STRINGS>
 *
 * Example:
 * [WEST] call nev_iff_fnc_getFactions
 *
 * Public: No
*/

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
