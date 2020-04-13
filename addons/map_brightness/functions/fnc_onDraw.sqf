#include "script_component.hpp"

params ["_control"];

TRACE_1("",_control);

private _topLeftCorner = _control ctrlMapScreenToWorld [safeZoneX, safeZoneY];
private _bottomRightCorner = _control ctrlMapScreenToWorld [safeZoneX + safeZoneW, safeZoneY + safeZoneH];
private _position = _control ctrlMapScreenToWorld [0.5, 0.5];

private _markerWidth = 0.5 * ((_bottomRightCorner select 0) - (_topLeftCorner select 0));
private _markerHeight = 0.5 * ((_topLeftCorner select 1) - (_bottomRightCorner select 1));

private _alpha = 0.7 min abs(sunOrMoon - 1);

_control drawRectangle [_position, _markerWidth, _markerHeight, 0, [0, 0, 0, _alpha], "#(rgb,1,1,1)color(0,0,0,1)"];
