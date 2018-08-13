params ["_vehicle"];
private ["_centerOfMass","_bbr","_p1","_p2","_rearCorner","_rearCorner2","_frontCorner","_frontCorner2"];
private ["_maxWidth","_widthOffset","_maxLength","_lengthOffset","_widthFactor","_lengthFactor"];

// Correct width and length factor for air
_widthFactor = 0.75;
_lengthFactor = 0.75;
if(_vehicle isKindOf "Air") then {
	_widthFactor = 0.3;
};
if(_vehicle isKindOf "Helicopter") then {
	_widthFactor = 0.2;
	_lengthFactor = 0.45;
};

_centerOfMass = getCenterOfMass _vehicle;
_bbr = boundingBoxReal _vehicle;
_p1 = _bbr select 0;
_p2 = _bbr select 1;
_maxWidth = abs ((_p2 select 0) - (_p1 select 0));
_widthOffset = ((_maxWidth / 2) - abs ( _centerOfMass select 0 )) * _widthFactor;
_maxLength = abs ((_p2 select 1) - (_p1 select 1));
_lengthOffset = ((_maxLength / 2) - abs (_centerOfMass select 1 )) * _lengthFactor;
_rearCorner = [(_centerOfMass select 0) + _widthOffset, (_centerOfMass select 1) - _lengthOffset, _centerOfMass select 2];
_rearCorner2 = [(_centerOfMass select 0) - _widthOffset, (_centerOfMass select 1) - _lengthOffset, _centerOfMass select 2];
_frontCorner = [(_centerOfMass select 0) + _widthOffset, (_centerOfMass select 1) + _lengthOffset, _centerOfMass select 2];
_frontCorner2 = [(_centerOfMass select 0) - _widthOffset, (_centerOfMass select 1) + _lengthOffset, _centerOfMass select 2];

if(missionNamespace getVariable ["keko_advancedtowing_towDebugEnabled", false]) then {
	if(isNil "keko_advancedtowing_tow_debug_arrow_1") then {
		keko_advancedtowing_tow_debug_arrow_1 = "Sign_Arrow_F" createVehicleLocal [0,0,0];
		keko_advancedtowing_tow_debug_arrow_2 = "Sign_Arrow_F" createVehicleLocal [0,0,0];
		keko_advancedtowing_tow_debug_arrow_3 = "Sign_Arrow_F" createVehicleLocal [0,0,0];
		keko_advancedtowing_tow_debug_arrow_4 = "Sign_Arrow_F" createVehicleLocal [0,0,0];
	};
	keko_advancedtowing_tow_debug_arrow_1 setPosASL  AGLtoASL (_vehicle modelToWorldVisual _rearCorner);
	keko_advancedtowing_tow_debug_arrow_2 setPosASL  AGLtoASL (_vehicle modelToWorldVisual _rearCorner2);
	keko_advancedtowing_tow_debug_arrow_3 setPosASL  AGLtoASL (_vehicle modelToWorldVisual _frontCorner);
	keko_advancedtowing_tow_debug_arrow_4 setPosASL  AGLtoASL (_vehicle modelToWorldVisual _frontCorner2);
};

[_rearCorner,_rearCorner2,_frontCorner,_frontCorner2];
