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

	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class Medical {
				class ACE_Head {
					class GVAR(Painkillers) {
						displayName = "Use Painkillers";
						condition = "'keko_medical_Painkillers' in (magazines _player)";
						exceptions[] = {"isNotInside", "isNotSitting"};
						statement = "['keko_medical_Painkillers', _player, _target, 'head', 'Painkillers'] call keko_medical_fnc_painkillersAction";
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_painkillers_action.paa);
					};
				};
			};
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
