class CfgGroups {
	class east	{
		class GVAR(opfor) {
			name = QUOTE(Kellerkompanie Moon);
			class Infantry	{
				name = QUOTE(Infantry);
				class GVAR(opfor_ft_1)	{
					name = QUOTE(Garrison Team (StG44/MP40/Panzerschreck));
					faction = QGVAR(opfor);
					side = 0;

					class Unit0	{
						vehicle = QGVAR(opfor_ftl);
						rank = QUOTE(CORPORAL);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1	{
						vehicle = QGVAR(opfor_soldier1);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
					class Unit2 {
						vehicle = QGVAR(opfor_soldier3);
						rank = QUOTE(PRIVATE);
						position[] = {0,-6,0};
						side = 0;
					};
					class Unit3 {
						vehicle = QGVAR(opfor_soldier5);
						rank = QUOTE(PRIVATE);
						position[] = {0,-9,0};
						side = 0;
					};
				};
				class GVAR(opfor_ft_2) {
					name = QUOTE(Garrison Team (MG42/PzF));
					faction = QGVAR(opfor);
					side = 0;

					class Unit0 {
						vehicle = QGVAR(opfor_ftl);
						rank = QUOTE(CORPORAL);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1 {
						vehicle = QGVAR(opfor_soldier4);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
					class Unit2 {
						vehicle = QGVAR(opfor_medic);
						rank = QUOTE(PRIVATE);
						position[] = {0,-6,0};
						side = 0;
					};
					class Unit3	{
						vehicle = QGVAR(opfor_soldier8);
						rank = QUOTE(PRIVATE);
						position[] = {0,-9,0};
						side = 0;
					};
				};
				class GVAR(opfor_ft_3) {
					name = QUOTE(Garrison Team (Panzerschreck/MP40));
					faction = QGVAR(opfor);
					side = 0;

					class Unit0	{
						vehicle = QGVAR(opfor_ftl);
						rank = QUOTE(CORPORAL);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1	{
						vehicle = QGVAR(opfor_soldier6);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
					class Unit2 {
						vehicle = QGVAR(opfor_soldier8);
						rank = QUOTE(PRIVATE);
						position[] = {0,-6,0};
						side = 0;
					};
					class Unit3	{
						vehicle = QGVAR(opfor_soldier3);
						rank = QUOTE(PRIVATE);
						position[] = {0,-9,0};
						side = 0;
					};
				};
				class GVAR(opfor_ft_4)	{
					name = QUOTE(Garrison Team (Flame/MG42/PzF));
					faction = QGVAR(opfor);
					side = 0;

					class Unit0	{
						vehicle = QGVAR(opfor_ftl);
						rank = QUOTE(CORPORAL);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1	{
						vehicle = QGVAR(opfor_soldier7);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
					class Unit2	{
						vehicle = QGVAR(opfor_soldier8);
						rank = QUOTE(PRIVATE);
						position[] = {0,-6,0};
						side = 0;
					};
					class Unit3	{
						vehicle = QGVAR(opfor_soldier4);
						rank = QUOTE(PRIVATE);
						position[] = {0,-9,0};
						side = 0;
					};
				};
				class GVAR(opfor_ft_5) {
					name = QUOTE(Garrison Team (w/ Sniper));
					faction = QGVAR(opfor);
					side = 0;

					class Unit0	{
						vehicle = QGVAR(opfor_ftl);
						rank = QUOTE(CORPORAL);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1	{
						vehicle = QGVAR(opfor_soldier2);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
					class Unit2	{
						vehicle = QGVAR(opfor_soldier4);
						rank = QUOTE(PRIVATE);
						position[] = {0,-6,0};
						side = 0;
					};
					class Unit3	{
						vehicle = QGVAR(opfor_medic);
						rank = QUOTE(PRIVATE);
						position[] = {0,-9,0};
						side = 0;
					};
				};
				class GVAR(opfor_sentry_flak) {
					name = QUOTE(Garrison Sentry FLAK);
					faction = QGVAR(opfor);
					side = 0;

					class Unit0	{
						vehicle = QGVAR(opfor_soldier3);
						rank = QUOTE(CORPORAL);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1	{
						vehicle = QGVAR(opfor_soldier3);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
				};
				class GVAR(opfor_sentry_mg)	{
					name = QUOTE(Garrison Sentry MG);
					faction = QGVAR(opfor);
					side = 0;

					class Unit0	{
						vehicle = QGVAR(opfor_soldier1);
						rank = QUOTE(CORPORAL);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1	{
						vehicle = QGVAR(opfor_soldier4);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
				};
				class GVAR(opfor_squad_1) {
					name = QUOTE(Garrison Group 1 (10));
					faction = QGVAR(opfor);
					side = 0;

