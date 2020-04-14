#include "script_component.hpp"

/*
 * Author: ShackTac Development Team
 * Create a marker which covers the whole map.
 * Marker opacity changes depending on time of day - darker at night, no effect at daytime.
 *
 * Arguments:
 * 0: Map <CONTROL>
 *
 * Return Value:
 * None.
 *
 * Example:
 * _mapControl ctrlAddEventHandler ["Draw", {_this call nev_map_brightness_onDraw}];
 *
 * Public: No
 * https://steamcommunity.com/sharedfiles/filedetails/?id=498740884
*/

params ["_control"];

TRACE_1("",_control);

#define MAX_DARK 0.7

// Find the edges of the screen in world space.
private _topleft = _control ctrlMapScreenToWorld [safeZoneX, safeZoneY];
private _bottomright = _control ctrlMapScreenToWorld [safeZoneX + safeZoneW, safeZoneY + safeZoneH];

// Now figure out how to make the marker cover everything.
private _pos = _control ctrlMapScreenToWorld [0.5, 0.5];
private _width  = 0.5 * ((_bottomright select 0) - (_topleft select 0));
private _height = 0.5 * ((_topleft select 1) - (_bottomright select 1));

private _alpha = MAX_DARK min abs(sunOrMoon - 1);

_control drawRectangle [
    _pos,
    _width,
    _height,
    0,
    [0, 0, 0, _alpha],
    "#(rgb,1,1,1)color(0,0,0,1)" // Solid black.
];
