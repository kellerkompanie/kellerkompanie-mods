class CfgSounds {
    sounds[] = {QGVAR(vending_machine_soda),QGVAR(vending_machine)};
    class GVAR(vending_machine_soda) {
        name = QGVAR(vending_machine_soda);
        sound[] = {QPATHTOF(sounds\vending_machine_soda.wav), 4, 1, 15};
        titles[] = {};
    };
    class GVAR(vending_machine) {
        name = QGVAR(vending_machine);
        sound[] = {QPATHTOF(sounds\vending_machine.wav), 4, 1, 15};
        titles[] = {};
    };
    class GVAR(spongebob) {
        name = QGVAR(spongebob);
        sound[] = {QPATHTOF(sounds\spongebob.ogg), 4, 1, 15};
        titles[] = {};
    };
};