					class Unit0	{
						vehicle = QGVAR(opfor_ftl);
						rank = QUOTE(SERGEANT);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1	{
						vehicle = QGVAR(opfor_medic);
						rank = QUOTE(CORPORAL);
						position[] = {3,0,0};
						side = 0;
					};
					class Unit2	{
						vehicle = QGVAR(opfor_soldier1);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
					class Unit3	{
						vehicle = QGVAR(opfor_soldier2);
						rank = QUOTE(PRIVATE);
						position[] = {0,-6,0};
						side = 0;
					};
					class Unit4	{
						vehicle = QGVAR(opfor_soldier3);
						rank = QUOTE(PRIVATE);
						position[] = {0,-9,0};
						side = 0;
					};
					class Unit5	{
						vehicle = QGVAR(opfor_soldier4);
						rank = QUOTE(PRIVATE);
						position[] = {0,-12,0};
						side = 0;
					};
					class Unit6	{
						vehicle = QGVAR(opfor_soldier5);
						rank = QUOTE(PRIVATE);
						position[] = {3,-3,0};
						side = 0;
					};
					class Unit7	{
						vehicle = QGVAR(opfor_soldier6);
						rank = QUOTE(PRIVATE);
						position[] = {3,-6,0};
						side = 0;
					};
					class Unit8	{
						vehicle = QGVAR(opfor_soldier7);
						rank = QUOTE(PRIVATE);
						position[] = {3,-9,0};
						side = 0;
					};
					class Unit9	{
						vehicle = QGVAR(opfor_soldier8);
						rank = QUOTE(PRIVATE);
						position[] = {3,-12,0};
						side = 0;
					};
				};
				class GVAR(opfor_squad_2)
				{
					name = QUOTE(Garrison Group 2 (10));
					faction = QGVAR(opfor);
					side = 0;

					class Unit0
					{
						vehicle = QGVAR(opfor_officer);
						rank = QUOTE(SERGEANT);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_medic);
						rank = QUOTE(CORPORAL);
						position[] = {3,0,0};
						side = 0;
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_ftl);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_soldier7);
						rank = QUOTE(PRIVATE);
						position[] = {0,-6,0};
						side = 0;
					};
					class Unit4
					{
						vehicle = QGVAR(opfor_soldier5);
						rank = QUOTE(PRIVATE);
						position[] = {0,-9,0};
						side = 0;
					};
					class Unit5
					{
						vehicle = QGVAR(opfor_soldier4);
						rank = QUOTE(PRIVATE);
						position[] = {3,-3,0};
						side = 0;
					};
					class Unit6
					{
						vehicle = QGVAR(opfor_soldier2);
						rank = QUOTE(PRIVATE);
						position[] = {3,-6,0};
						side = 0;
					};
					class Unit7
					{
						vehicle = QGVAR(opfor_soldier1);
						rank = QUOTE(PRIVATE);
						position[] = {3,-9,0};
						side = 0;
					};
				};
				class GVAR(opfor_sniper)
				{
					name = QUOTE(Garrison Sniper Team);
					faction = QGVAR(opfor);
					side = 0;

					class Unit0
					{
						vehicle = QGVAR(opfor_soldier2);
						rank = QUOTE(CORPORAL);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_soldier2);
						rank = QUOTE(CORPORAL);
						position[] = {3,0,0};
						side = 0;
					};
				};
				class GVAR(opfor_sentry)
				{
					name = QUOTE(Garrison Sentry);
					faction = QGVAR(opfor);
					side = 0;

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl);
						rank = QUOTE(PRIVATE);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_soldier1);
						rank = QUOTE(PRIVATE);
						position[] = {3,0,0};
						side = 0;
					};
				};










