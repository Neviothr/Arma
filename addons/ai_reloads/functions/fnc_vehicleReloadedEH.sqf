#include "script_component.hpp"

/*
 * Author: Cyruz143
 * Restores vehicle ammo to full, AI only.
 *
 * Arguments:
 * 0: Vehile <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * tank addEventHandler ["Reloaded", {_this call nev_ai_reloads_fnc_vehicleReloadedEH}];
 * [technical] call nev_ai_reloads_fnc_vehicleReloadedEH
 *
 * Public: No
 * https://github.com/Cyruz143/ark_inhouse/blob/master/addons/ark_ai_reloads/server_postinit.sqf
*/

params ["_vehicle"];

TRACE_1("",_vehicle);

if (isPlayer _vehicle) exitWith {};

_vehicle setVehicleAmmoDef 1;
