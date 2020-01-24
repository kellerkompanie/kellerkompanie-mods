#define COMPONENT logistics
#define COMPONENT_BEAUTIFIED Logistics
#include "\x\keko\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_LOGISTICS
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_LOGISTICS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_LOGISTICS
#endif

#include "\x\keko\addons\main\script_macros.hpp"

#define ACCESS_DISABLED 0
#define ACCESS_EVERYONE 1
#define ACCESS_CORPORAL 2
#define ACCESS_SERGEANT 3
#define ACCESS_LIEUTENANT 4
#define ACCESS_ENGINEERS 5
#define ACCESS_ZEUS 6
#define ACCESS_JTAC 7
#define ACCESS_UAVOPERATOR 8

#define ADD_CRATE_NOBODY 0
#define ADD_CRATE_ALL 1
#define ADD_CRATE_ZEUS 2
