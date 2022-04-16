#include "script_component.hpp"

_this spawn {
	private ["_array"];

	_array = _this;

	private _header = _array call FUNC(Header_F2);

	private ["_text"];

	while { GVAR(Preprocess) } do {
		_text = "<t size='1.3' color='#bebebe'>Working</t>";
		hint parseText (_header + _text);	
		sleep 0.01;
	};

	hint parseText (_header + _text);
};