//////////////////////////////////////////////////////////////////////////////////
//    AUTHOR: Kex
//    DATE: 7/16/16
//    VERSION: 2.0
//    FILE: ui_f\dialogs\RscDisplayReplacement.hpp
//  DESCRIPTION: This is a replacement config for curator displays
//////////////////////////////////////////////////////////////////////////////////

//  define script path for script replacement
class CfgScriptPaths
{
    keko_zeus_Displays = x\keko\addons\zeus\ui\scripts\;
};

class RscDisplayCurator
{
    // couple custom init with curator display
    onLoad = "[_this select 0] call keko_zeus_fnc_onDisplayCuratorLoad;";
    onUnload = "[_this select 0] call keko_zeus_fnc_onDisplayCuratorUnload;";
    class Controls
    {
        #include "Replacement\RscDisplayAttributesModuleTree.hpp"
    };
};

// load external attributes
class RscAttributeGroupID: RscControlsGroupNoScrollbars {};

// include modified attributes
#include "Replacement\RscAttributes.hpp"
#include "Replacement\RscAttributeInventory.hpp"
#include "Replacement\RscAttributesModules.hpp"

// include modified dialogs and displays

#include "Replacement\RscDisplayAttributesMan.hpp"
#include "Replacement\RscDisplayAttributesVehicle.hpp"
#include "Replacement\RscDisplayAttributesGroup.hpp"
#include "Replacement\RscDisplayWaypointAttributes.hpp"

// include module displays
#include "Replacement\RscDisplayAttributesSetDate.hpp"

// include music from description.ext
class RscAttributeMusic : RscControlsGroupNoScrollbars
{
    onSetFocus = "[_this,""RscAttributeMusic"",""keko_zeus_Displays""] call (uinamespace getvariable ""keko_zeus_fnc_initCuratorAttribute"")";
};
