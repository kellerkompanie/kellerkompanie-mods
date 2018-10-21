// SDV Load-out: Gear & Equipment  ~~~  Explosives
///////////////////////////////////////////////////////////////////

clearWeaponCargoGlobal VQISDV2; clearMagazineCargoGlobal VQISDV2; clearBackpackCargoGlobal VQISDV2; clearItemCargoGlobal VQISDV2;

sleep 1;
hint "Navy Form: X37/SQ-SDV.E \n Submitted, Stand By...";
sleep 1;




VQISDV2 addItemCargoGlobal ["ATMine_Range_Mag",4];
VQISDV2 addItemCargoGlobal ["SLAMDirectionalMine_Wire_Mag",8];
//VQISDV1 addItemCargoGlobal ["SatchelCharge_Remote_Mag",1];
//VQISDV1 addItemCargoGlobal ["DemoCharge_Remote_Mag",2];


sleep 2;
hint "Status: CLASSIFIED";
sleep 2;
hint "~ Request Granted ~";