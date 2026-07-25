#include "script_component.hpp"

"ace_clipboard" callExtension (format ["%1%2", "# Faction Generator Config Export", endl]);

private _selection = [["Object"]] call Enh_fnc_all3DENSelected;
{
    if (_x isKindOf "keko_faction_generic_blufor_soldier" || _x isKindOf "keko_faction_generic_indfor_soldier" || _x isKindOf "keko_faction_generic_opfor_soldier" ) then {
        "ace_clipboard" callExtension (format ["['%1',%2]%3", typeOf _x, getUnitLoadout _x, endl]);
    };
} forEach _selection;

"ace_clipboard" callExtension "--COMPLETE--";

["Enh_DataCopied"] call BIS_fnc_3DENNotification;

true
