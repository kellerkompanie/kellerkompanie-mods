scriptName "fn_downloadData";

/*
	Code written by Haz
*/

#define __FILENAME "fn_downloadData.sqf"

if (isDedicated || !hasInterface) exitWith {};

disableSerialization;

_object = dataTerminal;

_getSignal =
{
	_signal = switch (true) do
	{
		case (player distance2d getPosATL _object <= 5) :
		{
			"a3\Ui_f\data\IGUI\RscTitles\RscHvtPhase\JAC_A3_Signal_4_ca.paa"
		};
		case (player distance2d getPosATL _object > 5 && player distance2d getPosATL _object <= 10) :
		{
			"a3\Ui_f\data\IGUI\RscTitles\RscHvtPhase\JAC_A3_Signal_3_ca.paa"
		};
		case (player distance2d getPosATL _object > 10 && player distance2d getPosATL _object <= 15) :
		{
			"a3\Ui_f\data\IGUI\RscTitles\RscHvtPhase\JAC_A3_Signal_2_ca.paa"
		};
		case (player distance2d getPosATL _object > 15 && player distance2d getPosATL _object <= 20) :
		{
			"a3\Ui_f\data\IGUI\RscTitles\RscHvtPhase\JAC_A3_Signal_1_ca.paa"
		};
		case (player distance2d getPosATL _object > 20) :
		{
			""
		};
	};
	_signal
};

_display = uiNamespace getVariable "disp_downloadingData";

(_display displayCtrl 200) ctrlSetText "DOWNLOADING DATA...";

_downloaded = 0;
_increment = 1;

while {_downloaded < 100 && "layer_rsc_downloadingData" in allCutLayers} do
{
	_downloaded = _downloaded + _increment;
	(_display displayCtrl 300) ctrlSetText format ["%1", {alive _x && _x distance2d getPosATL _object <= 20} count allUnits];
	(_display displayCtrl 400) progressSetPosition (_downloaded / 100);
	(_display displayCtrl 500) ctrlSetText format ["%1%2 / 100%2", _downloaded, "%"];
	(_display displayCtrl 700) ctrlSetText format ["%1", call _getSignal];
	if (player distance2d getPosATL _object > 20) exitWith
	{
		("layer_rsc_downloadingData" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
	};
  sleep 1;
	// hintSilent "still running";
};

("layer_rsc_downloadingData" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
// hintSilent "not running";