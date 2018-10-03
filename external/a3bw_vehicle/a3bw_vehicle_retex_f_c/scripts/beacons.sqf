
if !(isServer) exitWith {};
[_this, false, [
	"HidePolice", 0, 
	"HideServices", 1, 
	"HideBackpacks", 1, 
	"HideBumper1", 1, 
	"HideBumper2", 1, 
	"HideBumper3", 0, 
	"HideDoor1", 0, 
	"HideDoor2", 0,
	"HideDoor3", 0,
	"HideConstruction", 1
	]] call BIS_fnc_initVehicle;