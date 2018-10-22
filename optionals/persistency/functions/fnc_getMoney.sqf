#include "script_component.hpp"

if !(EGVAR(persistency_settings,enabled)) exitWith{WARNING("getMoney: persistency disabled, exiting!"); false};
if (EGVAR(persistency_settings,key) == "") exitWith{WARNING("getMoney: persistency key not set, exiting!"); false};
if !(EGVAR(persistency_settings,moneyEnabled)) exitWith{WARNING("getMoney: persistency for money is disabled, exiting!"); false};

params ["_playerUnit"];

private _playerUID = getPlayerUID _playerUnit;
private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getMoney:%1:%2", EGVAR(persistency_settings,key), _playerUID]);

if ((_ret select 0) == 1) then {
	TRACE_1("getMoney: loading sucessful %1", _ret);

	private _retArray = (_ret select 1) select 0;

	private _money = EGVAR(persistency_settings,defaultMoney);
	private _bank = EGVAR(persistency_settings,defaultMoneyBank);

	if(count _retArray > 0) then {
		// assume loading was sucess
		_money = _retArray select 0;
		_bank = _retArray select 1;

		TRACE_2("getMoney: loaded from DB _money=%1 _bank=%2", _money, _bank);
	} else {
		TRACE_2("getMoney: no DB entry, returning default values _money=%1 _bank=%2", _money, _bank);
	};

	if(typeName _money == "STRING") then {
		_money = parseNumber _money;
	};
	if(typeName _bank == "STRING") then {
		_bank = parseNumber _bank;
	};

	[_money, _bank]

} else {
	TRACE_1("getMoney: loading unsucessful %1", _ret);
	[-1, -1]
};
