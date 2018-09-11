_u = _this select 0;
_o = _this select 1;
_range = _this select 2;
 
_bb = boundingboxreal _o;

_bb1 = _bb select 0;
_bb2 = _bb select 1;

_inbb = false;

_checkpos = (positionCameraToworld [0,0,_range]);

if (cameraView == "External") then
{
   _checkpos = (positionCameraToworld [0,0,_range+3]);
};

_wtm = _o worldToModel _checkpos;

if (_wtm select 0 > _bb1 select 0 && _wtm select 0 < _bb2 select 0 && _wtm select 1 > _bb1 select 1 && _wtm select 1 < _bb2 select 1 && _wtm select 2 > _bb1 select 2 && _wtm select 2 < _bb2 select 2) then
{_inbb = true};

_inbb