// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp
#define PREFIX nev

/*
	Versioning system base on ACE3's adaptation of semver (semantic versioning, semver.org)
	(ace3mod.com/wiki/development/branching-and-release)
	MAJOR version when we switch to a new arma version (i.e. Arma 4 or standalone expansion)
	MINOR version when we add new features or large amount of bug fixes
	PATCH version when a release contains only bug fixes
*/
#define MAJOR 0
#define MINOR 10
#define PATCHLVL 9
#define BUILD 180419 // Use the DATE for the BUILD in the format YYMMDD

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

// Minimal required version for the mod, components can specify otherwise
#define REQUIRED_VERSION 1.82
