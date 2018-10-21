class EXPLOSION_SEA_SURFACE
{
	idd = -1;
	movingEnable = 0;
	fadein = 0;
	duration = 30;
	fadeout = 5;
	name = "Explosion Sea Surface";
	controls[] = {"ESS1"};

	class ESS1
	{
		Idc=-1;
		type=0;
		style = 48;
		text = "\vqi_frogs\VQI-CombatDiver\Pics\explosion_sea_surface.jpg";
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