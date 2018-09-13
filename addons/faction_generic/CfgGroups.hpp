class CfgGroups
{
	class west
	{
		class GVAR(blufor)
		{
			name = "Kellerkompanie BLUFOR";
			class Infantry
			{
				name = "Infantry";
				class GVAR(blufor_ft_1)
				{
					name = "Fire Team (Grenadier/LMG/AT)";

					class Unit0
					{
						vehicle = QGVAR(blufor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_grenadier);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_lmg);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(blufor_rifleman_at);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(blufor_ft_2)
				{
					name = "Fire Team (LMG/LMG Asst./Marksman)";

					class Unit0
					{
						vehicle = QGVAR(blufor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_lmg);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_lmg_asst);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(blufor_marksman);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(blufor_ft_3)
				{
					name = "Fire Team (AT)";

					class Unit0
					{
						vehicle = QGVAR(blufor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_at);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_at);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(blufor_at_asst);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(blufor_ft_4)
				{
					name = "Fire Team (AA)";

					class Unit0
					{
						vehicle = QGVAR(blufor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_aa);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_aa);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(blufor_aa_asst);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(blufor_ft_5)
				{
					name = "Fire Team (MMG)";

					class Unit0
					{
						vehicle = QGVAR(blufor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_mmg);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_mmg);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(blufor_mmg_asst);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(blufor_ft_6)
				{
					name = "Fire Team (Support)";

					class Unit0
					{
						vehicle = QGVAR(blufor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_eod);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_engineer);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(blufor_uav);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(blufor_ft_7)
				{
					name = "Fire Team (Logistics)";

					class Unit0
					{
						vehicle = QGVAR(blufor_engineer);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_engineer);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_engineer);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(blufor_engineer);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(blufor_ft_8)
				{
					name = "Fire Team (EOD)";

					class Unit0
					{
						vehicle = QGVAR(blufor_eod);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_eod);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_eod);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(blufor_eod);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(blufor_medics)
				{
					name = "Medical Team";

					class Unit0
					{
						vehicle = QGVAR(blufor_doctor);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_medic);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_medic);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(blufor_medic);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(blufor_squad_1)
				{
					name = "Squad";

					class Unit0
					{
						vehicle = QGVAR(blufor_sql);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_medic);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_ftl);
						rank = "CORPORAL";
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(blufor_grenadier);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(blufor_lmg);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(blufor_rifleman_at);
						rank = "PRIVATE";
						position[] = {0,-12,0};
					};
					class Unit6
					{
						vehicle = QGVAR(blufor_ftl);
						rank = "CORPORAL";
						position[] = {3,-3,0};
					};
					class Unit7
					{
						vehicle = QGVAR(blufor_grenadier);
						rank = "PRIVATE";
						position[] = {3,-6,0};
					};
					class Unit8
					{
						vehicle = QGVAR(blufor_lmg)
						rank = "PRIVATE";
						position[] = {3,-9,0};
					};
					class Unit9
					{
						vehicle = QGVAR(blufor_rifleman_at);
						rank = "PRIVATE";
						position[] = {3,-12,0};
					};
				};
				class GVAR(blufor_squad_2)
				{
					name = "Squad (MMG)";

					class Unit0
					{
						vehicle = QGVAR(blufor_sql);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_medic);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_mmg);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(blufor_mmg_asst);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(blufor_mmg);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(blufor_mmg_asst);
						rank = "PRIVATE";
						position[] = {3,-3,0};
					};
					class Unit6
					{
						vehicle = QGVAR(blufor_mmg);
						rank = "CORPORAL";
						position[] = {3,-6,0};
					};
					class Unit7
					{
						vehicle = QGVAR(blufor_mmg_asst);
						rank = "PRIVATE";
						position[] = {3,-9,0};
					};
				};
				class GVAR(blufor_squad_3)
				{
					name = "Squad (AT/AA)";

					class Unit0
					{
						vehicle = QGVAR(blufor_sql);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_medic);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_at);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(blufor_at_asst);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(blufor_at);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(blufor_at_asst);
						rank = "PRIVATE";
						position[] = {3,-3,0};
					};
					class Unit6
					{
						vehicle = QGVAR(blufor_aa);
						rank = "CORPORAL";
						position[] = {3,-6,0};
					};
					class Unit7
					{
						vehicle = QGVAR(blufor_aa_asst);
						rank = "PRIVATE";
						position[] = {3,-9,0};
					};
				};
				class GVAR(blufor_squad_4)
				{
					name = "Squad (no AT)";

					class Unit0
					{
						vehicle = QGVAR(blufor_sql);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_medic);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_ftl);
						rank = "CORPORAL";
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(blufor_grenadier);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(blufor_lmg);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(blufor_lmg_asst);
						rank = "PRIVATE";
						position[] = {0,-12,0};
					};
					class Unit6
					{
						vehicle = QGVAR(blufor_ftl);
						rank = "CORPORAL";
						position[] = {3,-3,0};
					};
					class Unit7
					{
						vehicle = QGVAR(blufor_grenadier);
						rank = "PRIVATE";
						position[] = {3,-6,0};
					};
					class Unit8
					{
						vehicle = QGVAR(blufor_lmg);
						rank = "PRIVATE";
						position[] = {3,-9,0};
					};
					class Unit9
					{
						vehicle = QGVAR(blufor_lmg_asst);
						rank = "PRIVATE";
						position[] = {3,-12,0};
					};
				};
				class GVAR(blufor_vehicle_crew)
				{
					name = "Vehicle Crew";

					class Unit0
					{
						vehicle = QGVAR(blufor_sql);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_engineer);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_engineer);
						rank = "CORPORAL";
						position[] = {6,0,0};
					};
				};
				class GVAR(blufor_heli_crew)
				{
					name = "Helicopter Crew";

					class Unit0
					{
						vehicle = QGVAR(blufor_heli_pilot);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_heli_pilot);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
				class GVAR(blufor_lead)
				{
					name = "Lead Element";

					class Unit0
					{
						vehicle = QGVAR(blufor_lead);
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_sergeant);
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_doctor);
						rank = "SERGEANT";
						position[] = {6,0,0};
					};
				};
				class GVAR(blufor_zeus)
				{
					name = "Zeus";

					class Unit0
					{
						vehicle = QGVAR(blufor_command);
						rank = "COLONEL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_command);
						rank = "COLONEL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_command);
						rank = "COLONEL";
						position[] = {6,0,0};
					};
				};
				class GVAR(blufor_heli_crew_doorgunner)
				{
					name = "Helicopter Crew (with Gunners)";

					class Unit0
					{
						vehicle = QGVAR(blufor_heli_pilot);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_heli_pilot);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(blufor_heli_crew);
						rank = "PRIVATE";
						position[] = {0,3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(blufor_heli_crew);
						rank = "PRIVATE";
						position[] = {3,3,0};
					};
				};
				class GVAR(blufor_sniper)
				{
					name = "Sniper Team";

					class Unit0
					{
						vehicle = QGVAR(blufor_sniper);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_spotter);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
				class GVAR(blufor_uav)
				{
					name = "UAV Team";

					class Unit0
					{
						vehicle = QGVAR(blufor_uav);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(blufor_engineer);
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
			};
		};
	};


	class east
	{
		class GVAR(opfor)
		{
			name = "Kellerkompanie OPFOR";
			class Infantry
			{
				name = "Infantry";
				class GVAR(opfor_ft_1)
				{
					name = "Fire Team (Grenadier/LMG/AT)";

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_grenadier);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_lmg);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_rifleman_at);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(opfor_ft_2)
				{
					name = "Fire Team (LMG/LMG Asst./Marksman)";

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_lmg);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_lmg_asst);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_marksman);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(opfor_ft_3)
				{
					name = "Fire Team (AT)";

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_rifleman_at);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_at);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_at_asst);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(opfor_ft_4)
				{
					name = "Fire Team (AA)";

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_rifleman_at);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_aa);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_aa_asst);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(opfor_ft_5)
				{
					name = "Fire Team (MMG)";

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_mmg);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_mmg);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_mmg_asst);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(opfor_ft_6)
				{
					name = "Fire Team (Support)";

					class Unit0
					{
						vehicle = QGVAR(opfor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_eod);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_engineer);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_uav);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(opfor_ft_7)
				{
					name = "Fire Team (Logistics)";

					class Unit0
					{
						vehicle = QGVAR(opfor_engineer);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_engineer);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_engineer);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_engineer);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(opfor_ft_8)
				{
					name = "Fire Team (EOD)";

					class Unit0
					{
						vehicle = QGVAR(opfor_eod);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_eod);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_eod);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_eod);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(opfor_medics)
				{
					name = "Medical Team";

					class Unit0
					{
						vehicle = QGVAR(opfor_doctor);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_medic);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_medic);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_medic);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(opfor_squad_1)
				{
					name = "Squad";

					class Unit0
					{
						vehicle = QGVAR(opfor_sql);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_medic);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_ftl);
						rank = "CORPORAL";
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_grenadier);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(opfor_lmg);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(opfor_rifleman_at);
						rank = "PRIVATE";
						position[] = {0,-12,0};
					};
					class Unit6
					{
						vehicle = QGVAR(opfor_ftl);
						rank = "CORPORAL";
						position[] = {3,-3,0};
					};
					class Unit7
					{
						vehicle = QGVAR(opfor_grenadier);
						rank = "PRIVATE";
						position[] = {3,-6,0};
					};
					class Unit8
					{
						vehicle = QGVAR(opfor_lmg);
						rank = "PRIVATE";
						position[] = {3,-9,0};
					};
					class Unit9
					{
						vehicle = QGVAR(opfor_rifleman_at);
						rank = "PRIVATE";
						position[] = {3,-12,0};
					};
				};
				class GVAR(opfor_squad_2)
				{
					name = "Squad (MMG)";

					class Unit0
					{
						vehicle = QGVAR(opfor_sql);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_medic);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_mmg);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_mmg_asst);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(opfor_mmg);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(opfor_mmg_asst);
						rank = "PRIVATE";
						position[] = {3,-3,0};
					};
					class Unit6
					{
						vehicle = QGVAR(opfor_mmg);
						rank = "CORPORAL";
						position[] = {3,-6,0};
					};
					class Unit7
					{
						vehicle = QGVAR(opfor_mmg_asst);
						rank = "PRIVATE";
						position[] = {3,-9,0};
					};
				};
				class GVAR(opfor_squad_3)
				{
					name = "Squad (AT/AA)";

					class Unit0
					{
						vehicle = QGVAR(opfor_sql);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_medic);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_at);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_at_asst);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(opfor_at);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(opfor_at_asst);
						rank = "PRIVATE";
						position[] = {3,-3,0};
					};
					class Unit6
					{
						vehicle = QGVAR(opfor_aa);
						rank = "CORPORAL";
						position[] = {3,-6,0};
					};
					class Unit7
					{
						vehicle = QGVAR(opfor_aa_asst);
						rank = "PRIVATE";
						position[] = {3,-9,0};
					};
				};
				class GVAR(opfor_squad_4)
				{
					name = "Squad (no AT)";

					class Unit0
					{
						vehicle = QGVAR(opfor_sql);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_medic);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_ftl);
						rank = "CORPORAL";
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_grenadier);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(opfor_lmg);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(opfor_lmg_asst);
						rank = "PRIVATE";
						position[] = {0,-12,0};
					};
					class Unit6
					{
						vehicle = QGVAR(opfor_ftl);
						rank = "CORPORAL";
						position[] = {3,-3,0};
					};
					class Unit7
					{
						vehicle = QGVAR(opfor_grenadier);
						rank = "PRIVATE";
						position[] = {3,-6,0};
					};
					class Unit8
					{
						vehicle = QGVAR(opfor_lmg);
						rank = "PRIVATE";
						position[] = {3,-9,0};
					};
					class Unit9
					{
						vehicle = QGVAR(opfor_lmg_asst);
						rank = "PRIVATE";
						position[] = {3,-12,0};
					};
				};
				class GVAR(opfor_vehicle_crew)
				{
					name = "Vehicle Crew";

					class Unit0
					{
						vehicle = QGVAR(opfor_sql);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_engineer);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_engineer);
						rank = "CORPORAL";
						position[] = {6,0,0};
					};
				};
				class GVAR(opfor_heli_crew)
				{
					name = "Helicopter Crew";

					class Unit0
					{
						vehicle = QGVAR(opfor_heli_pilot);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_heli_pilot);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
				class GVAR(opfor_lead)
				{
					name = "Lead Element";

					class Unit0
					{
						vehicle = QGVAR(opfor_lead);
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_sergeant);
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_doctor);
						rank = "SERGEANT";
						position[] = {6,0,0};
					};
				};
				class GVAR(opfor_zeus)
				{
					name = "Zeus";

					class Unit0
					{
						vehicle = QGVAR(opfor_command);
						rank = "COLONEL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_command);
						rank = "COLONEL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_command);
						rank = "COLONEL";
						position[] = {6,0,0};
					};
				};
				class GVAR(opfor_heli_crew_doorgunner)
				{
					name = "Helicopter Crew (with Gunners)";

					class Unit0
					{
						vehicle = QGVAR(opfor_heli_pilot);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_heli_pilot);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(opfor_heli_crew);
						rank = "PRIVATE";
						position[] = {0,3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(opfor_heli_crew);
						rank = "PRIVATE";
						position[] = {3,3,0};
					};
				};
				class GVAR(opfor_sniper)
				{
					name = "Sniper Team";

					class Unit0
					{
						vehicle = QGVAR(opfor_sniper);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_spotter);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
				class GVAR(opfor_uav)
				{
					name = "UAV Team";

					class Unit0
					{
						vehicle = QGVAR(opfor_uav);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(opfor_engineer);
						rank = "PRIVATE";
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
			name = "Kellerkompanie INDFOR";
			class Infantry
			{
				name = "Infantry";
				class GVAR(indfor_ft_1)
				{
					name = "Fire Team (Grenadier/LMG/AT)";

					class Unit0
					{
						vehicle = QGVAR(indfor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_grenadier);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_lmg);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_rifleman_at);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(indfor_ft_2)
				{
					name = "Fire Team (LMG/LMG Asst./Marksman)";

					class Unit0
					{
						vehicle = QGVAR(indfor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_lmg);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_lmg_asst);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_marksman);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(indfor_ft_3)
				{
					name = "Fire Team (AT)";

					class Unit0
					{
						vehicle = QGVAR(indfor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_rifleman_at);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_at);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_at_asst);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(indfor_ft_4)
				{
					name = "Fire Team (AA)";

					class Unit0
					{
						vehicle = QGVAR(indfor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_rifleman_at);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_aa);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_aa_asst);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(indfor_ft_5)
				{
					name = "Fire Team (MMG)";

					class Unit0
					{
						vehicle = QGVAR(indfor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_mmg);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_mmg);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_mmg_asst);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(indfor_ft_6)
				{
					name = "Fire Team (Support)";

					class Unit0
					{
						vehicle = QGVAR(indfor_ftl);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_eod);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_engineer);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_uav);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(indfor_ft_7)
				{
					name = "Fire Team (Logistics)";

					class Unit0
					{
						vehicle = QGVAR(indfor_engineer);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_engineer);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_engineer);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_engineer);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(indfor_ft_8)
				{
					name = "Fire Team (EOD)";

					class Unit0
					{
						vehicle = QGVAR(indfor_eod);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_eod);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_eod);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_eod);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(indfor_medics)
				{
					name = "Medical Team";

					class Unit0
					{
						vehicle = QGVAR(indfor_doctor);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_medic);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_medic);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_medic);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
				};
				class GVAR(indfor_squad_1)
				{
					name = "Squad";

					class Unit0
					{
						vehicle = QGVAR(indfor_sql);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_medic);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_ftl);
						rank = "CORPORAL";
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_grenadier);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(indfor_lmg);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(indfor_rifleman_at);
						rank = "PRIVATE";
						position[] = {0,-12,0};
					};
					class Unit6
					{
						vehicle = QGVAR(indfor_ftl);
						rank = "CORPORAL";
						position[] = {3,-3,0};
					};
					class Unit7
					{
						vehicle = QGVAR(indfor_grenadier);
						rank = "PRIVATE";
						position[] = {3,-6,0};
					};
					class Unit8
					{
						vehicle = QGVAR(indfor_lmg);
						rank = "PRIVATE";
						position[] = {3,-9,0};
					};
					class Unit9
					{
						vehicle = QGVAR(indfor_rifleman_at);
						rank = "PRIVATE";
						position[] = {3,-12,0};
					};
				};
				class GVAR(indfor_squad_2)
				{
					name = "Squad (MMG)";

					class Unit0
					{
						vehicle = QGVAR(indfor_sql);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_medic);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_mmg);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_mmg_asst);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(indfor_mmg);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(indfor_mmg_asst);
						rank = "PRIVATE";
						position[] = {3,-3,0};
					};
					class Unit6
					{
						vehicle = QGVAR(indfor_mmg);
						rank = "CORPORAL";
						position[] = {3,-6,0};
					};
					class Unit7
					{
						vehicle = QGVAR(indfor_mmg_asst);
						rank = "PRIVATE";
						position[] = {3,-9,0};
					};
				};
				class GVAR(indfor_squad_3)
				{
					name = "Squad (AT/AA)";

					class Unit0
					{
						vehicle = QGVAR(indfor_sql);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_medic);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_at);
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_at_asst);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(indfor_at);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(indfor_at_asst);
						rank = "PRIVATE";
						position[] = {3,-3,0};
					};
					class Unit6
					{
						vehicle = QGVAR(indfor_aa);
						rank = "CORPORAL";
						position[] = {3,-6,0};
					};
					class Unit7
					{
						vehicle = QGVAR(indfor_aa_asst);
						rank = "PRIVATE";
						position[] = {3,-9,0};
					};
				};
				class GVAR(indfor_squad_4)
				{
					name = "Squad (no AT)";

					class Unit0
					{
						vehicle = QGVAR(indfor_sql);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_medic);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_ftl);
						rank = "CORPORAL";
						position[] = {0,-3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_grenadier);
						rank = "PRIVATE";
						position[] = {0,-6,0};
					};
					class Unit4
					{
						vehicle = QGVAR(indfor_lmg);
						rank = "PRIVATE";
						position[] = {0,-9,0};
					};
					class Unit5
					{
						vehicle = QGVAR(indfor_lmg_asst);
						rank = "PRIVATE";
						position[] = {0,-12,0};
					};
					class Unit6
					{
						vehicle = QGVAR(indfor_ftl);
						rank = "CORPORAL";
						position[] = {3,-3,0};
					};
					class Unit7
					{
						vehicle = QGVAR(indfor_grenadier);
						rank = "PRIVATE";
						position[] = {3,-6,0};
					};
					class Unit8
					{
						vehicle = QGVAR(indfor_lmg);
						rank = "PRIVATE";
						position[] = {3,-9,0};
					};
					class Unit9
					{
						vehicle = QGVAR(indfor_lmg_asst);
						rank = "PRIVATE";
						position[] = {3,-12,0};
					};
				};
				class GVAR(indfor_vehicle_crew)
				{
					name = "Vehicle Crew";

					class Unit0
					{
						vehicle = QGVAR(indfor_sql);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_engineer);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_engineer);
						rank = "CORPORAL";
						position[] = {6,0,0};
					};
				};
				class GVAR(indfor_heli_crew)
				{
					name = "Helicopter Crew";

					class Unit0
					{
						vehicle = QGVAR(indfor_heli_pilot);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_heli_pilot);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
				class GVAR(indfor_lead)
				{
					name = "Lead Element";

					class Unit0
					{
						vehicle = QGVAR(indfor_lead);
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_sergeant);
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_doctor);
						rank = "SERGEANT";
						position[] = {6,0,0};
					};
				};
				class GVAR(indfor_zeus)
				{
					name = "Zeus";

					class Unit0
					{
						vehicle = QGVAR(indfor_command);
						rank = "COLONEL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_command);
						rank = "COLONEL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_command);
						rank = "COLONEL";
						position[] = {6,0,0};
					};
				};
				class GVAR(indfor_heli_crew_doorgunner)
				{
					name = "Helicopter Crew (with Gunners)";

					class Unit0
					{
						vehicle = QGVAR(indfor_heli_pilot);
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_heli_pilot);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						vehicle = QGVAR(indfor_heli_crew);
						rank = "PRIVATE";
						position[] = {0,3,0};
					};
					class Unit3
					{
						vehicle = QGVAR(indfor_heli_crew);
						rank = "PRIVATE";
						position[] = {3,3,0};
					};
				};
				class GVAR(indfor_sniper)
				{
					name = "Sniper Team";

					class Unit0
					{
						vehicle = QGVAR(indfor_sniper);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_spotter);
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
				class GVAR(indfor_uav)
				{
					name = "UAV Team";

					class Unit0
					{
						vehicle = QGVAR(indfor_uav);
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = QGVAR(indfor_engineer);
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
			};
		};
	};
};
