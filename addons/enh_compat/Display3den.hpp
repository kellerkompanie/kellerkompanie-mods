class ctrlMenu;
class Display3den {
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
