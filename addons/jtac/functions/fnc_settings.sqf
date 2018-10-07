#include "script_component.hpp"

GVAR(EPDJtacAddTracerToProjectiles) = true;

if(isServer) then {
	//If true, allows you to skip the cool down.
	GVAR(EPDJtacDebug) = false;

	//The cooldown for every fire mission will be multiplied by this much. Numbers bigger than 1 will increase it. Numbers between 0-1 will shorten it. Individual fire missions can be modified in the array below.
    GVAR(EPDJtacCoolDownGlobalModifier) = 1.0;

	//The acquireRate for every fire mission will be multiplied by this much. Numbers bigger than 1 will increase it. Numbers between 0-1 will shorten it. Individual fire missions can be modified in the array below.
	GVAR(EPDJtacAquisitionGlobalModifier) = 1.0;
};

/*
	["payloadCategory", "displayName", "acquireRate", "reloadTime", "projectileFiringMethod", [firing method parameters...]]

	payloadCategory - One of "BULLETS", "SHELLS", "GRENADES", "EXPLOSIVES", "CONCEALMENT". Determines which Jtac menu the payload will show up in.

	displayName - Name of the payload that will be presented to the operator.

	acquireRate - Speed at which the target is acquired. Smaller = faster

	reloadTime - Time until the guns can fire again.

	projectileFiringMethod - One of "INITIATE_AND_SHOOT_PROJECTILE_PAYLOAD", "INITIATE_BOMBS_PAYLOAD", "INITIATE_MISSILES_PAYLOAD", "INITIATE_AND_DROP_EVEN_PAYLOAD". Determines which method will be used to send the payload to the target.

		INITIATE_AND_SHOOT_PROJECTILE_PAYLOAD - Traditional technique of sending a projectile at a target. Projectile will be spawned about 2.2km away and flung towards the target.
			parameters - [_projectileClassName, _verticalOffset, _numberToSend, _spreadRadial, _spreadNormal, _minTimeBetween, _maxRandomTime]
				_projectileClassName - Classname of the projectile to use.
				_verticalOffset - How many meters to aim up over the top of the target so it can hit the target.
				_numberToSend - How many projectiles to shoot.
				_spreadRadial - Radius of the horizontal inaccuracy. Projectiles can land anywhere in a circle of this radius around the target.
				_spreadNormal - Height of vertical inaccuracy. Think aiming too high or low. Turns the inaccuracy circle into an oval.
				_minTimeBetween - Minimum time between shots.
				_maxRandomTime  = A random value of up to this value is added to the _minTimeBetween variable to provide some variable time between shots.

		INITIATE_BOMBS_PAYLOAD - Spawns the payload about 4.2km away. Sets the correct orientation and gives it a bit of velocity.
			parameters - [_projectileClassName, _numberToSend, _initialSpeed, _speedVariance, _spreadRadial, _minTimeBetween, _maxRandomTime]
				_projectileClassName - Classname of the projectile to use.
				_numberToSend - How many bombs to drop.
				_initialSpeed - How fast the bomb is going.
				_speedVariance - The speed of the bomb will be adjusted by up to this much. This will cause the bomb to undershoot or overshoot.
				_angleVariance - Radius of the horizontal inaccuracy. Projectiles can land anywhere in a circle of this radius around the target.
				_minTimeBetween - Minimum time between shots.
				_maxRandomTime  = A random value of up to this value is added to the _minTimeBetween variable to provide some variable time between shots.

		INITIATE_MISSILES_PAYLOAD - Spawns a missile. Sets the correct orientation and sets the correct model orientation.
			parameters - [_projectileClassName, _numberToSend, _horizontalDistance, _pitch, _pitchVariance, _yawVariance, _minTimeBetween, _maxRandomTime]
				_projectileClassName - Classname of the projectile to use.
				_numberToSend - How many bombs to drop.
				_horizontalDistance - How far away the missile spawns.
				_pitch - The pitch the model must be angled to to hit.
				_pitchVariance - How much the pitch can be varied, This will cause the missile to undershoot or overshoot.
				_yawVariance - How much the yaw can be varied, this will cause the missile to land to the left or right.
				_minTimeBetween - Minimum time between shots.
				_maxRandomTime  = A random value of up to this value is added to the _minTimeBetween variable to provide some variable time between shots.

		INITIATE_AND_DROP_EVEN_PAYLOAD - Spawns 12 of the items randomly above the target and flings them down. Creates an evenly space inner triangle and an evenly space outer nonagon.
			parameters - [[_projectileClassName, _projectileClassName,_projectileClassName,...], _spreadRadial, _downwardSpeed, _spawnHeight]
				_projectileClassName - Classname of the projectile to use. 1 or more of these can be passed in.
				_spreadRadial - Radius of the horizontal inaccuracy. Projectiles can land anywhere in a circle of this radius around the target.
				_downwardSpeed - Initial downward velocity before gravity kicks in.
				_spawnHeight - Height above the terran that the projectile will spawn.

		INITIATE_AND_LAY_MINE_FIELD - Spawns a mine field.
			parameters - [[_mineClassName, _mineClassName,...], _numberToSend,  _spreadRadial]
				_projectileClassName - Classname of the projectile to use. 1 or more of these can be passed in.
				_numberToSend - How many mines to lay.
				_spreadRadial - How far the mines can spawn from the target.
*/

