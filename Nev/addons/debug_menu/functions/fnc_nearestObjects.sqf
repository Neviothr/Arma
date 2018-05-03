//#include "script_component.hpp"

private _objList = [];

{
	_objList pushBack (typeOf _x) + " (" + str _x + ")";
} forEach nearestObjects [player, ["Tank", "Car", "Ship", "Helicopter", "Plane", "StaticWeapon", "CAManBase"], 100];

copyToClipboard str _objList;
hint format ["Object list has been copied to clipboard: %1", _objList];
