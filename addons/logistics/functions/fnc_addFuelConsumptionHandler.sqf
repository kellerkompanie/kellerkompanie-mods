#include "script_component.hpp"

if (isServer and isDedicated) exitWith {};
waitUntil {!isNull player && player == player};

if(isNil QGVAR(enableFuelConsumption)) exitWith{true};

if(!GVAR(enableFuelConsumption)) exitWith{true};

if (isNil QGVAR(fuelUptake)) then {
   GVAR(fuelUptake) = [] spawn {
      while {alive player} do   {
         waitUntil {
            sleep 1;
            alive player
         };
         while {alive player} do {
            waitUntil {vehicle player != player && player == driver vehicle player };
            private _vh = vehicle player;
            while {vehicle player != player && player == driver (vehicle player) && alive player} do {
               waitUntil {isEngineOn _vh};
               while {isEngineOn _vh && alive player} do {
                  if !(driver _vh == player || alive player || alive _vh) exitWith {};

                  private _maxSpeedThreshold = (getNumber (configFile >> "CfgVehicles" >> typeOf _vh >> "maxSpeed") * 0.8);
                  private _speed = speed _vh;
                  private _fuel = fuel _vh;

                  if (_vh isKindOf "Car") Then {
                     if(_speed <= 5) then {
                        _vh setFuel (_fuel - GVAR(consumptionCarLow) / 100);
                     } else {
                        if(_speed < _maxSpeedThreshold) then {
                           _vh setFuel (_fuel - GVAR(consumptionCarMid) / 100);
                        } else {
                           _vh setFuel (_fuel - GVAR(consumptionCarHigh) / 100);
                        };
                     };
                     sleep .20;
                  };

                  if (_vh isKindOf "Truck") Then {
                     if(_speed <= 5) then {
                        _vh setFuel (_fuel - GVAR(consumptionTruckLow) / 100);
                     } else {
                        if(_speed < _maxSpeedThreshold) then {
                           _vh setFuel (_fuel - GVAR(consumptionTruckMid) / 100);
                        } else {
                           _vh setFuel (_fuel - GVAR(consumptionTruckHigh) / 100);
                        };
                     };
                     sleep .20;
                  };

                  if (_vh isKindOf "Tank") Then {
                     if(_speed <= 5) then {
                        _vh setFuel (_fuel - GVAR(consumptionTankLow) / 100);
                     } else {
                        if(_speed < _maxSpeedThreshold) then {
                           _vh setFuel (_fuel - GVAR(consumptionTankMid) / 100);
                        } else {
                           _vh setFuel (_fuel - GVAR(consumptionTankHigh) / 100);
                        };
                     };
                     sleep .20;
                  };

                  if (_vh isKindOf "Helicopter") Then {
                     // TODO include weight based on weightRTD
                     // TODO calculate based on throttle

                     if(_speed <= 5) then {
                        _vh setFuel (_fuel - GVAR(consumptionHeloLow) / 100);
                     } else {
                        if(_speed < _maxSpeedThreshold) then {
                           _vh setFuel (_fuel - GVAR(consumptionHeloMid) / 100);
                        } else {
                           _vh setFuel (_fuel - GVAR(consumptionHeloHigh) / 100);
                        };
                     };
                     sleep .20;
                  };

                  if (_vh isKindOf "Plane") Then {
                     // TODO include height calculation

                     private _throttle = airplaneThrottle _vh;

                     if(_throttle < 0.25) then {
                        _vh setFuel (_fuel - GVAR(consumptionPlaneLow) / 100);
                     } else {
                        if(_throttle < 0.75) then {
                           _vh setFuel (_fuel - GVAR(consumptionPlaneMid) / 100);
                        } else {
                           _vh setFuel (_fuel - GVAR(consumptionPlaneHigh) / 100);
                        };
                     };
                     sleep .20;
                  };

                  if !(driver _vh == player || alive player || alive _vh || isEngineOn _vh) exitWith {};
                  sleep 1;
               };
               sleep .5;
            };
            sleep 1;
            /*terminate keko_logistics_handler_fuelUptake; */
         };
      };
      /*terminate keko_logistics_handler_fuelUptake; */
   };
};