GVAR(availableJtacAttacks) = [
		["BULLETS", "20mm", .10, 60, QFUNC(initiateAndShootProjectilePayload), ["B_20mm", 105.6, 20, 4, 2, .05, .05]],
		["BULLETS", "30mm HE", .12, 90, QFUNC(initiateAndShootProjectilePayload), ["B_30mm_HE", 43.7, 15, 8, 2, .2, .2]],
		["BULLETS", "35mm AA", .14, 120, QFUNC(initiateAndShootProjectilePayload), ["B_35mm_AA", 57.5, 10, 16, 5, .4, .4]],
		["BULLETS", "40mm GPR", .16, 150, QFUNC(initiateAndShootProjectilePayload), ["B_40mm_GPR", 70.9, 6, 16, 5, .6, .6]],

		["SHELLS", "82mm AMOS", .18, 180, QFUNC(initiateAndShootProjectilePayload), ["Sh_82mm_AMOS", 23.9, 5, 20, 5, 1, .5]],
		["SHELLS", "120mm HE", .20, 210, QFUNC(initiateAndShootProjectilePayload), ["Sh_120mm_HE", 37.4, 3, 25, 8, 1, 1]],
		["SHELLS", "155mm AMOS", .22, 240, QFUNC(initiateAndShootProjectilePayload), ["Sh_155mm_AMOS", 23.9, 2, 30, 10, 2, 1]],
		["SHELLS", "155mm CLUSTER", .24, 270, QFUNC(initiateAndShootProjectilePayload), ["Cluster_155mm_AMOS", 23.9, 1, 2, 2, 2, 1]],

		["GRENADES", "20mm HE", .10, 60, QFUNC(initiateAndShootProjectilePayload), ["G_20mm_HE", 177.1, 10, 16, 5, .5, .5]],
		["GRENADES", "40mm HE", .16, 150, QFUNC(initiateAndShootProjectilePayload), ["G_40mm_HE", 177.1, 6, 18, 8, .5, 1]],
		["GRENADES", "40mm HEDP", .16, 150, QFUNC(initiateAndShootProjectilePayload), ["G_40mm_HEDP", 177.1, 6, 18, 8, .5, 1]],

		["BOMBS", "250lb SDB", .40, 300, QFUNC(initiateBombPayload), ["ammo_Bomb_SDB", 1, 250, 0.125, 2, 0, 0]],
		["BOMBS", "500lb GBU12", .44, 360, QFUNC(initiateBombPayload), ["Bomb_03_F", 1, 223.5, 1, 10, 0, 0]],
		["BOMBS", "580lb Cluster", .48, 420, QFUNC(initiateBombPayload), ["BombCluster_03_Ammo_F", 1, 212, 0.5, 10, 0, 0]],
		["BOMBS", "750lb Cluster", .52, 480, QFUNC(initiateBombPayload), ["BombCluster_01_Ammo_F", 1, 224, 0.5, 10, 0, 0]],
		["BOMBS", "1100lb Cluster", .56, 540, QFUNC(initiateBombPayload), ["BombCluster_02_Ammo_F", 1, 255, 0.5, 10, 0, 0]],
		["BOMBS", "Cruise Missile Cluster", .60, 600, QFUNC(initiateMissilesPayload), ["ammo_Missile_Cruise_01_Cluster", 1, 3911.5, -17.04, 0.1, 0.1, 0, 0]],

		["MISSILES", "Vorona 130mm HEAT", .40, 300, QFUNC(initiateMissilesPayload), ["M_Vorona_HEAT", 6, 1911.5, -28.99, 0.05, 0.05, 2, 1]],
		["MISSILES", "84mm MAAWS 44 HE", .30, 420, QFUNC(initiateBombPayload), ["R_MRAAWS_HE_F", 7, 295.7, 1, 15, 1, 1]],  //Special snowflake
		["MISSILES", "Vorona 130mm HE", .40, 480, QFUNC(initiateMissilesPayload), ["M_Vorona_HE", 6, 1911.5, -28.99, 0.25, 0.25, 1, 2]],
		["MISSILES", "230mm HE", .50, 540, QFUNC(initiateBombPayload), ["R_230mm_HE", 4, 240.55, 1, 25, .4, .2]],  //Special snowflake
		["MISSILES", "Cruise Missile", .60, 600, QFUNC(initiateMissilesPayload), ["ammo_Missile_Cruise_01", 3, 3911.5, -17.04, 0.3, 0.3, 4, 1]],

		["MINES", "APERS Mine", .30, 240, QFUNC(initiateAndLayMinefield), [["APERSMine"], 20, 20]],
		["MINES", "APERS Bounding Mine", .30, 240, QFUNC(initiateAndLayMinefield), [["APERSBoundingMine"], 20, 20]],
		["MINES", "APERS Mix", .40, 240, QFUNC(initiateAndLayMinefield), [["APERSMine", "APERSBoundingMine"], 20, 20]],
		["MINES", "Anti-Tank Mine", .30, 300, QFUNC(initiateAndLayMinefield), [["ATMine"], 20, 20]],
		["MINES", "SLAM Directional Mine", .30, 300, QFUNC(initiateAndLayMinefield), [["SLAMDirectionalMine"], 20, 20]],
		["MINES", "Anti-Vehicle Mix", .30, 300, QFUNC(initiateAndLayMinefield), [["ATMine", "SLAMDirectionalMine"], 20, 20]],
		["MINES", "Demine", .30, 180, QFUNC(initiateAndDropEventPayload), [["BombDemine_01_Ammo_F"], 20, -10, 200]],

		["NONLETHAL", "Red, White, and Blue", .10, 30, QFUNC(initiateAndDropEvenPayload), [["G_40mm_Smoke", "G_40mm_SmokeRed", "G_40mm_SmokeBlue"], 15, -0.1, 100]],
		["NONLETHAL", "White Wall Medium", .12, 60, QFUNC(initiateAndDropEvenPayload), [["Smoke_82mm_AMOS_White"], 15, -80, 1000]],
		["NONLETHAL", "White Wall Large", .14, 60, QFUNC(initiateAndDropEvenPayload), [["Smoke_120mm_AMOS_White"], 35, -80, 1000]],
		["NONLETHAL", "Flare Cloud", .10, 30, QFUNC(initiateAndDropEvenPayload), [["F_40mm_White", "F_40mm_Green", "F_40mm_Red", "F_40mm_Yellow"], 35, -0.1, 120]],
		["NONLETHAL", "Chem Lights", .10, 30, QFUNC(initiateAndDropEvenPayload), [["Chemlight_blue", "Chemlight_red", "Chemlight_yellow", "Chemlight_green"], 10, -0.1, 120]],
		["NONLETHAL", "Strobes", .10, 30, QFUNC(initiateAndDropEvenPayload), [["I_IRStrobe"], 15, -0.1, 120]],
		["NONLETHAL", "Night Signal", .10, 30, QFUNC(initiateAndDropEvenPayload), [["Chemlight_blue", "G_40mm_Smoke"], 8, -0.1, 120]]
	];
