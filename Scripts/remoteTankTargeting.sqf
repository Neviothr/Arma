// In unit's init line
this addAction ["Fire", "remoteTankTargeting.sqf"];

// Get the position on which the unit's crosshair is pointed on
_targetObject = screenToWorld [0.5,0.5];

// Get neareast vehicle of type tank to unit
_nearVehicles = nearestObjects [player, ["Tank"], 10];

// Since nearestObjects returns array, extract first item
_controledUnit = _nearVehicles select 0;

// Command the selected unit to watch crosshair's position
_controledUnit doWatch _targetObject;

// Shot delay to allow the turret to turn
sleep 4;

// Command the tank to fire
_controledUnit fire ((weapons _controledUnit) select 0);
