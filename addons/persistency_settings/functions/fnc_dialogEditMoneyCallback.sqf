#include "script_component.hpp"

private _textCash = ctrlText ((uiNamespace getVariable QGVAR(editMoneyDialog)) displayCtrl 1400);
private _textBank = ctrlText ((uiNamespace getVariable QGVAR(editMoneyDialog)) displayCtrl 1401);

private _cash = parseNumber _textCash;
private _bank = parseNumber _textBank;

private _player = profileNamespace getVariable QEGVAR(persistency,editMoneyPlayer);
_player setVariable [QEGVAR(persistency,cash), _cash, true];
_player setVariable [QEGVAR(persistency,bank), _bank, true];

closeDialog 1;
