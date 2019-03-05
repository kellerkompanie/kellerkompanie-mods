// Original version by ARK https://github.com/Cyruz143/ark_inhouse
#include "script_component.hpp"

class CfgPatches {
    class ADDON {
      name = COMPONENT_NAME;
      units[] = {};
      weapons[] = {};
      requiredVersion = REQUIRED_VERSION;
      requiredAddons[] = {
          "cba_main",
          "ace_common",
          "ace_grenades"};
      author = ECSTRING(common,Schwaggot);
      authors[] = {"Schwaggot"};
      url = ECSTRING(main,URL);
      VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
