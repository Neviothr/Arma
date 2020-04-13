#include "script_component.hpp"

/*
 * Author: Neviothr
 * Change the date and time based on listbox selection.
 *
 * Arguments:
 * None.
 *
 * Return Value:
 * None.
 *
 * Example:
 * call nev_debug_menu_fnc_setDate
 * _yearBox ctrlAddEventHandler ["LBSelChanged", {call nev_debug_menu_fnc_setDate}];
 *
 * Public: No
*/

// Years go from 1982 to 2050, while listbox indexs go from 0 to 68,
// to get the currect year from index we must addd 1982 to it.
// This is also valid for the month and day listboxes.
private _year = (lbCurSel IDC_yearBox) + 1982;
private _month = (lbCurSel IDC_monthBox) + 1;
private _day = (lbCurSel IDC_dayBox) + 1;
private _hour = lbCurSel IDC_hourBox;
private _minute = lbCurSel IDC_minuteBox;
TRACE_5("",_year,_month,_day,_hour,_minute);

[[_year, _month, _day, _hour, _minute]] remoteExec ["setDate"];
