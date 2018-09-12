params ["_canvas"];

TEST_Index = TEST_Index + 1;
if (TEST_Index >= count(STUI_Metrics)) then
{
    TEST_Index = 0;
};
_tl = _canvas ctrlMapScreenToWorld [0, 0];
_tl pushBack 0;
_br = _canvas ctrlMapScreenToWorld [0.3, 0.035];
_br pushBack 0;
_mid = (_br vectorDiff _tl) vectorMultiply 0.5;
_canvas drawRectangle [_tl vectorAdd _mid, _mid select 0, _mid select 1, 0, [1,0,0,1], ""];

_canvas drawIcon [
    STHud_BGIcon, [1,1,1,0.2], _tl, 16, 16, 0,
    "WWWWWWWWWWWWWWW|", 1, 0.035, "PuristaSemiBold", "Right"
];

_pos = [_tl select 0, (_tl vectorAdd _mid) select 1, 0];

_char = toArray(STUI_Metrics select TEST_index select 0) select 0;
_w = [STUI_CharWidths, _char] call CBA_fnc_hashGet;
_cs = floor(15 / _w);
_l = [];
for "_i" from 1 to _cs do
{
    _l pushBack _char;
};
_l pushBack 124;

_line = toString _l;

_canvas drawIcon [
    STHud_BGIcon, [1,1,1,1], _pos, 16, 16, 0,
    _line, 1, 0.035, "PuristaSemiBold", "Right"
];
