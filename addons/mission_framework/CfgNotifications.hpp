// Usage: ["nev_mission_framework_notification", ["ARG1", "ARG2"]] call BIS_fnc_showNotification;
class CfgNotifications {
    class GVAR(notification) {
        title = "%1";
        description = "%2";
        duration = 5;
    };
};
