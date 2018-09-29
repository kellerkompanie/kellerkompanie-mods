#include "script_component.hpp"

player spawn
{
	private _i = 0;
	for [{_i=0}, {_i < 5}, {_i = _i + 1}] do
	{
		ace_advanced_fatigue_anReserve = ace_advanced_fatigue_anReserve + 200;
		sleep 5;
	}
};
