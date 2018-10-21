// SCUBA Diving Computer
//




	class VQI_DIVEMATE_1 {					// UNIQUE MAIN-CLASSSNAME of this GUI/Project
		idd = -1;				          	// Display ID, can use -1 IF NO reference
		movingEnable = 0;					// Able to MOVE graphic (need in resource?)
		fadein = 0;							// How quick it pops on (seconds)
		duration = 99;						// Time it will be displayed (seconds)
		fadeout = 1;						// How quick it goes away (seconds)
		name = "VQI DiveMate One";			// Easy-To-Read 'Proper Name' in i.e. Trigger Menu
		onLoad = "uiNamespace setVariable ['VQI_DIVEMATE_1', _this select 0]";	// ????
	  
		class Controls {

			class BACKGROUND {					// SUB-CLASSNAME of specific section or element
				idc = -1;						// Control ID, can use -1 IF NO reference
				type = 0;						// Control #: Static, Text, Button, Listbox, etc
				style = 2096;						// Control #: Picture, Border, Text Align, etc
				text = "vqi_frogs\VQI-CombatDiver\Equipment\DiveMate\graphics\VQI_DIVEMATE_1.paa";	// text OR graphic to display (path)
				colorBackground[] = {0,0,0,0};	// Background Color (r,g,b,a)
				colorText[] = {1,1,1,1};		// Font Color or Foreground (r,g,b,a)
				font = "PuristaMedium";			// Font Family
				sizeEx = 0.05;					// Font Size (0..1)
					x =  -0.60;  
					y =  0.600;
					h = 1; 
					w = 1 * 0.745; 						
			};
			
			class DF {			
				idc = 1000;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,0.5,0,0.7};		
				font = "PuristaLight";			
				sizeEx = 0.03;					
					x =  -0.72;  		// -L/R		ref middle screen 0/0
					y =  0.415;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			class SR {			
				idc = 1011;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {0,0.8,0.8,0.8};		
				font = "PuristaLight";			
				sizeEx = 0.03;					
					x =  -0.72;  		// -L/R		ref middle screen 0/0
					y =  0.415;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			class FR {			
				idc = 1012;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,0.7,0,0.7};		
				font = "PuristaLight";			
				sizeEx = 0.03;					
					x =  -0.72;  		// -L/R		ref middle screen 0/0
					y =  0.415;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			class XX {			
				idc = 1013;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,0,0,0.8};		
				font = "PuristaLight";			
				sizeEx = 0.03;					
					x =  -0.72;  		// -L/R		ref middle screen 0/0
					y =  0.415;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};	
			
			class DEPTH {			
				idc = 1001;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,1,1,0.7};		
				font = "PuristaBold";			
				sizeEx = 0.06;					
					x =  -0.60;  		// -L/R		ref middle screen 0/0
					y =  0.55;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			class DEPTHw1 {			
				idc = 1023;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {0.5,0.5,0,1};		
				font = "PuristaBold";			
				sizeEx = 0.06;					
					x =  -0.60;  		// -L/R		ref middle screen 0/0
					y =  0.55;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			class DEPTHw2 {			
				idc = 1024;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,0.5,0,1};		
				font = "PuristaBold";			
				sizeEx = 0.06;					
					x =  -0.60;  		// -L/R		ref middle screen 0/0
					y =  0.55;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			class DEPTHw3 {			
				idc = 1025;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,0,0,1};		
				font = "PuristaBold";			
				sizeEx = 0.06;					
					x =  -0.60;  		// -L/R		ref middle screen 0/0
					y =  0.55;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			
			class tankLIFEhi {			
				idc = 1002;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,1,1,0.7};		
				font = "PuristaBold";			
				sizeEx = 0.03;					
					x =  -0.49;  		// -L/R		ref middle screen 0/0
					y =  0.435;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			class tankLIFElo {			
				idc = 1015;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,0.5,0,0.7};		
				font = "PuristaBold";			
				sizeEx = 0.03;					
					x =  -0.49;  		// -L/R		ref middle screen 0/0
					y =  0.435;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			class tankLIFExx {			
				idc = 1016;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,0,0,1};		
				font = "PuristaBold";			
				sizeEx = 0.03;					
					x =  -0.49;  		// -L/R		ref middle screen 0/0
					y =  0.435;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};	
			
			class CLOCK {			
				idc = 1003;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,1,1,0.7};		
				font = "PuristaLight";			
				sizeEx = 0.03;					
					x =  -0.60;  		// -L/R		ref middle screen 0/0
					y =  0.45;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			
			class pGPSl {			
				idc = 1004;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,1,1,0.9};		
				font = "PuristaLight";			
				sizeEx = 0.04;					
					x =  -0.6;  		// -L/R		ref middle screen 0/0
					y =  0.64;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			class pGPSlx {			
				idc = 1026;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,1,1,0.4};		
				font = "PuristaLight";			
				sizeEx = 0.03;					
					x =  -0.6;  		// -L/R		ref middle screen 0/0
					y =  0.64;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			
			class tankVOL {			
				idc = 1005;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {0,0.8,0.8,0.8};		
				font = "PuristaBold";			
				sizeEx = 0.070;					
					x =  -0.60;  		// -L/R		ref middle screen 0/0
					y =  0.500;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			
			class pATM {			
				idc = 1006;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,1,1,0.6};		
				font = "EtelkaMonospaceProBold";			
				sizeEx = 0.025;					
					x =  -0.50;  		// -L/R		ref middle screen 0/0
					y =  0.65;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};

			class pPSI {			
				idc = 1007;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,1,1,1};		
				font = "EtelkaMonospacePro";			
				sizeEx = 0.025;					
					x =  -0.50;  		// -L/R		ref middle screen 0/0
					y =  0.62;			// -U/D		ref Middle Screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};

			class COMPASS {			
				idc = 1008;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,1,1,0.5};		
				font = "PuristaBold";			
				sizeEx = 0.04;					
					x =  -0.7;  		// -L/R		ref middle screen 0/0
					y =  0.62;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};	
			
			class gasON {			
				idc = 1009;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {0,0.7,0,0.7};		
				font = "PuristaBold";			
				sizeEx = 0.03;					
					x =  -0.49;  		// -L/R		ref middle screen 0/0
					y =  0.415;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			class gasOFF {			
				idc = 1014;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,0,0,0.8};		
				font = "PuristaBold";			
				sizeEx = 0.03;					
					x =  -0.49;  		// -L/R		ref middle screen 0/0
					y =  0.415;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};	

			class PPO2 {			
				idc = 1010;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,1,1,0.2};		
				font = "EtelkaMonospaceProBold";			
				sizeEx = 0.03;					
					x =  -0.6;  		// -L/R		ref middle screen 0/0
					y =  0.61;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};	
			
			class pDIRc {			
				idc = 1017;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,1,1,0.3};		
				font = "PuristaLight";			
				sizeEx = 0.03;					
					x =  -0.705;  		// -L/R		ref middle screen 0/0
					y =  0.655;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			
			class rTYPEoff {			
				idc = 1018;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,0,0,0.8};		
				font = "PuristaLight";			
				sizeEx = 0.03;					
					x =  -0.72;  		// -L/R		ref middle screen 0/0
					y =  0.435;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			class rTYPEok {			
				idc = 1019;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {0,1,0,0.6};		
				font = "PuristaLight";			
				sizeEx = 0.03;					
					x =  -0.72;  		// -L/R		ref middle screen 0/0
					y =  0.435;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};	
			
			class rTYPEw1 {			
				idc = 1020;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {0.5,0.5,0,0.7};		
				font = "PuristaLight";			
				sizeEx = 0.03;					
					x =  -0.72;  		// -L/R		ref middle screen 0/0
					y =  0.435;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			class rTYPEw2 {			
				idc = 1021;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,0.5,0,0.7};		
				font = "PuristaLight";			
				sizeEx = 0.03;					
					x =  -0.72;  		// -L/R		ref middle screen 0/0
					y =  0.435;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			class rTYPEw3 {			
				idc = 1022;						
				type = 0;						
				style = 2;						
				text = "";						
				colorBackground[] = {0,0,0,0};	
				colorText[] = {1,0,0,1};		
				font = "PuristaLight";			
				sizeEx = 0.03;					
					x =  -0.72;  		// -L/R		ref middle screen 0/0
					y =  0.435;			// -U/D		ref middle screen 0/0
					h = 1; 
					w = 1 * 3 / 4;
			};
			
			class TANKgfx {			
			idc = 1027;						
			type = 0;						
			style = 2096;						
			text = "";						
			colorBackground[] = {0,0,0,0};	
			colorText[] = {1,1,1,0.2};		
			font = "PuristaLight";			
			sizeEx = 0.05;					
					x =  -0.60;  
					y =  0.596;
					h = 1; 
					w = 1 * 0.745;
			};	
		};
	};




///////////