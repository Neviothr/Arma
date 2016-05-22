// https://forums.bistudio.com/topic/185722-simple-singleplayer-jip-like-respawn-script/

// Init.sqf:
player addEventHandler ["killed", {execVM "JIP.sqf"}];

// Jip.sqf:
"B_Soldier_F" createUnit [getMarkerPos "respawn", group player, "newUnit = this"];
newUnit addEventHandler ["killed", {execVM "JIP.sqf"}];
addSwitchableUnit newUnit;
