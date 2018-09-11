if (isServer and isDedicated) exitWith {};
waitUntil {!isNull player && player == player};

if(isNil "keko_var_logistics_enableFuelConsumption") exitWith{diag_log text "[KEKO] (logistics) isNil keko_var_logistics_enableFuelConsumption"; true};

if(!keko_var_logistics_enableFuelConsumption) exitWith{diag_log text "[KEKO] (logistics) fuelConsumption disabled"; true};
diag_log text "[KEKO] (logistics) fuelConsumption enabled";

if (isNil "keko_logistics_handler_fuelUptake") then {
   diag_log text "[KEKO] (logistics) fuelConsumption no handler found creating new";

   keko_logistics_handler_fuelUptake = [] spawn {

      // initialize variables if not set already
      if (isNil "keko_var_logistics_fuelConsumption_car") then {
         keko_var_logistics_fuelConsumption_car = [0.0002, 0.0004, 0.0006];
      };

      if (isNil "keko_var_logistics_fuelConsumption_truck") then {
         keko_var_logistics_fuelConsumption_truck = [0.0002, 0.0004, 0.0006];
      };

      if (isNil "keko_var_logistics_fuelConsumption_tank") then {
         keko_var_logistics_fuelConsumption_tank = [0.0002, 0.0004, 0.0006];
      };

      if (isNil "keko_var_logistics_fuelConsumption_helo") then {
         keko_var_logistics_fuelConsumption_helo = [0.0005, 0.0005, 0.0005];
      };

      if (isNil "keko_var_logistics_fuelConsumption_plane") then {
         keko_var_logistics_fuelConsumption_plane = [0.0002, 0.0005, 0.0009];
      };

      while {alive player} do   {
         diag_log text format ["[KEKO] (logistics) fuelConsumption THREAD STARTED @ %1", diag_tickTime];
         waitUntil {
            sleep 1;
            alive player
         };
         while {alive player} do {
            waitUntil {vehicle player != player && player == driver vehicle player };
            _vh = vehicle player;
            while {vehicle player != player && player == driver (vehicle player) && alive player} do {
               waitUntil {isEngineOn _vh};
               diag_log text "[KEKO] (logistics) isEngineOn vehicle player == TRUE";
               while {isEngineOn _vh && alive player} do {
                  if !(driver _vh == player || alive player || alive _vh) exitWith {};

                  _maxSpeedThreshold = (getNumber (configFile >> "CfgVehicles" >> typeOf _vh >> "maxSpeed") * 0.8);
                  _speed = speed _vh;
                  _fuel = fuel _vh;

                  if (_vh isKindOf "Car") Then {
                     if(_speed <= 5) then {
                        _vh setFuel (_fuel - (keko_var_logistics_fuelConsumption_car select 0));
                     } else {
                        if(_speed < _maxSpeedThreshold) then {
                           _vh setFuel (_fuel - (keko_var_logistics_fuelConsumption_car select 1));
                        } else {
                           _vh setFuel (_fuel - (keko_var_logistics_fuelConsumption_car select 2));
                        };
                     };
                     sleep .20;
                  };

                  if (_vh isKindOf "Truck") Then {
                     if(_speed <= 5) then {
                        _vh setFuel (_fuel - (keko_var_logistics_fuelConsumption_truck select 0));
                     } else {
                        if(_speed < _maxSpeedThreshold) then {
                           _vh setFuel (_fuel - (keko_var_logistics_fuelConsumption_truck select 1));
                        } else {
                           _vh setFuel (_fuel - (keko_var_logistics_fuelConsumption_truck select 2));
                        };
                     };
                     sleep .20;
                  };
                  
                  if (_vh isKindOf "Tank") Then {
                     if(_speed <= 5) then {
                        _vh setFuel (_fuel - (keko_var_logistics_fuelConsumption_tank select 0));
                     } else {
                        if(_speed < _maxSpeedThreshold) then {
                           _vh setFuel (_fuel - (keko_var_logistics_fuelConsumption_tank select 1));
                        } else {
                           _vh setFuel (_fuel - (keko_var_logistics_fuelConsumption_tank select 2));
                        };
                     };
                     sleep .20;
                  };
                  
                  if (_vh isKindOf "Helicopter") Then {
                     // TODO include weight based on weightRTD
                     // TODO calculate based on throttle

                     if(_speed <= 5) then {
                        _vh setFuel (_fuel - (keko_var_logistics_fuelConsumption_helo select 0));
                     } else {
                        if(_speed < _maxSpeedThreshold) then {
                           _vh setFuel (_fuel - (keko_var_logistics_fuelConsumption_helo select 1));
                        } else {
                           _vh setFuel (_fuel - (keko_var_logistics_fuelConsumption_helo select 2));
                        };
                     };
                     sleep .20;
                  };

                  if (_vh isKindOf "Plane") Then {
                     // TODO include height calculation

                     _throttle = airplaneThrottle _vh;

                     if(_throttle < 0.25) then {
                        _vh setFuel (_fuel - (keko_var_logistics_fuelConsumption_plane select 0));
                     } else {
                        if(_throttle < 0.75) then {
                           _vh setFuel (_fuel - (keko_var_logistics_fuelConsumption_plane select 1));
                        } else {
                           _vh setFuel (_fuel - (keko_var_logistics_fuelConsumption_plane select 2));
                        };
                     };
                     sleep .20;
                  };

                  if !(driver _vh == player || alive player || alive _vh || isEngineOn _vh) exitWith {};
                  sleep 1;
               };
               diag_log text "[KEKO] (logistics) isEngineOn vehicle player == FALSE || driver vehicle player == player || isEngineOn vehicle player";
               sleep .5;
            };
            sleep 1;
            diag_log text "[KEKO] (logistics) vehicle player != player || player == driver (vehicle player) || alive player";
            /*terminate keko_logistics_handler_fuelUptake; */
         };
         diag_log text "[KEKO] (logistics) fuelConsumption TERMINATED";
      };
      diag_log text format ["[KEKO] (logistics) fuelConsumption THREAD EXITED @ %1", diag_tickTime];
      /*terminate keko_logistics_handler_fuelUptake; */
   };
} else {
   diag_log text format ["[KEKO] (logistics) fuelConsumption THREAD ALREADY EXISTS @ %1", diag_tickTime];
};