#define COMPONENT vcomai
#define COMPONENT_BEAUTIFIED VCOMAI
#include "\x\keko\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_VCOMAI
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_VCOMAI
    #define DEBUG_SETTINGS DEBUG_SETTINGS_VCOMAI
#endif

#include "\x\keko\addons\main\script_macros.hpp"

#define VERSION_CONFIG_COMMON VERSION_CONFIG;\
    versionDesc = "Kellerkompanie Vcom-AI";\
    versionAct = QUOTE(call COMPILE_FILE(init_versionTooltip))
