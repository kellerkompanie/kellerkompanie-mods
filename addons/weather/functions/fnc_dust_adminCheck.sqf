#include "script_component.hpp"

if (isServer or (serverCommandAvailable "#exec")) then {
    createDialog "DustMenu";
} else {
    hint "You are not an admin!";
};
