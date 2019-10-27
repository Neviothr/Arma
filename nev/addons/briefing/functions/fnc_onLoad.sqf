#include "script_component.hpp"

params ["_dialog"];

// Logic
private _logicCenterPos = [1000, 1000, 10000];

private GVAR(logicCenter) = createAgent ["Logic", _logicCenterPos, [], 0, "none"];
GVAR(logicCenter) setPos _logicCenterPos;
GVAR(logicCenter) setDir 180;

_target = createAgent ["Logic", _logicCenterPos, [], 0, "none"];
_target setPos _logicCenterPos;

// Debug orb
private _orb = createVehicle ["Sign_Arrow_Blue_F", getPos GVAR(logicCenter), [], 0, "none"];
_orb attachTo [GVAR(logicCenter), [0, 0, 1]];
_orb hideObject true;

// Create default units
["B_Soldier_F", 1] call FUNC(createUnit);
["B_Soldier_F", 2] call FUNC(createUnit);
["B_Soldier_F", 3] call FUNC(createUnit);
["B_Soldier_F", 4] call FUNC(createUnit);

// Camera
setViewDistance 1;
GVAR(camera) = "camera" camCreate getPos GVAR(logicCenter);
GVAR(camera) cameraEffect ["internal","back"];
GVAR(camera) camPrepareFocus [-1,-1];
GVAR(camera) camCommitPrepared 0;
GVAR(camera) camSetTarget _orb;
GVAR(camera) camSetPos [getPos _orb select 0, (getPos _orb select 1) - 3, (getPos _orb select 2) + 1];
GVAR(camera) camCommit 0;
cameraEffectEnableHUD true;
showCinemaBorder false;
