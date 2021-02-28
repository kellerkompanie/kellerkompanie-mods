class CfgAmmo {
    class FlareCore;
    class FlareBase: FlareCore {
        timeToLive = 60;
        intensity = 20000;    
        flareSize = 12;
    };
    class F_40mm_White: FlareBase {
        intensity = 1250000;
        timeToLive = 60;
        coefGravity = 0.25;
    };
    class F_40mm_Cir: F_40mm_White {
		nvgOnly = 1;
	};
    class F_20mm_White: FlareBase {
        intensity = 20000;
        flareSize = 6;
    };
    class Flare_82mm_AMOS_White: FlareCore {
        timeToLive = 120;
        intensity = 80000;
        coefGravity = 0.25;
        flareSize = 12;
    };
};