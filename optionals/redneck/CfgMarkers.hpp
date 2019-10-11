class CfgMarkers {
    class flag_NATO;
    class GVAR(flag): flag_NATO {
        name = "Redneck";
        icon = QPATHTOF(ui\redneck_marker.paa);
        texture = QPATHTOF(ui\redneck_marker.paa);
    };

    class GVAR(icon) {
        name = "";
        icon = QPATHTOF(ui\markers\icon_airport.pac);
        color[] = {1,1,1,1};
        size = 32;
        scope = 0;
        scopeCurator = 0;
        shadow = 0;
        markerClass = QGVAR(icons);
    };
    class GVAR(icon_aircraftdealer): GVAR(icon) {
        name = "Aircraft Dealer";
        icon = QPATHTOF(ui\markers\icon_aircraftdealer.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_airport): GVAR(icon) {
        name = "Airport";
        icon = QPATHTOF(ui\markers\icon_airport.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_atm): GVAR(icon) {
        name = "ATM";
        icon = QPATHTOF(ui\markers\icon_atm.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_cardealer): GVAR(icon) {
        name = "Car Dealer";
        icon = QPATHTOF(ui\markers\icon_cardealer.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_doctor): GVAR(icon) {
        name = "Doctor";
        icon = QPATHTOF(ui\markers\icon_doctor.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_fuelshop): GVAR(icon) {
        name = "Fuel Station";
        icon = QPATHTOF(ui\markers\icon_fuelshop.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_garage): GVAR(icon) {
        name = "Garage";
        icon = QPATHTOF(ui\markers\icon_garage.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_gearshop): GVAR(icon) {
        name = "Gear Shop";
        icon = QPATHTOF(ui\markers\icon_gearshop.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_hangar): GVAR(icon) {
        name = "Hangar";
        icon = QPATHTOF(ui\markers\icon_hangar.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_helicopter): GVAR(icon) {
        name = "Helicopter";
        icon = QPATHTOF(ui\markers\icon_helicopter.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_helipad): GVAR(icon) {
        name = "Helipad";
        icon = QPATHTOF(ui\markers\icon_helipad.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_itemshop): GVAR(icon) {
        name = "Item Shop";
        icon = QPATHTOF(ui\markers\icon_itemshop.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_mechanic): GVAR(icon) {
        name = "Mechanic";
        icon = QPATHTOF(ui\markers\icon_mechanic.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_parking): GVAR(icon) {
        name = "Parking";
        icon = QPATHTOF(ui\markers\icon_parking.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_pharmacy): GVAR(icon) {
        name = "Pharmacy";
        icon = QPATHTOF(ui\markers\icon_pharmacy.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_pickaxe): GVAR(icon) {
        name = "Pickaxe";
        icon = QPATHTOF(ui\markers\icon_pickaxe.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_plane): GVAR(icon) {
        name = "Plane Shop";
        icon = QPATHTOF(ui\markers\icon_plane.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_trader): GVAR(icon) {
        name = "Trader";
        icon = QPATHTOF(ui\markers\icon_trader.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_vehicleshop): GVAR(icon) {
        name = "Vehicle Shop";
        icon = QPATHTOF(ui\markers\icon_vehicleshop.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(icon_weaponshop): GVAR(icon) {
        name = "Weapon Shop";
        icon = QPATHTOF(ui\markers\icon_weaponshop.pac);
        scope = 2;
        scopeCurator = 2;
    };



    class GVAR(marker) {
        name = "";
        icon = QPATHTOF(ui\markers\marker_airport.pac);
        color[] = {1,1,1,1};
        size = 32;
        scope = 0;
        scopeCurator = 0;
        shadow = 0;
        markerClass = QGVAR(markers);
    };
    class GVAR(marker_flag): GVAR(marker) {
        name = "Flag";
        icon = QPATHTOF(ui\markers\marker_flag.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_checkpoint): GVAR(marker) {
        name = "Checkpoint";
        icon = QPATHTOF(ui\markers\marker_checkpoint.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_hotel): GVAR(marker) {
        name = "Hotel";
        icon = QPATHTOF(ui\markers\marker_hotel.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_prison): GVAR(marker) {
        name = "Prison";
        icon = QPATHTOF(ui\markers\marker_prison.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_research): GVAR(marker) {
        name = "Research";
        icon = QPATHTOF(ui\markers\marker_research.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_industry): GVAR(marker) {
        name = "Industry";
        icon = QPATHTOF(ui\markers\marker_industry.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_farm): GVAR(marker) {
        name = "Farm";
        icon = QPATHTOF(ui\markers\marker_farm.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_radiotower): GVAR(marker) {
        name = "Radiotower";
        icon = QPATHTOF(ui\markers\marker_radiotower.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_powerplant): GVAR(marker) {
        name = "Powerplant";
        icon = QPATHTOF(ui\markers\marker_powerplant.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_fuelstation): GVAR(marker) {
        name = "Fuelstation";
        icon = QPATHTOF(ui\markers\marker_fuelstation.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_outpost): GVAR(marker) {
        name = "Outpost";
        icon = QPATHTOF(ui\markers\marker_outpost.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_hq): GVAR(marker) {
        name = "HQ";
        icon = QPATHTOF(ui\markers\marker_hq.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_airport): GVAR(marker) {
        name = "Airport";
        icon = QPATHTOF(ui\markers\marker_airport.pac);
        scope = 2;
        scopeCurator = 2;
    };
    class GVAR(marker_hospital): GVAR(marker) {
        name = "Hospital";
        icon = QPATHTOF(ui\markers\marker_hospital.pac);
        scope = 2;
        scopeCurator = 2;
    };
};
