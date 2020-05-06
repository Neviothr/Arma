#include "script_component.hpp"

/*
 * Author: BaerMitUmlaut
 * Handles any audible, visual and physical effects of fatigue.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Fatigue <NUMBER>
 * 2: Speed <NUMBER>
 * 3: Overexhausted <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_player, 0.5, 3.3, true] call ace_advanced_fatigue_fnc_handleEffects
 *
 * Public: No
*/

params ["_unit", "_fatigue", "_speed", "_overexhausted"];

#ifdef DEBUG_MODE_FULL
    systemChat str _fatigue;
    systemChat str vectorMagnitude velocity _unit;
#endif

// - Audible effects ----------------------------------------------------------
 ace_advanced_fatigue_lastBreath = ace_advanced_fatigue_lastBreath + 1;
if (_fatigue > 0.4 && {ace_advanced_fatigue_lastBreath > (_fatigue * -10 + 9)} && {!underwater _unit}) then {
    if (!isGameFocused) exitWith {};
    switch (true) do {
        case (_fatigue < 0.6): {
            playSound ("ace_advanced_fatigue_breathLow" + str(floor random 6));
        };
        case (_fatigue < 0.85): {
            playSound ("ace_advanced_fatigue_breathMid" + str(floor random 6));
        };
        default {
            playSound ("ace_advanced_fatigue_breathMax" + str(floor random 6));
        };
    };
    ace_advanced_fatigue_lastBreath = 0;
};

// - Visual effects -----------------------------------------------------------
ace_advanced_fatigue_ppeBlackoutLast = ace_advanced_fatigue_ppeBlackoutLast + 1;
if (ace_advanced_fatigue_ppeBlackoutLast == 1) then {
    ace_advanced_fatigue_ppeBlackout ppEffectAdjust [1,1,0,[0,0,0,1],[0,0,0,0],[1,1,1,1],[10,10,0,0,0,0.1,0.5]];
    ace_advanced_fatigue_ppeBlackout ppEffectCommit 1;
} else {
    if (_fatigue > 0.85) then {
        if (ace_advanced_fatigue_ppeBlackoutLast > (100 - _fatigue * 100) / 3) then {
            ace_advanced_fatigue_ppeBlackout ppEffectAdjust [1,1,0,[0,0,0,1],[0,0,0,0],[1,1,1,1],[2,2,0,0,0,0.1,0.5]];
            ace_advanced_fatigue_ppeBlackout ppEffectCommit 1;
            ace_advanced_fatigue_ppeBlackoutLast = 0;
        };
    };
};

    // - Physical effects ---------------------------------------------------------
if (ace_advanced_fatigue_isSwimming) exitWith {
    if (ace_advanced_fatigue_setAnimExclusions isEqualTo []) then {
        _unit setAnimSpeedCoef linearConversion [0.7, 0.9, _fatigue, 1, 0.5, true];
    };
    if ((isSprintAllowed _unit) && {_fatigue > 0.7}) then {
        [_unit, "blockSprint", "advanced_fatigue", true] call ace_common_fnc_statusEffect_set;
    } else {
        if ((!isSprintAllowed _unit) && {_fatigue < 0.7}) then {
            [_unit, "blockSprint", "advanced_fatigue", false] call ace_common_fnc_statusEffect_set;
         };
    };
};
if ((getAnimSpeedCoef _unit) != 1) then {
    if (ace_advanced_fatigue_setAnimExclusions isEqualTo []) then {
        TRACE_1("reset",getAnimSpeedCoef _unit);
        _unit setAnimSpeedCoef 1;
    };
};

if (_fatigue > 0.8) then {
    [_unit, "blockSprint", "advanced_fatigue", false] call ace_common_fnc_statusEffect_set;
    _unit setAnimSpeedCoef 0.75;
};
if (_fatigue > 0.89) then {
    [_unit, "blockSprint", "advanced_fatigue", true] call ace_common_fnc_statusEffect_set;
    _unit setAnimSpeedCoef 0.5;
};

_unit setVariable ["ace_advanced_fatigue_aimFatigue", _fatigue];

private _aimCoef = [missionNamespace, "ACE_setCustomAimCoef", "max"] call ace_common_fnc_arithmeticGetResult;
_unit setCustomAimCoef _aimCoef;
