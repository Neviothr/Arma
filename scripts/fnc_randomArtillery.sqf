/*
	By PabstMirror
	https://www.reddit.com/r/armadev/comments/2qwzgq/fake_artillerymortar_fire_around_player/cnaggt6

	Usage: [triggerName, numberOfShells] execVM "fnc_randomArtillery.sqf";

	Munition classnames:
		Mortar:
			Sh_82mm_AMOS
		Howitzer:
			Sh_155mm_AMOS
			rhs_ammo_3of56
		MLRS:
			12Rnd_230mm_rockets
			CUP_R_GRAD_HE
*/

if (!isServer) exitWith {};

#define SAFE_DISTANCE 62
#define SHELL_TYPE "R_230mm_HE"

params [["_trigger", objNull, [objNull]], ["_shellCount", 1, [0]]];

private _triggerPos = getPos _trigger;
private _triggerRadius = (triggerArea _trigger) select 0;

for "_index" from 1 to _shellCount do {
	private _posToFireAt = [];

	while {(count _posToFireAt) == 0} do {
		_posToFireAt = [_triggerPos, (random _triggerRadius), (random 360)] call BIS_fnc_relPos;

		{
			if ((_x distance _posToFireAt) < SAFE_DISTANCE) exitWith {_posToFireAt = []};
		} forEach allUnits;
	};

	_posToFireAt set [2, 800];

	private _shell = SHELL_TYPE createVehicle _posToFireAt;
	_shell setPos _posToFireAt;
	_shell setVelocity [0,0,-200];

	if ((_index % 4) == 3) then {
		sleep (3 + (random 1) / 4);
	} else {
		sleep random 0.1;
	};
};
