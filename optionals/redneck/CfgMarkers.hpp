class CfgMarkers {
	/*extern*/ class flag_NATO;
  	class GVAR(flag): flag_NATO {
  		name = "Redneck";
  		icon = QPATHTOF(ui\redneck_marker.paa);
  		texture = QPATHTOF(ui\redneck_marker.paa);
	  };

    /*class GVAR(icon)
    {
        name = "";
        icon = "\keko_redneck\icons\icon_airport.pac";
        color[] = {1,1,1,1};
        size = 32;
        scope = 0;
        scopeCurator = 0;
        shadow = 0;
        markerClass = QGVAR(icons";
    };
    class GVAR(icon_airport): GVAR(icon)
    {
        name = "Airport";
        icon = "\keko_redneck\icons\icon_airport.pac";
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_base): GVAR(icon)
    {
        name = "Base";
        icon = "\keko_redneck\icons\icon_base.pac";
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_dollar): GVAR(icon)
    {
        name = "";
        icon = "\keko_redneck\icons\icon_dollar.pac";
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_flag): GVAR(icon)
    {
        name = "";
        icon = "\keko_redneck\icons\icon_flag.pac";
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_fuel): GVAR(icon)
    {
        name = "";
        icon = "\keko_redneck\icons\icon_fuel.pac";
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_radiotower): GVAR(icon)
    {
        name = "";
        icon = "\keko_redneck\icons\icon_radiotower.pac";
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_research): GVAR(icon)
    {
        name = "";
        icon = "\keko_redneck\icons\icon_research.pac";
        scope = 2;
        scopeCurator = 2;
    };*/



    class GVAR(marker) {
        name = "";
        icon = QPATHTOF(ui\marker_airport.pac);
        color[] = {1,1,1,1};
        size = 32;
        scope = 0;
        scopeCurator = 0;
        shadow = 0;
        markerClass = QGVAR(markers);
    };
    class GVAR(marker_airport): GVAR(marker) {
        name = "Airport";
        icon = QPATHTOF(ui\marker_airport.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_base): GVAR(marker) {
        name = "Base";
        icon = QPATHTOF(ui\marker_base.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_dollar): GVAR(marker) {
        name = "Dollar";
        icon = QPATHTOF(ui\marker_dollar.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_flag): GVAR(marker) {
        name = "Flag";
        icon = QPATHTOF(ui\marker_flag.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_fuel): GVAR(marker) {
        name = "Fuel";
        icon = QPATHTOF(ui\marker_fuel.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_radiotower): GVAR(marker) {
        name = "Radiotower";
        icon = QPATHTOF(ui\marker_radiotower.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_research): GVAR(marker) {
        name = "Research";
        icon = QPATHTOF(ui\marker_research.pac);
        scope = 2;
        scopeCurator = 2;
    };
};
