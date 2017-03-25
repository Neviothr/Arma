#define COMPONENT nev_debug_menu
#define PREFIX NEV_Addons

#define DEBUG_SYNCHRONOUS

#ifndef SUBPREFIX
	#define SUBPREFIX addons
#endif

#ifndef MAINLOGIC
	#define MAINLOGIC main
#endif

#ifndef VERSION
	#define VERSION 0
#endif

#ifndef VERSION_AR
	#define VERSION_AR VERSION
#endif

#ifndef VERSION_CONFIG
	#define VERSION_CONFIG version = VERSION; versionStr = QUOTE(VERSION); versionAr[] = {VERSION_AR}
#endif

#define ADDON DOUBLES(PREFIX,COMPONENT)
#define MAIN_ADDON DOUBLES(PREFIX,main)

#ifdef DEBUG_MODE_FULL
#define DEBUG_MODE_NORMAL
#endif

#ifdef DEBUG_MODE_NORMAL
#define DEBUG_MODE_MINIMAL
#endif

#ifndef DEBUG_MODE_MINIMAL
#define DEBUG_MODE_NORMAL
#define DEBUG_MODE_MINIMAL
#endif

#define LOG_SYS_FORMAT(LEVEL,MESSAGE) format ['[%1] (%2) %3: %4', toUpper 'PREFIX', 'COMPONENT', LEVEL, MESSAGE]

#ifdef DEBUG_SYNCHRONOUS
#define LOG_SYS(LEVEL,MESSAGE) diag_log text LOG_SYS_FORMAT(LEVEL,MESSAGE)
#else
#define LOG_SYS(LEVEL,MESSAGE) LOG_SYS_FORMAT(LEVEL,MESSAGE) call CBA_fnc_log
#endif

#define LOG_SYS_FILELINENUMBERS(LEVEL,MESSAGE) LOG_SYS(LEVEL,format [ARR_4('%1 %2:%3',MESSAGE,__FILE__,__LINE__ + 1)])

#ifdef DEBUG_MODE_FULL

#define LOG(MESSAGE) LOG_SYS_FILELINENUMBERS('LOG',MESSAGE)
#define LOG_1(MESSAGE,ARG1) LOG(FORMAT_1(MESSAGE,ARG1))
#define LOG_2(MESSAGE,ARG1,ARG2) LOG(FORMAT_2(MESSAGE,ARG1,ARG2))
#define LOG_3(MESSAGE,ARG1,ARG2,ARG3) LOG(FORMAT_3(MESSAGE,ARG1,ARG2,ARG3))
#define LOG_4(MESSAGE,ARG1,ARG2,ARG3,ARG4) LOG(FORMAT_4(MESSAGE,ARG1,ARG2,ARG3,ARG4))
#define LOG_5(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5) LOG(FORMAT_5(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5))
#define LOG_6(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6) LOG(FORMAT_6(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6))
#define LOG_7(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7) LOG(FORMAT_7(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7))
#define LOG_8(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8) LOG(FORMAT_8(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8))

#else

#define LOG(MESSAGE)
#define LOG_1(MESSAGE,ARG1)
#define LOG_2(MESSAGE,ARG1,ARG2)
#define LOG_3(MESSAGE,ARG1,ARG2,ARG3)
#define LOG_4(MESSAGE,ARG1,ARG2,ARG3,ARG4)
#define LOG_5(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5)
#define LOG_6(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6)
#define LOG_7(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7)
#define LOG_8(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8)

#endif

#define INFO(MESSAGE) LOG_SYS('INFO',MESSAGE)
#define INFO_1(MESSAGE,ARG1) INFO(FORMAT_1(MESSAGE,ARG1))
#define INFO_2(MESSAGE,ARG1,ARG2) INFO(FORMAT_2(MESSAGE,ARG1,ARG2))
#define INFO_3(MESSAGE,ARG1,ARG2,ARG3) INFO(FORMAT_3(MESSAGE,ARG1,ARG2,ARG3))
#define INFO_4(MESSAGE,ARG1,ARG2,ARG3,ARG4) INFO(FORMAT_4(MESSAGE,ARG1,ARG2,ARG3,ARG4))
#define INFO_5(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5) INFO(FORMAT_5(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5))
#define INFO_6(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6) INFO(FORMAT_6(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6))
#define INFO_7(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7) INFO(FORMAT_7(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7))
#define INFO_8(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8) INFO(FORMAT_8(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8))

#ifdef DEBUG_MODE_NORMAL

#define WARNING(MESSAGE) LOG_SYS_FILELINENUMBERS('WARNING',MESSAGE)
#define WARNING_1(MESSAGE,ARG1) WARNING(FORMAT_1(MESSAGE,ARG1))
#define WARNING_2(MESSAGE,ARG1,ARG2) WARNING(FORMAT_2(MESSAGE,ARG1,ARG2))
#define WARNING_3(MESSAGE,ARG1,ARG2,ARG3) WARNING(FORMAT_3(MESSAGE,ARG1,ARG2,ARG3))
#define WARNING_4(MESSAGE,ARG1,ARG2,ARG3,ARG4) WARNING(FORMAT_4(MESSAGE,ARG1,ARG2,ARG3,ARG4))
#define WARNING_5(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5) WARNING(FORMAT_5(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5))
#define WARNING_6(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6) WARNING(FORMAT_6(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6))
#define WARNING_7(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7) WARNING(FORMAT_7(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7))
#define WARNING_8(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8) WARNING(FORMAT_8(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8))

#else

#define WARNING(MESSAGE)
#define WARNING_1(MESSAGE,ARG1)
#define WARNING_2(MESSAGE,ARG1,ARG2)
#define WARNING_3(MESSAGE,ARG1,ARG2,ARG3)
#define WARNING_4(MESSAGE,ARG1,ARG2,ARG3,ARG4)
#define WARNING_5(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5)
#define WARNING_6(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6)
#define WARNING_7(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7)
#define WARNING_8(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8)

#endif

#define ERROR(MESSAGE) LOG_SYS_FILELINENUMBERS('ERROR',MESSAGE)
#define ERROR_1(MESSAGE,ARG1) ERROR(FORMAT_1(MESSAGE,ARG1))
#define ERROR_2(MESSAGE,ARG1,ARG2) ERROR(FORMAT_2(MESSAGE,ARG1,ARG2))
#define ERROR_3(MESSAGE,ARG1,ARG2,ARG3) ERROR(FORMAT_3(MESSAGE,ARG1,ARG2,ARG3))
#define ERROR_4(MESSAGE,ARG1,ARG2,ARG3,ARG4) ERROR(FORMAT_4(MESSAGE,ARG1,ARG2,ARG3,ARG4))
#define ERROR_5(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5) ERROR(FORMAT_5(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5))
#define ERROR_6(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6) ERROR(FORMAT_6(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6))
#define ERROR_7(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7) ERROR(FORMAT_7(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7))
#define ERROR_8(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8) ERROR(FORMAT_8(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8))

