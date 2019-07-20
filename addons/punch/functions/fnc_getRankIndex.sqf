#include "script_component.hpp"

params ["_rank"];

_rank = toUpper _rank;
private _ranks = ["PRIVATE","CORPORAL","SERGEANT","LIEUTENANT","CAPTAIN","MAJOR","COLONEL"];

_ranks find _rank
