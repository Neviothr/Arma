#define COMPONENT briefing

#include "\x\nev\addons\main\script_mod.hpp"
#include "\x\nev\addons\main\script_macros.hpp"

#define GET_FACTION_NUM(var) getNumber (configFile >> "CfgFactionClasses" >> var >> "side");

#define IDD_IFFDisplay 81000
#define IDC_iffSideCombo 81001
#define IDC_iffFactionCombo 81002
