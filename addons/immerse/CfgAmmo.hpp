class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase: Bulletcore{};
	class ShellCore
	{
		L_exShake_func = "L_fnc_ExShake_120mm";
	};
	class FlareCore;
	class ShotDeployCore;
	class SubmunitionCore;
	class SubmunitionBase: SubmunitionCore{};
	class MissileCore
	{
		L_exShake_func = "L_fnc_ExShake_BigRocket";
	};
	class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class GrenadeCore
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class BombCore
	{
		L_exShake_func = "L_fnc_ExShake_BigRocket";
	};
	class ammo_Bomb_LaserGuidedBase
	{
		L_exShake_func = "L_fnc_ExShake_BigBomb";
	};
	class LaserBombCore
	{
		L_exShake_func = "L_fnc_ExShake_BigBomb";
	};
	class RocketCore
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class MineCore;
	class BoundingMineCore;
	class DirectionalBombCore;
	class PipeBombCore;
	class ShellBase: ShellCore{};
	class MissileBase: MissileCore
	{
		L_exShake_func = "L_fnc_ExShake_BigRocket";
	};
	class RocketBase: RocketCore
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class Grenade: Default
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class GrenadeHand: Grenade{};
	class SmokeShell: GrenadeHand
	{
		L_exShake_func = "";
	};
	class GrenadeBase: GrenadeCore
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class FuelExplosion: Default
	{
		L_exShake_func = "L_fnc_ExShake_FuelExploSmall";
	};
	class FuelExplosionBig: FuelExplosion
	{
		L_exShake_func = "L_fnc_ExShake_FuelExploBig";
	};
	class HelicopterExploSmall: ShellBase
	{
		L_exShake_func = "L_fnc_ExShake_FuelExploSmall";
	};
	class HelicopterExploBig: HelicopterExploSmall
	{
		L_exShake_func = "L_fnc_ExShake_FuelExploBig";
	};
	class SmallSecondary: HelicopterExploSmall
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_19mm_HE: BulletBase
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_30mm_HE: B_19mm_HE
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_30mm_HE_Tracer_Red: B_30mm_HE
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_30mm_HE_Tracer_Green: B_30mm_HE
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_30mm_HE_Tracer_Yellow: B_30mm_HE
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_30mm_MP: B_30mm_HE
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_30mm_MP_Tracer_Red: B_30mm_MP
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_30mm_MP_Tracer_Green: B_30mm_MP
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_30mm_MP_Tracer_Yellow: B_30mm_MP
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_40mm_GPR: B_30mm_HE
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_40mm_GPR_Tracer_Red: B_40mm_GPR
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_40mm_GPR_Tracer_Green: B_40mm_GPR
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_40mm_GPR_Tracer_Yellow: B_40mm_GPR
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_20mm: BulletBase
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_20mm_Tracer_Red: B_20mm
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_25mm: BulletBase
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_30mm_AP: BulletBase
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_30mm_AP_Tracer_Red: B_30mm_AP
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_30mm_AP_Tracer_Green: B_30mm_AP
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_30mm_AP_Tracer_Yellow: B_30mm_AP
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_30mm_APFSDS: B_30mm_AP
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_30mm_APFSDS_Tracer_Red: B_30mm_APFSDS
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_30mm_APFSDS_Tracer_Green: B_30mm_APFSDS
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_30mm_APFSDS_Tracer_Yellow: B_30mm_APFSDS
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class B_40mm_APFSDS: B_30mm_APFSDS
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class B_35mm_AA: BulletBase
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class M_PG_AT: MissileBase
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class M_AT: M_PG_AT
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class M_Mo_82mm_AT: MissileBase
	{
		L_exShake_func = "L_fnc_ExShake_Mortar";
	};
	class M_Mo_82mm_AT_LG: M_Mo_82mm_AT
	{
		L_exShake_func = "L_fnc_ExShake_Mortar";
	};
	class M_Mo_120mm_AT: MissileBase
	{
		L_exShake_func = "L_fnc_ExShake_120mm";
	};
	class M_Mo_120mm_AT_LG: M_Mo_120mm_AT
	{
		L_exShake_func = "L_fnc_ExShake_120mm";
	};
	class M_RPG32_F: MissileBase
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class M_RPG32_AA_F: M_RPG32_F
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class M_NLAW_AT_F: MissileBase
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class M_Scalpel_AT: MissileBase
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class M_Scalpel_AT_hidden: M_Scalpel_AT
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class M_Titan_AA: MissileBase
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class M_Zephyr: M_Titan_AA
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class M_Zephyr_Mi06: M_Zephyr
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class M_Air_AA: MissileBase
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class M_Air_AA_MI02: M_Air_AA
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class M_Titan_AT: MissileBase
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class M_Titan_AP: M_Titan_AT
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class M_Air_AT: M_Titan_AT
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class R_80mm_HE: RocketBase
	{
		L_exShake_func = "L_fnc_ExShake_Mortar";
	};
	class R_60mm_HE: R_80mm_HE
	{
		L_exShake_func = "L_fnc_ExShake_SmallRocket";
	};
	class R_230mm_HE: SubmunitionBase
	{
		L_exShake_func = "L_fnc_ExShake_BigRocket";
	};
	class R_230mm_fly: ShellBase
	{
		L_exShake_func = "L_fnc_ExShake_BigRocket";
	};
	class Sh_120mm_HE: ShellBase
	{
		L_exShake_func = "L_fnc_ExShake_120mm";
	};
	class Sh_120mm_HE_Tracer_Red: Sh_120mm_HE
	{
		L_exShake_func = "L_fnc_ExShake_120mm";
	};
	class Sh_120mm_HE_Tracer_Green: Sh_120mm_HE
	{
		L_exShake_func = "L_fnc_ExShake_120mm";
	};
	class Sh_120mm_HE_Tracer_Yellow: Sh_120mm_HE
	{
		L_exShake_func = "L_fnc_ExShake_120mm";
	};
	class Sh_120mm_APFSDS: ShellBase
	{
		L_exShake_func = "L_fnc_ExShake_120mm";
	};
	class Sh_120mm_APFSDS_Tracer_Red: Sh_120mm_APFSDS
	{
		L_exShake_func = "L_fnc_ExShake_120mm";
	};
	class Sh_120mm_APFSDS_Tracer_Green: Sh_120mm_APFSDS
	{
		L_exShake_func = "L_fnc_ExShake_120mm";
	};
	class Sh_120mm_APFSDS_Tracer_Yellow: Sh_120mm_APFSDS
	{
		L_exShake_func = "L_fnc_ExShake_120mm";
	};
	class Sh_155mm_AMOS: ShellBase
	{
		L_exShake_func = "L_fnc_ExShake_Arty";
	};
	class Sh_82mm_AMOS: Sh_155mm_AMOS
	{
		L_exShake_func = "L_fnc_ExShake_Mortar";
	};
	class Sh_82mm_AMOS_guided: SubmunitionBase
	{
		L_exShake_func = "L_fnc_ExShake_Mortar";
	};
	class Sh_82mm_AMOS_LG: Sh_82mm_AMOS_guided
	{
		L_exShake_func = "L_fnc_ExShake_Mortar";
	};
	class Sh_155mm_AMOS_guided: Sh_82mm_AMOS_guided
	{
		L_exShake_func = "L_fnc_ExShake_Arty";
	};
	class Sh_155mm_AMOS_LG: Sh_82mm_AMOS_LG
	{
		L_exShake_func = "L_fnc_ExShake_Arty";
	};
	class G_40mm_HE: GrenadeBase
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class G_20mm_HE: G_40mm_HE
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class G_40mm_HEDP: G_40mm_HE
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class MineBase: MineCore
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class BoundingMineBase: BoundingMineCore
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class DirectionalBombBase: DirectionalBombCore
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class PipeBombBase: PipeBombCore
	{
		L_exShake_func = "L_fnc_ExShake_Satchel";
	};
	class ATMine_Range_Ammo: MineBase
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class UnderwaterMine_Range_Ammo: MineBase{};
	class UnderwaterMineAB_Range_Ammo: UnderwaterMine_Range_Ammo{};
	class UnderwaterMinePDM_Range_Ammo: UnderwaterMine_Range_Ammo{};
	class APERSMine_Range_Ammo: MineBase
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class APERSBoundingMine_Range_Ammo: BoundingMineBase
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class SLAMDirectionalMine_Wire_Ammo: DirectionalBombBase
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class APERSTripMine_Wire_Ammo: DirectionalBombBase
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class ClaymoreDirectionalMine_Remote_Ammo: DirectionalBombBase
	{
		L_exShake_func = "L_fnc_ExShake_Grenade";
	};
	class SatchelCharge_Remote_Ammo: PipeBombBase
	{
		L_exShake_func = "L_fnc_ExShake_Satchel";
	};
	class DemoCharge_Remote_Ammo: PipeBombBase
	{
		L_exShake_func = "L_fnc_ExShake_Satchel";
	};
	class IEDUrbanBig_Remote_Ammo: PipeBombBase
	{
		L_exShake_func = "L_fnc_ExShake_Satchel";
	};
	class IEDLandBig_Remote_Ammo: PipeBombBase
	{
		L_exShake_func = "L_fnc_ExShake_Satchel";
	};
	class IEDUrbanSmall_Remote_Ammo: PipeBombBase
	{
		L_exShake_func = "L_fnc_ExShake_IED";
	};
	class IEDLandSmall_Remote_Ammo: PipeBombBase
	{
		L_exShake_func = "L_fnc_ExShake_IED";
	};
	class Bo_Mk82: BombCore
	{
		L_exShake_func = "L_fnc_ExShake_BigBomb";
	};
};
