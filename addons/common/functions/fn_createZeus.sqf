if (!isServer) exitWith {};

params ["_player"];

diag_log text format["[KEKO] (common) assigning zeus to player %1", name _player];

_playerPos = getPos _player;
_moderatorModule = (createGroup sideLogic) createUnit ["ModuleCurator_F", _playerPos, [], 0, ""];
_player assignCurator _moderatorModule;
