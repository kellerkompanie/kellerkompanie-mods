// 1.62 finally added native syncing of assigned teams, so this file is now just
// various utility functions that are still useful.

// When controlling a UAV, assignedTeam returns undefined(!)
STUI_assignedTeam =
{
    private _team = assignedTeam _this;
    if (isNil {_team}) then
    {
        "MAIN";
    }
    else
    {
        _team;
    };
};
STUI_HasAssignedTeam = {(_this call STUI_assignedTeam) != "MAIN"};
ST_STHud_assignedTeam = STUI_assignedTeam;
ST_STHud_HasAssignedTeam = STUI_HasAssignedTeam;

// General version with a minor optimisation for normal group members when
// using teams.
STUI_UsingTeams =
{
    (player call STUI_HasAssignedTeam) || {
        ({_x call STUI_HasAssignedTeam} count (units player)) > 0;
    };
};

STUI_ALUT =
[
     "MAIN"
    ,"RED"
    ,"GREEN"
    ,"BLUE"
    ,"YELLOW"
];

STUI_AssignedIndex =
{
    STUI_ALUT find _this;
};

STUI_assignedTeamIndex =
{
    (_this call STUI_assignedTeam) call STUI_assignedIndex;
};
