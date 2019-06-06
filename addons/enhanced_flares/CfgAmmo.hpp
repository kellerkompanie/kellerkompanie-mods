class CfgAmmo {
    class FlareCore;
    class FlareBase: FlareCore {
        intensity = 250000;
        flareSize = 12;
        timeToLive = 180;
    };

    class F_20mm_White: FlareBase {
        intensity = 800000;
        brightness = 1000000;
        useFlare = 1;
        timeToLive = 500;
        coefGravity = 0.5;
    };

    class F_40mm_White: FlareBase {
        intensity = 1500000; // vanilla: 10000
        timeToLive = 600; // vanilla: 25
        coefGravity = 0.5; // vanilla: undefined (would be 1)
        useFlare = 1;
    };

    class Flare_82mm_AMOS_White: FlareCore {
        intensity = 1500000; // vanilla: 10000
        timeToLive = 360;
        flareSize = 20;
        coefGravity = 0.3;
    };
};
