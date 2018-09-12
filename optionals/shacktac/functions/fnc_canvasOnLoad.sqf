params ["_canvas"];
// Remove existing draw handles to prevent onload running more than once
_canvas ctrlRemoveAllEventHandlers "draw";
uiNamespace setVariable ["STUI_Canvas", _canvas];

_canvas ctrlMapAnimAdd [0, STUI_Canvas_ConstZoom, STUI_Canvas_ConstCentre];
ctrlMapAnimCommit _canvas;

// ctrlMapScreenToWorld doesn't give useful results until the map is
// stable. Sadly this isn't immediately after ctrlMapAnimCommit returns
// even if the time is zero.
[] spawn
{
    disableSerialization;
    private _canvas = GET_CANVAS;

    waitUntil {ctrlMapAnimDone _canvas};

    // De-offset the map so it's visible now the anim has finished
    // This avoids a flicker within the first few frames of the game caused
    // by the map visibly scrolling to the right place.
    private _map_pos = ctrlPosition _canvas;
    _map_pos set [1, (_map_pos select 1) + 100];
    _canvas ctrlSetPosition _map_pos;
    _canvas ctrlCommit 0;

    // Find the top edge of the map control in screen space, slightly inset.
    // We want to find it relative to where the map control is centered so
    // when we find the distance between these two points later on, we
    // cancel out certain rounding errors.
    private _top_s = _canvas ctrlMapWorldToScreen STUI_Canvas_ConstCentre;
    private _half_height = 0.5 * (_map_pos select 3);
    _top_s set [1, (_top_s select 1) + _half_height - CANVAS_BORDER];

    // Project this point back into the world
    private _top_w = _canvas ctrlMapScreenToWorld _top_s;

    // This seemingly redundant step is to ensure our world space
    // coordinates have experienced the same form of rouding error.
    private _mid_s = _canvas ctrlMapWorldToScreen STUI_Canvas_ConstCentre;
    private _mid_w = _canvas ctrlMapScreenToWorld _mid_s;

    _canvas ctrlAddEventHandler ["Draw", "if (visibleMap) exitWith {}; _this call STUI_Canvas_Update"];
};
