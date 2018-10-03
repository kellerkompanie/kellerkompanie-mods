class CfgActions {
    // to pistol
    class None;
	class HandGunOn: None {
        show = 0;
	};
    // to rifle
    class HandGunOff: None {
        show = 0;
    };

    // to launcher, (also used for binoculars?)
    class SwitchWeapon: None {
        show = 0;
    };
    class SwitchMagazine: SwitchWeapon {
        show = 0;
    };
    // no idea, probably unused
    class HideWeapon: SwitchWeapon {
        show = 0;
    };


	/*class LoadMagazine: None {
        show = 0;
	};
	class LoadEmptyMagazine: LoadMagazine {
		show = 0;
	};
	class LoadOtherMagazine: LoadMagazine {
		show = 0;
	};*/
};
