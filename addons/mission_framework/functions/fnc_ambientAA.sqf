#include "script_component.hpp"
/*
 * Author: Neviothr
 * Make an synced AA battery fire at a random direction in the air for eternity.
 * AA gun must be syned to module.
 *
 * Arguments:
 * 0: Ambient AA module logic <OBJECT>
 *
 * Return Value:
 * None.
 *
 * Example:
 * call nev_mission_framework_fnc_ambientAA
 *
 * Public: No
*/

params ["_logic"];

private _battery = (synchronizedObjects _logic) select 0;
private _targetPosition = _battery getRelPos [random [250, 500, 1000], random 360];
_targetPosition set [2, random [400, 600, 800]];

if (!alive _battery or !canFire _battery) exitWith {systemChat "Can't fire! canFire is false, or battery is dead!"};
if (assignedVehicleRole gunner _battery isEqualTo []) exitWith {systemChat "Can't fire! No gunner!"};

// make sure weapon is of projectile type
private _guns = weapons _battery;
private _projectileIndex = _guns findIf {
    private _magazine = getArray (configfile >> "CfgWeapons" >> _x >> "magazines") select 0;
    private _ammo = getText (configfile >> "CfgMagazines" >> _magazine >> "ammo");
   (_ammo isKindOf "BulletCore") && (toUpper _ammo find "SMOKE" isequalto -1);
};

if (_projectileIndex isEqualTo -1) exitWith {systemchat "Battery has no viable weapons!"};

gunner _battery dowatch _targetPosition;

private _cannon = _battery weaponsTurret [0] select _projectileIndex;

// TODO - compatibility for multiple synced batteries to a single module.
// TODO - wait until cannon is pointed at target location before firing.
[{
    params ["_args"];
    _args params ["_battery", "_cannon"];

    _battery fire _cannon;
}, random 1, [_battery, _cannon]] call CBA_fnc_addPerFrameHandler;
