(player call FUNC(hasAssignedTeam)) || {
    ({_x call FUNC(hasAssignedTeam)} count (units player)) > 0;
};
