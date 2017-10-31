// https://github.com/TMF3/TMF/blob/0038a0ac3e743ef8adb0df66e6e314b1dd5d4360/addons/common/Cfg3DEN.hpp
class Cfg3DEN {
	class EventHandlers {
		class ADDON {
			onMissionLoad = QUOTE([] call FUNC(edenInit));
			onMissionNew = QUOTE([] call FUNC(edenInit));
			OnMissionPreview = QUOTE([] call FUNC(edenInit));
			onMissionPreviewEnd = QUOTE([] call FUNC(edenInit));
			onTerrainNew = QUOTE([] call FUNC(edenInit));
		};
	};
};