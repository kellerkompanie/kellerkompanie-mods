#define PERSISTENCY_DISABLED 0
#define PERSISTENCY_ENABLED 1
#define PERSISTENCY_SELECTIVE 2

#define EXIT_IF_PERSISTENCY_DISABLED if !(GVAR(enabled)) exitWith {WARNING("persistency disabled, exiting!")};
#define EXIT_IF_KEY_INVALID if (GVAR(key) == "" || (count GVAR(key) > 32)) exitWith {WARNING("key not set or invalid, exiting!")};