#define ERROR_MSG(MESSAGE) ['PREFIX', 'COMPONENT', nil, MESSAGE, __FILE__, __LINE__ + 1] call CBA_fnc_error
#define ERROR_MSG_1(MESSAGE,ARG1) ERROR_MSG(FORMAT_1(MESSAGE,ARG1))
#define ERROR_MSG_2(MESSAGE,ARG1,ARG2) ERROR_MSG(FORMAT_2(MESSAGE,ARG1,ARG2))
#define ERROR_MSG_3(MESSAGE,ARG1,ARG2,ARG3) ERROR_MSG(FORMAT_3(MESSAGE,ARG1,ARG2,ARG3))
#define ERROR_MSG_4(MESSAGE,ARG1,ARG2,ARG3,ARG4) ERROR_MSG(FORMAT_4(MESSAGE,ARG1,ARG2,ARG3,ARG4))
#define ERROR_MSG_5(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5) ERROR_MSG(FORMAT_5(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5))
#define ERROR_MSG_6(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6) ERROR_MSG(FORMAT_6(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6))
#define ERROR_MSG_7(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7) ERROR_MSG(FORMAT_7(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7))
#define ERROR_MSG_8(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8) ERROR_MSG(FORMAT_8(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8))

#define ERROR_WITH_TITLE(TITLE,MESSAGE) ['PREFIX', 'COMPONENT', TITLE, MESSAGE, __FILE__, __LINE__ + 1] call CBA_fnc_error
#define ERROR_WITH_TITLE_1(TITLE,MESSAGE,ARG1) ERROR_WITH_TITLE(TITLE,FORMAT_1(MESSAGE,ARG1))
#define ERROR_WITH_TITLE_2(TITLE,MESSAGE,ARG1,ARG2) ERROR_WITH_TITLE(TITLE,FORMAT_2(MESSAGE,ARG1,ARG2))
#define ERROR_WITH_TITLE_3(TITLE,MESSAGE,ARG1,ARG2,ARG3) ERROR_WITH_TITLE(TITLE,FORMAT_3(MESSAGE,ARG1,ARG2,ARG3))
#define ERROR_WITH_TITLE_4(TITLE,MESSAGE,ARG1,ARG2,ARG3,ARG4) ERROR_WITH_TITLE(TITLE,FORMAT_4(MESSAGE,ARG1,ARG2,ARG3,ARG4))
#define ERROR_WITH_TITLE_5(TITLE,MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5) ERROR_WITH_TITLE(TITLE,FORMAT_5(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5))
#define ERROR_WITH_TITLE_6(TITLE,MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6) ERROR_WITH_TITLE(TITLE,FORMAT_6(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6))
#define ERROR_WITH_TITLE_7(TITLE,MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7) ERROR_WITH_TITLE(TITLE,FORMAT_7(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7))
#define ERROR_WITH_TITLE_8(TITLE,MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8) ERROR_WITH_TITLE(TITLE,FORMAT_8(MESSAGE,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8))

#define MESSAGE_WITH_TITLE(TITLE,MESSAGE) LOG_SYS_FILELINENUMBERS(TITLE,MESSAGE)

#define RETDEF(VARIABLE,DEFAULT_VALUE) (if (isNil {VARIABLE}) then [{DEFAULT_VALUE}, {VARIABLE}])

#define RETNIL(VARIABLE) RETDEF(VARIABLE,nil)

#define PFORMAT_1(MESSAGE,A) \
	format ['%1: A=%2', MESSAGE, RETNIL(A)]

#define PFORMAT_2(MESSAGE,A,B) \
	format ['%1: A=%2, B=%3', MESSAGE, RETNIL(A), RETNIL(B)]

#define PFORMAT_3(MESSAGE,A,B,C) \
	format ['%1: A=%2, B=%3, C=%4', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C)]

#define PFORMAT_4(MESSAGE,A,B,C,D) \
	format ['%1: A=%2, B=%3, C=%4, D=%5', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C), RETNIL(D)]

#define PFORMAT_5(MESSAGE,A,B,C,D,E) \
	format ['%1: A=%2, B=%3, C=%4, D=%5, E=%6', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C), RETNIL(D), RETNIL(E)]

#define PFORMAT_6(MESSAGE,A,B,C,D,E,F) \
	format ['%1: A=%2, B=%3, C=%4, D=%5, E=%6, F=%7', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C), RETNIL(D), RETNIL(E), RETNIL(F)]

#define PFORMAT_7(MESSAGE,A,B,C,D,E,F,G) \
	format ['%1: A=%2, B=%3, C=%4, D=%5, E=%6, F=%7, G=%8', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C), RETNIL(D), RETNIL(E), RETNIL(F), RETNIL(G)]

#define PFORMAT_8(MESSAGE,A,B,C,D,E,F,G,H) \
	format ['%1: A=%2, B=%3, C=%4, D=%5, E=%6, F=%7, G=%8, H=%9', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C), RETNIL(D), RETNIL(E), RETNIL(F), RETNIL(G), RETNIL(H)]

#define PFORMAT_9(MESSAGE,A,B,C,D,E,F,G,H,I) \
	format ['%1: A=%2, B=%3, C=%4, D=%5, E=%6, F=%7, G=%8, H=%9, I=%10', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C), RETNIL(D), RETNIL(E), RETNIL(F), RETNIL(G), RETNIL(H), RETNIL(I)]


#ifdef DEBUG_MODE_FULL
#define TRACE_1(MESSAGE,A) LOG_SYS_FILELINENUMBERS('TRACE',PFORMAT_1(str diag_frameNo + ' ' + (MESSAGE),A))
#define TRACE_2(MESSAGE,A,B) LOG_SYS_FILELINENUMBERS('TRACE',PFORMAT_2(str diag_frameNo + ' ' + (MESSAGE),A,B))
#define TRACE_3(MESSAGE,A,B,C) LOG_SYS_FILELINENUMBERS('TRACE',PFORMAT_3(str diag_frameNo + ' ' + (MESSAGE),A,B,C))
#define TRACE_4(MESSAGE,A,B,C,D) LOG_SYS_FILELINENUMBERS('TRACE',PFORMAT_4(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D))
#define TRACE_5(MESSAGE,A,B,C,D,E) LOG_SYS_FILELINENUMBERS('TRACE',PFORMAT_5(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E))
#define TRACE_6(MESSAGE,A,B,C,D,E,F) LOG_SYS_FILELINENUMBERS('TRACE',PFORMAT_6(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E,F))
#define TRACE_7(MESSAGE,A,B,C,D,E,F,G) LOG_SYS_FILELINENUMBERS('TRACE',PFORMAT_7(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E,F,G))
#define TRACE_8(MESSAGE,A,B,C,D,E,F,G,H) LOG_SYS_FILELINENUMBERS('TRACE',PFORMAT_8(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E,F,G,H))
#define TRACE_9(MESSAGE,A,B,C,D,E,F,G,H,I) LOG_SYS_FILELINENUMBERS('TRACE',PFORMAT_9(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E,F,G,H,I))
#else
#define TRACE_1(MESSAGE,A)
#define TRACE_2(MESSAGE,A,B)
#define TRACE_3(MESSAGE,A,B,C)
#define TRACE_4(MESSAGE,A,B,C,D)
#define TRACE_5(MESSAGE,A,B,C,D,E)
#define TRACE_6(MESSAGE,A,B,C,D,E,F)
#define TRACE_7(MESSAGE,A,B,C,D,E,F,G)
#define TRACE_8(MESSAGE,A,B,C,D,E,F,G,H)
#define TRACE_9(MESSAGE,A,B,C,D,E,F,G,H,I)
#endif

#define DOUBLES(var1,var2) ##var1##_##var2
#define TRIPLES(var1,var2,var3) ##var1##_##var2##_##var3
#define QUOTE(var1) #var1

#ifdef MODULAR
	#define COMPONENT_T DOUBLES(t,COMPONENT)
	#define COMPONENT_M DOUBLES(m,COMPONENT)
	#define COMPONENT_S DOUBLES(s,COMPONENT)
	#define COMPONENT_C DOUBLES(c,COMPONENT)
	#define COMPONENT_F COMPONENT_C
