class CfgPostProcessTemplates
{
	class Default
	{
		colorCorrections[]=
		{
			1,
			1,
			0,
			{0,0,0,0},
			{1,1,1,1},
			{0,0,0,0}
		};
		filmGrain[]={0,0,0,0,0};
	};
	class EastWind
	{
		colorCorrections[]=
		{
			1,
			1.08,
			-0.059999999,
			{0.5,0.5,0.5,0},
			{1,1,1,1.21},
			{0.090000004,0.090000004,0.090000004,0}
		};
	};
	class ASCZ_MiddleEast
	{
		displayName="Middle East";
		colorCorrections[]=
		{
			0.89999998,
			1,
			0,
			{0.1,0.1,0.1,-0.1},
			{1,1,0.80000001,0.528},
			{1,0.2,0,0}
		};
	};
	class ASCZ_RealIsBrownLight
	{
		displayName="Real Is Brown 2";
		colorCorrections[]=
		{
			1,
			1,
			0,
			{0.1,0.2,0.30000001,-0.30000001},
			{1,1,1,0.5},
			{0.5,0.2,0,1}
		};
	};
	class ASCZ_Nightstalkers
	{
		displayName="Nightstalkers";
		colorCorrections[]=
		{
			1,
			1.1,
			0,
			{0,0,0,0},
			{1,0.69999999,0.60000002,0.60000002},
			{0.2,0.60000002,0.1,0}
		};
	};
	class ASCZ_GrayTone
	{
		displayName="Gray Tone";
		colorCorrections[]=
		{
			1,
			1,
			0,
			{1,1,1,0},
			{1,1,0.89999998,0.34999999},
			{0.30000001,0.30000001,0.30000001,-0.1}
		};
	};
	class ASCZ_ColdTone
	{
		displayName="Cold Tone";
		colorCorrections[]=
		{
			1,
			1,
			0,
			{0.2,0.2,1,0},
			{0.40000001,0.75,1,0.60000002},
			{0.5,0.30000001,1,-0.1}
		};
	};
	class ASCZ_WarmTone {
	displayName = "Warm Tone";
	colorCorrections[] =
		{
			1,
			1.3,
			0,
			{1,-0.9,-1.5,0.1},
			{0.5,0.8,0.8,0.7},
			{1,1.3,-0.1,0},
			{0,0,0,0,0,0,4}
		};
	};

	class ASCZ_CinimaticRed {
		displayName = "Cinimatic Red";
		colorCorrections[] =
		{
			1,
			0.8,
			0,
			{0,-0.2,-0.1,-0.3},
			{1.5,1.1,0.9,0.2},
			{0.7,0.1,0,0},
			{0,0,0,0,0,0,4}
		};
		filmGrain[]={0.3,13,5,2,2};
	};

	class ASCZ_CinimaticBlue {
		displayName = "Cinimatic Blue";
		colorCorrections[] = {1,0.8,0,{0.2,-0.2,-0.3,-0.3},{1.3,1.2,1.2,0.2},{0.7,0.1,0,0},{0,0,0,0,0,0,4}};
		filmGrain[]={0.3,13,5,2,2};
	};

	class ASCZ_CinimaticGreen {
		displayName = "Cinimatic Green";
		colorCorrections[] = {1,0.8,0,{-0.5,-0.1,-0.2,-0.3},{1,1.25,0.85,0.2},{0.7,0.1,0,0},{0,0,0,0,0,0,4}};
		filmGrain[]={0.3,13,5,2,2};
	};

	class ASCZ_Sunset {
		displayName = "Perfect Sunet";
		colorCorrections[] = {1,1,0,{1.7,0,-1,0.1},{0.6,0.8,0.6,0.9},{11,-3.8,-3.5,0},{0,0,0,0,0,0,4}};
	};

		class ASCZ_Light {
		displayName = "Pure Light";
		colorCorrections[] = {1,1,0,{-1,0,-3,0.05},{1.5,1.5,2.5,0.85},{3,1.5,-2.5,0},{0,0,0,0,0,0,4}};
	};