				class GVAR(opfor_ft_1_rs)
				{
					name = QUOTE(Reichswehr Team (StG44/MP40/Panzerschreck));
					faction = QGVAR(opfor);
					side = 0;

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl_rs);
						rank = QUOTE(CORPORAL);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_soldier1_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_soldier3_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-6,0};
						side = 0;
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_soldier5_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-9,0};
						side = 0;
					};
				};
				class GVAR(opfor_ft_2_rs)
				{
					name = QUOTE(Reichswehr Team (MG42/PzF));
					faction = QGVAR(opfor);
					side = 0;

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl_rs);
						rank = QUOTE(CORPORAL);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_soldier4_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_medic_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-6,0};
						side = 0;
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_soldier8_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-9,0};
						side = 0;
					};
				};
				class GVAR(opfor_ft_3_rs)
				{
					name = QUOTE(Reichswehr Team (Panzerschrekc/MP40));
					faction = QGVAR(opfor);
					side = 0;

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl_rs);
						rank = QUOTE(CORPORAL);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_soldier6_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_soldier8_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-6,0};
						side = 0;
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_soldier3_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-9,0};
						side = 0;
					};
				};
				class GVAR(opfor_ft_4_rs)
				{
					name = QUOTE(Reichswehr Team (Flame/MG42/PzF));
					faction = QGVAR(opfor);
					side = 0;

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl_rs);
						rank = QUOTE(CORPORAL);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_soldier7_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_soldier8_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-6,0};
						side = 0;
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_soldier4_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-9,0};
						side = 0;
					};
				};
				class GVAR(opfor_ft_5_rs)
				{
					name = QUOTE(Reichswehr Team (w/ Sniper));
					faction = QGVAR(opfor);
					side = 0;

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl_rs);
						rank = QUOTE(CORPORAL);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_soldier2_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_soldier4_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-6,0};
						side = 0;
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_medic_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-9,0};
						side = 0;
					};
				};
				class GVAR(opfor_sentry_flak_rs)
				{
					name = QUOTE(Reichswehr Sentry FLAK);
					faction = QGVAR(opfor);
					side = 0;

					class Unit0
					{
						vehicle = QGVAR(opfor_soldier3_rs);
						rank = QUOTE(CORPORAL);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_soldier3_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
				};
				class GVAR(opfor_sentry_mg_rs)
				{
					name = QUOTE(Reichswehr Sentry MG);
					faction = QGVAR(opfor);
					side = 0;

					class Unit0
					{
						vehicle = QGVAR(opfor_soldier1_rs);
						rank = QUOTE(CORPORAL);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_soldier4_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
				};
				class GVAR(opfor_squad_1_rs)
				{
					name = QUOTE(Reichswehr Group 1 (10));
					faction = QGVAR(opfor);
					side = 0;

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl_rs);
						rank = QUOTE(SERGEANT);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_medic_rs);
						rank = QUOTE(CORPORAL);
						position[] = {3,0,0};
						side = 0;
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_soldier1_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_soldier2_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-6,0};
						side = 0;
					};
					class Unit4
					{
						vehicle = QGVAR(opfor_soldier3_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-9,0};
						side = 0;
					};
					class Unit5
					{
						vehicle = QGVAR(opfor_soldier4_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-12,0};
						side = 0;
					};
					class Unit6
					{
						vehicle = QGVAR(opfor_soldier5_rs);
						rank = QUOTE(PRIVATE);
						position[] = {3,-3,0};
						side = 0;
					};
					class Unit7
					{
						vehicle = QGVAR(opfor_soldier6_rs);
						rank = QUOTE(PRIVATE);
						position[] = {3,-6,0};
						side = 0;
					};
					class Unit8
					{
						vehicle = QGVAR(opfor_soldier7_rs);
						rank = QUOTE(PRIVATE);
						position[] = {3,-9,0};
						side = 0;
					};
					class Unit9
					{
						vehicle = QGVAR(opfor_soldier8_rs);
						rank = QUOTE(PRIVATE);
						position[] = {3,-12,0};
						side = 0;
					};
				};
				class GVAR(opfor_squad_2_rs)
				{
					name = QUOTE(Reichswehr Group 2 (10));
					faction = QGVAR(opfor);
					side = 0;

					class Unit0
					{
						vehicle = QGVAR(opfor_officer_rs);
						rank = QUOTE(SERGEANT);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_medic_rs);
						rank = QUOTE(CORPORAL);
						position[] = {3,0,0};
						side = 0;
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_ftl_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-3,0};
						side = 0;
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_soldier7_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-6,0};
						side = 0;
					};
					class Unit4
					{
						vehicle = QGVAR(opfor_soldier5_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,-9,0};
						side = 0;
					};
					class Unit5
					{
						vehicle = QGVAR(opfor_soldier4_rs);
						rank = QUOTE(PRIVATE);
						position[] = {3,-3,0};
						side = 0;
					};
					class Unit6
					{
						vehicle = QGVAR(opfor_soldier2_rs);
						rank = QUOTE(PRIVATE);
						position[] = {3,-6,0};
						side = 0;
					};
					class Unit7
					{
						vehicle = QGVAR(opfor_soldier1_rs);
						rank = QUOTE(PRIVATE);
						position[] = {3,-9,0};
						side = 0;
					};
				};
				class GVAR(opfor_sniper_rs)
				{
					name = QUOTE(Reichswehr Sniper Team);
					faction = QGVAR(opfor);
					side = 0;

					class Unit0
					{
						vehicle = QGVAR(opfor_soldier2_rs);
						rank = QUOTE(CORPORAL);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_soldier2_rs);
						rank = QUOTE(CORPORAL);
						position[] = {3,0,0};
						side = 0;
					};
				};
				class GVAR(opfor_sentry_rs)	{
					name = QUOTE(Reichswehr Sentry);
					faction = QGVAR(opfor);
					side = 0;

					class Unit0 {
						vehicle = QGVAR(opfor_ftl_rs);
						rank = QUOTE(PRIVATE);
						position[] = {0,0,0};
						side = 0;
					};
					class Unit1	{
						vehicle = QGVAR(opfor_soldier1_rs);
						rank = QUOTE(PRIVATE);
						position[] = {3,0,0};
						side = 0;
					};
				};
			};
		};
	};
};
