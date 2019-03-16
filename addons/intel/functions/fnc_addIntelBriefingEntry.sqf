#include "script_component.hpp"

if !(hasInterface) exitWith {};

params ["_title", "_content"];

["intelAdded", [format [localize LSTRING(found), player, _title], "\A3\ui_f\data\map\markers\military\warning_ca.paa"]] call bis_fnc_showNotification;

if !(player diarySubjectExists QGVAR(briefingIntel)) then {
    player createDiarySubject [QGVAR(briefingIntel), "Intel"];
};

player createDiaryRecord [QGVAR(briefingIntel), [_title, _content]];
