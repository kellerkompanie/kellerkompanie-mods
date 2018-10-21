//
//


PS1 = "#particleSource" createVehicle getPos NOZZLE;
PS1 setParticleClass "PointBubbles1";
PS1 setParticleCircle [2, [0,0,0]];
PS1 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal",16,13,7,0], "", "Billboard", 40, 30, [0, 0, 0], [0, 0, 0.3], 0, 1.2, 1, 0, [0.06],[[1,1,1,-2]], [1000], 0.12, 0.06, "", "", ""];
PS1 setDropInterval .001;

PS2 = "#particleSource" createVehicle getPos NOZZLE;
PS2 setParticleClass "PointBubbles1";
PS2 setParticleCircle [1, [0,0,0]];
PS2 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal",16,13,7,0], "", "Billboard", 40, 30, [0, 0, 0], [0, 0, 0.3], 0, 1.2, 1, 0, [0.06],[[1,1,1,-2]], [1000], 0.12, 0.06, "", "", ""];
PS2 setDropInterval .001;



sleep 10;
deleteVehicle PS1;
deleteVehicle PS2;
deleteVehicle NOZZLE;




/////////////////////
/* NOTES:



*/