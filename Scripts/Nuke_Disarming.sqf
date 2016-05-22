//https://forums.bistudio.com/topic/190861-how-to-make-device-a-bomb-and-able-to-disarm/

// In assembled device's init:
this addAction ["Disarm","disarm.sqf"];

// In disarm.sqf:
_nuke1Pos = getPosASL nuke1;
deleteVehicle nuke1;
_diarmedNuke = "Land_Device_disassembled_F" createVehicle [0, 0, 0];
_diarmedNuke setPosASL _nuke1Pos;
