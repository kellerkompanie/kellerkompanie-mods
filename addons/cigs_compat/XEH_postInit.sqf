#include "script_component.hpp"

// Swap the generic placeholders for real Immersion Cigs items. Targets are the
// canonical classes, not the murshun_cigs/immersion_pops aliases from cigs_legacy,
// which that mod already marks as deprecated.
{
    _x call ace_common_fnc_registerItemReplacement;
} forEach [
    ["keko_common_cigpack_generic", "cigs_morley_cigpack"],
    ["keko_common_lighter_generic", "cigs_lighter"],
    ["keko_common_matches_generic", "cigs_matches"],
    ["keko_common_lollipop_generic", "cigs_pops_poppack"]
];
