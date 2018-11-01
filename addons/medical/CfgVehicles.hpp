#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
};

class CfgVehicles {
  	class Item_Base_F;
    class ACE_painKillerItem: ACE_morphineItem {
        scope = 2;
        scopeCurator = 2;
        displayName = "Painkiller";
        author = "Schwaggot";
        vehicleClass = "Items";
		    //editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PainKillers_F.jpg";
        class TransportItems {
              MACRO_ADDITEM(ACE_painKiller,1);
        };
    };

  class NATO_Box_Base;
  class ACE_medicalSupplyCrate: NATO_Box_Base {
    class TransportItems;
  };
  class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate {
    class TransportItems: TransportItems {
      MACRO_ADDITEM(ACE_painKiller,20);
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
};
