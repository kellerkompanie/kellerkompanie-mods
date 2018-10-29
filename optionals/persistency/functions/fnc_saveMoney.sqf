#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;
if !(GVAR(moneyEnabled)) exitWith {WARNING("saveMoney: persistency for money is disabled, exiting!"); false};

params ["_playerUnit"];

private _playerUID = getPlayerUID _playerUnit;
private _playerName = name _playerUnit;

private _money = _playerUnit getVariable [QGVAR(cash), GVAR(defaultMoney)];
private _bank = _playerUnit getVariable [QGVAR(bank), GVAR(defaultMoneyBank)];

"extDB3" callExtension format [ "1:keko_persistency:setMoney:%1:%2:%3:%4:%5",
	GVAR(key),
	_playerUID,
	_playerName,
	_money,
	_bank];

INFO_3("saving money of player", _playerName, _money, _bank);