#else
	#define COMPONENT_T COMPONENT
	#define COMPONENT_M COMPONENT
	#define COMPONENT_S COMPONENT
	#define COMPONENT_F COMPONENT
	#define COMPONENT_C COMPONENT
#endif

#define INC(var) var = (var) + 1

#define DEC(var) var = (var) - 1

#define ADD(var1,var2) var1 = (var1) + (var2)

#define SUB(var1,var2) var1 = (var1) - (var2)

#define REM(var1,var2) SUB(var1,[var2])

#define PUSH(var1,var2) (var1) pushBack (var2)

#define MAP(ARR,CODE) ARR = ARR apply {CODE}

#define FILTER(ARR,CODE) ARR = ARR select {CODE}

#define UNIQUE(ARR) ARR = ARR arrayIntersect ARR

#define INTERSECTION(ARG0,ARG1) ARG0 = ARG0 arrayIntersect (ARG1)

#define ISNILS(VARIABLE,DEFAULT_VALUE) if (isNil #VARIABLE) then { ##VARIABLE = ##DEFAULT_VALUE }
#define ISNILS2(var1,var2,var3,var4) ISNILS(TRIPLES(var1,var2,var3),var4)
#define ISNILS3(var1,var2,var3) ISNILS(DOUBLES(var1,var2),var3)
#define ISNIL(var1,var2) ISNILS2(PREFIX,COMPONENT,var1,var2)
#define ISNILMAIN(var1,var2) ISNILS3(PREFIX,var1,var2)

#define CREATELOGICS(var1,var2) ##var1##_##var2## = ([sideLogic] call CBA_fnc_getSharedGroup) createUnit ["LOGIC", [0, 0, 0], [], 0, "NONE"]
#define CREATELOGICLOCALS(var1,var2) ##var1##_##var2## = "LOGIC" createVehicleLocal [0, 0, 0]
#define CREATELOGICGLOBALS(var1,var2) ##var1##_##var2## = ([sideLogic] call CBA_fnc_getSharedGroup) createUnit ["LOGIC", [0, 0, 0], [], 0, "NONE"]; publicVariable QUOTE(DOUBLES(var1,var2))
#define CREATELOGICGLOBALTESTS(var1,var2) ##var1##_##var2## = ([sideLogic] call CBA_fnc_getSharedGroup) createUnit [QUOTE(DOUBLES(ADDON,logic)), [0, 0, 0], [], 0, "NONE"]

#define GETVARS(var1,var2,var3) (##var1##_##var2 getVariable #var3)
#define GETVARMAINS(var1,var2) GETVARS(var1,MAINLOGIC,var2)

#ifndef PATHTO_SYS
	#define PATHTO_SYS(var1,var2,var3) \##var1\SUBPREFIX\##var2\##var3.sqf
#endif
#ifndef PATHTOF_SYS
	#define PATHTOF_SYS(var1,var2,var3) \##var1\SUBPREFIX\##var2\##var3
#endif

#ifndef PATHTOF2_SYS
	#define PATHTOF2_SYS(var1,var2,var3) ##var1\SUBPREFIX\##var2\##var3
#endif

#define PATHTO_R(var1) PATHTOF2_SYS(PREFIX,COMPONENT_C,var1)
#define PATHTO_T(var1) PATHTOF_SYS(PREFIX,COMPONENT_T,var1)
#define PATHTO_M(var1) PATHTOF_SYS(PREFIX,COMPONENT_M,var1)
#define PATHTO_S(var1) PATHTOF_SYS(PREFIX,COMPONENT_S,var1)
#define PATHTO_C(var1) PATHTOF_SYS(PREFIX,COMPONENT_C,var1)
#define PATHTO_F(var1) PATHTO_SYS(PREFIX,COMPONENT_F,var1)

#define QPATHTO_R(var1) QUOTE(PATHTO_R(var1))
#define QPATHTO_T(var1) QUOTE(PATHTO_T(var1))
#define QPATHTO_M(var1) QUOTE(PATHTO_M(var1))
#define QPATHTO_S(var1) QUOTE(PATHTO_S(var1))
#define QPATHTO_C(var1) QUOTE(PATHTO_C(var1))
#define QPATHTO_F(var1) QUOTE(PATHTO_F(var1))

#define COMPILE_FILE2_CFG_SYS(var1) compile preProcessFileLineNumbers var1
#define COMPILE_FILE2_SYS(var1) COMPILE_FILE2_CFG_SYS(var1)

#define COMPILE_FILE_SYS(var1,var2,var3) COMPILE_FILE2_SYS('PATHTO_SYS(var1,var2,var3)')
#define COMPILE_FILE_CFG_SYS(var1,var2,var3) COMPILE_FILE2_CFG_SYS('PATHTO_SYS(var1,var2,var3)')

#define SETVARS(var1,var2) ##var1##_##var2 setVariable
#define SETVARMAINS(var1) SETVARS(var1,MAINLOGIC)
#define GVARMAINS(var1,var2) ##var1##_##var2##
#define CFGSETTINGSS(var1,var2) configFile >> "CfgSettings" >> #var1 >> #var2

#define PREPMAIN_SYS(var1,var2,var3) ##var1##_fnc_##var3 = COMPILE_FILE_SYS(var1,var2,DOUBLES(fnc,var3))
#define PREP_SYS(var1,var2,var3) ##var1##_##var2##_fnc_##var3 = COMPILE_FILE_SYS(var1,var2,DOUBLES(fnc,var3))
#define PREP_SYS2(var1,var2,var3,var4) ##var1##_##var2##_fnc_##var4 = COMPILE_FILE_SYS(var1,var3,DOUBLES(fnc,var4))

#define LSTR(var1) TRIPLES(ADDON,STR,var1)

#ifndef DEBUG_SETTINGS
	#define DEBUG_SETTINGS [false, true, false]
#endif

#define MSG_INIT QUOTE(Initializing: ADDON version: VERSION)

#define CFGSETTINGS CFGSETTINGSS(PREFIX,COMPONENT)
#define PATHTO(var1) PATHTO_SYS(PREFIX,COMPONENT_F,var1)
#define PATHTOF(var1) PATHTOF_SYS(PREFIX,COMPONENT,var1)
#define PATHTOEF(var1,var2) PATHTOF_SYS(PREFIX,var1,var2)
#define QPATHTOF(var1) QUOTE(PATHTOF(var1))
#define QPATHTOEF(var1,var2) QUOTE(PATHTOEF(var1,var2))

#define COMPILE_FILE(var1) COMPILE_FILE_SYS(PREFIX,COMPONENT_F,var1)
#define COMPILE_FILE_CFG(var1) COMPILE_FILE_CFG_SYS(PREFIX,COMPONENT_F,var1)
#define COMPILE_FILE2(var1) COMPILE_FILE2_SYS('var1')
#define COMPILE_FILE2_CFG(var1) COMPILE_FILE2_CFG_SYS('var1')


#define VERSIONING_SYS(var1) class CfgSettings \
{ \
	class CBA \
	{ \
		class Versioning \
		{ \
			class var1 \
			{ \
			}; \
		}; \
	}; \
};

#define VERSIONING VERSIONING_SYS(PREFIX)

