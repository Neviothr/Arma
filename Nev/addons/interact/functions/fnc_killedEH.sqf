#include "script_component.hpp"

params ["_unit"];

// Weapon actions
{
	_weaponAction = [
		QGVAR(weaponAction) + str floor random 1000000,
		"Take " + getText (configFile >> "CfgWeapons" >> _x >> "displayName"),
		"", // TODO ADD PROPER ICONS - isKindOf
		compile format ["_player action ['TakeWeapon', (nearestObject [_target, 'WeaponHolderSimulated']), %1]", str _x],
		{true}
	] call ace_interact_menu_fnc_createAction;

	[_unit, 0, ["ACE_MainActions"], _weaponAction] call ace_interact_menu_fnc_addActionToObject;
} forEach (weapons _unit) - (assignedItems _unit + [handgunWeapon _unit]);

// Inventory action
_inventoryAction = [
	QGVAR(inventoryAction) + str floor random 1000000,
	"Inventory",
	"", // TODO PROPER ICON
	{_player action ["Gear", _target]},
	{true}
] call ace_interact_menu_fnc_createAction;

[_unit, 0, ["ACE_MainActions"], _inventoryAction] call ace_interact_menu_fnc_addActionToObject;
