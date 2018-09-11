params ["_unit", "_veh", "_seattype", "_inside", "_tur"];

if (locked _veh > 1) exitwith {};

switch _seattype do
{
	case "driver":
	{
		if (_inside) then
		{
			moveout _unit;
			[[_unit, _veh],
			{
				params ["_unit", "_veh"];

				_unit moveInDriver _veh;
			}] remoteExec ["call", 0, false];
		} else
		{
			_unit action ["GetInDriver", _veh];
		};
	};
	case "turret":
	{
		if (_inside) then
		{
			moveout _unit;
			[[_unit, [_veh, _tur]],
			{
				params ["_unit", "_stuff"];

				_unit MoveinTurret _stuff;
			}] remoteExec ["call", 0, false];
		} else
		{
			_unit action ["GetInTurret", _veh, _tur];
		};
	};
	case "cargo":
	{
		_cargoseats = [];

		_trans = getnumber(configfile >> "CfgVehicles" >> typeof _veh >> "transportsoldier");

		for "_i" from 0 to _trans-1 do
		{
			_cargoseats pushback _i;
		};

		{
			_cargoseats deleteAt (_cargoseats find (_x select 2));
		} foreach (fullCrew [_veh, "cargo", false]);

		
		if (count _cargoseats > 0) then
		{
			_seat = selectRandom _cargoseats;
			
			if (_inside) then
			{
				moveout _unit;
				
				[[_unit, [_veh, _seat]],
				{
					params ["_unit", "_stuff"];

					_unit MoveinCargo _stuff;
				}] remoteExec ["call", 0, false];
			} else
			{
				_unit action ["GetInCargo", _veh, _seat];
			};
		};
	};
};




