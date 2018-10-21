//
//




PS5 = "#particleSource" createVehicle getPos LOCFLOOR;
PS5 setParticleClass "PointBubbles1";
PS5 setParticleCircle [3, [0,0,0]];
PS5 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal",16,13,7,0], "", "Billboard", 40, 30, [0, 0, 0], [0, 0, 0.3], 0, 1.2, 1, 0, [0.06],[[1,1,1,-2]], [1000], 0.12, 0.06, "", "", ""];
PS5 setDropInterval .001;

PS6 = "#particleSource" createVehicle getPos LOCFLOOR;
PS6 setParticleClass "PointBubbles1";
PS6 setParticleCircle [1.5, [0,0,0]];
PS6 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal",16,13,7,0], "", "Billboard", 40, 30, [0, 0, 0], [0, 0, 0.3], 0, 1.2, 1, 0, [0.06],[[1,1,1,-2]], [1000], 0.12, 0.06, "", "", ""];
PS6 setDropInterval .001;




sleep 35;
deleteVehicle PS6;
sleep 10;
deleteVehicle PS5;



//////////////////
/* NOTES:




*/