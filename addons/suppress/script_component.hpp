#define COMPONENT suppress
#define COMPONENT_BEAUTIFIED Suppress
#include "\x\keko\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_SUPPRESS
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_SUPPRESS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_SUPPRESS
#endif

#include "\x\keko\addons\main\script_macros.hpp"

#define MAXSUPP 30
#define BORDER 8
#define OVERHEADDIVISOR 22.15
#define IMPACTDIVISOR 15.50
