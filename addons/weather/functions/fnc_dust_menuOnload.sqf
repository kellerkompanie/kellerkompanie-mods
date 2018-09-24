#include "script_component.hpp"

lbAdd [2100, "Normal"];
lbAdd [2100, "Desert"];
lbAdd [2101, "Disabled"];
lbAdd [2101, "Enabled"];
lbAdd [2102, "None"];
lbAdd [2102, "All but units"];
lbAdd [2102, "All"];
lbAdd [2103, "Disabled"];
lbAdd [2103, "Enabled"];
sliderSetRange [1900, 1, 360];
sliderSetRange [1901, 300, 3600];
sliderSetRange [1902, 0, 300];
sliderSetRange [1903, 1, 20];
sliderSetRange [1904, 2, 200];

sliderSetPosition [1903, 10];
sliderSetPosition [1904, 100];
sliderSetPosition [1900, 360];
lbSetCurSel [2100, 1];
lbSetCurSel [2101, 0];
lbSetCurSel [2102, 0];
lbSetCurSel [2103, 0];
