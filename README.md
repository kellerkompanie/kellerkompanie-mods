# kellerkompanie-mods
This project contains modifications for the Arma 3 game, custom tailored towards the needs of the Kellerkompanie community (https://kellerkompanie.com/). Not all parts are self-written. Where indicated inside the content does not belong to us, but rather to the original authors. The rest may be used by anyone in any way.

## Requirements
### extDB3
extDB3 is an Arma extension that allows a connection to MariaDB databases. It is required for the logging and persistency addons.

Installation:
1. Unpack the extDB3-1031.7z
2. Rename `@extDB3` to `@extdb3`
3. Edit database settings in `@extdb3/extdb3-conf.ini`
4. Copy custom sql ini's (e.g., `kellerkompanie-logging.ini` and `kellerkompanie-persistency.ini` ) to `@extdb3/sql_custom`.
