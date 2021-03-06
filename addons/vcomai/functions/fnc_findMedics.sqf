#include "script_component.hpp"
//Function to find all medics within a group.
private _medics = [];
{
	if (isNull objectParent _x) then {
		if (_x getUnitTrait "Medic") then {
			_medics pushBack _x;
		};
	};
	true;
} count (units _this);

_medics