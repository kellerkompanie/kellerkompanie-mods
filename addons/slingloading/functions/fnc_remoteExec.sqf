#include "script_component.hpp"

params ["_params","_functionName","_target",["_isCall",false]];

if(_isCall) then {
	_params remoteExecCall [_functionName, _target];
} else {
	_params remoteExec [_functionName, _target];
};
