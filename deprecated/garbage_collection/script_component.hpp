#define COMPONENT garbage_collection
#define COMPONENT_BEAUTIFIED Garbage Collection
#include "\x\keko\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_GARBAGE_COLLECTION
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_GARBAGE_COLLECTION
    #define DEBUG_SETTINGS DEBUG_SETTINGS_GARBAGE_COLLECTION
#endif

#include "\x\keko\addons\main\script_macros.hpp"
