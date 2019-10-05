#include "script_component.hpp"

//mission variables and parameters:
disableSerialization;

//dialog
private _display = _this select 0;
private _ctrlText = _display displayCtrl 1006;
private _ctrlTextCash = _display displayCtrl 1400;
private _ctrlTextBank = _display displayCtrl 1401;

private _player = profileNamespace getVariable QEGVAR(persistency,editMoneyPlayer);
private _moneyCash = _player getVariable [QEGVAR(persistency,cash), EGVAR(persistency,defaultMoney)];
private _moneyBank = _player getVariable [QEGVAR(persistency,bank), EGVAR(persistency,defaultMoneyBank)];

_ctrlText ctrlSetText format["%1", _player];
_ctrlTextCash ctrlSetText format["%1", _moneyCash];
_ctrlTextBank ctrlSetText format["%1", _moneyBank];

true
