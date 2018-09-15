#include "script_component.hpp"

#define ENGINEPOWER 100
#define MAXSPEED 65

class CfgVehicles {
	class Rubber_duck_base_F;
	class B_Boat_Transport_01_F: Rubber_duck_base_F {
		enginePower = ENGINEPOWER;
		maxSpeed = MAXSPEED;
	};

	class B_T_Boat_Transport_01_F: Rubber_duck_base_F {
		enginePower = ENGINEPOWER;
		maxSpeed = MAXSPEED;
	};
};