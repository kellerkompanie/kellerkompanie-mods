#include "script_component.hpp"

private _team = assignedTeam _this;
if (isNil {_team}) then
{
    "MAIN";
}
else
{
    _team;
};