#define GVAR(var1) DOUBLES(ADDON,var1)
#define EGVAR(var1,var2) TRIPLES(PREFIX,var1,var2)
#define QGVAR(var1) QUOTE(GVAR(var1))
#define QEGVAR(var1,var2) QUOTE(EGVAR(var1,var2))
#define QQGVAR(var1) QUOTE(QGVAR(var1))
#define QQEGVAR(var1,var2) QUOTE(QEGVAR(var1,var2))

#define GVARMAIN(var1) GVARMAINS(PREFIX,var1)
#define QGVARMAIN(var1) QUOTE(GVARMAIN(var1))
#define QQGVARMAIN(var1) QUOTE(QGVARMAIN(var1))

#define SETTINGS DOUBLES(PREFIX,settings)
#define CREATELOGIC CREATELOGICS(PREFIX,COMPONENT)
#define CREATELOGICGLOBAL CREATELOGICGLOBALS(PREFIX,COMPONENT)
#define CREATELOGICGLOBALTEST CREATELOGICGLOBALTESTS(PREFIX,COMPONENT)
#define CREATELOGICLOCAL CREATELOGICLOCALS(PREFIX,COMPONENT)
#define CREATELOGICMAIN CREATELOGICS(PREFIX,MAINLOGIC)
#define GETVAR(var1) GETVARS(PREFIX,COMPONENT,var1)
#define SETVAR SETVARS(PREFIX,COMPONENT)
#define SETVARMAIN SETVARMAINS(PREFIX)
#define IFCOUNT(var1,var2,var3) if (count ##var1 > ##var2) then { ##var3 = ##var1 select ##var2 };

#ifdef DISABLE_COMPILE_CACHE
	#define PREP(var1) TRIPLES(ADDON,fnc,var1) = compile preProcessFileLineNumbers 'PATHTO_SYS(PREFIX,COMPONENT_F,DOUBLES(fnc,var1))'
	#define PREPMAIN(var1) TRIPLES(PREFIX,fnc,var1) = compile preProcessFileLineNumbers 'PATHTO_SYS(PREFIX,COMPONENT_F,DOUBLES(fnc,var1))'
#else
	#define PREP(var1) ['PATHTO_SYS(PREFIX,COMPONENT_F,DOUBLES(fnc,var1))', 'TRIPLES(ADDON,fnc,var1)'] call SLX_XEH_COMPILE_NEW
	#define PREPMAIN(var1) ['PATHTO_SYS(PREFIX,COMPONENT_F,DOUBLES(fnc,var1))', 'TRIPLES(PREFIX,fnc,var1)'] call SLX_XEH_COMPILE_NEW
#endif

#ifdef RECOMPILE
	#undef RECOMPILE
	#define RECOMPILE recompile = 1
#else
	#define RECOMPILE recompile = 0
#endif

#define PATHTO_FNC(func) class func {\
	file = QPATHTOF(DOUBLES(fnc,func).sqf);\
	RECOMPILE;\
}

#define FUNC(var1) TRIPLES(ADDON,fnc,var1)
#define FUNCMAIN(var1) TRIPLES(PREFIX,fnc,var1)
#define FUNC_INNER(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)
#define EFUNC(var1,var2) FUNC_INNER(var1,var2)
#define QFUNC(var1) QUOTE(FUNC(var1))
#define QFUNCMAIN(var1) QUOTE(FUNCMAIN(var1))
#define QFUNC_INNER(var1,var2) QUOTE(FUNC_INNER(var1,var2))
#define QEFUNC(var1,var2) QUOTE(EFUNC(var1,var2))
#define QQFUNC(var1) QUOTE(QFUNC(var1))
#define QQFUNCMAIN(var1) QUOTE(QFUNCMAIN(var1))
#define QQFUNC_INNER(var1,var2) QUOTE(QFUNC_INNER(var1,var2))
#define QQEFUNC(var1,var2) QUOTE(QEFUNC(var1,var2))

#ifndef PRELOAD_ADDONS
	#define PRELOAD_ADDONS class CfgAddons \
{ \
	class PreloadAddons \
	{ \
		class ADDON \
		{ \
			list[]={ QUOTE(ADDON) }; \
		}; \
	}; \
}
#endif

#define ARG_1(A,B) ((A) select (B))
#define ARG_2(A,B,C) (ARG_1(ARG_1(A,B),C))
#define ARG_3(A,B,C,D) (ARG_1(ARG_2(A,B,C),D))
#define ARG_4(A,B,C,D,E) (ARG_1(ARG_3(A,B,C,D),E))
#define ARG_5(A,B,C,D,E,F) (ARG_1(ARG_4(A,B,C,D,E),F))
#define ARG_6(A,B,C,D,E,F,G) (ARG_1(ARG_5(A,B,C,D,E,F),G))
#define ARG_7(A,B,C,D,E,F,G,H) (ARG_1(ARG_6(A,B,C,D,E,E,F,G),H))
#define ARG_8(A,B,C,D,E,F,G,H,I) (ARG_1(ARG_7(A,B,C,D,E,E,F,G,H),I))

#define ARR_1(ARG1) ARG1
#define ARR_2(ARG1,ARG2) ARG1, ARG2
#define ARR_3(ARG1,ARG2,ARG3) ARG1, ARG2, ARG3
#define ARR_4(ARG1,ARG2,ARG3,ARG4) ARG1, ARG2, ARG3, ARG4
#define ARR_5(ARG1,ARG2,ARG3,ARG4,ARG5) ARG1, ARG2, ARG3, ARG4, ARG5
#define ARR_6(ARG1,ARG2,ARG3,ARG4,ARG5,ARG6) ARG1, ARG2, ARG3, ARG4, ARG5, ARG6
#define ARR_7(ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7) ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7
#define ARR_8(ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8) ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8

#define FORMAT_1(STR,ARG1) format[STR, ARG1]
#define FORMAT_2(STR,ARG1,ARG2) format[STR, ARG1, ARG2]
#define FORMAT_3(STR,ARG1,ARG2,ARG3) format[STR, ARG1, ARG2, ARG3]
#define FORMAT_4(STR,ARG1,ARG2,ARG3,ARG4) format[STR, ARG1, ARG2, ARG3, ARG4]
#define FORMAT_5(STR,ARG1,ARG2,ARG3,ARG4,ARG5) format[STR, ARG1, ARG2, ARG3, ARG4, ARG5]
#define FORMAT_6(STR,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6) format[STR, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6]
#define FORMAT_7(STR,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7) format[STR, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7]
#define FORMAT_8(STR,ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8) format[STR, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8]

#define DISPLAY(A) (findDisplay A)
#define CONTROL(A) DISPLAY(A) displayCtrl

#define IS_META_SYS(VAR,TYPE) (if (isNil {VAR}) then {false} else {(VAR) isEqualType TYPE})
#define IS_ARRAY(VAR)    IS_META_SYS(VAR,[])
#define IS_BOOL(VAR)     IS_META_SYS(VAR,false)
#define IS_CODE(VAR)     IS_META_SYS(VAR,{})
#define IS_CONFIG(VAR)   IS_META_SYS(VAR,configNull)
#define IS_CONTROL(VAR)  IS_META_SYS(VAR,controlNull)
#define IS_DISPLAY(VAR)  IS_META_SYS(VAR,displayNull)
#define IS_GROUP(VAR)    IS_META_SYS(VAR,grpNull)
#define IS_OBJECT(VAR)   IS_META_SYS(VAR,objNull)
#define IS_SCALAR(VAR)   IS_META_SYS(VAR,0)
#define IS_SCRIPT(VAR)   IS_META_SYS(VAR,scriptNull)
#define IS_SIDE(VAR)     IS_META_SYS(VAR,west)
#define IS_STRING(VAR)   IS_META_SYS(VAR,"STRING")
#define IS_TEXT(VAR)     IS_META_SYS(VAR,text "")
#define IS_LOCATION(VAR) IS_META_SYS(VAR,locationNull)

