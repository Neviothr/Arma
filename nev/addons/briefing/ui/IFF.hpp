class IFF {
	idd = IDD_IFFDisplay;
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = QUOTE(call FUNC(onLoad));
	onUnload = QUOTE(call FUNC(exit));
	duration = 1e6;

	class Controls {
		// Remove dead units and vehicle wreaks
		class GVAR(exitButton): NevRscButton {
			text = "Exit";
			x = "SafeZoneX + (1700 / 1920) * SafeZoneW";
			y = "SafeZoneY + (900/ 1080) * SafeZoneH";
			action = QUOTE(call FUNC(exitIFF); closeDialog 1);
		};
	};
};
