/*
File: singleFacLoadout.sqf
Author: cx64
Credits: BIS Forums, BIS Wiki

Description:
Changes the loadout of ALL units in a scenario. Most useful when only player + enemy faction (without friendly faction) are present.

Parameter(s):
None.

Returns:
None.

How to use:
Initiate through 'init.sqf'. Insert desired loadout in curly brackets. Change every occurrence of 'this' to '_x'
*/
/*
NOTE: This function/script is no longer needed, valid or used! After update 1.56 for ArmA 3, the mission creator is able to change the loadout, gear using the 3DEN Editor.
*/

{
// Insert loadout here
} forEach allUnits;
