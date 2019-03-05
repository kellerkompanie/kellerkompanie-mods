#include "script_component.hpp"

private _sliderArray = [1900,1901,1902,1903,1904];
private _sTextArray = [19000,19001,19002,19003,19004];
private _sliderIdc = _sliderArray select sliderNr;
private _sTextIdc = _sTextArray select sliderNr;
private _sliderPos = sliderposition _sliderIdc;
if(_sliderIdc == 1900) then {
    //windDir
    sliderValue = [_sliderPos,0] call BIS_fnc_cutDecimals;
    sliderUnit = "°";
};
if(_sliderIdc == 1901) then {
    //DustDuration
    sliderValue = _sliderPos / 60;
    sliderValue = [sliderValue,0] call BIS_fnc_cutDecimals;
    sliderUnit = " min";
};
if(_sliderIdc == 1902) then {
    //AmbientSoundDelay
    sliderValue = _sliderPos / 60 + 1;
    sliderValue = [sliderValue,1] call BIS_fnc_cutDecimals;
    sliderUnit = " min";
};
if(_sliderIdc == 1903) then {
    //BushIntensity
    sliderValue = (_sliderPos / 20) * 100;
    sliderValue = [sliderValue,0] call BIS_fnc_cutDecimals;
    sliderUnit = "%";
};
if(_sliderIdc == 1904) then {
    //DustIntensity
    sliderValue = (_sliderPos / 200) * 100;
    sliderValue = [sliderValue,0] call BIS_fnc_cutDecimals;
    sliderUnit = "%";
};
ctrlSetText [_sTextIdc, format["%1%2", sliderValue, sliderUnit]];

//onSliderPosChanged = "sliderNr = 0; [] spawn TFSC_fnc_setSliderValue; false";
