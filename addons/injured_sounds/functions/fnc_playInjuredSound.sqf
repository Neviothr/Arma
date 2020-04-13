#include "script_component.hpp"

params ["_unit"];

TRACE_1("",_unit);

if (!(isDamageAllowed _unit) || !(local _unit)) exitWith {};

private _pain = damage _unit;

if ((_unit getVariable [QGVAR(playingInjuredSound), false])) exitWith {};
_unit setVariable [QGVAR(playingInjuredSound), true];

if (_pain > 0) exitWith {
    private _availableSounds_A = [
        "WoundedGuyA_01",
        "WoundedGuyA_02",
        "WoundedGuyA_03",
        "WoundedGuyA_04",
        "WoundedGuyA_05",
        "WoundedGuyA_06",
        "WoundedGuyA_07",
        "WoundedGuyA_08"
    ];
    private _availableSounds_B = [
        "WoundedGuyB_01",
        "WoundedGuyB_02",
        "WoundedGuyB_03",
        "WoundedGuyB_04",
        "WoundedGuyB_05",
        "WoundedGuyB_06",
        "WoundedGuyB_07",
        "WoundedGuyB_08"
    ];
     private _availableSounds_C = [
        "WoundedGuyC_01",
        "WoundedGuyC_02",
        "WoundedGuyC_03",
        "WoundedGuyC_04",
        "WoundedGuyC_05"
    ];
    private _sound = "";

    if (_pain > 0.5) then {
        if (random (1) > 0.5) then {
            _sound = selectRandom _availableSounds_A;
        } else {
            _sound = selectRandom _availableSounds_B;
        };
    } else {
        _sound = selectRandom _availableSounds_B;
    };

    playSound3D [(getArray (configFile >> "CfgSounds" >> _sound >> "sound") select 0) + ".wss", objNull, false, getPos _unit, 15, 1, 25]; // +2db, 15 meters.

    private _delay = (30 - (random (25) * _pain)) max (3.5 + random (2));

    [{
        (_this select 0) setVariable [QGVAR(playingInjuredSound), nil];
    }, [_unit], _delay, _delay] call CBA_fnc_waitAndExecute;
};

// Clean up in case no sounds have been played
_unit setVariable [QGVAR(playingInjuredSound), nil];
