#include "script_component.hpp"

private ["_title", "_description"];

// Get editbox's content
_title = ctrlText 80001;
_description = ctrlText 80002;

// Insert editbox's content, and broadcast
["nev_notification", [_title, _description]] call BIS_fnc_showNotification;