#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;
if !(GVAR(moneyEnabled)) exitWith{WARNING("loadMoney: persistency for money is disabled, exiting!"); false};

params ["_playerUnit"];

private _playerUID = getPlayerUID _playerUnit;
private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getMoney:%1:%2", GVAR(key), _playerUID]);

if ((_ret select 0) == 1) then {
	TRACE_1("loadMoney: loading sucessful %1", _ret);

	private _retArray = (_ret select 1) select 0;

	private _money = GVAR(defaultMoney);
	private _bank = GVAR(defaultMoneyBank);

	if(count _retArray > 0) then {
		// assume loading was sucess
		_money = _retArray select 0;
		_bank = _retArray select 1;

		TRACE_2("loadMoney: loaded from DB _money=%1 _bank=%2", _money, _bank);
	} else {
		TRACE_2("loadMoney: no DB entry, returning default values _money=%1 _bank=%2", _money, _bank);
	};

	if(typeName _money == "STRING") then {
		_money = parseNumber _money;
	};
	if(typeName _bank == "STRING") then {
		_bank = parseNumber _bank;
	};

	_playerUnit setVariable [QGVAR(cash), _money, true];
	_playerUnit setVariable [QGVAR(bank), _bank, true];

	[_money, _bank]

} else {
	TRACE_1("loadMoney: loading unsucessful %1", _ret);
	[-1, -1]
};
