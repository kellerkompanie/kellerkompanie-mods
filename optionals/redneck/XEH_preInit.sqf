#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

GVAR(POIs) = [];
GVAR(Locations) = [];

GVAR(Checkpoints) = [];
GVAR(PowerPlants) = 0;
GVAR(ControlledIndustrials) = [];

GVAR(LocationMapKeys) = [];
GVAR(LocationMapValues) = [];

if (isServer) then {
	private _dbLocations = call FUNC(dbGetLocations);

	{
		_x params ["_locationVariable", "_side"];
		GVAR(LocationMapKeys) pushBack _locationVariable;
		GVAR(LocationMapValues) pushBack ["", "", "", _side, ""];
	} forEach _dbLocations;
};

ADDON = true;
