#include "script_component.hpp"

params ["_unit","_Array"];

private _arrowArray = _unit getVariable [QGVAR(DBGA),[]];
private _VisualA = _unit getVariable [QGVAR(DBGVI),[]];

if (count _arrowArray > 0) then
{
	{
		_x call BIS_fnc_drawArrow;
	} foreach _arrowArray;
};
if (count _VisualA > 0) then
{
	{
		removeMissionEventHandler ["Draw3D",_x];
	} foreach _VisualA;
};	
_arrowArray = [];
_VisualA = [];
{
	private _Pos = _x;
	_Pos set [2,1];
	
	private _StartingPoint = _Pos;
	private _NextPoint = (_Array # (_foreachindex + 1));
	
	if !(isNil "_NextPoint") then
	{
		_NextPoint set [2,1];
		private _ID = addMissionEventHandler ["Draw3D", 
		format 
			[
			"
				drawLine3D [%1, %2, [1,0,0,1]];
			",
			_StartingPoint,_NextPoint
			]
		];
		
		private _ID2 = addMissionEventHandler ["Draw3D", 
		format [
		"	
			private _Cam = player;
			if !(isNull curatorCamera) then {_Cam = curatorCamera;};
			private _WH = linearConversion[0, 50, _Cam distance2D %1, 2, 0, true];
			private _TS = linearConversion[0, 50, _Cam distance2D %1, 0.05, 0, true];
			drawIcon3D ['\a3\characters_f_enoch\headgear\data\ui\icon_h_hat_tinfoil_f_ca.paa', [1,1,1,0.7], %1, _WH, _WH, 0, 'Point', 2, _TS, 'PuristaMedium'];
		",
		_NextPoint
		]];
	
		private _arrow = [_StartingPoint, _NextPoint, [1,0,0,1], [1,1/5,5]] call BIS_fnc_drawArrow;
		_arrowArray pushback _arrow;
		_VisualA pushback _ID;
		_VisualA pushback _ID2;
	
	};
} foreach _Array;
_unit setVariable [QGVAR(DBGA),_arrowArray];
_unit setVariable [QGVAR(DBGVI),_VisualA];


if !(_unit getVariable [QGVAR(DBGSET),false]) then
{
	_unit addEventHandler ["killed",
		{
			params ["_unit", "_killer", "_instigator", "_useEffects"];	

			private _arrowArray = _unit getVariable [QGVAR(DBGA),[]];
			private _VisualA = _unit getVariable [QGVAR(DBGVI),[]];
			
			if (count _arrowArray > 0) then
			{
				{
					_x call BIS_fnc_drawArrow;
				} foreach _arrowArray;
			};
			if (count _VisualA > 0) then
			{
				{
					removeMissionEventHandler ["Draw3D",_x];
				} foreach _VisualA;
			};	
		}];
	_unit addEventHandler ["Deleted",
		{
			params ["_unit"];

			private _arrowArray = _unit getVariable [QGVAR(DBGA),[]];
			private _VisualA = _unit getVariable [QGVAR(DBGVI),[]];
			
			if (count _arrowArray > 0) then
			{
				{
					_x call BIS_fnc_drawArrow;
				} foreach _arrowArray;
			};
			if (count _VisualA > 0) then
			{
				{
					removeMissionEventHandler ["Draw3D",_x];
				} foreach _VisualA;
			};	
		}];		
	_unit setVariable [QGVAR(DBGSET),true];
};