#define IS_BOOLEAN(VAR)  IS_BOOL(VAR)
#define IS_FUNCTION(VAR) IS_CODE(VAR)
#define IS_INTEGER(VAR)  (if (IS_SCALAR(VAR)) then {floor (VAR) == (VAR)} else {false})
#define IS_NUMBER(VAR)   IS_SCALAR(VAR)

#define FLOAT_TO_STRING(num)    (str parseNumber (str (_this%_this) + str floor abs _this) + "." + (str (abs _this-floor abs _this) select [2]) + "0")

#define SCRIPT(NAME) \
	scriptName 'PREFIX\COMPONENT\NAME'

#define EXPLODE_1_SYS(ARRAY,A) A = ARRAY param [0]
#define EXPLODE_1(ARRAY,A) EXPLODE_1_SYS(ARRAY,A); TRACE_1("EXPLODE_1, " + QUOTE(ARRAY),A)
#define EXPLODE_1_PVT(ARRAY,A) ARRAY params [#A]; TRACE_1("EXPLODE_1, " + QUOTE(ARRAY),A)

#define EXPLODE_2_SYS(ARRAY,A,B) EXPLODE_1_SYS(ARRAY,A); B = ARRAY param [1]
#define EXPLODE_2(ARRAY,A,B) EXPLODE_2_SYS(ARRAY,A,B); TRACE_2("EXPLODE_2, " + QUOTE(ARRAY),A,B)
#define EXPLODE_2_PVT(ARRAY,A,B) ARRAY params [#A,#B]; TRACE_2("EXPLODE_2, " + QUOTE(ARRAY),A,B)

#define EXPLODE_3_SYS(ARRAY,A,B,C) EXPLODE_2_SYS(ARRAY,A,B); C = ARRAY param [2]
#define EXPLODE_3(ARRAY,A,B,C) EXPLODE_3_SYS(ARRAY,A,B,C); TRACE_3("EXPLODE_3, " + QUOTE(ARRAY),A,B,C)
#define EXPLODE_3_PVT(ARRAY,A,B,C) ARRAY params [#A,#B,#C]; TRACE_3("EXPLODE_3, " + QUOTE(ARRAY),A,B,C)

#define EXPLODE_4_SYS(ARRAY,A,B,C,D) EXPLODE_3_SYS(ARRAY,A,B,C); D = ARRAY param [3]
#define EXPLODE_4(ARRAY,A,B,C,D) EXPLODE_4_SYS(ARRAY,A,B,C,D); TRACE_4("EXPLODE_4, " + QUOTE(ARRAY),A,B,C,D)
#define EXPLODE_4_PVT(ARRAY,A,B,C,D) ARRAY params [#A,#B,#C,#D]; TRACE_4("EXPLODE_4, " + QUOTE(ARRAY),A,B,C,D)

#define EXPLODE_5_SYS(ARRAY,A,B,C,D,E) EXPLODE_4_SYS(ARRAY,A,B,C,D); E = ARRAY param [4]
#define EXPLODE_5(ARRAY,A,B,C,D,E) EXPLODE_5_SYS(ARRAY,A,B,C,D,E); TRACE_5("EXPLODE_5, " + QUOTE(ARRAY),A,B,C,D,E)
#define EXPLODE_5_PVT(ARRAY,A,B,C,D,E) ARRAY params [#A,#B,#C,#D,#E]; TRACE_5("EXPLODE_5, " + QUOTE(ARRAY),A,B,C,D,E)

#define EXPLODE_6_SYS(ARRAY,A,B,C,D,E,F) EXPLODE_5_SYS(ARRAY,A,B,C,D,E); F = ARRAY param [5]
#define EXPLODE_6(ARRAY,A,B,C,D,E,F) EXPLODE_6_SYS(ARRAY,A,B,C,D,E,F); TRACE_6("EXPLODE_6, " + QUOTE(ARRAY),A,B,C,D,E,F)
#define EXPLODE_6_PVT(ARRAY,A,B,C,D,E,F) ARRAY params [#A,#B,#C,#D,#E,#F]; TRACE_6("EXPLODE_6, " + QUOTE(ARRAY),A,B,C,D,E,F)

#define EXPLODE_7_SYS(ARRAY,A,B,C,D,E,F,G) EXPLODE_6_SYS(ARRAY,A,B,C,D,E,F); G = ARRAY param [6]
#define EXPLODE_7(ARRAY,A,B,C,D,E,F,G) EXPLODE_7_SYS(ARRAY,A,B,C,D,E,F,G); TRACE_7("EXPLODE_7, " + QUOTE(ARRAY),A,B,C,D,E,F,G)
#define EXPLODE_7_PVT(ARRAY,A,B,C,D,E,F,G) ARRAY params [#A,#B,#C,#D,#E,#F,#G]; TRACE_7("EXPLODE_7, " + QUOTE(ARRAY),A,B,C,D,E,F,G)

#define EXPLODE_8_SYS(ARRAY,A,B,C,D,E,F,G,H) EXPLODE_7_SYS(ARRAY,A,B,C,D,E,F,G); H = ARRAY param [7]
#define EXPLODE_8(ARRAY,A,B,C,D,E,F,G,H) EXPLODE_8_SYS(ARRAY,A,B,C,D,E,F,G,H); TRACE_8("EXPLODE_8, " + QUOTE(ARRAY),A,B,C,D,E,F,G,H)
#define EXPLODE_8_PVT(ARRAY,A,B,C,D,E,F,G,H) ARRAY params [#A,#B,#C,#D,#E,#F,#G,#H]; TRACE_8("EXPLODE_8, " + QUOTE(ARRAY),A,B,C,D,E,F,G,H)

#define EXPLODE_9_SYS(ARRAY,A,B,C,D,E,F,G,H,I) EXPLODE_8_SYS(ARRAY,A,B,C,D,E,F,G,H); I = ARRAY param [8]
#define EXPLODE_9(ARRAY,A,B,C,D,E,F,G,H,I) EXPLODE_9_SYS(ARRAY,A,B,C,D,E,F,G,H,I); TRACE_9("EXPLODE_9, " + QUOTE(ARRAY),A,B,C,D,E,F,G,H,I)
#define EXPLODE_9_PVT(ARRAY,A,B,C,D,E,F,G,H,I) ARRAY params [#A,#B,#C,#D,#E,#F,#G,#H,#I]; TRACE_9("EXPLODE_9, " + QUOTE(ARRAY),A,B,C,D,E,F,G,H,I)

#ifndef STRING_MACROS_GUARD
#define STRING_MACROS_GUARD
	#define LSTRING(var1) QUOTE(TRIPLES(STR,ADDON,var1))
	#define ELSTRING(var1,var2) QUOTE(TRIPLES(STR,DOUBLES(PREFIX,var1),var2))
	#define CSTRING(var1) QUOTE(TRIPLES($STR,ADDON,var1))
	#define ECSTRING(var1,var2) QUOTE(TRIPLES($STR,DOUBLES(PREFIX,var1),var2))
#endif

