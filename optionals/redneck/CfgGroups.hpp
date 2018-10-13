#define PRIVATE "PRIVATE"
#define CORPORAL "CORPORAL"
#define SERGEANT "SERGEANT"

class CfgGroups
{
	class west
	{
			 class GVAR(blufor)
			 {
						name = "Kellerkompanie Redneck";
						class Infantry
						{
								 name = "Infantry";
								 class GVAR(blufor_ft_1)
								 {
											name = "Team (Grenadier/LMG/AT)";
											faction = QGVAR(blufor);
											side = 1;

											class Unit0
											{
													 vehicle = QGVAR(blufor_ftl);
													 rank = CORPORAL;
													 position[] = {0,0,0};
		 											 side = 1;
											};
											class Unit1
											{
													 vehicle = QGVAR(blufor_grenadier1);
													 rank = PRIVATE;
													 position[] = {0,-3,0};
		 											 side = 1;
											};
											class Unit2
											{
													 vehicle = QGVAR(blufor_minimi);
													 rank = PRIVATE;
													 position[] = {0,-6,0};
		 											 side = 1;
											};
											class Unit3
											{
													 vehicle = QGVAR(blufor_rifleman_at);
													 rank = PRIVATE;
													 position[] = {0,-9,0};
		 											 side = 1;
											};
								 };
								 class GVAR(blufor_ft_2)
								 {
											name = "Team (LMG/Grenadier/Marksman)";
											faction = QGVAR(blufor);
											side = 1;

											class Unit0
											{
													 vehicle = QGVAR(blufor_ftl);
													 rank = CORPORAL;
													 position[] = {0,0,0};
		 											 side = 1;
											};
											class Unit1
											{
													 vehicle = QGVAR(blufor_minimi);
													 rank = PRIVATE;
													 position[] = {0,-3,0};
		 											 side = 1;
											};
											class Unit2
											{
													 vehicle = QGVAR(blufor_grenadier2);
													 rank = PRIVATE;
													 position[] = {0,-6,0};
		 											 side = 1;
											};
											class Unit3
											{
													 vehicle = QGVAR(blufor_marksman);
													 rank = PRIVATE;
													 position[] = {0,-9,0};
		 											 side = 1;
											};
								 };
								 class GVAR(blufor_ft_3)
								 {
											name = "Team (Rifleman/Grenadier/Medic)";
											faction = QGVAR(blufor);
											side = 1;

											class Unit0
											{
													 vehicle = QGVAR(blufor_ftl);
													 rank = CORPORAL;
													 position[] = {0,0,0};
		 											 side = 1;
											};
											class Unit1
											{
													 vehicle = QGVAR(blufor_soldier7);
													 rank = PRIVATE;
													 position[] = {0,-3,0};
		 											 side = 1;
											};
											class Unit2
											{
													 vehicle = QGVAR(blufor_medic);
													 rank = PRIVATE;
													 position[] = {0,-6,0};
		 											 side = 1;
											};
											class Unit3
											{
													 vehicle = QGVAR(blufor_grenadier2);
													 rank = PRIVATE;
													 position[] = {0,-9,0};
		 											 side = 1;
											};
								 };
								 class GVAR(blufor_ft_4)
								 {
											name = "Team (Riflemen)";
											faction = QGVAR(redneck_blufor);
											side = 1;

											class Unit0
											{
													 vehicle = QGVAR(blufor_ftl);
													 rank = CORPORAL;
													 position[] = {0,0,0};
		 											 side = 1;
											};
											class Unit1
											{
													 vehicle = QGVAR(blufor_soldier3);
													 rank = PRIVATE;
													 position[] = {0,-3,0};
		 											 side = 1;
											};
											class Unit2
											{
													 vehicle = QGVAR(blufor_soldier4);
													 rank = PRIVATE;
													 position[] = {0,-6,0};
		 											 side = 1;
											};
											class Unit3
											{
													 vehicle = QGVAR(blufor_soldier5);
													 rank = PRIVATE;
													 position[] = {0,-9,0};
		 											 side = 1;
											};
								 };
								 class GVAR(blufor_ft_5)
								 {
											name = "Team (MMG/AT)";
											faction = QGVAR(blufor);
											side = 1;

