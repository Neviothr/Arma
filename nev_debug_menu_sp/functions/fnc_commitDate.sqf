fnc_commitDate = {
	private ["_year", "_month", "_day", "_hour", "_minute"];

	_year = lbCurSel 80010;
	_month = lbCurSel 80011;
	_day = lbCurSel 80012;
	_hour = lbCurSel 80013;
	_minute = lbCurSel 80014;

	setDate [_year, _month, _day, _hour, _minute];
};