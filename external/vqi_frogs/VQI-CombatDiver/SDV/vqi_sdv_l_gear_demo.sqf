// SDV Load-out: Gear & Equipment  ~~~  Demo
///////////////////////////////////////////////////////////////////

clearWeaponCargoGlobal VQISDV1; clearMagazineCargoGlobal VQISDV1; clearBackpackCargoGlobal VQISDV1; clearItemCargoGlobal VQISDV1;

sleep 1;
hint "Navy Form: X37/SQ-SDV.D \n Submitted, Stand By...";
sleep 1;




//VQISDV1 addItemCargoGlobal ["ATMine_Range_Mag",2];
//VQISDV1 addItemCargoGlobal ["APERSMine_Range_Mag",2];
//VQISDV1 addItemCargoGlobal ["APERSBoundingMine_Range_Mag",2];
//VQISDV1 addItemCargoGlobal ["SLAMDirectionalMine_Wire_Mag",2];
//VQISDV1 addItemCargoGlobal ["APERSTripMine_Wire_Mag",2];
//VQISDV1 addItemCargoGlobal ["ClaymoreDirectionalMine_Remote_Mag",2];
VQISDV1 addItemCargoGlobal ["SatchelCharge_Remote_Mag",4];
VQISDV1 addItemCargoGlobal ["DemoCharge_Remote_Mag",8];

sleep 2;
hint "Status: CLASSIFIED";
sleep 2;
hint "~ Request Granted ~";