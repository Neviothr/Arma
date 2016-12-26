_Unit = _this;
if (isPlayer _Unit) exitWith {};

while {alive _Unit && VCOM_UseMarkers} do {
	sleep 0.15;
	MarkerNames = random 1000;
	_marker1Names = format ["marker_%1", MarkerNames];
	_marker1 = createMarker [_marker1Names, (getPosASL _Unit)];
	_marker1 setMarkerShape "ELLIPSE";
	if ((side _Unit) isEqualTo EAST) then {
		_marker1 setMarkerColor "ColorRed";
	};
	if ((side _Unit) isEqualTo WEST) then {
		_marker1 setMarkerColor "ColorBlue";
	};
	_marker1 setMarkerSize [1, 1];
	MarkerArray pushBack _marker1;
};
MarkerNames = random 1000;
_marker1Names = format ["marker_%1", MarkerNames];
_marker1 = createMarker [_marker1Names, (getPosASL _Unit)];
_marker1 setMarkerShape "ELLIPSE";
if ((side _Unit) isEqualTo EAST) then {
	_marker1 setMarkerColor "ColorOrange";
};
if ((side _Unit) isEqualTo WEST) then {
	_marker1 setMarkerColor "ColorOrange";
};
_marker1 setMarkerSize [2, 2];
MarkerArray pushBack _marker1;

_marker1zzNames = format ["markezzzzr_%1", MarkerNames];
_markerName = createMarker [_marker1zzNames, (getPosASL _Unit)];
_markerName setMarkerType "hd_dot";
_markerName setMarkerText "DEAD";
_markerName setMarkerColor "ColorBlack";
_markerName setMarkerSize [0.5, 0.5];
MarkerArray pushBack _markerName;