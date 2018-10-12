#include "script_component.hpp"

params ["_params","_functionName",["_isCall",false]];

if(_isCall) then {
	_params remoteExecCall [_functionName, 2];
} else {
	_params remoteExec [_functionName, 2];
};
