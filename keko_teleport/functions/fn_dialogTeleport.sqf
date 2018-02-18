params ["_teleporterName"];

_markerName = "teleportMarker_" + _teleporterName;
_pos = getMarkerPos _markerName;

titleText ["", "BLACK OUT", 2];
sleep 2;
titleText [format ["Du wirst nach %1 verlegt.", _teleporterName], "BLACK FADED"];
sleep 1;
player setPos _pos;
sleep 1;
titleFadeOut 2;