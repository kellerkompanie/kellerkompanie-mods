#define COMPONENT logging
#define COMPONENT_BEAUTIFIED Logging
#include "\x\keko\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_LOGGING
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_LOGGING
    #define DEBUG_SETTINGS DEBUG_SETTINGS_LOGGING
#endif

#include "\x\keko\addons\main\script_macros.hpp"
