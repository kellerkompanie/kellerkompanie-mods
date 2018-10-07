#include "script_component.hpp"

if(! (player diarySubjectExists QGVAR(JTAC))) then {
	player createDiarySubject [QGVAR(JTAC), "EPD JTAC"];
};

player createDiaryRecord [QGVAR(JTAC), ["JTAC Non Lethal", "
The JTAC operator can fire a wide variety of non lethal devices.<br/><br/>

Red, White, and Blue - Pretty self explanatory.<br/>
Radial Spread: 15m<br/>
Reload Time: 30 seconds<br/><br/>

White Wall Medium - Creates medium sized smoke wall.<br/>
Radial Spread: 15m<br/>
Reload Time: 60 seconds<br/><br/>

White Wall Large - Creates large sized smoke wall.<br/>
Radial Spread: 35m<br/>
Reload Time: 60 seconds<br/><br/>

Flare Cloud - Launches flares around the target.<br/>
Radial Spread: 35m<br/>
Reload Time: 30 seconds<br/><br/>

Chem Lights - Launches chem lights around the target.<br/>
Radial Spread: 10m<br/>
Reload Time: 30 seconds<br/><br/>

Stobes - Launches strobe lights around the target.<br/>
Radial Spread: 15m<br/>
Reload Time: 30 seconds<br/><br/>

Night Signal - Creates a smoke signal that is visible at night.<br/>
Radial Spread: 8m<br/>
Reload Time: 30 seconds<br/><br/>

"]];

player createDiaryRecord [QGVAR(JTAC), ["JTAC Mines", "
The JTAC operator can lay a wide variety of mine fields.<br/><br/>

APERS Mine - A classic pressure-activated anti-personnel mine. These are anti-personnel mines which also do a good job of destroying the tires of wheeled vehicles which drive over them. They detonate once someone steps within half a meter of their position. Detonation is immediate and not always fatal. <br/>
Radial Spread: 20m<br/>
Number of Mines: 20<br/>
Reload Time: 240 seconds<br/><br/>

APERS Bounding Mine - The anti-personnel bounding mine is best suitable for open areas. When triggered, there is a delay of ~1 second after which a charge launches the body of the mine one meter into the air. The explosion covers a close area with fragments, killing the whole group.<br/>
Radial Spread: 20m<br/>
Number of Mines: 20<br/>
Reload Time: 240 seconds<br/><br/>

APERS Mix - Lays a random mixture of APERS and APERS Bounding mines.<br/>
Radial Spread: 20m<br/>
Number of Mines: 20<br/>
Reload Time: 300 seconds<br/><br/>

Anti-Tank Mine - The design of anti-tank mines has not changed much during the last 50 years. An AT mine is the strongest ground mine manufactured today. They are triggered only by vehicles.<br/>
Radial Spread: 20m<br/>
Number of Mines: 20<br/>
Reload Time: 300 seconds<br/><br/>

SLAM Directional Mine - The M6 SLAM mine is a next generation Selectable Lightweight Attack Munition. They are very effective against light armored vehicles, penetrating 40 mm armor from up to eight meters. Unlike dug-in mines, SLAM is placed on the ground and is easier to spot.<br/>
Radial Spread: 20m<br/>
Number of Mines: 20<br/>
Reload Time: 300 seconds<br/><br/>

Anti-Vehicle Mix - Lays a random mixture of Anti-Tank Mine and SLAM mines.<br/>
Radial Spread: 20m<br/>
Reload Time: 300 seconds<br/><br/>

Demine - Attempts to clear out an area of mines by dropping 12 perfectly spaced demining charges on the area. 3 charges will form a triangle in the middle and 9 more charges will form a ring around it.<br/>
Radial Spread: 20m<br/>
Reload Time: 180 seconds<br/><br/>
"]];

player createDiaryRecord [QGVAR(JTAC), ["JTAC Missile Barrage", "
The JTAC operator can fire a wide variety of missile barrages.<br/><br/>

Vorona 130mm HEAT<br/>
Should kill a vehicle if you are lucky enough to get a direct hit. Mostly useful for disabling tires and tracks otherwise.<br/>
Number of Rounds: 6<br/>
Radial Spread: 5m<br/>
Target Acquisition Time: 40 seconds<br/>
Reload Time: 300 seconds<br/><br/>

84mm MAAWS 44 HE<br/>
Number of Rounds: 7<br/>
Radial Spread: 15m<br/>
Target Acquisition Time: 30 seconds<br/>
Reload Time: 420 seconds<br/><br/>

Vorona 130mm HE<br/>
Number of Rounds: 6<br/>
Radial Spread: 24<br/>
Target Acquisition Time: 40 seconds<br/>
Reload Time: 480 seconds<br/><br/>

230mm HE<br/>
Number of Rounds: 4<br/>
Radial Spread: 27m<br/>
Target Acquisition Time: 50 seconds<br/>
Reload Time: 540 seconds<br/><br/>

Cruise Missile<br/>
Number of Rounds: 3<br/>
Radial Spread: 35m<br/>
Target Acquisition Time: 60 seconds<br/>
Reload Time: 600 seconds<br/><br/>

"]];

player createDiaryRecord [QGVAR(JTAC), ["JTAC Bombs", "
The JTAC operator can fire a wide variety of bombs.<br/><br/>

250lb SDB<br/>
Number of Rounds: 1<br/>
Radial Spread: 7m<br/>
Target Acquisition Time: 40 seconds<br/>
Reload Time: 300 seconds<br/><br/>

500lb GBU12<br/>
Number of Rounds: 1<br/>
Radial Spread: 10m<br/>
Target Acquisition Time: 44 seconds<br/>
Reload Time: 360 seconds<br/><br/>

580lb Cluster<br/>
Number of Rounds: 1<br/>
Radial Spread: 10m<br/>
Target Acquisition Time: 48 seconds<br/>
Reload Time: 420 seconds<br/><br/>

750lb Cluster<br/>
Number of Rounds: 1<br/>
Radial Spread: 10m<br/>
Target Acquisition Time: 52 seconds<br/>
Reload Time: 480 seconds<br/><br/>

1100lb Cluster<br/>
Number of Rounds: 1<br/>
Radial Spread: 10m<br/>
Target Acquisition Time: 56 seconds<br/>
Reload Time: 540 seconds<br/><br/>

Cruise Missile Cluster<br/>
Number of Rounds: 1<br/>
Radial Spread: 10m<br/>
Target Acquisition Time: 60 seconds<br/>
Reload Time: 600 seconds<br/><br/>

"]];

player createDiaryRecord [QGVAR(JTAC), ["JTAC Grenades", "
The JTAC operator can fire a wide variety of grenades.<br/><br/>
Radial spread is how far from the target the grenades can land, forming a circle. <br/>
Orthogonal spread is how far the center of the circle can be moved in the direction the guns are firing from, forming an oval. <br/><br/>

20mm HE<br/>
Number of Rounds: 10<br/>
Radial Spread: 16m<br/>
Orthogonal Spread: 5m<br/>
Target Acquisition Time: 10 seconds<br/>
Reload Time: 60 seconds<br/><br/>

40mm HE<br/>
Number of Rounds: 6<br/>
Radial Spread: 18m<br/>
Orthogonal Spread: 6m<br/>
Target Acquisition Time: 18 seconds<br/>
Reload Time: 150 seconds<br/><br/>

40mm HEDP<br/>
Number of Rounds: 6<br/>
Radial Spread: 16m<br/>
Radial Spread: 16m<br/>
Orthogonal Spread: 6m<br/>
Target Acquisition Time: 16 seconds<br/>
Reload Time: 150 seconds<br/><br/>
"]];

player createDiaryRecord [QGVAR(JTAC), ["JTAC Shells", "
The JTAC operator can fire a wide variety of shells.<br/><br/>
Radial spread is how far from the target the shells can land, forming a circle. <br/>
Orthogonal spread is how far the center of the circle can be moved in the direction the guns are firing from, forming an oval. <br/><br/>

82mm AMOS<br/>
Number of Rounds: 5<br/>
Radial Spread: 20m<br/>
Orthogonal Spread: 5m<br/>
Target Acquisition Time: 18 seconds<br/>
Reload Time: 180 seconds<br/><br/>

120mm HE<br/>
Number of Rounds: 3<br/>
Radial Spread: 25m<br/>
Orthogonal Spread: 8m<br/>
Target Acquisition Time: 20 seconds<br/>
Reload Time: 210 seconds<br/><br/>

155mm AMOS<br/>
Number of Rounds: 2<br/>
Radial Spread: 30m<br/>
Orthogonal Spread: 10m<br/>
Target Acquisition Time: 22 seconds<br/>
Reload Time: 240 seconds<br/><br/>

155mm CLUSTER<br/>
Number of Rounds: 1<br/>
Radial Spread: 10m<br/>
Target Acquisition Time: 24 seconds<br/>
Reload Time: 270 seconds<br/><br/>
"]];

player createDiaryRecord [QGVAR(JTAC), ["JTAC Bullets", "
The JTAC operator can fire a wide variety of bullets.<br/><br/>
Radial spread is how far from the target the bullets can land, forming a circle. <br/>
Orthogonal spread is how far the center of the circle can be moved in the direction the guns are firing from, forming an oval. <br/><br/>

20mm<br/>
Number of Rounds: 20<br/>
Radial Spread: 4m<br/>
Orthogonal Spread: 2m<br/>
Target Acquisition Time: 10 seconds<br/>
Reload Time: 60 seconds<br/><br/>

30mm HE<br/>
Number of Rounds: 15<br/>
Radial Spread: 8m<br/>
Orthogonal Spread: 2m<br/>
Target Acquisition Time: 12 seconds<br/>
Reload Time: 90 seconds<br/><br/>

35mm AA<br/>
Number of Rounds: 10<br/>
Radial Spread: 16<br/>
Orthogonal Spread: 5m<br/>
Target Acquisition Time: 14 seconds<br/>
Reload Time: 120 seconds<br/><br/>

40mm GPR<br/>
Number of Rounds: 6<br/>
Radial Spread: 16m<br/>
Orthogonal Spread: 5m<br/>
Target Acquisition Time: 16 seconds<br/>
Reload Time: 150 seconds<br/><br/>
"]];

player createDiaryRecord [QGVAR(JTAC), ["JTAC Operator", "
You are the Joint Terminal Attack Controller. It is your job to provide support to your team in the form of close air and artillery support. Make sure you bring a laser designator and batteries so you can call in support with the JTAC menu. Information about each attack capability is included in your diary. <br/><br/>
The location the guns will aim at is the average location of your laser pointer while it is acquiring a target, so be sure to hold the laser as close to the target as possible the entire time! <br/><br/>
Once the target location has been acquired, you will be notified that the rounds are inbound. It is safe to turn off your laser and run for cover at this point. <br/><br/>
After each attack, the guns will need time to reload. The time it takes to reload will depend on the size of the ammunition fired. <br/><br/>
The guns are shared between all JTAC operators and if another JTAC operator fires, you will have to wait for the guns to reload before you can fire. The more damage an attack does, the longer it will take for the target to be locked in. Be smart about what you are firing and when.
"]];
