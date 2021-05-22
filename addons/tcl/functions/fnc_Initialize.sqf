#include "script_component.hpp"

if !(is3DEN) then {
	if (GVAR(Enabled) && isNil QGVAR(Preprocess)) then {
		GVAR(Server) = False;	
		GVAR(Database) = False;	
		GVAR(Preprocess) = True;	
		GVAR(Initialize) = False;
		
		if (isServer) then {
			GVAR(Server) = True;
		};
		
		GVAR(Headless) = False;	
		GVAR(Dedicated) = False;	
		GVAR(Multiplayer) = False;
		
		if (isMultiplayer) then	{
			GVAR(Interface) = False;		
			GVAR(Multiplayer) = True;
			
			if (isDedicated) then {
				GVAR(Dedicated) = True;
			};
			
			if (hasInterface) then {
				GVAR(Interface) = True;
			};
			
			if ( (!isDedicated) && (!hasInterface)) then {
				GVAR(Headless) = True;		
				GVAR(Dedicated) = True;
			};
		};
				
		execFSM QPATHTOF(GVAR(Initialize.fsm));
	};
};