		class ASCZ_Green {
		displayName = "Slightly Green";
		colorCorrections[] = {1,1,0,{1,1.6,0.1,0.05},{0.5,1,1.5,0.95},{1.9,0,0,0},{0,0,0,0,0,0,4}};
	};

		class ASCZ_Woodland {
		displayName = "Woodland";
		colorCorrections[] = {1,1,0,{1,1.5,0.1,0},{1.6,1,0.1,0.95},{-5,5.8,5.2,0},{0,0,0,0,0,0,4}};
	};

		class ASCZ_Harvest {
		displayName = "Golden Harvest";
		colorCorrections[] = {1,1,0,{0,0,0,0.1},{1.9,0.9,0,0.95},{-3.8,10,2.8,0},{0,0,0,0,0,0,4}};
	};

		class ASCZ_Shores {
		displayName = "Sunny Shores";
		colorCorrections[] = {1,0.9,0,{-2.6,-1.6,-1.5,-0.05},{0,1,1,0.95},{-1.5,5,5,0},{0,0,0,0,0,0,4}};
	};

		class ASCZ_Mediterranean  {
		displayName = "Real Mediterranean";
		colorCorrections[] = {1,1,0,{0,0,0,-0.5},{1.4,0.7,1,0.95},{2.8,-2,-5,0},{0,0,0,0,0,0,4}};
	};

		class ASCZ_Wasteland {
		displayName = "Wasteland";
		colorCorrections[] = {1,1,0,{0.3,2.6,1.6,-0.15},{0.8,1.6,1.2,0.75},{1,1.3,0,0},{0,0,0,0,0,0,4}};
	};

		class ASCZ_Mountains {
		displayName = "Middle East Mountains";
		colorCorrections[] = {1,0.75,0,{0.5,1,-1.5,0.05},{1,1,1.5,0.9},{3,3,1,0},{0,0,0,0,0,0,4}};
	};

		class ASCZ_IslandVacation {
		displayName = "Island Vacation";
		colorCorrections[] = {1,2,-0.3,{0,0,0,-0.35},{0,0,3,0.75},{0,-0.2,0.25,0},{0,0,0,0,0,0,4}};
	};

