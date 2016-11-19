private "_curator";

if (isNil "nev_sideCenter") then {
	nev_sideCenter = createCenter sideLogic;
	publicVariable "nev_sideCenter";
};

_curator = (createGroup nev_sideCenter) createUnit ["ModuleCurator_F",[0,0,0] , [], 0, ""];

player assignCurator _curator;

openCuratorInterface;