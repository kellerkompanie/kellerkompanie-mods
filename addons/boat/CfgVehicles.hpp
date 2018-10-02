class CfgVehicles {
	class Rubber_duck_base_F;
	class B_Boat_Transport_01_F: Rubber_duck_base_F {
		enginePower = 100;
		maxSpeed = 65;
	};

	class B_T_Boat_Transport_01_F: Rubber_duck_base_F {
		enginePower = 100;
		maxSpeed = 65;
	};


	class Land_WoodenCrate_01_F;
	class GVAR(boatCrate): Land_WoodenCrate_01_F {
		displayName="Boat crate";
	};
};
