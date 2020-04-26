#include "script_component.hpp"

/*
 * Author: Neviothr
 * Teleport the player's group.
 *
 * Arguments:
 * None.
 *
 * Return Value:
 * None.
 *
 * Example:
 * call nev_debug_menu_fnc_teleport
 *
 * Public: No
*/

private _assignedItems = assignedItems player;

// Make sure the player has an item which allows viewing of the map, without one - teleportation won't work.
if (["ItemMap", "ItemGPS", "I_UavTerminal", "C_UavTerminal", "O_UavTerminal", "B_UavTerminal"] findIf {_x in _assignedItems} == -1) exitWith {ERROR_MSG("Teleportion function requires map, GPS or UAV terminal. You have none.")};

systemChat "[Debug Menu] Choose location...";
openMap [true, true];

addMissionEventHandler ["MapSingleClick", {
    params ["", "_pos"];

    // If the player isn't alone in a group, teleport every member of it.
    private _group = units player;

    if (count _group > 1) then {
        {
            _x setPos _pos;
        } forEach _group;
    } else {
        player setPos _pos;
    };

    openMap [false, false];
    removeMissionEventHandler ["MapSingleClick", _thisEventhandler];
}];
