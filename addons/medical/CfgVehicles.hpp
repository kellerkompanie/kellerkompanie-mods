class CfgVehicles {
    class WeaponHolder_Single_limited_item_F;
	  class GVAR(painkillersItem): WeaponHolder_Single_limited_item_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Painkillers";
        author = "Katalam";
        vehicleClass = "Magazines";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PainKillers_F.jpg";
        class TransportItems {
			class GVAR(painkillers) {
				name = QGVAR(painkillers);
				count = 1;
			};
        };
	};
};

class Man;
class CAManBase: Man {
	class ACE_SelfActions {
    	#include "ACE_Medical_SelfActions.hpp"
	};

	class ACE_Actions {
	   // Include actions in body parts for treatment while in the open
	   #include "ACE_Medical_Actions.hpp"

	   // Create a consolidates medical menu for treatment while boarded
	   class ACE_MainActions {
		   class Medical {
			   #include "ACE_Medical_Actions.hpp"
		   };
	   };
   };
};
