// Usage: ["nev_mission_framework_notification", ["ARG1", "ARG2"]] call BIS_fnc_showNotification;
class CfgNotifications {
    class GVAR(notification) {
        title = "%1";
        description = "%2";
        duration = 5;
        color[] = {1,1,1,1}; // Must define color since 1.99.146375, defaults to black.
    };
};
