#define COMPONENT persistency_settings
#define COMPONENT_BEAUTIFIED PersistencySettings
#include "\x\keko\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_PERSISTENCY_SETTINGS
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_PERSISTENCY_SETTINGS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_PERSISTENCY_SETTINGS
#endif

#include "\x\keko\addons\main\script_macros.hpp"

#define PERSISTENCY_DISABLED 0
#define PERSISTENCY_ENABLED 1
#define PERSISTENCY_SELECTIVE 2