#define PARAMS_1(A) EXPLODE_1_PVT(_this,A)
#define PARAMS_2(A,B) EXPLODE_2_PVT(_this,A,B)
#define PARAMS_3(A,B,C) EXPLODE_3_PVT(_this,A,B,C)
#define PARAMS_4(A,B,C,D) EXPLODE_4_PVT(_this,A,B,C,D)
#define PARAMS_5(A,B,C,D,E) EXPLODE_5_PVT(_this,A,B,C,D,E)
#define PARAMS_6(A,B,C,D,E,F) EXPLODE_6_PVT(_this,A,B,C,D,E,F)
#define PARAMS_7(A,B,C,D,E,F,G) EXPLODE_7_PVT(_this,A,B,C,D,E,F,G)
#define PARAMS_8(A,B,C,D,E,F,G,H) EXPLODE_8_PVT(_this,A,B,C,D,E,F,G,H)
#define PARAMS_9(A,B,C,D,E,F,G,H,I) EXPLODE_9_PVT(_this,A,B,C,D,E,F,G,H,I)

#define DEFAULT_PARAM(INDEX,NAME,DEF_VALUE) \
	private [#NAME,"_this"]; \
	ISNILS(_this,[]); \
	NAME = _this param [INDEX, DEF_VALUE]; \
	TRACE_3("DEFAULT_PARAM",INDEX,NAME,DEF_VALUE)

#define KEY_PARAM(KEY,NAME,DEF_VALUE) \
	private #NAME; \
	NAME = [toLower KEY, toUpper KEY, DEF_VALUE, RETNIL(_this)] call CBA_fnc_getArg; \
	TRACE_3("KEY_PARAM",KEY,NAME,DEF_VALUE)

#define ASSERTION_ERROR(MESSAGE) ERROR_WITH_TITLE("Assertion failed!",MESSAGE)

#define ASSERT_TRUE(CONDITION,MESSAGE) \
	if (not (CONDITION)) then \
	{ \
		ASSERTION_ERROR('Assertion (CONDITION) failed!\n\n' + (MESSAGE)); \
	}

#define ASSERT_FALSE(CONDITION,MESSAGE) \
	if (CONDITION) then \
	{ \
		ASSERTION_ERROR('Assertion (not (CONDITION)) failed!\n\n' + (MESSAGE)) \
	}

#define ASSERT_OP(A,OPERATOR,B,MESSAGE) \
	if (not ((A) OPERATOR (B))) then \
	{ \
		ASSERTION_ERROR('Assertion (A OPERATOR B) failed!\n' + 'A: ' + (str (A)) + '\n' + 'B: ' + (str (B)) + "\n\n" + (MESSAGE)); \
	}

#define ASSERT_DEFINED(VARIABLE,MESSAGE) \
	if (isNil VARIABLE) then \
	{ \
		ASSERTION_ERROR('Assertion (VARIABLE is defined) failed!\n\n' + (MESSAGE)); \
	}

#define TEST_SUCCESS(MESSAGE) MESSAGE_WITH_TITLE("Test OK",MESSAGE)
#define TEST_FAIL(MESSAGE) ERROR_WITH_TITLE("Test FAIL",MESSAGE)

#define TEST_TRUE(CONDITION, MESSAGE) \
	if (CONDITION) then \
	{ \
		TEST_SUCCESS('(CONDITION)'); \
	} \
	else \
	{ \
		TEST_FAIL('(CONDITION) ' + (MESSAGE)); \
	}

#define TEST_FALSE(CONDITION, MESSAGE) \
	if (not (CONDITION)) then \
	{ \
		TEST_SUCCESS('(not (CONDITION))'); \
	} \
	else \
	{ \
		TEST_FAIL('(not (CONDITION)) ' + (MESSAGE)); \
	}

#define TEST_OP(A,OPERATOR,B,MESSAGE) \
	if ((A) OPERATOR (B)) then \
	{ \
		TEST_SUCCESS('(A OPERATOR B)') \
	} \
	else \
	{ \
		TEST_FAIL('(A OPERATOR B)') \
	};

#define TEST_DEFINED_AND_OP(A,OPERATOR,B,MESSAGE) \
	if (isNil #A) then { \
		TEST_FAIL('(A is not defined) ' + (MESSAGE)); \
	} else { \
		if (isNil #B) then { \
			TEST_FAIL('(B is not defined) ' + (MESSAGE)); \
		} else { \
			if ((A) OPERATOR (B)) then { \
				TEST_SUCCESS('(A OPERATOR B) ' + (MESSAGE)) \
			} else { \
				TEST_FAIL('(A OPERATOR B) ' + (MESSAGE)) \
	}; }; };

#define TEST_DEFINED(VARIABLE,MESSAGE) \
	if (not isNil VARIABLE) then \
	{ \
		TEST_SUCCESS('(' + VARIABLE + ' is defined)'); \
	} \
	else \
	{ \
		TEST_FAIL('(' + VARIABLE + ' is not defined)' + (MESSAGE)); \
	}

#define DEPRECATE_SYS(OLD_FUNCTION,NEW_FUNCTION) \
	OLD_FUNCTION = { \
		WARNING('Deprecated function used: OLD_FUNCTION (new: NEW_FUNCTION) in ADDON'); \
		if (isNil "_this") then { call NEW_FUNCTION } else { _this call NEW_FUNCTION }; \
	}

#define DEPRECATE(OLD_FUNCTION,NEW_FUNCTION) \
	DEPRECATE_SYS(DOUBLES(PREFIX,OLD_FUNCTION),DOUBLES(PREFIX,NEW_FUNCTION))

#define OBSOLETE_SYS(OLD_FUNCTION,COMMAND_CODE) \
	OLD_FUNCTION = { \
		WARNING('Obsolete function used: (use: OLD_FUNCTION) in ADDON'); \
		if (isNil "_this") then { call COMMAND_CODE } else { _this call COMMAND_CODE }; \
	}

#define OBSOLETE(OLD_FUNCTION,COMMAND_CODE) \
	OBSOLETE_SYS(DOUBLES(PREFIX,OLD_FUNCTION),COMMAND_CODE)

#define BWC_CONFIG(NAME) class NAME { \
		units[] = {}; \
		weapons[] = {}; \
		requiredVersion = REQUIRED_VERSION; \
		requiredAddons[] = {}; \
		version = VERSION; \
}

#define XEH_CLASS CBA_Extended_EventHandlers
#define XEH_CLASS_BASE DOUBLES(XEH_CLASS,base)
#define XEH_DISABLED class EventHandlers { class XEH_CLASS {}; }; SLX_XEH_DISABLED = 1
#define XEH_ENABLED class EventHandlers { class XEH_CLASS { EXTENDED_EVENTHANDLERS }; }; SLX_XEH_DISABLED = 0

#define XEH_PRE_INIT QUOTE(call COMPILE_FILE(XEH_PreInit_Once))
#define XEH_PRE_CINIT QUOTE(call COMPILE_FILE(XEH_PreClientInit_Once))
#define XEH_PRE_SINIT QUOTE(call COMPILE_FILE(XEH_PreServerInit_Once))

#define XEH_POST_INIT QUOTE(call COMPILE_FILE(XEH_PostInit_Once))
#define XEH_POST_CINIT QUOTE(call COMPILE_FILE(XEH_PostClientInit_Once))
#define XEH_POST_SINIT QUOTE(call COMPILE_FILE(XEH_PostServerInit_Once))

#define IS_ADMIN serverCommandAvailable "#kick"

#define IS_ADMIN_LOGGED serverCommandAvailable "#shutdown"

