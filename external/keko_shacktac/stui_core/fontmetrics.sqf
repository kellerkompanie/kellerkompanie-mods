// Get an approximate width of a string assuming variable width letters

// This is calibrated with the STHUD Font PuristaSemiBold at 0.035
// 15x W just about fits into 0.3 in 16:10 and 16:9 with UI size Small (ui scale = 0.55)
// Some of these metrics are a bit off at other UI sizes, but it's not a linear amount. :-(
// Uncalibrated characters are treated as being as wide as W.
STUI_Metrics =
[
     ["'", 0.27]
    ,["-", 0.34]
    ,["!", 0.27]
    ,["""", 0.4]
    ,["#", 0.85]
    ,["$", 0.67]
    ,["%", 0.80]
    ,["&", 0.67]
    ,["(", 0.34]
    ,[")", 0.40]
    ,["*", 0.48]
    ,[",", 0.27]
    ,[".", 0.27]
    ,["/", 0.48]
    ,[":", 0.27]
    ,[";", 0.27]
    ,["?", 0.67]
    ,["@", 1.10]
    ,["[", 0.34]
    ,["]", 0.40]
    ,["^", 0.53]
    ,["_", 0.67]
    ,["`", 0.27]
    ,["{", 0.40]
    ,["|", 0.27]
    ,["}", 0.48]
    ,["~", 0.53]
    ,["+", 0.60]
    ,["<", 0.60]
    ,["=", 0.60]
    ,[">", 0.60]
    ,["0", 0.67]
    ,["1", 0.40]
    ,["2", 0.60]
    ,["3", 0.60]
    ,["4", 0.67]
    ,["5", 0.60]
    ,["6", 0.60]
    ,["7", 0.67]
    ,["8", 0.67]
    ,["9", 0.60]
    ,["a", 0.60]
    ,["b", 0.60]
    ,["c", 0.60]
    ,["d", 0.60]
    ,["e", 0.60]
    ,["f", 0.54]
    ,["g", 0.60]
    ,["h", 0.60]
    ,["i", 0.27]
    ,["j", 0.27]
    ,["k", 0.60]
    ,["l", 0.27]
    ,["m", 0.85]
    ,["n", 0.60]
    ,["o", 0.60]
    ,["p", 0.60]
    ,["q", 0.60]
    ,["r", 0.50]
    ,["s", 0.54]
    ,["t", 0.54]
    ,["u", 0.60]
    ,["v", 0.67]
    ,["w", 0.85]
    ,["x", 0.54]
    ,["y", 0.67]
    ,["z", 0.60]
    ,["A", 0.72]
    ,["B", 0.67]
    ,["C", 0.67]
    ,["D", 0.67]
    ,["E", 0.60]
    ,["F", 0.60]
    ,["G", 0.67]
    ,["H", 0.67]
    ,["I", 0.27]
    ,["J", 0.67]
    ,["K", 0.67]
    ,["L", 0.60]
    ,["M", 0.72]
    ,["N", 0.67]
    ,["O", 0.67]
    ,["P", 0.67]
    ,["Q", 0.67]
    ,["R", 0.67]
    ,["S", 0.67]
    ,["T", 0.67]
    ,["U", 0.67]
    ,["V", 0.72]
    ,["W", 1.00]
    ,["X", 0.67]
    ,["Y", 0.72]
    ,["Z", 0.67]
    ,[" ", 0.54]
];
STUI_CharWidths = [STUI_Metrics, 1] call CBA_fnc_hashCreate;

// Cache lengths
STUI_TextLengths = [] call CBA_fnc_hashCreate;

STUI_GetTextWidth =
{
    params ["_text"];
    private _width = [STUI_TextLengths, _text] call CBA_fnc_hashGet;
    if (!isNil {_width}) exitWith {_width};

    private _chars = toArray(_text);
    _width = 0;

    {
        _width = _width + ([STUI_CharWidths, _x] call CBA_fnc_hashGet);
    } forEach(_chars);

    [STUI_TextLengths, _text, _width] call CBA_fnc_hashSet;

    _width;
};

// Uncached since you can request any maximum length
STUI_TruncateText =
{
    params ["_text", "_max"];
    private _chars = toArray(_text);
    private _width = 0;
    private _truncated = _text;

    {
        _width = _width + ([STUI_CharWidths, _x] call CBA_fnc_hashGet);
        if (_width > _max) exitWith
        {
            _truncated = (_text select [0, _forEachIndex - 1]) + "...";
        };
    } forEach(_chars);

    _truncated;
};

#ifdef CALIBRATE
if (isNil "TEST_Index") then
{
    TEST_Index = 0;
};

TEST_Metrics =
{
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
};

"TEST_Metrics" call STUI_Canvas_Add;
#endif
