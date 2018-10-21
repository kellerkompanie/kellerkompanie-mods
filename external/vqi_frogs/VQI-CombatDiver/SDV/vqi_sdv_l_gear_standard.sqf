// SDV Load-out: Gear & Equipment  ~~~  Standard
///////////////////////////////////////////////////////////////////

clearWeaponCargoGlobal VQISDV1; clearMagazineCargoGlobal VQISDV1; clearBackpackCargoGlobal VQISDV1; clearItemCargoGlobal VQISDV1;

sleep 1;
hint "Navy Form: X37/SQ-SDV.S \n Submitted, Stand By...";
sleep 1;


VQISDV1 addItemCargoGlobal ["G_B_Diving",2];
VQISDV1 addItemCargoGlobal ["arifle_SDAR_F",1];
VQISDV1 addItemCargoGlobal ["arifle_MXC_Black_F",1];
VQISDV1 addItemCargoGlobal ["20Rnd_556x45_UW_mag",6];
VQISDV1 addItemCargoGlobal ["30Rnd_65x39_caseless_mag",8];

//VQISDV1 addItemCargoGlobal ["100Rnd_65x39_caseless_mag",6];
VQISDV1 addItemCargoGlobal ["ClaymoreDirectionalMine_Remote_Mag",1];
//VQISDV1 addItemCargoGlobal ["SatchelCharge_Remote_Mag",1];
//VQISDV1 addItemCargoGlobal ["DemoCharge_Remote_Mag",2];
//VQISDV1 addItemCargoGlobal ["3Rnd_HE_Grenade_shell",2];
VQISDV1 addItemCargoGlobal ["MiniGrenade",3];  
VQISDV1 addItemCargoGlobal ["HandGrenade",3];
VQISDV1 additemCargoGlobal ["FirstAidKit",2]; 
VQISDV1 addItemCargoGlobal ["SmokeShell",3];
VQISDV1 addItemCargoGlobal ["Chemlight_blue",3];
VQISDV1 addItemCargoGlobal ["Chemlight_green",3];
VQISDV1 addItemCargoGlobal ["Chemlight_red",3];

sleep 2;
hint "Status: CLASSIFIED";
sleep 2;
hint "~ Request Granted ~";