											class Unit0
											{
													 vehicle = QGVAR(blufor_ftl);
													 rank = CORPORAL;
													 position[] = {0,0,0};
		 											 side = 1;
											};
											class Unit1
											{
													 vehicle = QGVAR(blufor_m60);
													 rank = PRIVATE;
													 position[] = {0,-3,0};
		 											 side = 1;
											};
											class Unit2
											{
													 vehicle = QGVAR(blufor_rifleman_at);
													 rank = PRIVATE;
													 position[] = {0,-6,0};
		 											 side = 1;
											};
											class Unit3
											{
													 vehicle = QGVAR(blufor_minimi);
													 rank = PRIVATE;
													 position[] = {0,-9,0};
		 											 side = 1;
											};
								 };
								 class GVAR(blufor_ft_6)
								 {
											name = "Team (AT/Rifleman/Medic)";
											faction = QGVAR(blufor);
											side = 1;

											class Unit0
											{
													 vehicle = QGVAR(blufor_ftl);
													 rank = CORPORAL;
													 position[] = {0,0,0};
		 											 side = 1;
											};
											class Unit1
											{
													 vehicle = QGVAR(blufor_rifleman_at);
													 rank = PRIVATE;
													 position[] = {0,-3,0};
		 											 side = 1;
											};
											class Unit2
											{
													 vehicle = QGVAR(blufor_soldier7);
													 rank = PRIVATE;
													 position[] = {0,-6,0};
		 											 side = 1;
											};
											class Unit3
											{
													 vehicle = QGVAR(blufor_medic);
													 rank = PRIVATE;
													 position[] = {0,-9,0};
		 											 side = 1;
											};
								 };
								 class GVAR(blufor_squad_1)
								 {
											name = "Group 1 (10)";
											faction = QGVAR(blufor);
											side = 1;

											class Unit0
											{
													 vehicle = QGVAR(blufor_ftl);
													 rank = SERGEANT;
													 position[] = {0,0,0};
		 											 side = 1;
											};
											class Unit1
											{
													 vehicle = QGVAR(blufor_medic);
													 rank = CORPORAL;
													 position[] = {3,0,0};
		 											 side = 1;
											};
											class Unit2
											{
													 vehicle = QGVAR(blufor_grenadier1);
													 rank = PRIVATE;
													 position[] = {0,-3,0};
		 											 side = 1;
											};
											class Unit3
											{
													 vehicle = QGVAR(blufor_minimi);
													 rank = PRIVATE;
													 position[] = {0,-6,0};
		 											 side = 1;
											};
											class Unit4
											{
													 vehicle = QGVAR(blufor_rifleman_at);
													 rank = PRIVATE;
													 position[] = {0,-9,0};
		 											 side = 1;
											};
											class Unit5
											{
													 vehicle = QGVAR(blufor_soldier3);
													 rank = PRIVATE;
													 position[] = {0,-12,0};
		 											 side = 1;
											};
											class Unit6
											{
													 vehicle = QGVAR(blufor_soldier7);
													 rank = PRIVATE;
													 position[] = {3,-3,0};
		 											 side = 1;
											};
											class Unit7
											{
													 vehicle = QGVAR(blufor_soldier6);
													 rank = PRIVATE;
													 position[] = {3,-6,0};
		 											 side = 1;
											};
											class Unit8
											{
													 vehicle = QGVAR(blufor_soldier1);
													 rank = PRIVATE;
													 position[] = {3,-9,0};
		 											 side = 1;
											};
											class Unit9
											{
													 vehicle = QGVAR(blufor_rifleman_at);
													 rank = PRIVATE;
													 position[] = {3,-12,0};
		 											 side = 1;
											};
								 };
								 class GVAR(blufor_squad_2)
								 {
											name = "Group 2 (10)";
											faction = QGVAR(blufor);
											side = 1;

