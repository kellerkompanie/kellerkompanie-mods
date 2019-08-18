class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class InventoryItem_Base_F;

    class GVAR(air_thermo) : ACE_ItemCore {
        displayName = "Luft Thermometer";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 10;
        };
        picture = QPATHTOF(ui\air_thermo.paa);
        descriptionShort = "Ein Thermometer zur Messung der Luftemperatur. Vorsicht, ist teuer.";
    };

    class GVAR(biohazard_bag) : ACE_ItemCore {
        displayName = "Kühltasche";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 20;
        };
        picture = QPATHTOF(ui\biohazard_bag.paa);
        descriptionShort = "Eine Kühltasche um darin biologische Proben zu verwahren.";
    };

    class GVAR(can_empty) : ACE_ItemCore {
        displayName = "Probendose (leer)";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 5;
        };
        picture = QPATHTOF(ui\can_empty.paa);
        descriptionShort = "Eine leere Dose für Bodenproben.";
    };

    class GVAR(can_full) : ACE_ItemCore {
        displayName = "Probendose (voll)";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 5;
        };
        picture = QPATHTOF(ui\can_full.paa);
        descriptionShort = "Eine versiegelte Bodenprobe.";
    };

    class GVAR(drill) : ACE_ItemCore {
        displayName = "Bodenprobenbohrer";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 20;
        };
        picture = QPATHTOF(ui\drill.paa);
        descriptionShort = "Ein Bohrer zur Entnahme von Bodenproben.";
    };

    class GVAR(gloves) : ACE_ItemCore {
        displayName = "Gummihandschuhe";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        picture = QPATHTOF(ui\gloves.paa);
        descriptionShort = "Gummihandschuhe um Proben nicht zu kontaminieren. Frei von LaTeX.";
    };

    class GVAR(ice_thermo) : ACE_ItemCore {
        displayName = "Bodenthermometer";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 10;
        };
        picture = QPATHTOF(ui\ice_thermo.paa);
        descriptionShort = "Thermometer zur Messung der Bodentemperatur. Vorsicht, teuer!";
    };

    class GVAR(petridish_empty) : ACE_ItemCore {
        displayName = "Petrischale (leer)";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 5;
        };
        picture = QPATHTOF(ui\petridish_empty.paa);
        descriptionShort = "Eine Petrischale mit Nährlösung zur Entnahme von Proben.";
    };

    class GVAR(petridish_full) : ACE_ItemCore {
        displayName = "Petrischale (voll)";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 5;
        };
        picture = QPATHTOF(ui\petridish_full.paa);
        descriptionShort = "Eine Petrischale mit Nährlösung zur Entnahme von Proben. Enthält bereits eine Probe, nicht öffnen!";
    };

    class GVAR(sample_bag) : ACE_ItemCore {
        displayName = "Probentasche";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 20;
        };
        picture = QPATHTOF(ui\sample_bag.paa);
        descriptionShort = "Eine Tasche zur sicheren Verwahrung von Bodenproben.";
    };

    class GVAR(sample_tube_empty) : ACE_ItemCore {
        displayName = "Probenröhrchen (leer)";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 5;
        };
        picture = QPATHTOF(ui\sample_tube_empty.paa);
        descriptionShort = "Ein leeres Probenröhrchen zur Entnahme biologischer Proben.";
    };

    class GVAR(sample_tube_full) : ACE_ItemCore {
        displayName = "Probenröhrchen (voll)";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 5;
        };
        picture = QPATHTOF(ui\sample_tube_full.paa);
        descriptionShort = "Ein Probenröhrchen mit einer biologischen Probe. Achtung, nicht öffnen, Kontaminationsgefahr!";
    };

    class GVAR(scoop) : ACE_ItemCore {
        displayName = "Schippe";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 10;
        };
        picture = QPATHTOF(ui\scoop.paa);
        descriptionShort = "Ein kleiner Spaten zur Entnahme von Bodenproben.";
    };
};
