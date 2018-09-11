//fn_adminCheck

	if (isServer or (serverCommandAvailable "#exec")) then
	{
		_dialog = createDialog "DustMenu";
	} else {
		hint "You are not an admin!";
	};

