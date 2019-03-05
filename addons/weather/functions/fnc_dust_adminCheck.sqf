#include "script_component.hpp"

//fn_adminCheck

if (isServer or (serverCommandAvailable "#exec")) then
{
    createDialog "DustMenu";
} else {
    hint "You are not an admin!";
};
