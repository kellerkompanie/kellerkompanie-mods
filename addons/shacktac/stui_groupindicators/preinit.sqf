STGI_Reload =
{
    "groupindicators\stgi.sqf" call STUI_Load;
};

call STGI_Reload;

STUI_PostInits pushBack
{
    "STGI_Update" call STUI_Canvas_Add;
};