#define EXTENDED_EVENTHANDLERS init = "call cba_xeh_fnc_init"; \
fired = "call cba_xeh_fnc_fired"; \
animChanged = "call cba_xeh_fnc_animChanged"; \
animDone = "call cba_xeh_fnc_animDone"; \
animStateChanged = "call cba_xeh_fnc_animStateChanged"; \
containerClosed = "call cba_xeh_fnc_containerClosed"; \
containerOpened = "call cba_xeh_fnc_containerOpened"; \
controlsShifted = "call cba_xeh_fnc_controlsShifted"; \
dammaged = "call cba_xeh_fnc_dammaged"; \
engine = "call cba_xeh_fnc_engine"; \
epeContact = "call cba_xeh_fnc_epeContact"; \
epeContactEnd = "call cba_xeh_fnc_epeContactEnd"; \
epeContactStart = "call cba_xeh_fnc_epeContactStart"; \
explosion = "call cba_xeh_fnc_explosion"; \
firedNear = "call cba_xeh_fnc_firedNear"; \
fuel = "call cba_xeh_fnc_cba_xeh_fuel"; \
gear = "call cba_xeh_fnc_gear"; \
getIn = "call cba_xeh_fnc_getIn"; \
getInMan = "call cba_xeh_fnc_getInMan"; \
getOut = "call cba_xeh_fnc_getOut"; \
getOutMan = "call cba_xeh_fnc_getOutMan"; \
handleHeal = "call cba_xeh_fnc_handleHeal"; \
hit = "call cba_xeh_fnc_hit"; \
hitPart = "call cba_xeh_fnc_hitPart"; \
incomingMissile = "call cba_xeh_fnc_incomingMissile"; \
inventoryClosed = "call cba_xeh_fnc_inventoryClosed"; \
inventoryOpened = "call cba_xeh_fnc_inventoryOpened"; \
killed = "call cba_xeh_fnc_killed"; \
landedTouchDown = "call cba_xeh_fnc_landedTouchDown"; \
landedStopped = "call cba_xeh_fnc_landedStopped"; \
local = "call cba_xeh_fnc_local"; \
respawn = "call cba_xeh_fnc_respawn"; \
put = "call cba_xeh_fnc_put"; \
take = "call cba_xeh_fnc_take"; \
seatSwitched = "call cba_xeh_fnc_seatSwitched"; \
seatSwitchedMan = "call cba_xeh_fnc_seatSwitchedMan"; \
soundPlayed = "call cba_xeh_fnc_soundPlayed"; \
weaponAssembled = "call cba_xeh_fnc_weaponAssembled"; \
weaponDisassembled = "call cba_xeh_fnc_weaponDisassembled"; \
weaponDeployed = "call cba_xeh_fnc_weaponDeployed"; \
weaponRested = "call cba_xeh_fnc_weaponRested"; \
reloaded = "call cba_xeh_fnc_reloaded"; \
firedMan = "call cba_xeh_fnc_firedMan"; \
turnIn = "call cba_xeh_fnc_turnIn"; \
turnOut = "call cba_xeh_fnc_turnOut"; \
deleted = "call cba_xeh_fnc_deleted";

#define DELETE_EVENTHANDLERS init = ""; \
fired = ""; \
animChanged = ""; \
animDone = ""; \
animStateChanged = ""; \
containerClosed = ""; \
containerOpened = ""; \
controlsShifted = ""; \
dammaged = ""; \
engine = ""; \
epeContact = ""; \
epeContactEnd = ""; \
epeContactStart = ""; \
explosion = ""; \
firedNear = ""; \
fuel = ""; \
gear = ""; \
getIn = ""; \
getInMan = ""; \
getOut = ""; \
getOutMan = ""; \
handleHeal = ""; \
hit = ""; \
hitPart = ""; \
incomingMissile = ""; \
inventoryClosed = ""; \
inventoryOpened = ""; \
killed = ""; \
landedTouchDown = ""; \
landedStopped = ""; \
local = ""; \
respawn = ""; \
put = ""; \
take = ""; \
seatSwitched = ""; \
seatSwitchedMan = ""; \
soundPlayed = ""; \
weaponAssembled = ""; \
weaponDisassembled = ""; \
weaponDeployed = ""; \
weaponRested = ""; \
reloaded = ""; \
firedMan = ""; \
turnIn = ""; \
turnOut = ""; \
deleted = "";

#define DEFAULT_VERSIONING_LEVEL 2

#define DGVAR(varName)    if(isNil "ACE_DEBUG_NAMESPACE") then { ACE_DEBUG_NAMESPACE = []; }; if(!(QUOTE(GVAR(varName)) in ACE_DEBUG_NAMESPACE)) then { PUSH(ACE_DEBUG_NAMESPACE, QUOTE(GVAR(varName))); }; GVAR(varName)
#define DVAR(varName)     if(isNil "ACE_DEBUG_NAMESPACE") then { ACE_DEBUG_NAMESPACE = []; }; if(!(QUOTE(varName) in ACE_DEBUG_NAMESPACE)) then { PUSH(ACE_DEBUG_NAMESPACE, QUOTE(varName)); }; varName
#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)
#define DEFUNC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)

#undef QFUNC
#undef QEFUNC
#define QFUNC(var1) QUOTE(DFUNC(var1))
#define QEFUNC(var1,var2) QUOTE(DEFUNC(var1,var2))

#define GETVAR_SYS(var1,var2) getVariable [ARR_2(QUOTE(var1),var2)]
#define SETVAR_SYS(var1,var2) setVariable [ARR_2(QUOTE(var1),var2)]
#define SETPVAR_SYS(var1,var2) setVariable [ARR_3(QUOTE(var1),var2,true)]

#undef GETVAR
#define GETVAR(var1,var2,var3) var1 GETVAR_SYS(var2,var3)
#define GETMVAR(var1,var2) missionNamespace GETVAR_SYS(var1,var2)
#define GETUVAR(var1,var2) uiNamespace GETVAR_SYS(var1,var2)
#define GETPRVAR(var1,var2) profileNamespace GETVAR_SYS(var1,var2)
#define GETPAVAR(var1,var2) parsingNamespace GETVAR_SYS(var1,var2)

#undef SETVAR
#define SETVAR(var1,var2,var3) var1 SETVAR_SYS(var2,var3)
#define SETPVAR(var1,var2,var3) var1 SETPVAR_SYS(var2,var3)
#define SETMVAR(var1,var2) missionNamespace SETVAR_SYS(var1,var2)
#define SETUVAR(var1,var2) uiNamespace SETVAR_SYS(var1,var2)
#define SETPRVAR(var1,var2) profileNamespace SETVAR_SYS(var1,var2)
#define SETPAVAR(var1,var2) parsingNamespace SETVAR_SYS(var1,var2)

#define GETGVAR(var1,var2) GETMVAR(GVAR(var1),var2)
#define GETEGVAR(var1,var2,var3) GETMVAR(EGVAR(var1,var2),var3)

#define ARR_SELECT(ARRAY,INDEX,DEFAULT) if (count ARRAY > INDEX) then {ARRAY select INDEX} else {DEFAULT}


#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON { \
	weapon = #WEAPON; \
	count = COUNT; \
}

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
	name = #ITEM; \
	count = COUNT; \
}

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE { \
	magazine = #MAGAZINE; \
	count = COUNT; \
}

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) class _xx_##BACKPACK { \
	backpack = #BACKPACK; \
	count = COUNT; \
}

