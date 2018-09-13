#include "script_component.hpp"

if (isNil GVAR(AutoBrightness_Enabled)) then {GVAR(AutoBrightness_Enabled) = true;};

GVAR(AutoBrightness_MaxDark) = 0.7;

// Compat for ACE3's map features
_aceMap = isClass (configfile >> 'CfgPatches' >> 'ACE_Map');

if (!GVAR(AutoBrightness_enabled)) exitWith {};
if (_aceMap) exitWith {};

params ["_control"];

// Find the edges of the screen in world space
private _topleft = _control ctrlMapScreenToWorld [safeZoneX, safeZoneY];
private _bottomright = _control ctrlMapScreenToWorld [safeZoneX + safeZoneW, safeZoneY + safeZoneH];

// Now figure out how to make the marker cover everything
private _pos = _control ctrlMapScreenToWorld [0.5, 0.5];
private _width  = 0.5 * ((_bottomright select 0) - (_topleft select 0));
private _height = 0.5 * ((_topleft select 1)     - (_bottomright select 1));

private _alpha = GVAR(AutoBrightness_MaxDark) min abs(sunOrMoon - 1);

_control drawRectangle [
    _pos,
    _width,
    _height,
    0,
    [0, 0, 0, _alpha],
    "#(rgb,1,1,1)color(0,0,0,1)" // solid black
];
