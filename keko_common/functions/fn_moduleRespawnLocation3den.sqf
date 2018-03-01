_logic     = _this select 0;

if(isServer) then {
	createMarker ["respawn", getPos _logic];
	deletevehicle _logic;
};