class IFF {
	idd = IDD_IFFDisplay;
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = QUOTE(call FUNC(onLoad));

	class Controls {
		// Remove dead units and vehicle wreaks
		class GVAR(delDeadButton): NevRscButton {
			text = "Exit";
			x = "SafeZoneX + (1700 / 1920) * SafeZoneW";
			y = "SafeZoneY + (900/ 1080) * SafeZoneH";
			action = QUOTE(call FUNC(exitIFF));
		};
	};
};
