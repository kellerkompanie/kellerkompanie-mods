#include "script_component.hpp"

if (face player == "Custom") then {
    private _text = localize LSTRING(customFacesNotAllowed);
    [{alive player}, { // To be able to show list if using checkAll
        params ["_text"];
        _text = composeText [parseText format ["<t align='center'>%1</t>", _text]];
        ["[KEKO] ERROR", _text, {findDisplay 46 closeDisplay 0}] call ace_common_fnc_errorMessage;
    }, [_text]] call CBA_fnc_waitUntilAndExecute;
};
