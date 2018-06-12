////////////////////////////////////////////////////////////////////
//DeRap: babe_em\c_gst\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 12 14:55:49 2018 : 'file' last modified on Thu May 10 19:35:42 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class babe_EM_gst
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Sounds_F","A3_Anims_F"};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		babe_em_jump_rfl = "babe_em_jump_rfl";
		babe_em_jump_pst = "babe_em_jump_pst";
		babe_em_jump_ua = "babe_em_jump_ua";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			babe_em_jump_rfl[] = {"babe_em_jump_rfl","Gesture"};
			babe_em_jump_pst[] = {"babe_em_jump_pst","Gesture"};
			babe_em_jump_ua[] = {"babe_em_jump_ua","Gesture"};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class babe_em_jump_rfl: Default
		{
			file = "\babe\babe_em\animations\jump_rfl.rtm";
			looped = 0;
			speed = 1.7;
			mask = "babe_em_mask_fullbody";
			interpolationSpeed = 20;
			weaponIK = 0;
		};
		class babe_em_jump_pst: Default
		{
			file = "\babe\babe_em\animations\jump_pst.rtm";
			looped = 0;
			speed = 1.7;
			mask = "babe_em_mask_fullbody";
			interpolationSpeed = 20;
			weaponIK = 0;
		};
		class babe_em_jump_ua: Default
		{
			file = "\babe\babe_em\animations\jump_ua.rtm";
			looped = 0;
			speed = 1.7;
			mask = "babe_em_mask_fullbody";
			interpolationSpeed = 20;
			weaponIK = 0;
		};
	};
	class BlendAnims
	{
		class MaskStart
		{
			weight = 0.85;
		};
		babe_em_mask_fullbody[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"Spine1",1,"Spine2",1,"Spine3",1,"Spine",1,"Pelvis",1,"LeftLeg",1,"LeftLegRoll",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightLeg",1,"RightLegRoll",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightFoot",1,"RightToeBase",1};
	};
};
