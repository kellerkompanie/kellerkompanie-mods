class GVAR(breakWindow)
{
    displayName = "Break Window";
    condition = QUOTE(call FUNC(canBreakWindow));
    exceptions[] = {};
    statement = QUOTE(call FUNC(breakWindow));
    showDisabled = 0;
    priority = 2.5;
};
