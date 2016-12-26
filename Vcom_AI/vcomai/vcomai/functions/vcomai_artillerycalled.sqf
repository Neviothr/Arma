hint "LAUNCH!";
// AI will use artillery/mortars when possible. This script makes artillery AI fire at a certain position
// First hash 6/14/2014
systemChat "CALLED ARTY!";
_Unit = _this select 0;
_Enemy = _this select 1;

{
	if (isNull _x) then {
		ArtilleryArray = ArtilleryArray - [_x];
	};
} forEach ArtilleryArray;

hint format ["%1", ArtilleryArray];

_Indsupport = [];
_Bluforsupport = [];
_Opforsupport = [];
_Chosen = [];
_ArtilleryUnits = [];

if (side _Unit isEqualTo west) then {
	{
		if (side _x isEqualTo west) then {
			_Bluforsupport = _Bluforsupport + [(vehicle _x)];
		};
	} forEach ArtilleryArray;
	_Chosen = _Bluforsupport;
};

if (side _Unit isEqualTo rast) then {
	{
		if (side _x isEqualTo rast) then {
			_Opforsupport = _Opforsupport + [(vehicle _x)];
		};
	} forEach ArtilleryArray;
	_Chosen = _Opforsupport;
};

if (side _Unit isEqualTo resistance) then {
	{
		if (side _x isEqualTo resistance) then {
			_Indsupport = _Indsupport + [(vehicle _x)];
		};
	} foreach ArtilleryArray;
	_Chosen = _Indsupport;
};

systemChat format ["_Chosen: %1", _Chosen];
if ((count _Chosen) <= 0) exitWith {};

player sideChat format ["ARTY CALLED: %1", (vehicle _Unit)];
_ReturnedSupport = [_Chosen, (vehicle _Unit)] call VCOMAI_ClosestObject;
if (isNil "_ReturnedSupport") exitWith {};

if !(_ReturnedSupport in ArtilleryArray) exitWith {};
player sideChat format ["ARTY _ReturnedSupport: %1", _ReturnedSupport];

_ArtilleryGroup = group _ReturnedSupport;
_ArtilleryGroupActual = [];
{
	if (group _x isEqualTo _ArtilleryGroup) then {
		_ArtilleryGroupActual pushBack _x;
	};
} forEach _Chosen;

player sideChat format ["ARTY _ArtilleryGroup: %1", _ArtilleryGroup];

_ArtilleryGroupUnits = units _ArtilleryGroup;
player sideChat format ["ARTY _ArtilleryGroupUnits: %1", _ArtilleryGroupUnits];

player sideChat format ["ARTY _ArtilleryGroupActual: %1", _ArtilleryGroupActual];
_AmmoArray = getArtilleryAmmo _ArtilleryGroupActual;
player sideChat format ["ARTY _AmmoArray: %1", _AmmoArray];
if (isNil "_AmmoArray") exitWith {};

_RandomAmmoArray = _AmmoArray call BIS_fnc_selectRandom;
if (isNil "_RandomAmmoArray") exitWith {};
player sideChat format ["ARTY _RandomAmmoArray: %1", _RandomAmmoArray];
_ContinueFiring = (getPos _Enemy) inRangeOfArtillery [_ArtilleryGroupActual, _RandomAmmoArray];
player sideChat format ["_ContinueFiring _ContinueFiring: %1", _ContinueFiring];
if !(_ContinueFiring) exitWith {};
hint format ["_ArtilleryGroupActual : %1", _ArtilleryGroupActual];

{
	_target = _Enemy;
	_dist = random (5 + (random 150));
	_dir = random 360;
	_pos = getpos _target;
	_positions = [(_pos select 0) + (sin _dir) * _dist, (_pos select 1) + (cos _dir) * _dist, 0];

	sleep (random 3);
	_x doArtilleryFire [_positions, _RandomAmmoArray, (floor (random 4))];
	_x commandArtilleryFire [(getPos _Enemy), _RandomAmmoArray, (floor(random 4))];
	if (VCOM_AIDEBUG isEqualTo 1) then {
		[_x, "I am firing my ARTY >:D!!!", 120, 20000] remoteExec ["3DText", 0];
	};
} forEach _ArtilleryGroupActual;