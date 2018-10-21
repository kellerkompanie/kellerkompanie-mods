class WORLD_MAP_SUB
{
	idd = -1;
	movingEnable = 0;
	fadein = 0;
	duration = 5;
	fadeout = 5;
	name = "WORLD MAP SUB";
	controls[] = {"MAPSUB"};

	class MAPSUB
	{
		Idc=-1;
		type=0;
		style = 48;
		text = "\vqi_frogs\VQI-CombatDiver\Pics\world_map_1.jpg";
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;
		x = safezoneX;
		y = safezoneY;
		w = safezoneW;
		h = safezoneH;  
	};
};