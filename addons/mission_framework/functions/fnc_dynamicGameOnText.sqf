#include "script_component.hpp"

#define LOCATION_TYPES ["Airport", "Area", "BorderCrossing", "BorderCrossing", "CivilDefense", "CulturalProperty", "DangerousForces", "Flag", "FlatArea", "FlatAreaCity", "FlatAreaCitySmall", "Hill", "Name", "NameCity", "NameCityCapital", "NameMarine", "NameVillage", "RockArea", "SafetyZone", "Strategic", "StrongpointArea", "VegetationBroadleaf", "VegetationFir", "VegetationPalm", "VegetationVineyard", "ViewPoint"]

date params ["_year", "_month", "_day", "_hour", "_minute"];

if (_month < 10) then {_month = format ["0%1", _month]};
if (_day < 10) then {_day = format ["0%1", _day]};
private _formattedDate = format ["%1-%2-%3 ", _year, _month, _day];


if (_hour < 10) then {_hour = format ["0%1", _hour]};
if (_minute < 10) then {_minute = format ["0%1", _minute]};
private _formattedTime = format ["%1:%2", _hour, _minute];

private _nearestLocations = (nearestLocations [getPos player, LOCATION_TYPES, worldSize]) apply {text _x};
private _formattedLocation = if (_nearestLocations isEqualTo []) then {
	"In the middle of nowhere";
} else {
	format ["NEAR %1", toUpper (_nearestLocations select (_nearestLocations findIf {_x != ""}))];
};

[
	[
		[toUpper str missionName, "align = 'right' shadow = '1' size = '0.7' font='PuristaBold'", "#FFA500"],
		["", "<br/>"],
		[_formattedDate, "align = 'right' shadow = '1' size = '0.7' font = 'PuristaLight'"],
		[_formattedTime, "align = 'right' shadow = '1' size = '0.7' font = 'PuristaMedium'"],
		["", "<br/>"],
		[_formattedLocation, "align = 'right' shadow = '1' size = '0.7' font = 'PuristaLight'"]
	], -1.1, 1.1
] spawn BIS_fnc_typeText2;
