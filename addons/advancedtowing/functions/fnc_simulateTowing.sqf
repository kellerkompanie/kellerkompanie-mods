// original version by Duda https://github.com/sethduda/AdvancedTowing
#include "script_component.hpp"

#define keko_Find_Surface_ASL_Under_Position(_object,_positionAGL,_returnSurfaceASL,_canFloat) \
_objectASL = AGLToASL (_object modelToWorldVisual (getCenterOfMass _object)); \
_surfaceIntersectStartASL = [_positionAGL select 0, _positionAGL select 1, (_objectASL select 2) + 1]; \
_surfaceIntersectEndASL = [_positionAGL select 0, _positionAGL select 1, (_objectASL select 2) - 5]; \
_surfaces = lineIntersectsSurfaces [_surfaceIntersectStartASL, _surfaceIntersectEndASL, _object, objNull, true, 5]; \
_returnSurfaceASL = AGLToASL _positionAGL; \
{ \
	scopeName "surfaceLoop"; \
	if( isNull (_x select 2) ) then { \
		_returnSurfaceASL = _x select 0; \
		breakOut "surfaceLoop"; \
	} else { \
		if!((_x select 2) isKindOf "RopeSegment") then { \
			_objectFileName = str (_x select 2); \
			if((_objectFileName find " t_") == -1 && (_objectFileName find " b_") == -1) then { \
				_returnSurfaceASL = _x select 0; \
				breakOut "surfaceLoop"; \
			}; \
		}; \
	}; \
} forEach _surfaces; \
if(_canFloat && (_returnSurfaceASL select 2) < 0) then { \
	_returnSurfaceASL set [2,0]; \
}; \

#define keko_Find_Surface_ASL_Under_Model(_object,_modelOffset,_returnSurfaceASL,_canFloat) \
keko_Find_Surface_ASL_Under_Position(_object, (_object modelToWorldVisual _modelOffset), _returnSurfaceASL,_canFloat);

#define keko_Find_Surface_AGL_Under_Model(_object,_modelOffset,_returnSurfaceAGL,_canFloat) \
keko_Find_Surface_ASL_Under_Model(_object,_modelOffset,_returnSurfaceAGL,_canFloat); \
_returnSurfaceAGL = ASLtoAGL _returnSurfaceAGL;


params ["_vehicle","_vehicleHitchModelPos","_cargo","_cargoHitchModelPos","_ropeLength"];

diag_log text format ["[KEKO] (advancedtowing) simulateTowing _vehicle=%1 _vehicleHitchModelPos=%2 _cargo=%3 _cargoHitchModelPos=%4 _ropeLength=%5", _vehicle, _vehicleHitchModelPos, _cargo, _cargoHitchModelPos, _ropeLength];

private ["_lastCargoHitchPosition","_lastCargoVectorDir","_cargoLength","_maxDistanceToCargo","_lastMovedCargoPosition","_cargoHitchPoints"];
private ["_vehicleHitchPosition","_cargoHitchPosition","_newCargoHitchPosition","_cargoVector","_movedCargoVector","_attachedObjects","_currentCargo"];
private ["_newCargoDir","_lastCargoVectorDir","_newCargoPosition","_doExit","_cargoPosition","_vehiclePosition","_maxVehicleSpeed","_vehicleMass","_cargoMass","_cargoCanFloat"];
private ["_cargoCorner1AGL","_cargoCorner1ASL","_cargoCorner2AGL","_cargoCorner2ASL","_cargoCorner3AGL","_cargoCorner3ASL","_cargoCorner4AGL","_cargoCorner4ASL","_surfaceNormal1","_surfaceNormal2","_surfaceNormal"];
private ["_cargoCenterASL","_surfaceHeight","_surfaceHeight2","_maxSurfaceHeight"];

_maxVehicleSpeed = getNumber (configFile >> "CfgVehicles" >> typeOf _vehicle >> "maxSpeed");
_cargoCanFloat = if( getNumber (configFile >> "CfgVehicles" >> typeOf _cargo >> "canFloat") == 1 ) then { true } else { false };

private ["_cargoCenterOfMassAGL","_cargoModelCenterGroundPosition"];
keko_Find_Surface_AGL_Under_Model(_cargo,getCenterOfMass _cargo,_cargoCenterOfMassAGL,_cargoCanFloat);
_cargoModelCenterGroundPosition = _cargo worldToModelVisual _cargoCenterOfMassAGL;
_cargoModelCenterGroundPosition set [0,0];
_cargoModelCenterGroundPosition set [1,0];
_cargoModelCenterGroundPosition set [2, (_cargoModelCenterGroundPosition select 2) - 0.05]; // Adjust height so that it doesn't ride directly on ground

// Calculate cargo model corner points
private ["_cargoCornerPoints"];
_cargoCornerPoints = [_cargo] call FUNC(getCornerPoints);
_corner1 = _cargoCornerPoints select 0;
_corner2 = _cargoCornerPoints select 1;
_corner3 = _cargoCornerPoints select 2;
_corner4 = _cargoCornerPoints select 3;


// Try to set cargo owner if the towing client doesn't own the cargo
if(local _vehicle && !local _cargo) then {
	[_cargo, clientOwner] remoteExec ["setOwner", [0, 2] select isDedicated];
};

_vehicleHitchModelPos set [2,0];
_cargoHitchModelPos set [2,0];

_lastCargoHitchPosition = _cargo modelToWorld _cargoHitchModelPos;
_lastCargoVectorDir = vectorDir _cargo;
_lastMovedCargoPosition = getPos _cargo;

_cargoHitchPoints = [_cargo] call FUNC(getHitchPoints);
_cargoLength = (_cargoHitchPoints select 0) distance (_cargoHitchPoints select 1);

