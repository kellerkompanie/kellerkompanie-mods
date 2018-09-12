params ["_start", "_end", "_colour"];

private _canvas = GET_CANVAS;
private _draw_start_pos = _canvas ctrlMapScreenToWorld _start;
private _draw_end_pos = _canvas ctrlMapScreenToWorld _end;

_canvas drawLine [
    _draw_start_pos,
    _draw_end_pos,
    _colour
];
