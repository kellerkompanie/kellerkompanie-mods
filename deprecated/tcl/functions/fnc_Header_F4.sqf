#include "script_component.hpp"

private ["_array","_return"];

_array = [];
_return = [ (_this select 0), (_this select 1), "", "ff0000", "( Initialize )"] call FUNC(Debug_F4);
_array set [count _array, _return];
_return = [ (_this select 0), (_this select 2), "", "ff0000", "( Delay )"] call FUNC(Debug_F4);
_array set [count _array, _return];

format ["<br/><t size='1.5' color='#ffff00'>Initialize</t> <t size='1.5' color='#ffffff'>( System )</t>
---------------------------------------------<br/>%1 %2",
(_array select 0), (_array select 1) ];	
