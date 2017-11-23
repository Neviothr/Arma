// Get mission name
_missionName = toUpper str missionName;

// Get date data
_year = date select 0;
_month = date select 1;
_day = date select 2;

// Format date text
if (_month < 10) then {_month = format ["0%1", _month]};
if (_day < 10) then {_day = format ["0%1", _day]};

_date = format ["%1-%2-%3 ", _year, _month, _day];

// Get time data
_hour = date select 3;
_minute = date select 4;

// Format time date
if (_hour < 10) then {_hour = format ["0%1", _hour]};
if (_minute < 10) then {_minute = format ["0%1", _minute]};

_time = format ["%1:%2", _hour, _minute];

// Get current location text
private _neareastLocations = nearestLocations [getPos player, ["NameCity", "NameCityCapital", "NameLocal", "NameMarine", "NameVillage"], 10000];
private _locationText = if (_neareastLocations isEqualTo []) then {
	"In the middle of nowhere";
} else {
	format ["NEAR %1", toUpper text (_neareastLocations select 0)];
};

// Output
[
	[
		[_missionName, "align = 'right' shadow = '1' size = '0.7' font='PuristaBold'"],
		["", "<br/>"],
		[_date, "align = 'right' shadow = '1' size = '0.7' font = 'PuristaLight'"],
		[_time, "align = 'right' shadow = '1' size = '0.7' font = 'PuristaMedium'"],
		["", "<br/>"],
		[_locationText, "align = 'right' shadow = '1' size = '0.7' font = 'PuristaLight'"]
	], -1.1, 1.1
] spawn BIS_fnc_typeText2;
