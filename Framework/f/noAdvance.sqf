/*
File: noAdvance.sqf
Author: Neviothr
Credits: BIS Wiki

Description:
Disables the ability to issue 'attack' commands/orders for AI.

Parameter(s):
None.

Returns:
Nothing.

How to use:
Initiate through 'init.sqf'.
*/
{
	_x enableAttack false;
} forEach allUnits;
