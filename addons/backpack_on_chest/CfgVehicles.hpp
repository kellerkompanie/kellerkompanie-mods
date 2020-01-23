class CfgVehicles {
     class Logic;
     class Module_F: Logic {
          class ArgumentsBaseUnits {
               class Units;
          };
          class ModuleDescription {
               class AnyBrain;
          };
     };
     class GVAR(moduleDisable): Module_F {
          scope = 2;
          displayName = CSTRING(moduleDisable_disp);
          icon = QPATHTOF(ui\moduleDisable.paa);
          category = QGVAR(category);
          function = QFUNC(moduleDisable);
          functionPriority = 0;
          isGlobal = 1;
          isTriggerActivated = 0;
          isDisposable = 0;
          is3DEN = 0;
          class Arguments : ArgumentsBaseUnits { };
          class ModuleDescription : ModuleDescription {
               description = CSTRING(moduleDisable_desc);
          };
     };
     class GVAR(moduleAdd): Module_F {
          scope = 2;
          displayName = CSTRING(moduleAdd_disp);
          icon = QPATHTOF(ui\moduleAdd.paa);
          category = QGVAR(category);
          function = QFUNC(moduleAdd);
          functionPriority = 0;
          isGlobal = 0;
          isTriggerActivated = 1;
          isDisposable = 0;
          is3DEN = 0;
          class Arguments: ArgumentsBaseUnits {
               class Units: Units {};
               class classname {
                    displayName = "Chestpack classname"; // Argument label
                    description = "Classname of the disered chestpack"; // Tooltip description
                    typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
                    defaultValue = "B_Carryall_cbr";
               };
               class items {
                    displayName = "Chestpack items";
                    description = "Items (includes mags, weapons, ...) which should be contained in the chestpack. Items sperated by a ','. Item can either be just a classname (for a single) or an array [classname,amount].";
                    typeName = "STRING";
                    defaultValue = "[""FirstAidKit"",3], ""hgun_P07_F"", [""16Rnd_9x21_Mag"",2]";
               };
               class mags {
                    displayName = "Chestpack magazines";
                    description = "Just for adding partially loaded mags. Mags seperated by a ','. Syntax of single mag.: [magazine, ammo count]";
                    typeName = "STRING";
                    defaultValue = "[""30Rnd_65x39_caseless_mag"",20], [""30Rnd_65x39_caseless_mag_Tracer"",10]";
               };
               class code {
                    displayName = "Additional code";
                    description = "Any addition code to modify the chestpack. '_this' referes to the chestpack itself."; // Argument label
                    typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
                    defaultValue = "_this setObjectTextureGlobal [0, ""#(rgb,8,8,3)color(0,0,1,1)""];";
               };
          };
          class ModuleDescription: ModuleDescription {
              sync[]={"AnyPerson1","AnyPerson2"};
              description = CSTRING(moduleAdd_desc);
              class AnyPerson1 {
                  description = "Short description";
                  displayName = "Any BLUFOR unit"; // Custom name
                  icon = "iconMan"; // Custom icon (can be file path or CfgVehicleIcons entry)
                  side = 1; // Custom side (will determine icon color)
              };
              class AnyPerson2 : AnyPerson1 {};
          };
     };
     class GVAR(moduleOnChest): Module_F {
          scope = 2;
          displayName = CSTRING(moduleOnChest_disp);
          icon = QPATHTOF(ui\moduleOnChest.paa);
          category = QGVAR(category);
          function = QFUNC(moduleOnChest);
          functionPriority = 0;
          isGlobal = 0;
          isTriggerActivated = 1;
          isDisposable = 0;
          is3DEN = 0;
          class Arguments: ArgumentsBaseUnits {
               class Units: Units {};
               class classname {
                    displayName = "Backpack classname"; // Argument label
                    description = "Classname of the backpack which should be added after putting the backpack on chest."; // Tooltip description
                    typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
                    defaultValue = "B_Parachute";
               };
               class delay {
                    displayName = "Delay"; // Argument label
                    description = ""; // Tooltip description
                    typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
                    defaultValue = 0;
               };
          };
          class ModuleDescription: ModuleDescription {
               sync[]={"AnyPerson1","AnyPerson2"};
               description = CSTRING(moduleOnChest_desc);
               class AnyPerson1
               {
                    description = "Short description";
                    displayName = "Any BLUFOR unit"; // Custom name
                    icon = "iconMan"; // Custom icon (can be file path or CfgVehicleIcons entry)
                    side = 1; // Custom side (will determine icon color)
               };
               class AnyPerson2 : AnyPerson1 {};
          };
     };

     class Man;
     class CAManBase: Man {
          class ACE_SelfActions {
               class ACE_Equipment {
                   class GVAR(onChest) {
                        displayName = CSTRING(OnChest);
                        condition = QUOTE(!(missionNamespace getVariable [ARR_2(QQGVAR(disabled), false)]) && !(backpack _player isEqualTo '') && ([_player] call FUNC(chestpack) isEqualTo ''));
                        exceptions[] = {"isNotInside"};
                        statement = QUOTE([_player] call FUNC(actionOnChest));
                        showDisabled = 0;
                        priority = 2.5;
                        icon = QPATHTOF(ui\onchest_ca.paa);
                   };
                   class GVAR(onBack): GVAR(onChest) {
                        displayName = CSTRING(OnBack);
                        condition = QUOTE(!(missionNamespace getVariable [ARR_2(QQGVAR(disabled), false)]) && (backpack _player isEqualTo '') && !([_player] call FUNC(chestpack) isEqualTo ''));
                        statement = QUOTE([_player] call FUNC(actionOnBack));
                        icon = QPATHTOF(ui\onback_ca.paa);
                   };
                   class GVAR(swap): GVAR(onChest) {
                        displayName = CSTRING(swap);
                        condition = QUOTE(!(missionNamespace getVariable [ARR_2(QQGVAR(disabled), false)]) && !(backpack _player isEqualTo '') && !([_player] call FUNC(chestpack) isEqualTo ''));
                        statement = QUOTE([_player] call FUNC(actionSwap));
                        icon = QPATHTOF(ui\swap_ca.paa);
                   };
               };
          };
     };
};
