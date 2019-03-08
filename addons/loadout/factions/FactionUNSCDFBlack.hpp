class FactionUNSCDFBlack: FactionUNSCDFUrban {
    name = "[Sci-Fi] UNSCDF (Black) - U.N. Space Command Defense Force (Urban)";

    grenade = OPTRE_M9_Frag;
    smokeWhite = OPTRE_M2_Smoke;
    smokeGreen = OPTRE_M2_Smoke_Green;

    class uniform: uniform {
        Default[] = { "OPTRE_UNSC_Army_Uniform_BLK" };
        Lead[] = { "OPTRE_UNSC_Army_Uniform_S_BLK" };
        Command[] = { "OPTRE_UNSC_Army_Uniform_S_BLK" };
    };

    class uniformInventory: uniformInventory {
        Default[] = {
            {20, "ACE_fieldDressing"},
            {2, "ACE_morphine"},
            {3, "ACE_tourniquet"}
        };
    };
};
