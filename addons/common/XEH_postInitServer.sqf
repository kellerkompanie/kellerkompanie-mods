#include "script_component.hpp"

INFO("running XEH_postInitServer");

//stops the blabbering of AI units and players
{_x setVariable ["BIS_noCoreConversations", true, true]} count allUnits;

//removes notification and bird of all curators:
{ _x setVariable ["birdType",""]; _x setVariable ["showNotification",false]; [_x, [-1, -2, 2]] call bis_fnc_setCuratorVisionModes; nil;} count allCurators;

//deletes empty groups:
GVAR(emptyGroupsDeleter) = addMissionEventHandler ["EntityKilled",{private _grp = group (_this select 0);if ( count (units _grp) == 0 ) then { deleteGroup _grp };}];
