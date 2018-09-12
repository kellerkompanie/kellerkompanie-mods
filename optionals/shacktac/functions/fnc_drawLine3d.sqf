params ["_startPos", "_endPos", "_colour"];
  if (count _startPos != 3) exitWith {};
  if (count _endPos != 3) exitWith {};
  if (count _colour != 4) exitWith {};

  private _start = worldToScreen _startPos;
  if (count _start != 2) exitWith {};

  private _end = worldToScreen _endPos;
  if (count _end != 2) exitWith {};

  private _canvas = GET_CANVAS;
  private _draw_start_pos = _canvas ctrlMapScreenToWorld _start;
  private _draw_end_pos = _canvas ctrlMapScreenToWorld _end;

  _canvas drawLine [
      _draw_start_pos,
      _draw_end_pos,
      _colour
  ];
