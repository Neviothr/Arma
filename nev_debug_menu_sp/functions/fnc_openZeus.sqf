fnc_openZeus = {
	private "_curator";

	_curator = (createGroup sideLogic) createUnit ["ModuleCurator_F", [0, 0, 0] , [], 0, ""];
	player assignCurator _curator;
	openCuratorInterface;
};