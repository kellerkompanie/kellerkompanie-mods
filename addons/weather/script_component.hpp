#define COMPONENT weather
#define COMPONENT_BEAUTIFIED Weather
#include "\x\keko\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_WEATHER
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_WEATHER
    #define DEBUG_SETTINGS DEBUG_SETTINGS_WEATHER
#endif

#include "\x\keko\addons\main\script_macros.hpp"
