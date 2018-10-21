[
    "keko_tank_multiplier", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Tank Multiplier", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Applies this multiplier to the tank size of oxygen tank.", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 100, 1, 2], // data for this setting: [min, max, default, number of shown trailing decimals]
    true
] call CBA_Settings_fnc_init;