disableSerialization;

_display = uiNamespace getVariable "keko_police_settings_dialog";

_sliderDistanceCtrl = _display displayCtrl 1900;
_sliderChanceCtrl = _display displayCtrl 1901;
_checkboxCtrl = _display displayCtrl 2800;

_distance = round (sliderPosition 1900);
_chance = round (sliderPosition 1901);
_wounded = cbChecked _checkboxCtrl;

diag_log text format["[KEKO] (police) exiting settings dialog with %1 %2 %3", _distance, _chance, _wounded];

keko_police_var_shoutDistance = _distance;
keko_police_var_defaultSurrenderChance = _chance;
keko_police_var_higherSurrenderWounded = _wounded;

publicVariable "keko_police_var_shoutDistance";
publicVariable "keko_police_var_defaultSurrenderChance";
publicVariable "keko_police_var_higherSurrenderWounded";

closeDialog 1;