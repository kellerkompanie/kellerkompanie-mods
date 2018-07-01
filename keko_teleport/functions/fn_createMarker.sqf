params ["_position", "_name", "_side"];

_markerName = "keko_teleport_" + _name;
_marker = createMarkerLocal [_markerName, _position];
_markerName setMarkerSizeLocal [0.5, 0.5];

switch (_side) do {
	case west: {
		_markerName setMarkerColorLocal "ColorWEST";
	};
	case resistance: {
		_markerName setMarkerColorLocal "ColorGUER";
	};
	case east: {
		_markerName setMarkerColorLocal "ColorEAST";
	};
	case civilian: {
		_markerName setMarkerColorLocal "ColorCIV";
	};
};

_markerName setMarkerTextLocal _name;
_markerName setMarkerTypeLocal "mil_end";