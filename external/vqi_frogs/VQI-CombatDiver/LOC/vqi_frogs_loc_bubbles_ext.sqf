// Bubbles EFX - NOT working in MP
//



// Rear by Hatch
DDSLIGHT1 = "chemlight_red" createVehicle (position HMSProteus);  
DDSLIGHT1 attachTo [HMSProteus,[0.05,17,3.83]];
//publicVariable "DDSLIGHT1";	// MP?
sleep 1;

PS3 = "#particleSource" createVehicle getPos DDSLIGHT1;
PS3 setParticleClass "PointBubbles1";
PS3 setParticleCircle [2, [0,0,0]];
PS3 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal",16,13,7,0], "", "Billboard", 40, 30, [0, 0, 0], [0, 0, 0.3], 0, 1.2, 1, 0, [0.06],[[1,1,1,-2]], [1000], 0.12, 0.06, "", "", ""];
PS3 setDropInterval .001;

PS4 = "#particleSource" createVehicle getPos DDSLIGHT1;
PS4 setParticleClass "PointBubbles1";
PS4 setParticleCircle [1, [0,0,0]];
PS4 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal",16,13,7,0], "", "Billboard", 40, 30, [0, 0, 0], [0, 0, 0.3], 0, 1.2, 1, 0, [0.06],[[1,1,1,-2]], [1000], 0.12, 0.06, "", "", ""];
PS4 setDropInterval .001;




sleep 20;
deleteVehicle PS3;
deleteVehicle PS4;