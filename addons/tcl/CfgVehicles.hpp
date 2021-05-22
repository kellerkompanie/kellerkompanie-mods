class CfgVehicles
{
	class Man;
	class Land;
	
	class CAManBase : Man
	{
		class EventHandlers
		{
			class GVAR(EH_Init)
			{
				init = QFUNC(EH_System);
			};
		};
	};
};