#include "script_component.hpp"

lbAdd [2100, "None"];
lbAdd [2100, "All but Units"];
lbAdd [2100, "All"];
lbAdd [2101, "Off"];
lbAdd [2101, "On"];
lbAdd [2102, "Client"];
lbAdd [2102, "Server"];
lbAdd [2102, "Disabled"];
lbAdd [2103, "No"];
lbAdd [2103, "Yes"];
sliderSetRange [1900, 1, 360];
sliderSetRange [1901, 300, 3600];
sliderSetRange [1902, 0, 300];
sliderSetRange [1903, 50, 5000];
sliderSetPosition [1903, 1750];
sliderSetPosition [1900, 360];
lbSetCurSel [2100, 0];
lbSetCurSel [2101, 1];
lbSetCurSel [2102, 0];
lbSetCurSel [2103, 1];
