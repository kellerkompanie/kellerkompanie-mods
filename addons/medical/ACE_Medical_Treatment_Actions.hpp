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
};
