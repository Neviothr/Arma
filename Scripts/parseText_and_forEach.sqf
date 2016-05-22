// https://forums.bistudio.com/topic/190165-cant-parsetext-in-for-and-foreach-structure/

rrayDump = [[1,"A"],[2,"B"],[3,"C"],[4,"D"],[5,"E"]];

_txt = "";

{
_slct = nil;
_slct = (arrayDump select _foreachIndex) select 1;
_slct = parseText format["<t color='#FF0000'>%1</t>",_slct];
_txt = format["%1 <br/><br/> %2",_txt,_slct];
} forEach arrayDump;

hint parseText format["<t color='#FF0000'>%1</t>",_txt];
