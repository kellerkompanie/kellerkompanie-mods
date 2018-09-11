if (dialog) exitwith {closedialog 0};

_range = 1.5;

if (cameraView == "External") then 
{
	_range = _range + 3
};

_obj = ((lineintersectsSurfaces [atltoasl (positionCameraToWorld [0,0,0]), atltoasl (positionCameraToWorld [0,0,_range]), player, objNull, true, 1, "GEOM", "FIRE"]) select 0) select 3;

if (isNil "_obj") then
{
	_obj = ((lineintersectsSurfaces [atltoasl (player modeltoworld [0,0,0.5]), atltoasl (player modeltoworld [0,0,-1]), player, objNull, true, 1, "FIRE", "FIRE"]) select 0) select 3;
};

if (isNil "_obj") then
{
	_obj = vehicle player;
};

if (_obj == player) exitwith {};


if (_obj isKindOf "LandVehicle" or _obj isKindOf "Air" or _obj isKindOf "Ship") exitwith
{
	if (getnumber (configfile >> "CfgVehicles" >> typeof _obj >> "isUAV") == 1) exitwith {};
	
	if (locked _obj > 1) exitwith {};
	
	switch ((profilenamespace getVariable "babe_em_settings_vehicleinteraction") select 0) do
	{
		case 1:
		{
			_obj call babe_int_fnc_get_seats;
		};
		case 2:
		{
			_obj call babe_int_fnc_fastgetin;
		};
	};
};



_ladders = getArray (configFile >> "CfgVehicles" >> typeof _obj >> "ladders"); 

if (count _ladders > 0) then
{
	{	
		_ladder = _forEachIndex; 	
		_ladderpoints = _x;
		_ladderpoints resize 2;
		_ladderpoints = [_ladderpoints,[],{(_obj selectionPosition _x) select 2},"ASCEND"] call BIS_fnc_sortBy;

		{
			_dir = ""; 
			_pos = _obj selectionPosition _x;

			_sel = player selectionPosition "pelvis";
			_dist = (player modeltoworld [_sel  select 0, _sel select 1 + 1, _sel select 2 - 1]) distance  (_obj modeltoworld _pos);
			_dist2 = (player modeltoworld [_sel  select 0, _sel select 1 + 1, _sel select 2]) distance  (_obj modeltoworld _pos);
			if (_dist < 1 or _dist2 < 1) then 
			{ 
				_lpos = _forEachIndex; 

				if (_lpos isEqualTo 0) then 
				{
					_dir = "ladderDown"
				} else 
				{
					_dir = "ladderUP"
				}; 
				player action [_dir, _obj, _ladder, _lpos];
			}; 

		} foreach _ladderpoints
	} foreach _ladders;
};

_obj call babe_int_fnc_fastuse;