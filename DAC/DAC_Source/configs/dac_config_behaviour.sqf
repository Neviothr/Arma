//////////////////////////////
//    Dynamic-AI-Creator    //
//    Version 3.1b - 2014   //
//--------------------------//
//    DAC_Config_Behaviour  //
//--------------------------//
//    Script by Silola      //
//    silola@freenet.de     //
//////////////////////////////

private [
			"_array","_setSkill","_setCombat","_setBehav","_setSpeed","_setForm","_setPatrol","_setSearch",
			"_setFleeing","_setHeliVal","_setPause","_setBldgBeh","_setSupport","_setJoin","_setEmpVeh","_setSupTime","_setHidTime"
		];

switch (_this select 0) do
{
//-------------------------------------------------------------------------------------------------------------------------
	case 0:
	{
		//_setSkill = ["aimingAccuracy","aimingShake","aimingSpeed","Endurance","spotDistance","spotTime","courage","reloadSpeed","commanding","general"];
		_setSkill   = [[0.03,0.03],[1,1],[0.05,0.05],[1,1],[1,1],[1,1],[1,1],[1,1],[1,1],[1,1]];
		_setCombat  = ["red"];
		_setBehav   = ["careless","safe","aware"];
		_setSpeed   = ["limited","normal","full"];
		_setForm    = ["line","vee","column","wedge","stag column","ech left","ech right","file","diamond"];
		_setFleeing = [0,25];
		_setHeliVal = [100,200,1,1];
		_setPause   = [[0,0],[0,0],[0,0],[0,0,0,0],[0,0],[0,0]];
		_setBldgBeh = [10,50,10000,5,1];
		_setPatrol  = ["45 + (20 * (skill _leader))","(60 + (random 60)) + ((skill _leader) * 50)"];
		_setSearch  = ["40 + ((skill _leader) * 150)","50 + ((skill _leader) * 50)"];
		_setSupport = [0,0];//support for other zones //opfor arti
		_setJoin    = 0;
		_setEmpVeh  = [[150,100],[150,100]];
		_setSupTime = ["5 + ((skill _unit) * (5 * DAC_AI_Level))",100,0];
		_setHidTime = ["(((0 * DAC_AI_Level) + ((skill _leader) * 0)) / ((count units _group) + 0))"];
	};
//-------------------------------------------------------------------------------------------------------------------------
	Default {
				if(DAC_Basic_Value != 5) then
				{
					DAC_Basic_Value = 5;publicvariable "DAC_Basic_Value";
					hintc "Error: DAC_Config_Behaviour > No valid config number";
				};
				if(true) exitwith {};
			};
};

_array =	[
				_setSkill,_setCombat,_setBehav,_setSpeed,_setForm,_setFleeing,
				_setHeliVal,_setPause,_setBldgBeh,_setPatrol,_setSearch,
				_setSupport,_setJoin,_setEmpVeh,_setSupTime,_setHidTime
			];
_array