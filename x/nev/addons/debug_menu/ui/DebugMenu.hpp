class GVAR(debugMenuDisplay) {
    duration = 1e6;
    idd = IDD_debugMenuDisplay;
    movingEnable = true;
    onLoad = QUOTE(call FUNC(onLoad));

    class Controls {
        class GVAR(removeDeadButton): NevRscButton {
            text = "Remove Dead";
            x = "SafeZoneX + (780 / 1920) * SafeZoneW";
            y = "SafeZoneY + (555 / 1080) * SafeZoneH";
            action = QUOTE({deleteVehicle _x} forEach allDead - GVAR(deadOnStart));
        };

        class GVAR(spawnGroupsButton): NevRscButton {
            text = "Spawn Group(s)";
            x = "SafeZoneX + (640 / 1920) * SafeZoneW";
            y = "SafeZoneY + (345 / 1080) * SafeZoneH";
            action = QUOTE([ARR_5(GVAR(minDistance), GVAR(maxDistance), GVAR(groupSide), GVAR(groupArray), GVAR(unitCode))] call FUNC(spawnGroup));
            tooltip = "Spawn preset group(s)";
        };

        class GVAR(sideList): RscCombo {
            idc = IDC_sideList;
            x = "SafeZoneX + (780 / 1920) * SafeZoneW";
            y = "SafeZoneY + (695 / 1080) * SafeZoneH";
            w = "(135 / 1920) * SafeZoneW";
            h = "(30 / 1080) * SafeZoneH";
            type = CT_COMBO;
            style = ST_LEFT;
            tooltip = "Change side...";
            onLBSelChanged = QUOTE(_this call FUNC(changeSide));
        };

        class GVAR(repairButton): NevRscButton {
            text = "Repair / Heal";
            x = "SafeZoneX + (500 / 1920) * SafeZoneW";
            y = "SafeZoneY + (275 / 1080) * SafeZoneH";
            action = "_target = [cursorTarget, vehicle player] select isNull cursorTarget; [_target, 0] remoteExec ['setDamage', _target]; systemChat '[Debug Menu] Object damage set to 0.'";
        };

        class GVAR(refuelButton): NevRscButton {
            text = "Refuel";
            x = "SafeZoneX + (500 / 1920) * SafeZoneW";
            y = "SafeZoneY + (310 / 1080) * SafeZoneH";
            action = "_target = [cursorTarget, vehicle player] select isNull cursorTarget;\
                     [_target, 1] remoteExec ['setFuel', _target];\
                     systemChat '[Debug Menu] The vehicle has been refuled'";
            tooltip = "Refuel the current vehicle";
        };

        class GVAR(rearmButton): NevRscButton {
            text = "Rearm";
            x = "SafeZoneX + (500 / 1920) * SafeZoneW";
            y = "SafeZoneY + (345 / 1080) * SafeZoneH";
            action = "_target = [cursorTarget, vehicle player] select isNull cursorTarget;\
                     [_target, 1] remoteExec ['setVehicleAmmoDef', _target];\
                     systemChat '[Debug Menu] The vehicle has been rearmed'";
            tooltip = "Rearm the current vehicle";
        };

        class GVAR(supplyDropButton): NevRscButton {
            text = "Supply Drop";
            x = "SafeZoneX + (780 / 1920) * SafeZoneW";
            y = "SafeZoneY + (485 / 1080) * SafeZoneH";
            action = QUOTE([ARR_1(player)] call FUNC(supplyDrop));
        };

        class GVAR(iffButton): NevRscButton {
            text = "IFF";
            x = "SafeZoneX + (780 / 1920) * SafeZoneW";
            y = "SafeZoneY + (520 / 1080) * SafeZoneH";
            action = "closeDialog 1; createDialog 'IFF'";
            colorText[] = {0.85, 0.4, 0, 1};
        };

        #include "Date.hpp"
        #include "DebugConsole.hpp"
        #include "Static.hpp"
        #include "Teleportion.hpp"
        #include "VirtualArsenal.hpp"
        #include "Visability.hpp"
        #include "Weather.hpp"
    }; 
};

/*
<--140--> Horizontal distance between elements

/\
||
35 Vertrical distance between elements
||
\/
*/