											class Unit0
											{
													 vehicle = QGVAR(blufor_ftl);
													 rank = SERGEANT;
													 position[] = {0,0,0};
		 											 side = 1;
											};
											class Unit1
											{
													 vehicle = QGVAR(blufor_medic);
													 rank = CORPORAL;
													 position[] = {3,0,0};
		 											 side = 1;
											};
											class Unit2
											{
													 vehicle = QGVAR(blufor_minimi);
													 rank = PRIVATE;
													 position[] = {0,-3,0};
		 											 side = 1;
											};
											class Unit3
											{
													 vehicle = QGVAR(blufor_marksman);
													 rank = PRIVATE;
													 position[] = {0,-6,0};
		 											 side = 1;
											};
											class Unit4
											{
													 vehicle = QGVAR(blufor_rifleman_at);
													 rank = PRIVATE;
													 position[] = {0,-9,0};
		 											 side = 1;
											};
											class Unit5
											{
													 vehicle = QGVAR(blufor_grenadier1);
													 rank = PRIVATE;
													 position[] = {3,-3,0};
		 											 side = 1;
											};
											class Unit6
											{
													 vehicle = QGVAR(blufor_soldier5);
													 rank = PRIVATE;
													 position[] = {3,-6,0};
		 											 side = 1;
											};
											class Unit7
											{
													 vehicle = QGVAR(blufor_soldier4);
													 rank = PRIVATE;
													 position[] = {3,-9,0};
		 											 side = 1;
											};
								 };
								 class GVAR(blufor_squad_3)
								 {
											name = "Group 3 (8)";
											faction = QGVAR(blufor);
											side = 1;

											class Unit0
											{
													 vehicle = QGVAR(blufor_ftl);
													 rank = SERGEANT;
													 position[] = {0,0,0};
		 											 side = 1;
											};
											class Unit1
											{
													 vehicle = QGVAR(blufor_medic);
													 rank = CORPORAL;
													 position[] = {3,0,0};
		 											 side = 1;
											};
											class Unit2
											{
													 vehicle = QGVAR(blufor_minimi);
													 rank = PRIVATE;
													 position[] = {0,-3,0};
		 											 side = 1;
											};
											class Unit3
											{
													 vehicle = QGVAR(blufor_rifleman_at);
													 rank = PRIVATE;
													 position[] = {0,-6,0};
		 											 side = 1;
											};
											class Unit4
											{
													 vehicle = QGVAR(blufor_grenadier1);
													 rank = PRIVATE;
													 position[] = {0,-9,0};
		 											 side = 1;
											};
											class Unit5
											{
													 vehicle = QGVAR(blufor_soldier3);
													 rank = PRIVATE;
													 position[] = {3,-3,0};
		 											 side = 1;
											};
											class Unit6
											{
													 vehicle = QGVAR(blufor_soldier1);
													 rank = CORPORAL;
													 position[] = {3,-6,0};
		 											 side = 1;
											};
											class Unit7
											{
													 vehicle = QGVAR(blufor_marksman);
													 rank = PRIVATE;
													 position[] = {3,-9,0};
		 											 side = 1;
											};
								 };
								 class GVAR(blufor_sniper)
								 {
											name = "Sniper Team";
											faction = QGVAR(blufor);
											side = 1;

											class Unit0
											{
													 vehicle = QGVAR(blufor_sniper);
													 rank = CORPORAL;
													 position[] = {0,0,0};
		 											 side = 1;
											};
											class Unit1
											{
													 vehicle = QGVAR(blufor_sniper_sws);
													 rank = CORPORAL;
													 position[] = {3,0,0};
		 											 side = 1;
											};
								 };
								 class GVAR(blufor_sentry)
								 {
											name = "Sentry";
											faction = QGVAR(blufor);
											side = 1;

											class Unit0
											{
													 vehicle = QGVAR(blufor_grenadier1);
													 rank = PRIVATE;
													 position[] = {0,0,0};
		 											 side = 1;
											};
											class Unit1
											{
													 vehicle = QGVAR(blufor_minimi);
													 rank = PRIVATE;
													 position[] = {3,0,0};
		 											 side = 1;
											};
								 };
						};
			 };
	};








