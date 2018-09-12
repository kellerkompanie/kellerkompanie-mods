GVAR(NT_Cache_LastCheckedUnit) = objNull;
GVAR(NT_Cache_LastValidCheckTime) = 0;
GVAR(NT_DrawData) = [];

GVAR(NT_FadeOutTime) = 0.5;
GVAR(NT_MaxDrawRangeName) = 40;
GVAR(NT_MaxDrawRangeNameDead) = 3.5;
GVAR(NT_MaxDrawRangeGroup) = 20;

GVAR(NT_Main)   = [1.00, 1.00, 1.00, 1.00];
GVAR(NT_Red)    = [1.00, 0.20, 0.00, 1.00];
GVAR(NT_Green)  = [0.00, 1.00, 0.00, 1.00];
GVAR(NT_Blue)   = [0.00, 0.60, 1.00, 1.00];
GVAR(NT_Yellow) = [0.85, 0.85, 0.00, 1.00];

GVAR(NT_NoTeam) = [0.20, 1.00, 0.00, 1.00];

GVAR(NT_OwnGroup)   = GVAR(NT_Main);
GVAR(NT_OtherName) = [0.20, 1.00, 0.00, 1.0];
GVAR(NT_OtherGroup) = [0.60, 0.85, 0.60, 1.0];
GVAR(NT_DeadName) = [1, 1, 1, 1.0];

GVAR(NT_Colours) =
[
     GVAR(NT_Main)
    ,GVAR(NT_Red)
    ,GVAR(NT_Green)
    ,GVAR(NT_Blue)
    ,GVAR(NT_Yellow)
];

if (isNil QGVAR(RemoveDeadViaProximity)) then {GVAR(RemoveDeadViaProximity) = true};

QFUNC(nametagsUpdate) call FUNC(canvasAdd);

// Compatability for people not using STMF
private _stmf = isClass (configfile >> 'CfgPatches' >> 'STMF');
if (!_stmf && hasInterface) then {
    [] spawn {
        waitUntil {!isNull player};
        waitUntil {time>1};
        STMF_PlayerSide = playerSide;
        STMF_PlayerName = name(player);
        player setVariable ["STMF_Name", STMF_PlayerName, true];
        player setVariable ["STMF_Side", str STMF_PlayerSide, true];
    };
};
