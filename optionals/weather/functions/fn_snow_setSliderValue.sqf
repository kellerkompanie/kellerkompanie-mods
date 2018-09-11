_sliderArray = [1900,1901,1902,1903];
_sTextArray = [19000,19001,19002,19003];
_sliderIdc = _sliderArray select sliderNr;
_sTextIdc = _sTextArray select sliderNr;
_sliderPos = sliderposition _sliderIdc;
if(_sliderIdc == 1900) then {
//windDir
sliderValue = [_sliderPos,0] call BIS_fnc_cutDecimals;
sliderUnit = "°";
};
if(_sliderIdc == 1901) then {
//SnowDuration
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
//SnowIntensity
sliderValue = (_sliderPos / 5000) * 100;
sliderValue = [sliderValue,0] call BIS_fnc_cutDecimals;
sliderUnit = "%";
};
ctrlSetText [_sTextIdc, format["%1%2", sliderValue, sliderUnit]];
