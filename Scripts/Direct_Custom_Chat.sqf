// https://forums.bistudio.com/topic/189909-scripting-direct-chat/

// Radio.sqf:
_index = radioChannelCreate [[0.96, 0.34, 0.13, 0.8], "Direct Chat", "%UNIT_NAME", [player, US4, RG2, RG3, RG1, US3, US2]];

// Inside trigger:
null = execVM "say.sqf";

// Say.sqf:
RG2 customChat [1,"Bout fucking time you bundas got here!"];
sleep 3;
US2 customChat [1,"The fuck?"];
sleep 3;
US4 customChat [1,"Hey, just calm down. What's going on here?"];
sleep 3;
RG2 customChat [1,"I reckon it's pretty simple what's going on here."];
sleep 3;
RG2 customChat [1,"Sarge is injured, pilot is dead, you porras are late."];
sleep 3;
US2 customChat [1,"The fuck is a 'porra'?"];
sleep 3;
US4 customChat [1,"Curtis, let me handle this."];
sleep 2;
RG2 customChat [1,"There's nothing to handle here, just call in your chopper because this place is already starting to swarm with commies."];
sleep 3;
US4 customChat [1,"Alright, Curtis call in Sunray."];
sleep 2;
US2 customChat [1,"Which one?"];
sleep 3;
US4 customChat [1,"The one that's still flying, for fuck's sake."];
