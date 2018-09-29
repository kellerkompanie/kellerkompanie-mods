#include "script_component.hpp"

if !(EGVAR(persistency_settings,enabled)) exitWith {WARNING("setMoney: persistency disabled, exiting!"); false};
if(EGVAR(persistency_settings,key) == "") exitWith {WARNING("setMoney: persistency key not set, exiting!"); false};
if !(EGVAR(persistency_settings,moneyEnabled)) exitWith {WARNING("setMoney: persistency for money is disabled, exiting!"); false};

params ["_playerUnit", "_money", "_bank"];

private _playerUID = getPlayerUID _playerUnit;
private _playerName = name _playerUnit;

if(typeName _money == "STRING") then {
	_money = parseNumber _money;
};
if(typeName _bank == "STRING") then {
	_bank = parseNumber _bank;
};

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:setMoney:%1:%2:%3:%4:%5",
	EGVAR(persistency_settings,key),
	_playerUID,
	_playerName,
	_money,
	_bank]);

TRACE_1("setting money returned", _ret);

TRACE_3("setting money of player", _playerName, _money, _bank);
