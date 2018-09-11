// Original version by ARK https://github.com/Cyruz143/ark_inhouse

class CfgPatches {
    class keko_enhanced_flares {
      units[] = {};
      requiredVersion = 1.80;
      author = "Schwaggot";
      authorUrl = "http://kellerkompanie.com";
      version = 1.0;
      weapons[] = {};
      requiredAddons[] = {"cba_main","ace_common","ace_grenades"};
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
