#include "script_component.hpp"

params ["", "_index"];

private _side = [east, west, independent, civilian] select _index;
private _group = createGroup _side;

[player] joinSilent _group;

systemChat format ["Changing side to %1.", _side];
