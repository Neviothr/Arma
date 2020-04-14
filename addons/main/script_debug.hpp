/**
Fast Recompiling via function
**/
// #define DISABLE_COMPILE_CACHE
// To Use: [] call NEV_PREP_RECOMPILE;

#ifdef DISABLE_COMPILE_CACHE
    #define LINKFUNC(x) {_this call FUNC(x)}
    #define PREP_RECOMPILE_START    if (isNil "NEV_PREP_RECOMPILE") then {NEV_RECOMPILES = []; NEV_PREP_RECOMPILE = {{call _x} forEach NEV_RECOMPILES;}}; private _recomp = {
    #define PREP_RECOMPILE_END      }; call _recomp; NEV_RECOMPILES pushBack _recomp;
#else
    #define LINKFUNC(x) FUNC(x)
    #define PREP_RECOMPILE_START /* */
    #define PREP_RECOMPILE_END /* */
#endif


/**
STACK TRACING
**/
//#define ENABLE_CALLSTACK
//#define ENABLE_PERFORMANCE_COUNTERS
//#define DEBUG_EVENTS

#ifdef ENABLE_CALLSTACK
    #define CALLSTACK(function) {if(NEV_IS_ERRORED) then { ['AUTO','AUTO'] call NEV_DUMPSTACK_FNC; NEV_IS_ERRORED = false; }; NEV_IS_ERRORED = true; NEV_STACK_TRNEV set [NEV_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, NEV_CURRENT_FUNCTION, 'ANON', _this]]; NEV_STACK_DEPTH = NEV_STACK_DEPTH + 1; NEV_CURRENT_FUNCTION = 'ANON'; private _ret = _this call ##function; NEV_STACK_DEPTH = NEV_STACK_DEPTH - 1; NEV_IS_ERRORED = false; _ret;}
    #define CALLSTACK_NAMED(function, functionName) {if(NEV_IS_ERRORED) then { ['AUTO','AUTO'] call NEV_DUMPSTACK_FNC; NEV_IS_ERRORED = false; }; NEV_IS_ERRORED = true; NEV_STACK_TRNEV set [NEV_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, NEV_CURRENT_FUNCTION, functionName, _this]]; NEV_STACK_DEPTH = NEV_STACK_DEPTH + 1; NEV_CURRENT_FUNCTION = functionName; private _ret = _this call ##function; NEV_STACK_DEPTH = NEV_STACK_DEPTH - 1; NEV_IS_ERRORED = false; _ret;}
    #define DUMPSTACK ([__FILE__, __LINE__] call NEV_DUMPSTACK_FNC)

    #define FUNC(var1) {if(NEV_IS_ERRORED) then { ['AUTO','AUTO'] call NEV_DUMPSTACK_FNC; NEV_IS_ERRORED = false; }; NEV_IS_ERRORED = true; NEV_STACK_TRNEV set [NEV_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, NEV_CURRENT_FUNCTION, 'TRIPLES(ADDON,fnc,var1)', _this]]; NEV_STACK_DEPTH = NEV_STACK_DEPTH + 1; NEV_CURRENT_FUNCTION = 'TRIPLES(ADDON,fnc,var1)'; private _ret = _this call TRIPLES(ADDON,fnc,var1); NEV_STACK_DEPTH = NEV_STACK_DEPTH - 1; NEV_IS_ERRORED = false; _ret;}
    #define EFUNC(var1,var2) {if(NEV_IS_ERRORED) then { ['AUTO','AUTO'] call NEV_DUMPSTACK_FNC; NEV_IS_ERRORED = false; }; NEV_IS_ERRORED = true; NEV_STACK_TRNEV set [NEV_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, NEV_CURRENT_FUNCTION, 'TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)', _this]]; NEV_STACK_DEPTH = NEV_STACK_DEPTH + 1; NEV_CURRENT_FUNCTION = 'TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)'; private _ret = _this call TRIPLES(DOUBLES(PREFIX,var1),fnc,var2); NEV_STACK_DEPTH = NEV_STACK_DEPTH - 1; NEV_IS_ERRORED = false; _ret;}
#else
    #define CALLSTACK(function) function
    #define CALLSTACK_NAMED(function, functionName) function
    #define DUMPSTACK
#endif


/**
PERFORMANCE COUNTERS SECTION
**/
//#define ENABLE_PERFORMANCE_COUNTERS
// To Use: [] call NEV_common_fnc_dumpPerformanceCounters;

#ifdef ENABLE_PERFORMANCE_COUNTERS
    #define CBA_fnc_addPerFrameHandler { _ret = [(_this select 0), (_this select 1), (_this select 2), #function] call CBA_fnc_addPerFrameHandler; if(isNil "NEV_PFH_COUNTER" ) then { NEV_PFH_COUNTER=[]; }; NEV_PFH_COUNTER pushBack [[_ret, __FILE__, __LINE__], [(_this select 0), (_this select 1), (_this select 2)]];  _ret }

    #define CREATE_COUNTER(x) if(isNil "NEV_COUNTERS" ) then { NEV_COUNTERS=[]; }; GVAR(DOUBLES(x,counter))=[]; GVAR(DOUBLES(x,counter)) set[0, QUOTE(GVAR(DOUBLES(x,counter)))];  GVAR(DOUBLES(x,counter)) set[1, diag_tickTime]; NEV_COUNTERS pushBack GVAR(DOUBLES(x,counter));
    #define BEGIN_COUNTER(x) if(isNil QUOTE(GVAR(DOUBLES(x,counter)))) then { CREATE_COUNTER(x) }; GVAR(DOUBLES(x,counter)) set[2, diag_tickTime];
    #define END_COUNTER(x) GVAR(DOUBLES(x,counter)) pushBack [(GVAR(DOUBLES(x,counter)) select 2), diag_tickTime];

    #define DUMP_COUNTERS ([__FILE__, __LINE__] call NEV_DUMPCOUNTERS_FNC)
#else
    #define CREATE_COUNTER(x) /* disabled */
    #define BEGIN_COUNTER(x) /* disabled */
    #define END_COUNTER(x) /* disabled */
    #define DUMP_COUNTERS  /* disabled */
#endif
