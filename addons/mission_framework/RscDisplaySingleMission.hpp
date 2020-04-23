class RscStandardDisplay;
class RscDisplaySingleMission: RscStandardDisplay {
	class controls {
        class GVAR(mapName): RscText {
			sizeEx = "0.048";
			x = "SafeZoneX + (1200 / 1920) * SafeZoneW";
            y = "SafeZoneY + (44 / 1080) * SafeZoneH";
            text = "(Map name)";
        };
	};
};
