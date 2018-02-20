#define KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY {{10, "ACE_epinephrine"},{10, "ACE_morphine"},{1,"ACE_surgicalKit"},{10, "ACE_quikclot"}}
#define KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY {{50, "ACE_elasticBandage"},{20, "ACE_fieldDressing"},{6, "ACE_salineIV_500"},{4, "ACE_salineIV"},{10, "ACE_tourniquet"},{10,"adv_aceSplint_splint"}}
#define KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY {{10, "ACE_epinephrine"},{10, "ACE_morphine"},{1,"ACE_surgicalKit"},{10, "ACE_quikclot"}}
#define KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY {{50, "ACE_elasticBandage"},{20, "ACE_fieldDressing"},{6, "ACE_salineIV_500"},{4, "ACE_salineIV"},{10, "ACE_tourniquet"},{10,"adv_aceSplint_splint"},{1,"adv_aceCPR_AED"}}

#define KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY {{6,"DemoCharge_Remote_Mag"},{2,"SatchelCharge_Remote_Mag"},{1,"ACE_DefusalKit"},{1,"ACE_Clacker"}}
#define KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY {{1, "ToolKit"},{1, "ACE_wirecutter"},{1, "ACE_EntrenchingTool"},{1, "ACE_Fortify"}}

class kekoSoldier
{
	name = "Soldier";
	medicClass = 0;
	engineerClass = 0;
	rank = "PRIVATE";

	uniform[] = {};
	uniformInventory[] = {
		{15, "ACE_fieldDressing"},
		{1, "ACE_morphine"},
		{3, "ACE_tourniquet"},
		{1, "ACE_MapTools"},
		{1, "ACE_Flashlight_XL50"},
		{1, "ACE_IR_Strobe_Item"}};
	
	vest[] = {};
	vestInventory[] = {};

	helmet[] = {};
	
	backpack[] = {};
	backpackInventory[] = {};

	primary[] = {};

	secondary[] = {};

	launcher[] = {};

	items[] = {};

	goggles[] = {};

	optics[] = {};
};