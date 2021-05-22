#include "\x\keko\addons\suppress\script_component.hpp"

#define DELETE_AT(_array, _index, _object) (_array select _index) deleteAt ( (_array select _index) find _object)

#define _getArray(array,index) (array select index)
#define _spawn(array,index) spawn (array select index)
#define _call(array,index) call (array select index)
#define _setIn(array,index,value) [array,index,value] call FUNC(Array_F)
#define _isIn(group,array,index) (group in (array select index) )
#define _setOut(array,index,value) array set [index, (array select index) - [value] ]



