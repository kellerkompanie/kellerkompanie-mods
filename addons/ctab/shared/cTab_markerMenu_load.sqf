// cTab - Commander's Tablet with FBCB2 Blue Force Tracking
// Battlefield tablet to access real time intel and blue force tracker.
// By - Riouken
// http://forums.bistudio.com/member.php?64032-Riouken
// You may re-use any of this work as long as you provide credit back to me.
#include "script_component.hpp"

disableSerialization;

#include "\x\keko\addons\ctab\shared\cTab_gui_macros.hpp"

cTabUserSelIcon = [[],0,0,0,""];

_mainPop = _this select 0;
_sendingCtrlArry = _this select 1;
_cntrlScreen = _sendingCtrlArry select 0;

_xpos = _sendingCtrlArry select 2;
_ypos = _sendingCtrlArry select 3;

cTabUserPos = [_xpos,_ypos];

_tempWorldPos = _cntrlScreen posScreenToWorld [_xpos,_ypos];
cTabUserSelIcon set [0,[_tempWorldPos select 0,_tempWorldPos select 1]];

_time = call FUNC(currentTime);
cTabUserSelIcon set [4,_time];

[_mainPop] call FUNC(userMenuSelect);
