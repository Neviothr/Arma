#include "script_component.hpp"

hint "Click on 2 points on the map to create an AO. Points will be the corners of the AO."; // Notify user
openMap true; // Open map
GVAR(mapClickCount) = 0; // Var for checking how many times the user has click on the map
GVAR(isAoEhDone) = false; // Var for checking if below EH is done

// Add a map click EH
addMissionEventHandler ["MapSingleClick", {
    params ["_units", "_pos", "_alt", "_shift"]; // Thanks BIS
    if (GVAR(mapClickCount) == 0) then {
        GVAR(aoPoint1) = _pos; // Assign 1st click pos to var
        GVAR(mapClickCount) = GVAR(mapClickCount) + 1; // +1 var to case 2 is ran
    } else {
        GVAR(aoPoint2) = _pos; // Assign 2nd click pos to var
        GVAR(isAoEhDone) = true; // Mark EH as done

        // Remove our EH to allow compatablity with custom waypoint in nev_a3_overrides
        removeMissionEventHandler ["MapSingleClick", _thisEventhandler];
    };
}];

waitUntil {GVAR(isAoEhDone)}; // Wait until EH is done. Suspention is only allowed when spawning a fucn!

// Use a function to find the middle point between the GVAR(aoPoint1) and GVAR(aoPoint2)
// Get X and Y of 1st point
_X1 = GVAR(aoPoint1) select 0;
_Y1 = GVAR(aoPoint1) select 1;

// Get x and Y of 2nd point
_X2 = GVAR(aoPoint2) select 0;
_Y2 = GVAR(aoPoint2) select 1;

// Calculate middle
_Xm = (_X1 + _X2) / 2;
_Ym = (_Y1 + _Y2) / 2;

// Choose a point and calculate X and Y distance from it to middle point
_xDiff = _Xm - _X1;
_yDiff = _Ym - _Y1;

// Create marker
_markerName = "AO" + str floor random 1000000;

if (!(_markerName in allMapMarkers)) then {
    createMarker [_markerName, [_Xm, _Ym]];
    _markerName setMarkerShape "RECTANGLE";
    _markerName setMarkerBrush "Border";
    _markerName setMarkerColor "ColorRed";
    _markerName setMarkerSize [_xDiff, _yDiff];
} else {
    hint "Random marker name creation failed: marker name already exists. Try creating AO again.";
};
