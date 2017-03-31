#include "script_component.hpp"

private ["_year", "_month", "_day", "_hour", "_minute"];

// Get all listbox's selection
_year = lbCurSel 80010;
_month = lbCurSel 80011;
_day = lbCurSel 80012;
_hour = lbCurSel 80013;
_minute = lbCurSel 80014;

// Use selections in `setDate`
setDate [_year, _month, _day, _hour, _minute];