_vehicleMass = 1 max (getMass _vehicle);
_cargoMass = getMass _cargo;
if(_cargoMass == 0) then {
	_cargoMass = _vehicleMass;
};

_maxDistanceToCargo = _ropeLength;

_doExit = false;

// Start vehicle speed simulation
_towingSpeedSimulationHandle = [_vehicle] spawn FUNC(simulateTowingSpeed);

while {!_doExit} do {

	_vehicleHitchPosition = _vehicle modelToWorld _vehicleHitchModelPos;
	_vehicleHitchPosition set [2,0];
	_cargoHitchPosition = _lastCargoHitchPosition;
	_cargoHitchPosition set [2,0];

	_cargoPosition = getPos _cargo;
	_vehiclePosition = getPos _vehicle;

	if(_vehicleHitchPosition distance _cargoHitchPosition > _maxDistanceToCargo) then {

		// Calculated simulated towing position + direction
		_newCargoHitchPosition = _vehicleHitchPosition vectorAdd ((_vehicleHitchPosition vectorFromTo _cargoHitchPosition) vectorMultiply _ropeLength);
		_cargoVector = _lastCargoVectorDir vectorMultiply _cargoLength;
		_movedCargoVector = _newCargoHitchPosition vectorDiff _lastCargoHitchPosition;
		_newCargoDir = vectorNormalized (_cargoVector vectorAdd _movedCargoVector);
		//if(_isRearCargoHitch) then {
		//	_newCargoDir = _newCargoDir vectorMultiply -1;
		//};
		_lastCargoVectorDir = _newCargoDir;
		_newCargoPosition = _newCargoHitchPosition vectorAdd (_newCargoDir vectorMultiply -(vectorMagnitude (_cargoHitchModelPos)));

		keko_Find_Surface_ASL_Under_Position(_cargo,_newCargoPosition,_newCargoPosition,_cargoCanFloat);

		// Calculate surface normal (up) (more realistic than surfaceNormal function)
		keko_Find_Surface_ASL_Under_Model(_cargo,_corner1,_cargoCorner1ASL,_cargoCanFloat);
		keko_Find_Surface_ASL_Under_Model(_cargo,_corner2,_cargoCorner2ASL,_cargoCanFloat);
		keko_Find_Surface_ASL_Under_Model(_cargo,_corner3,_cargoCorner3ASL,_cargoCanFloat);
		keko_Find_Surface_ASL_Under_Model(_cargo,_corner4,_cargoCorner4ASL,_cargoCanFloat);
		_surfaceNormal1 = (_cargoCorner1ASL vectorFromTo _cargoCorner3ASL) vectorCrossProduct (_cargoCorner1ASL vectorFromTo _cargoCorner2ASL);
		_surfaceNormal2 = (_cargoCorner4ASL vectorFromTo _cargoCorner2ASL) vectorCrossProduct (_cargoCorner4ASL vectorFromTo _cargoCorner3ASL);
		_surfaceNormal = _surfaceNormal1 vectorAdd _surfaceNormal2;

		// Calculate adjusted surface height based on surface normal (prevents vehicle from clipping into ground)
		_cargoCenterASL = AGLtoASL (_cargo modelToWorldVisual [0,0,0]);
		_cargoCenterASL set [2,0];
		_surfaceHeight = ((_cargoCorner1ASL vectorAdd ( _cargoCenterASL vectorMultiply -1)) vectorDotProduct _surfaceNormal1) /  ([0,0,1] vectorDotProduct _surfaceNormal1);
		_surfaceHeight2 = ((_cargoCorner1ASL vectorAdd ( _cargoCenterASL vectorMultiply -1)) vectorDotProduct _surfaceNormal2) /  ([0,0,1] vectorDotProduct _surfaceNormal2);
		_maxSurfaceHeight = (_newCargoPosition select 2) max _surfaceHeight max _surfaceHeight2;
		_newCargoPosition set [2, _maxSurfaceHeight ];

		_newCargoPosition = _newCargoPosition vectorAdd ( _cargoModelCenterGroundPosition vectorMultiply -1 );

		_cargo setVectorDir _newCargoDir;
		_cargo setVectorUp _surfaceNormal;
		_cargo setPosWorld _newCargoPosition;

		_lastCargoHitchPosition = _newCargoHitchPosition;
		_maxDistanceToCargo = _vehicleHitchPosition distance _newCargoHitchPosition;
		_lastMovedCargoPosition = _cargoPosition;

		_massAdjustedMaxSpeed = _vehicle getVariable [QGVAR(maxTowSpeed), _maxVehicleSpeed];
		if(speed _vehicle > (_massAdjustedMaxSpeed)+0.1) then {
			_vehicle setVelocity ((vectorNormalized (velocity _vehicle)) vectorMultiply (_massAdjustedMaxSpeed/3.6));
		};

	} else {

		if(_lastMovedCargoPosition distance _cargoPosition > 2) then {
			_lastCargoHitchPosition = _cargo modelToWorld _cargoHitchModelPos;
			_lastCargoVectorDir = vectorDir _cargo;
		};

	};

	// If vehicle isn't local to the client, switch client running towing simulation
	if(!local _vehicle) then {
		_this remoteExec [QFUNC(simulateTowing), _vehicle];
		_doExit = true;
	};

	// If the vehicle isn't towing anything, stop the towing simulation
	if( count (ropeAttachedObjects _vehicle) == 0 ) then {
		_currentCargo = objNull;
	} else {
		_currentCargo = ((ropeAttachedObjects _vehicle) select 0) getVariable [QGVAR(cargo), objNull];
	};

	if(isNull _currentCargo) then {
		_doExit = true;
	};

	sleep 0.01;

};

terminate _towingSpeedSimulationHandle;
