// TODO optimize: only call once on mission start
_sqfFile = format ["custom_logistics\crates.sqf"];
_sqfString = preprocessFileLineNumbers _sqfFile;
_code = compile _sqfString; 
_crates = call _code;

keko_var_logistics_customCrates = _crates;
publicVariable "keko_var_logistics_customCrates";

diag_log text format["[KEKO] (logistics) parsed custom logistics: %1", keko_var_logistics_customCrates];