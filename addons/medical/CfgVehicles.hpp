class CfgVehicles {
    class ACE_morphineItem;
	class GVAR(painkillersItem): ACE_morphineItem {
        scope = 2;
        scopeCurator = 2;
        displayName = "Painkillers";
        author = "Schwaggot";
        vehicleClass = "Items";
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
