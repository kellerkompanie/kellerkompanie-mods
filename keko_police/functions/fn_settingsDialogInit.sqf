
_display = _this select 0;

_sliderDistanceCtrl = _display displayCtrl 1900;
_sliderChanceCtrl = _display displayCtrl 1901;
_textDistanceCtrl = _display displayCtrl 1004;
_textChanceCtrl = _display displayCtrl 1005;
_checkWoundedCtrl = _display displayCtrl 2800;

_sliderDistanceCtrl sliderSetRange [5, 50];
_sliderDistanceCtrl sliderSetSpeed [5, 5];
_sliderChanceCtrl sliderSetRange [0, 100];
_sliderChanceCtrl sliderSetSpeed [10, 10];

_distance = keko_police_var_shoutDistance;
_chance = keko_police_var_defaultSurrenderChance;
_wounded = keko_police_var_higherSurrenderWounded;

diag_log text format["[KEKO] (police) initalizing settings dialog with %1 %2 %3", _distance, _chance, _wounded];

_sliderDistanceCtrl sliderSetPosition _distance;
_sliderChanceCtrl sliderSetPosition _chance;
_textDistanceCtrl ctrlSetText format["%1 m", round _distance];
_textChanceCtrl ctrlSetText format["%1%2", round _chance, "%"];
_checkWoundedCtrl cbSetChecked _wounded;
