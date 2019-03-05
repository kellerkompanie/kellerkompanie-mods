class CfgSounds {
    sounds[] = {QGVAR(drink)};
    class GVAR(drink) {
        name = QGVAR(drink);
        sound[] = {QPATHTOF(sounds\canteen_drink.ogg), 2, 1, 15};
        titles[] = {};
    };
    class GVAR(pouring) {
        name = QGVAR(pouring);
        sound[] = {QPATHTOF(sounds\pouring_water.ogg), 2, 1, 15};
        titles[] = {};
    };
};
