// Original version by ARK https://github.com/Cyruz143/ark_inhouse
#include "script_component.hpp"

class CfgPatches {
    class ADDON {
      name = COMPONENT_NAME;
      units[] = {};
      weapons[] = {};
      requiredVersion = REQUIRED_VERSION;
      requiredAddons[] = {"cba_main","ace_common","ace_grenades"};
      author = ECSTRING(common,KEKOTeam);
      authors[] = {"Schwaggot"};
      url = ECSTRING(main,URL);
      VERSION_CONFIG;       
    };
};

class CfgAmmo {
    class FlareCore;
    class FlareBase: FlareCore {};

    class F_40mm_White: FlareBase {
        intensity = 1000000; // vanilla: 10000
        timeToLive = 40; // vanilla: 25
        coefGravity = 0.25; // vanilla: undefined (would be 1)
        // Makes the ammo fall the ground slower
    };

    class Flare_82mm_AMOS_White: FlareCore {
        intensity = 1500000; // vanilla: 10000
    };
};
