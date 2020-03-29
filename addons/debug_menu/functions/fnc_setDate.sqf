#include "script_component.hpp"

private _year = (lbCurSel IDC_yearBox) + 1982;
private _month = (lbCurSel IDC_monthBox) + 1;
private _day = (lbCurSel IDC_dayBox) + 1;
private _hour = lbCurSel IDC_hourBox;
private _minute = lbCurSel IDC_minuteBox;
TRACE_5("",_year,_month,_day,_hour,_minute);

[[_year, _month, _day, _hour, _minute]] remoteExec ["setDate"];
