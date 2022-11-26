class ace_medical_treatment_actions {
    class Morphine;
    class Painkiller: Morphine {
        displayName = CSTRING(Administer_Painkiller);
        displayNameProgress = CSTRING(Administering_Painkiller);
        icon = QPATHTOF(ui\icon_painkiller_action.paa);
        allowedSelections[] = {"Head"};
        condition = "";
        items[] = {"KEKO_painkiller"};
        sounds[] = {{QPATHTO_R(sounds\Painkiller.ogg),1,1,50}};
        litter[] = {{"KEKO_MedicalLitter_painkiller"}};
    };

    class Bloodstopper : Morphine {
        displayName = CSTRING(Inject_Bloodstopper);
        displayNameProgress = CSTRING(Injecting_Bloodstopper);
        icon = QPATHTOF(ui\icon_injector_action.paa);
        allowedSelections[] = { "LeftArm", "RightArm", "LeftLeg", "RightLeg" };
        category = "medication";
        condition = "";
        items[] = { "KEKO_Bloodstopper" };
        treatmentTime = 6;
        callbackSuccess = QFUNC(bloodstopper);
        animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
        sounds[] = { {QPATHTO_R(sounds\Inject.ogg),1,1,50} };
        litter[] = { {"ACE_MedicalLitter_adenosine"} };
    };

    class GoJuice : Morphine {
        displayName = CSTRING(Inject_GoJuice);
        displayNameProgress = CSTRING(Injecting_GoJuice);
        icon = QPATHTOF(ui\icon_injector_action.paa);
        allowedSelections[] = { "LeftArm", "RightArm", "LeftLeg", "RightLeg" };
        category = "medication";
        condition = "";
        items[] = { "KEKO_GoJuice" };
        treatmentTime = 6;
        callbackSuccess = QFUNC(goJuice);
        animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
        sounds[] = { {QPATHTO_R(sounds\Inject.ogg),1,1,50} };
        litter[] = { {"ACE_MedicalLitter_adenosine"} };
    };

    class Contrafinil : Morphine {
        displayName = CSTRING(Inject_Contrafinil);
        displayNameProgress = CSTRING(Injecting_Contrafinil);
        icon = QPATHTOF(ui\icon_injector_action.paa);
        allowedSelections[] = { "LeftArm", "RightArm", "LeftLeg", "RightLeg" };
        category = "medication";
        condition = "";
        items[] = { "KEKO_Contrafinil" };
        treatmentTime = 6;
        callbackSuccess = QFUNC(contrafinil);
        animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
        sounds[] = { {QPATHTO_R(sounds\Inject.ogg),1,1,50} };
        litter[] = { {"ACE_MedicalLitter_adenosine"} };
    };
};
