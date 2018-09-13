#include "script_component.hpp"

(player call FUNC(hasAssignedTeam)) || {
    ({_x call FUNC(hasAssignedTeam)} count (units player)) > 0;
};
