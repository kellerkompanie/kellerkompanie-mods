class CfgVehicles {
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription
		{
			class AnyPlayer;
		};
	};
	class ModulePostprocess_F: Module_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="ModulePostprocess_F";
		scope=2;
		scopeCurator=2;
		isTriggerActivated=1;
		category="Environment";
		displayName="$STR_A3_CfgVehicles_ModulePostprocess_F";
		function="BIS_fnc_modulePostprocess";
		icon="\a3\Modules_F_Curator\Data\iconPostprocess_ca.paa";
		portrait="\a3\Modules_F_Curator\Data\portraitPostprocess_ca.paa";
		curatorInfoType="RscDisplayAttributesModulePostprocess";
		class Arguments
		{
			class Template
			{
				displayName="$STR_A3_CfgVehicles_ModulePostprocess_F_Arguments_Template";
				description="";
				class Values
				{
					class Default
					{
						name="$STR_A3_CfgPostProcessTemplates_Default_0";
						value="Default";
						default=1;
					};
					class Survive
					{
						name="$STR_A3_CfgPostProcessTemplates_Survive_0";
						value="Survive";
						default=0;
					};
					class RealIsBrown
					{
						name="$STR_A3_CfgPostProcessTemplates_RealIsBrown_0";
						value="RealIsBrown";
						default=0;
					};
					class BlackAndWhite
					{
						name="$STR_A3_CfgPostProcessTemplates_BlackAndWhite_0";
						value="BlackAndWhite";
						default=0;
					};
					class Mediterranean
					{
						name="$STR_A3_CfgPostProcessTemplates_Mediterranean_0";
						value="Mediterranean";
						default=0;
					};
					class ASCZ_MiddleEast
					{
						name="Middle East";
						value="ASCZ_Takistan";
						default=0;
					};
					class ASCZ_RealIsBrownLight
					{
						name="Real Is Brown 2";
						value="ASCZ_RealIsBrownLight";
						default=0;
					};
					class ASCZ_Nightstalkers
					{
						name="Nightstalkers";
						value="ASCZ_Nightstalkers";
						default=0;
					};
					class ASCZ_GrayTone
					{
						name="Gray Tone";
						value="ASCZ_GrayTone";
						default=0;
					};
					class ASCZ_ColdTone
					{
						name="Cold Tone";
						value="ASCZ_ColdTone";
						default=0;
					};

					class ASCZ_WarmTone {
						name = "Warm Tone";
						value = "ASCZ_WarmTone";
						default = 0;
					};

					class ASCZ_CinimaticRed {
						name = "Cinimatic Red";
						value = "ASCZ_CinimaticRed";
						default = 0;
					};

					class ASCZ_CinimaticBlue {
						name = "Cinimatic Blue";
						value = "ASCZ_CinimaticBlue";
						default = 0;
					};

					class ASCZ_CinimaticGreen {
						name = "Cinimatic Green";
						value = "ASCZ_CinimaticGreen";
						default = 0;
					};

					class ASCZ_Sunset {
						name = "Perfect Sunset";
						value = "ASCZ_Sunset";
						default = 0;
					};

					class ASCZ_Light {
						name = "Pure Light";
						value = "ASCZ_Light";
						default = 0;
					};

					class ASCZ_Green {
						name = "Slightly Green";
						value = "ASCZ_Green";
						default = 0;
					};

					class ASCZ_Woodland {
						name = "Woodland";
						value = "ASCZ_Woodland";
						default = 0;
					};

					class ASCZ_Harvest {
						name = "Golden Harvest";
						value = "ASCZ_Harvest";
						default = 0;
					};

					class ASCZ_Shores {
						name = "Sunny Shores";
						value = "ASCZ_Shores";
						default = 0;
					};

					class ASCZ_Mediterranean {
						name = "Real Mediterranean";
						value = "ASCZ_Mediterranean";
						default = 0;
					};

					class ASCZ_Wasteland {
						name = "Wasteland";
						value = "ASCZ_Wasteland";
						default = 0;
					};

					class ASCZ_Mountains{
						name = "Middle East Mountains";
						value = "ASCZ_Mountains";
						default = 0;
					};

					class ASCZ_IslandVacation{
						name = "Island Vacation";
						value = "ASCZ_IslandVacation";
						default = 0;
					};

					class ASCZ_Summer{
						name = "Summer Dreams";
						value = "ASCZ_Summer";
						default = 0;
					};

					class ASCZ_BackStab{
						name = "(Operation Arrowhead) Back Stab";
						value = "ASCZ_BackStab";
						default = 0;
					};

					class ASCZ_Takistan{
						name = "(Operation Arrowhead) Good Morning Takistan";
						value = "ASCZ_Takistan";
						default = 0;
					};

					class ASCZ_SandStorm{
						name = "(Operation Arrowhead) Sand Storm";
						value = "ASCZ_SandStorm";
						default = 0;
					};

					class ASCZ_FinishingTouch{
						name = "(Operation Arrowhead) Finishing Touch";
						value = "ASCZ_FinishingTouch";
						default = 0;
					};

					class ASCZ_Spero{
						name = "(Operation Arrowhead) Dum Spiro Spero";
						value = "ASCZ_Spero";
						default = 0;
					};

					class ASCZ_Jackal{
						name = "(Operation Arrowhead) Jackal";
						value = "ASCZ_Jackal";
						default = 0;
					};

					class ASCZ_OneShot{
						name = "(Operation Arrowhead) One Shot One Kill";
						value = "ASCZ_OneShot";
						default = 0;
					};

					class ASCZ_Contrasted{
						name = "Contrasted";
						value = "Contrasted";
						default = 0;
					};

					class ASCZ_NightEffects1{
						name = "Night Filter 1";
						value = "NightEffects1";
						default = 0;
					};

					class ASCZ_NightEffects2{
						name = "Night Filter 2";
						value = "NightEffects2";
						default = 0;
					};

					class ASCZ_NightEffects3{
						name = "Night Filter 3";
						value = "NightEffects3";
						default = 0;
					};

					class ASCZ_Movie1{
						name = "Movie Effect 1";
						value = "ASCZ_Movie1";
						default = 0;
					};

					class ASCZ_Movie2{
						name = "Movie Effect 2";
						value = "ASCZ_Movie2";
						default = 0;
					};

					class ASCZ_Movie3{
						name = "Movie Effect 3";
						value = "ASCZ_Movie3";
						default = 0;
					};

					class ASCZ_Movie4{
						name = "Movie Effect 4";
						value = "ASCZ_Movie4";
						default = 0;
					};

					class ASCZ_Movie5{
						name = "Movie Effect 5";
						value = "ASCZ_Movie5";
						default = 0;
					};

					class ASCZ_Movie6{
						name = "Movie Effect 6";
						value = "ASCZ_Movie6";
						default = 0;
					};

					class ASCZ_Movie7{
						name = "Movie Effect 7";
						value = "ASCZ_Movie7";
						default = 0;
					};

					class ASCZ_Movie8{
						name = "Movie Effect 8";
						value = "ASCZ_Movie8";
						default = 0;
					};


				};
			};
		};
	};
};
