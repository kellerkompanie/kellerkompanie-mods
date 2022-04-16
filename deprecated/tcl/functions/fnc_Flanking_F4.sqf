#include "script_component.hpp"

params ["_group"];
	
if (_group in (GVAR(Flanking) select 0) ) then {
	DELETE_AT(GVAR(Flanking), 0, _group);
}
else {
	(GVAR(Flanking) select 0) pushBack _group;
};

True