#define TYPE_DEFAULT 0
#define TYPE_MUZZLE 101
#define TYPE_OPTICS 201
#define TYPE_FLASHLIGHT 301
#define TYPE_BIPOD 302
#define TYPE_FIRST_AID_KIT 401
#define TYPE_FINS 501
#define TYPE_BREATHING_BOMB 601
#define TYPE_NVG 602
#define TYPE_GOGGLE 603
#define TYPE_SCUBA 604
#define TYPE_HEADGEAR 605
#define TYPE_FACTOR 607
#define TYPE_RADIO 611
#define TYPE_HMD 616
#define TYPE_BINOCULAR 617
#define TYPE_MEDIKIT 619
#define TYPE_TOOLKIT 620
#define TYPE_UAV_TERMINAL 621
#define TYPE_VEST 701
#define TYPE_UNIFORM 801
#define TYPE_BACKPACK 901

#ifdef DISABLE_COMPILE_CACHE
	#undef PREP
	#define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
	#undef PREP
	#define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_MODULE(folder) [] call compile preprocessFileLineNumbers QPATHTOF(folder\__PREP__.sqf)

#define ACE_isHC (!hasInterface && !isDedicated)

#define IDC_STAMINA_BAR 193

#define ACE_DEPRECATED(arg1,arg2,arg3) WARNING_3("%1 is deprecated. Support will be dropped in version %2. Replaced by: %3",arg1,arg2,arg3)

#define PFORMAT_10(MESSAGE,A,B,C,D,E,F,G,H,I,J) \
	format ['%1: A=%2, B=%3, C=%4, D=%5, E=%6, F=%7, G=%8, H=%9, I=%10 J=%11', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C), RETNIL(D), RETNIL(E), RETNIL(F), RETNIL(G), RETNIL(H), RETNIL(I), RETNIL(J)]
#ifdef DEBUG_MODE_FULL
#define TRACE_10(MESSAGE,A,B,C,D,E,F,G,H,I,J) \
	[THIS_FILE_, __LINE__, PFORMAT_10(MESSAGE,A,B,C,D,E,F,G,H,I,J)] call CBA_fnc_log
#else
   #define TRACE_10(MESSAGE,A,B,C,D,E,F,G,H,I,J)
#endif

#ifdef DISABLE_COMPILE_CACHE
	#define LINKFUNC(x) {_this call FUNC(x)}
	#define PREP_RECOMPILE_START    if (isNil "ACE_PREP_RECOMPILE") then {ACE_RECOMPILES = []; ACE_PREP_RECOMPILE = {{call _x} forEach ACE_RECOMPILES;}}; private _recomp = {
	#define PREP_RECOMPILE_END      }; call _recomp; ACE_RECOMPILES pushBack _recomp;
#else
	#define LINKFUNC(x) FUNC(x)
	#define PREP_RECOMPILE_START /* */
	#define PREP_RECOMPILE_END /* */
#endif

#ifdef ENABLE_CALLSTACK
	#define CALLSTACK(function) {private ['_ret']; if(ACE_IS_ERRORED) then { ['AUTO','AUTO'] call ACE_DUMPSTACK_FNC; ACE_IS_ERRORED = false; }; ACE_IS_ERRORED = true; ACE_STACK_TRACE set [ACE_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, ACE_CURRENT_FUNCTION, 'ANON', _this]]; ACE_STACK_DEPTH = ACE_STACK_DEPTH + 1; ACE_CURRENT_FUNCTION = 'ANON'; _ret = _this call ##function; ACE_STACK_DEPTH = ACE_STACK_DEPTH - 1; ACE_IS_ERRORED = false; _ret;}
	#define CALLSTACK_NAMED(function, functionName) {private ['_ret']; if(ACE_IS_ERRORED) then { ['AUTO','AUTO'] call ACE_DUMPSTACK_FNC; ACE_IS_ERRORED = false; }; ACE_IS_ERRORED = true; ACE_STACK_TRACE set [ACE_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, ACE_CURRENT_FUNCTION, functionName, _this]]; ACE_STACK_DEPTH = ACE_STACK_DEPTH + 1; ACE_CURRENT_FUNCTION = functionName; _ret = _this call ##function; ACE_STACK_DEPTH = ACE_STACK_DEPTH - 1; ACE_IS_ERRORED = false; _ret;}
	#define DUMPSTACK ([__FILE__, __LINE__] call ACE_DUMPSTACK_FNC)

	#define FUNC(var1) {private ['_ret']; if(ACE_IS_ERRORED) then { ['AUTO','AUTO'] call ACE_DUMPSTACK_FNC; ACE_IS_ERRORED = false; }; ACE_IS_ERRORED = true; ACE_STACK_TRACE set [ACE_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, ACE_CURRENT_FUNCTION, 'TRIPLES(ADDON,fnc,var1)', _this]]; ACE_STACK_DEPTH = ACE_STACK_DEPTH + 1; ACE_CURRENT_FUNCTION = 'TRIPLES(ADDON,fnc,var1)'; _ret = _this call TRIPLES(ADDON,fnc,var1); ACE_STACK_DEPTH = ACE_STACK_DEPTH - 1; ACE_IS_ERRORED = false; _ret;}
	#define EFUNC(var1,var2) {private ['_ret']; if(ACE_IS_ERRORED) then { ['AUTO','AUTO'] call ACE_DUMPSTACK_FNC; ACE_IS_ERRORED = false; }; ACE_IS_ERRORED = true; ACE_STACK_TRACE set [ACE_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, ACE_CURRENT_FUNCTION, 'TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)', _this]]; ACE_STACK_DEPTH = ACE_STACK_DEPTH + 1; ACE_CURRENT_FUNCTION = 'TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)'; _ret = _this call TRIPLES(DOUBLES(PREFIX,var1),fnc,var2); ACE_STACK_DEPTH = ACE_STACK_DEPTH - 1; ACE_IS_ERRORED = false; _ret;}
#else
	#define CALLSTACK(function) function
	#define CALLSTACK_NAMED(function, functionName) function
	#define DUMPSTACK
#endif

#ifdef ENABLE_PERFORMANCE_COUNTERS
	#define CBA_fnc_addPerFrameHandler { _ret = [(_this select 0), (_this select 1), (_this select 2), #function] call CBA_fnc_addPerFrameHandler; if(isNil "ACE_PFH_COUNTER" ) then { ACE_PFH_COUNTER=[]; }; ACE_PFH_COUNTER pushBack [[_ret, __FILE__, __LINE__], [(_this select 0), (_this select 1), (_this select 2)]];  _ret }

	#define CREATE_COUNTER(x) if(isNil "ACE_COUNTERS" ) then { ACE_COUNTERS=[]; }; GVAR(DOUBLES(x,counter))=[]; GVAR(DOUBLES(x,counter)) set[0, QUOTE(GVAR(DOUBLES(x,counter)))];  GVAR(DOUBLES(x,counter)) set[1, diag_tickTime]; ACE_COUNTERS pushBack GVAR(DOUBLES(x,counter));
	#define BEGIN_COUNTER(x) if(isNil QUOTE(GVAR(DOUBLES(x,counter)))) then { CREATE_COUNTER(x) }; GVAR(DOUBLES(x,counter)) set[2, diag_tickTime];
	#define END_COUNTER(x) GVAR(DOUBLES(x,counter)) pushBack [(GVAR(DOUBLES(x,counter)) select 2), diag_tickTime];

	#define DUMP_COUNTERS ([__FILE__, __LINE__] call ACE_DUMPCOUNTERS_FNC)
#else
	#define CREATE_COUNTER(x)
	#define BEGIN_COUNTER(x)
	#define END_COUNTER(x)
	#define DUMP_COUNTERS
#endif