params ["_EHid"];

babe_core_EHs = babe_core_EHs select 
{
	_id = _x select 0;
	(_EHid != _id)
};      