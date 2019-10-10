class ctrlMenu;
class ctrlMenuStrip;
class ctrlShortcutButton;
class Display3den {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                class MissionPreviewSP {
                    shortcuts[]={};
                };
            };
        };
        class ButtonPlay: ctrlShortcutButton {
            shortcuts[] = {
                "0x00050000 + 0",
                57
            };
        };
    };

    // adds option for faction config export
    class ContextMenu: ctrlMenu {
        class Items {
            class Log {
                items[] += {
                    QGVAR(factionExport)
                };
            };
            class GVAR(factionExport) {
                text = "Export for Faction Generator";
                action = QUOTE(call FUNC(exportToClipboard));
                conditionShow = "selectedObject";
            };
        };
    };
};
