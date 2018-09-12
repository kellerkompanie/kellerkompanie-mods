class CfgWeapons
{
	class ItemCore;
 	class InventoryItem_Base_F;
	class ItemcTab: ItemCore {
		descriptionshort = "DK10 Rugged Tablet PC";
		descriptionuse = "<t color='#9cf953'>Use: </t>Show Commander's Tablet";
		displayname = "Rugged Tablet";
		picture = QPATHTOF(img\icon_dk10.paa);
		model = QPATHTOF(data\itemDK10.p3d);
		scope = 2;
		simulation = "ItemGPS";
		class ItemInfo {
			mass = 56;
		};
		author = "cTab";
	};

	class ItemAndroid: ItemcTab {
		descriptionshort = "GD300 Rugged Wearable Computer";
		descriptionuse = "<t color='#9cf953'>Use: </t>Show Android Based BFT";
		displayname = "GD300 Android";
		picture = QPATHTOF(img\icon_Android.paa);
		model = QPATHTOF(data\itemAndroid.p3d);
		class ItemInfo {
			mass = 5;
		};
		author = "cTab";
	};

	class ItemMicroDAGR: ItemcTab {
		descriptionshort = "HNV-2930 Micro Defense Advanced GPS Receiver";
		descriptionuse = "<t color='#9cf953'>Use: </t>Show Android Based BFT";
		displayname = "MicroDAGR";
		picture = QPATHTOF(img\icon_MicroDAGR.paa);
		model = QPATHTOF(data\itemMicroDAGR.p3d);
		class ItemInfo {
			mass = 6;
		};
		author = "cTab";
	};

	class ItemcTabHCam: ItemCore {
		descriptionshort = "HD Helmet Mounted Camera";
		descriptionuse = "<t color='#9cf953'>Use: </t>Used to record and stream video";
		displayname = "Helmet Camera";
		picture = QPATHTOF(img\cTab_helmetCam_ico.paa);
		scope = 2;
		simulation = "ItemMineDetector";
		detectRange = -1;
		type = 0;
		class ItemInfo: InventoryItem_Base_F {
			mass = 4;
		};
		author = "cTab";
	};
};
