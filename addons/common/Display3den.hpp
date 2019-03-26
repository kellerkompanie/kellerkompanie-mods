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
};