	class east
	{
		class GVAR(opfor)
		{
			name = "Kellerkompanie Redneck";
			class Infantry
			{
				name = "Infantry";
				class GVAR(opfor_ft_1)
				{
					name = "Team (Grenadier/LMG/AT)";

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl);
						rank = CORPORAL;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_grenadier1);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_minimi);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_rifleman_at);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
				};
				class GVAR(opfor_ft_2)
				{
					name = "Team (LMG/Grenadier/Marksman)";

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl);
						rank = CORPORAL;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_minimi);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_grenadier2);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_marksman);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
				};
				class GVAR(opfor_ft_3)
				{
					name = "Team (Rifleman/Grenadier/Medic)";

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl);
						rank = CORPORAL;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_soldier7);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_medic);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_grenadier2);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
				};
				class GVAR(opfor_ft_4)
				{
					name = "Team (Riflemen)";

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl);
						rank = CORPORAL;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_soldier3);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_soldier4);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_soldier5);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
				};
				class GVAR(opfor_ft_5)
				{
					name = "Team (MMG/AT)";

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl);
						rank = CORPORAL;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_m60);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_rifleman_at);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_minimi);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
				};
				class GVAR(opfor_ft_6)
				{
					name = "Team (AT/Rifleman/Medic)";

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl);
						rank = CORPORAL;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_rifleman_at);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_soldier7);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_medic);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
				};
				class GVAR(opfor_squad_1)
				{
					name = "Group 1 (10)";

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl);
						rank = SERGEANT;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_medic);
						rank = CORPORAL;
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_grenadier1);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_minimi);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(opfor_rifleman_at);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(opfor_soldier3);
						rank = PRIVATE;
						position[] = {0,-12,0};
					};
					class Unit6
					{
						vehicle = QGVAR(opfor_soldier7);
						rank = PRIVATE;
						position[] = {3,-3,0};
					};
					class Unit7
					{
						vehicle = QGVAR(opfor_soldier6);
						rank = PRIVATE;
						position[] = {3,-6,0};
					};
					class Unit8
					{
						vehicle = QGVAR(opfor_soldier1);
						rank = PRIVATE;
						position[] = {3,-9,0};
					};
					class Unit9
					{
						vehicle = QGVAR(opfor_rifleman_at);
						rank = PRIVATE;
						position[] = {3,-12,0};
					};
				};
				class GVAR(opfor_squad_2)
				{
					name = "Group 2 (10)";

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl);
						rank = SERGEANT;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_medic);
						rank = CORPORAL;
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_minimi);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_marksman);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(opfor_rifleman_at);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(opfor_grenadier1);
						rank = PRIVATE;
						position[] = {3,-3,0};
					};
					class Unit6
					{
						vehicle = QGVAR(opfor_soldier5);
						rank = PRIVATE;
						position[] = {3,-6,0};
					};
					class Unit7
					{
						vehicle = QGVAR(opfor_soldier4);
						rank = PRIVATE;
						position[] = {3,-9,0};
					};
				};
				class GVAR(opfor_squad_3)
				{
					name = "Group 3 (8)";

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl);
						rank = SERGEANT;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_medic);
						rank = CORPORAL;
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_minimi);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_rifleman_at);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(opfor_grenadier1);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(opfor_soldier3);
						rank = PRIVATE;
						position[] = {3,-3,0};
					};
					class Unit6
					{
						vehicle = QGVAR(opfor_soldier1);
						rank = CORPORAL;
						position[] = {3,-6,0};
					};
					class Unit7
					{
						vehicle = QGVAR(opfor_marksman);
						rank = PRIVATE;
						position[] = {3,-9,0};
					};
				};
				class GVAR(opfor_sniper)
				{
					name = "Sniper Team";

					class Unit0
					{
						vehicle = QGVAR(opfor_sniper);
						rank = CORPORAL;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_sniper_sws);
						rank = CORPORAL;
						position[] = {3,0,0};
					};
				};
				class GVAR(opfor_sentry)
				{
					name = "Sentry";

					class Unit0
					{
						vehicle = QGVAR(opfor_grenadier1);
						rank = PRIVATE;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_minimi);
						rank = PRIVATE;
						position[] = {3,0,0};
					};
				};
			};
		};
	};

	class indep
	{
		class GVAR(indfor)
		{
			name = "Kellerkompanie Redneck";
			class Infantry
			{
				name = "Infantry";
				class GVAR(indfor_ft_1)
				{
					name = "Team (Grenadier/LMG/AT)";

					class Unit0
					{
						vehicle = QGVAR(indfor_ftl);
						rank = CORPORAL;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_grenadier1);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_minimi);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_rifleman_at);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
				};
				class GVAR(indfor_ft_2)
				{
					name = "Team (LMG/Grenadier/Marksman)";

					class Unit0
					{
						vehicle = QGVAR(indfor_ftl);
						rank = CORPORAL;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_minimi);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_grenadier2);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_marksman);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
				};
				class GVAR(indfor_ft_3)
				{
					name = "Team (Rifleman/Grenadier/Medic)";

					class Unit0
					{
						vehicle = QGVAR(indfor_ftl);
						rank = CORPORAL;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_soldier7);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_medic);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_grenadier2);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
				};
				class GVAR(indfor_ft_4)
				{
					name = "Team (Riflemen)";

					class Unit0
					{
						vehicle = QGVAR(indfor_ftl);
						rank = CORPORAL;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_soldier3);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_soldier4);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_soldier5);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
				};
				class GVAR(indfor_ft_5)
				{
					name = "Team (MMG/AT)";

					class Unit0
					{
						vehicle = QGVAR(indfor_ftl);
						rank = CORPORAL;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_m60);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_rifleman_at);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_minimi);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
				};
				class GVAR(indfor_ft_6)
				{
					name = "Team (AT/Rifleman/Medic)";

					class Unit0
					{
						vehicle = QGVAR(indfor_ftl);
						rank = CORPORAL;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_rifleman_at);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_soldier7);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_medic);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
				};
				class GVAR(indfor_squad_1)
				{
					name = "Group 1 (10)";

					class Unit0
					{
						vehicle = QGVAR(indfor_ftl);
						rank = SERGEANT;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_medic);
						rank = CORPORAL;
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_grenadier1);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_minimi);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(indfor_rifleman_at);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(indfor_soldier3);
						rank = PRIVATE;
						position[] = {0,-12,0};
					};
					class Unit6
					{
						vehicle = QGVAR(indfor_soldier7);
						rank = PRIVATE;
						position[] = {3,-3,0};
					};
					class Unit7
					{
						vehicle = QGVAR(indfor_soldier6);
						rank = PRIVATE;
						position[] = {3,-6,0};
					};
					class Unit8
					{
						vehicle = QGVAR(indfor_soldier1);
						rank = PRIVATE;
						position[] = {3,-9,0};
					};
					class Unit9
					{
						vehicle = QGVAR(indfor_rifleman_at);
						rank = PRIVATE;
						position[] = {3,-12,0};
					};
				};
				class GVAR(indfor_squad_2)
				{
					name = "Group 2 (10)";

					class Unit0
					{
						vehicle = QGVAR(indfor_ftl);
						rank = SERGEANT;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_medic);
						rank = CORPORAL;
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_minimi);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_marksman);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(indfor_rifleman_at);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(indfor_grenadier1);
						rank = PRIVATE;
						position[] = {3,-3,0};
					};
					class Unit6
					{
						vehicle = QGVAR(indfor_soldier5);
						rank = PRIVATE;
						position[] = {3,-6,0};
					};
					class Unit7
					{
						vehicle = QGVAR(indfor_soldier4);
						rank = PRIVATE;
						position[] = {3,-9,0};
					};
				};
				class GVAR(indfor_squad_3)
				{
					name = "Group 3 (8)";

					class Unit0
					{
						vehicle = QGVAR(indfor_ftl);
						rank = SERGEANT;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_medic);
						rank = CORPORAL;
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_minimi);
						rank = PRIVATE;
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_rifleman_at);
						rank = PRIVATE;
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(indfor_grenadier1);
						rank = PRIVATE;
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(indfor_soldier3);
						rank = PRIVATE;
						position[] = {3,-3,0};
					};
					class Unit6
					{
						vehicle = QGVAR(indfor_soldier1);
						rank = CORPORAL;
						position[] = {3,-6,0};
					};
					class Unit7
					{
						vehicle = QGVAR(indfor_marksman);
						rank = PRIVATE;
						position[] = {3,-9,0};
					};
				};
				class GVAR(indfor_sniper)
				{
					name = "Sniper Team";

					class Unit0
					{
						vehicle = QGVAR(indfor_sniper);
						rank = CORPORAL;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_sniper_sws);
						rank = CORPORAL;
						position[] = {3,0,0};
					};
				};
				class GVAR(indfor_sentry)
				{
					name = "Sentry";

					class Unit0
					{
						vehicle = QGVAR(indfor_grenadier1);
						rank = PRIVATE;
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_minimi);
						rank = PRIVATE;
						position[] = {3,0,0};
					};
				};
			};
		};
	};
};
