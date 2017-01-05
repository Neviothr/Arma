/*
	max range values for NVG/TI are read from:
	- Rifles/Launchers: weapon(muzzle) config 
	- NVG/Binos: corresponding cfgweapons class
	- vehicles:  corresponding turret in cfgvehicles (body for drivers)

	value names: "ace_sys_nvg_nvrange" and "ace_sys_nvg_tirange"
*/
#include "script_component.hpp"
#define __cfgw configfile>>"cfgweapons"
#define __cfgv configfile>>"cfgvehicles">>_veh

private ["_value","_w","_path","_newvd","_woptics","_veh","_p","_m","_abort","_ass"];
_m = currentVisionmode player;
if (_m == 0) exitwith {};

_value = if (_m == 1) then {"ace_sys_nvg_nvrange"} else {"ace_sys_nvg_tirange"};
_newvd = 0;
_path = "";
_abort = false;

if (player == vehicle player) then {
	_p = __cfgw;
	_w = player call FUNC(animtype);
	switch (_w) do {
		case 0: { //rifle
			if (cameraview == "gunner") then {
				_p = __cfgw>>(primaryweapon player);
				if (currentmuzzle player != primaryweapon player) then {
					_p = _p>>(currentmuzzle player);
				};
				_woptics = getText (_p>>"modeloptics");
				if (_woptics != "" && {_woptics != "-"}) then {
					_w = [_p,_m] call FUNC(curoptics);
					switch (_w) do {
						case 1: {_path = _p}; //NV/Ti-enabled optics
						case 2: {_abort = true}; //non-NV-enabled optics
						default {};
					};
				};
			};
		};
		//skipping pistol
		case 2: { //AT
			if (cameraview == "gunner") then {
				_woptics = getText (__cfgw>>(secondaryweapon player)>>"modeloptics");
				if (_woptics != "" && {_woptics != "-"}) then {
					_path = __cfgw>>(secondaryweapon player);
				};
			};
		};
		case 3: { //bino
			if (cameraview == "gunner") then {
				_w = "";
				{
					if (getText(__cfgw>>_x>>"simulation")=="Binocular") exitwith {_w = _x};
				} foreach (weapons player);
				if (_w != "") then {
					_path = __cfgw>>_w;
				};
			};
		};
		default {};
	};
	if (typename _path != "config") then { //it's NVG
		_w = "";
		{
			if (getText(__cfgw>>_x>>"simulation")=="NVGoggles") exitwith {_w = _x};
		} foreach (weapons player);
		if (_w != "") then {
			_path = __cfgw>>_w;
		};
	};
	if (typename _path != "config") exitwith {};
	if (isNumber(_path>>_value)) then {
		_newvd = getNumber(_path>>_value);
	};
	if (_newvd == 0) exitwith {};

	if (viewdistance > _newvd) then {
		setviewdistance _newvd; player setVariable [QGVAR(vddd),_newvd];
	};
	if (_abort) then {player switchcamera "internal"};
} else {
	if (cameraview == "gunner") then {
		_veh = typeof (vehicle player);
		_ass = assignedvehiclerole player;
		/*if (isArray(__cfgv>>(_value+"arr")) && ([vehicle player,_ass select 1,_m] call FUNC(isusingoptics_veh))) exitwith
		{
			_path = getArray(__cfgv>>(_value+"arr"));
			_newvd = switch (_ass select 0) do {
				case "Driver": {_path select 0};
				case "Turret": {};
				default {""};
			};
		};*/
		_path = switch (_ass select 0) do {
			case "Driver": {__cfgv};
			case "Turret": {
				if ([vehicle player,_ass select 1,_m] call FUNC(isusingoptics_veh)) then {
					[vehicle player,_ass select 1] call cba_fnc_getturret;
				} else {""};
			};
			default {""};
		};
		//player sidechat format ["%1",_path];
	};
	if (typename _path != "config") then {
		_w = "";
		{
			if (getText(__cfgw>>_x>>"simulation")=="NVGoggles") exitwith {_w = _x};
		} foreach (weapons player);
		if (_w != "") then {_path = __cfgw>>_w};
	};
	if (typename _path != "config") exitwith {};
	if (isNumber(_path>>_value)) then {
		_newvd = getNumber(_path>>_value);
	};
	if (_newvd == 0) exitwith {};
	if (viewdistance > _newvd) then {
		setviewdistance _newvd;
	};
};
//hint format ["%1",[_path,_newvd]];