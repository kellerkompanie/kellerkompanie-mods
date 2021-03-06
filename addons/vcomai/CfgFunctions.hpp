class CfgFunctions {
	class keko_vcomai {
		tag = "keko_vcomai";		
		class FSM {
			file = "x\keko\addons\vcomai\fsms";
			
			// group spawn keko_vcomai_fnc_squadBEH
			class squadBEH {
				ext = ".fsm";
			};
			
			// [] spawn keko_vcomai_fnc_aiDriveBehavior
			class aiDriveBehavior {
				ext = ".fsm";
			};		
			
			// [] spawn keko_vcomai_fnc_playerSquad
			class playerSquad {
				ext = ".fsm";
			};			
		};
	};
};