		class ASCZ_Summer {
		displayName = "Summer Dreams";
		colorCorrections[] = {1,1.3,-0.05,{1.6,0.1,0.03,-0.1},{5,1,-1,0.9},{0.1,0.2,0.1,0},{0,0,0,0,0,0,4}};
	};
		class ASCZ_BackStab{
		displayName = "(Operation Arrowhead) Back Stab";
		colorCorrections[] = {1.0, 1.0, -0.01, {0.7, 0.7, 1.0, 0.005}, {1.0, 0.5, 0.5, 0.70}, {0.95, 0.95, 0.95, 0.0}};
	};
		class ASCZ_Takistan {
		displayName = "(Operation Arrowhead) Good Morning Takistan";
		colorCorrections[] = {1, 1.02, -0.005, {0.0, 0.0, 0.0, 0.0}, {1, 1, 0.7, 0.65},  {0.199, 0.587, 0.114, 0.0}};
	};
		class ASCZ_SandStorm{
		displayName = "(Operation Arrowhead) Sand Storm";
		colorCorrections[] = {1, 1, 0, {0.0, 0.0, 0.0, 0.0}, {0.0, 0.5, 1.0, 0.5}, {0.5, 0.5, 0.5, 0.0}};
	};
		class ASCZ_FinishingTouch{
		displayName = "(Operation Arrowhead) Finishing Touch";
		colorCorrections[] = {1.0, 1.0, -0.02, {0.9, 0.1, 0.9, -0.01}, {1.0, 1.0, 1.0, 1.0}, {1.0, 1.0, 1.0, 1.0}};
	};
		class ASCZ_Spero{
		displayName = "(Operation Arrowhead) Dum Spiro Spero";
		colorCorrections[] = {1, 1.1, -0.003, {0.0, 0.0, 0.0, 0.0}, {1.0,0.8, 0.6, 0.64}, {0.199, 0.587, 0.114, 0.0}};
	};
		class ASCZ_Jackal{
		displayName = "(Operation Arrowhead) Jackal";
		colorCorrections[] = {1, 1.02, 0, {0.0, 0.0, 0.0, 0.0}, {0.6, 0.6, 1.0, 0.7},  {0.199, 0.587, 0.114, 0.0}};
	};
		class ASCZ_OneShot{
		displayName = "(Operation Arrowhead) One Shot One Kill";
		colorCorrections[] = {1, 1.2, -0.00, {0.0, 0.0, 0.0, 0.0}, {0.6, 0.6, 1.0, 0.4},  {0.199, 0.587, 0.114, 0.0}};
	};
		class ASCZ_Contrasted{
		displayName = "Contrasted";
		colorCorrections[] = {1,1,-0.15,{-0.15,-0.05,-0.1,-0.15},{1,1,1,0.9},{2,2,2,0},{0,0,0,0,0,0,4}};
	};
		class ASCZ_NightEffect1{
		displayName = "Night Filter 1";
		colorCorrections[] = {1,1.7,-0.13,{0.2,-0.05,0.05,-0.76},{1,1,1,0.78},{2.8,2,0.25,0},{0,0,0,0,0,0,4}};
	};
		class ASCZ_NightEffect2{
		displayName = "Night Filter 2";
		colorCorrections[] = {1,1.7,-0.13,{0.15,0,-0.05,-0.76},{1,1,1,0.78},{2.8,2,0.25,0},{0,0,0,0,0,0,4}};
	};
		class ASCZ_NightEffect3{
		displayName = "Night Filter 3";
		colorCorrections[] = {1,1.7,-0.13,{0,0,0.1,-0.76},{1,1,1,0.78},{2.8,2,0.25,0},{0,0,0,0,0,0,4}};
	};
		class ASCZ_Movie1{
		displayName = "Movie Effect 1";
		colorCorrections[] = {1,1.05,-0.25,{0.6,0.15,-0.05,-0.33},{1,1,1,0.8},{2,1,1,0},{0,0,0,0,0,0,4}};
	};
		class ASCZ_Movie2{
		displayName = "Movie Effect 2";
		colorCorrections[] = {1,1.1,-0.2,{0.7,0,0,-0.45},{1.23,0.86,0.86,0.8},{3,0,0,0},{0,0,0,0,0,0,4}};
	};
		class ASCZ_Movie3{
		displayName = "Movie Effect 3";
		colorCorrections[] = {1,1.1,-0.25,{0,0,0,-0.25},{0.95,1.05,1.05,0.8},{2,1,1,0},{0,0,0,0,0,0,4}};
	};
		class ASCZ_Movie4{
		displayName = "Movie Effect 4";
		colorCorrections[] = {1,1.15,-0.3,{-0.2,0,0.5,0.06},{1,0.9,0.7,0.85},{6.14,0.71,2.22,0},{0,0,0,0,0,0,4}};
	};
		class ASCZ_Movie5{
		displayName = "Movie Effect 5";
		colorCorrections[] = {1,1.05,-0.25,{2.97,1.76,1.61,-0.08},{0.95,0.95,0.9,0.35},{2.5,2.5,-3,0},{0,0,0,0,0,0,4}};
	};
		class ASCZ_Movie6{
		displayName = "Movie Effect 6";
		colorCorrections[] = {1,1.25,-0.25,{0.3,0.1,0.07,-0.75},{2,1.7,1.9,0.75},{0,-0.05,0.5,0},{0,0,0,0,0,0,4}};
	};
		class ASCZ_Movie7{
		displayName = "Movie Effect 7";
		colorCorrections[] = {1,0.78,-0.15,{-0.8,-0.73,-0.58,-0.17},{0.93,1.16,1.16,0.36},{1.31,-1.1,1.21,0},{0,0,0,0,0,0,4}};
	};
		class ASCZ_Movie8{
		displayName = "Movie Effect 8";
		colorCorrections[] = {1,1.1,-0.2,{0,0,0.03,-0.52},{0.86,1,1.08,0.74},{3.7,-1.7,0,0},{0,0,0,0,0,0,4}};
	};


	};
