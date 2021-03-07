# keko_vcomai
Kellerkompanie adaption of Vcom-AI by Genesis (https://github.com/genesis92x/VcomAI-3.0). The code is based on the Steam Workshop version 3.4.0 (https://steamcommunity.com/sharedfiles/filedetails/?id=721359761).

Similar to the original version of Vcom-AI you can set individual behavior for groups and units via script:
```
(group this) setVariable ["keko_vcomai_NOFLANK",true]; //This command will stop the AI squad from executing advanced movement maneuvers.
(group this) setVariable ["keko_vcomai_NORESCUE",true]; //This command will stop the AI squad from responding to calls for backup.
(group this) setVariable ["keko_vcomai_TOUGHSQUAD",true]; //This command will stop the AI squad from calling for backup.
(group this) setVariable ["keko_vcomai_Disable",true]; //This command will disable Vcom AI on a group entirely.
(group this) setVariable ["keko_vcomai_DisableForm",true]; //This command will disable AI group from changing formations.
(group this) setVariable ["keko_vcomai_Skilldisable",true]; //This command will disable an AI group from being impacted by Vcom AI skill changes. 
```