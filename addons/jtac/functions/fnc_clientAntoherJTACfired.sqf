#include "script_component.hpp"

hint format ["Could not fire! Another JTAC operator called in a strike before you could complete yours. The guns need another %1 seconds to reload!", _this];

GVAR(JtacAvailable) = true;
