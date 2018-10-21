// SDV Load-out: Gear & Equipment  ~~~  Standard
///////////////////////////////////////////////////////////////////

clearWeaponCargoGlobal VQISDV2; clearMagazineCargoGlobal VQISDV2; clearBackpackCargoGlobal VQISDV2; clearItemCargoGlobal VQISDV2;

sleep 1;
hint "Navy Form: X37/SQ-SDV.S \n Submitted, Stand By...";
sleep 1;


VQISDV2 addItemCargoGlobal ["G_B_Diving",2];
VQISDV2 addItemCargoGlobal ["arifle_SDAR_F",1];
VQISDV2 addItemCargoGlobal ["arifle_MXC_Black_F",1];
VQISDV2 addItemCargoGlobal ["20Rnd_556x45_UW_mag",6];
VQISDV2 addItemCargoGlobal ["30Rnd_65x39_caseless_mag",8];

//VQISDV2 addItemCargoGlobal ["100Rnd_65x39_caseless_mag",6];
VQISDV2 addItemCargoGlobal ["ClaymoreDirectionalMine_Remote_Mag",1];
//VQISDV2 addItemCargoGlobal ["SatchelCharge_Remote_Mag",1];
//VQISDV2 addItemCargoGlobal ["DemoCharge_Remote_Mag",2];
//VQISDV2 addItemCargoGlobal ["3Rnd_HE_Grenade_shell",2];
VQISDV2 addItemCargoGlobal ["MiniGrenade",3];  
VQISDV2 addItemCargoGlobal ["HandGrenade",3];
VQISDV2 additemCargoGlobal ["FirstAidKit",2]; 
VQISDV2 addItemCargoGlobal ["SmokeShell",3];
VQISDV2 addItemCargoGlobal ["Chemlight_blue",3];
VQISDV2 addItemCargoGlobal ["Chemlight_green",3];
VQISDV2 addItemCargoGlobal ["Chemlight_red",3];

sleep 2;
hint "Status: CLASSIFIED";
sleep 2;
hint "~ Request Granted ~";