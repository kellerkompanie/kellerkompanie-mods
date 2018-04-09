# kellerkompanie-mods
This project contains mostly self written modifications for ArmA 3 surrounding the needs of the Kellerkompanie community (http://kellerkompanie.com/). Where indicated inside the source code content does not belong to me but rather to the original authors. The rest may be used by anyone in any way.

## keko_audio
The audio packages contain background music, sounds and songs for usage via Zeus or through mission editing. The actual audio files do not belong to me, but were taken mostly from YouTube sources and then converted using Audacity.

## keko_audio_classic
Mainly soothing, classic music:
* Beethoven - Für Elise
* Mozart - La Crimosa
* Ludovico Einaudi - Nuvole Bianche

## keko_audio_fallout
Contains music from Fallout 3 & 4:
Fallout 3:
* A Wonderful Guy
* Anything Goes
* Bingo Bango Bongo
* Boogie Man
* Butcher Pete
* Crazy He Calls Me
* Dear Hearts and Gentle People
* Easy Living
* Fox Boogie
* Happy Times
* I don't want to set the World on Fire
* I'm tickled pink
* Into each life some rain must fall
* Jazzy interlude
* Jolly Days
* Let's go sunning
* Maybe
* Might mighty man
* Rhythm or you
* Swing doors
* Way back home

Fallout 4:
* Atom Bomb Baby
* Civilization
* Fankie Carle
* Good Rockin
* Johnny Mercer & The Pied Pipers
* Keep A Knockin
* One more tomorrow
* Orange colored sky
* Pistol Packin Mama
* Right behind you baby
* Rocket 69
* Sheldon Allman
* Sixty Minute Man
* Tex Beneke
* The Wanderer
* The end of the world
* Undecided
* Uranium Fever
* Uranium Rock
* Whole Lotta Shakin Goin On
* Worry worry worry
* Resident theme

## keko_audio_fun
Funny songs for not so serious moments:
* Irish Rovers - Drunken Sailor
* Hard Bass School - Narkotik kal
* Initial D - Deja Vu
* Oktoberklub - Was wollen wir trinken
* Saleel Sawarim

## keko_audio_historic
Older, historic, heroic & marsh music:
* Red Army Choir - Anthem
* Red Army Choir - Kalinka
* Red Army Choir - Katyusha
* Red Army Choir - Korobelniki
* Red Army Choir - Let's Go
* Red Army Choir - March
* Red Army Choir - My Country
* Red Army Choir - Red Army
* Red Army Choir - Souliko
* Blood on the Risers - Gory Gory What a helluva Way
* Oh du schöner Westerwald
* Grüne Teufel
* Erika
* Hundert Mann und ein Befehl
* Grün ist unser Fallschirm
* Hört ihr unseren Schritt
* Ich hatt einen Kameraden
* It's a long way to Tripperary
* The Halls of Montezuma
* Preussens Gloria
* Stars and Stripes Forever
* USA National Anthem
* When Johnny comes marching home
* Wir sind des Geyers schwarzer Haufen

## keko_audio_misc
Random music that does not fit in any other category, e.g., for use as radio:
* 5Nizza - Soldat
* ACDC - Back in Black
* Black Gold (Occupied Theme)
* Blues Saraceny - Dogs of War
* Caravan Palace - Lone Digger
* Danger Zone (Top Gun)
* Queen - Don't stop me now
* Foster the People - Pumped up Kicks
* ACDC - Highway to Hell
* Hit the road Jack
* John Denver - Take me home country roads
* Kari Kimmel - Black
* Never gonna give you up
* Run Boy Run
* SYML - Mr. Sandman
* Seven Nation Army (Glitchmob remix)
* The handsome family - Far from any road
* The XX - Intro
* ACDC - Thunderstruck
* Welcome to the Jungle

## keko_audio_mogilevka
Special edition for mogilevka:
* Arbeiter, Bauern

## keko_audio_movie
Basically film music, Hans Zimmer etc.:
* Band of Brothers Theme
* Pirates of the Carribean

## keko_audio_vietnam
Music played during the Vietnam era:
* All Along the Watchtower
* Black Sabbath - War Pigs
* Creedence Clearwater Revival - Green River
* Creedence Clearwater Revival - Run Through the Jungle
* Creedence Clearwater Revival - Revival up around the bend
* Buffalo Springfield - For what it's worth
* Fortunate Son
* Jefferson Airplane - White Rabbit
* Jefferson Airplane - Somebody to love
* Nancy Sinatra - These Boots are Made for Walkin
* Paint it Black
* Ride of the Valkyries
* The count five - Psychotic Reaction
* The Rolling Stones - Sympathy for the Devil
* The Animals - House of the rising sun
* The Bob Seger System - 2 2
* The Doors - The End
* The Rolling Stones - Gimme Shelter
* The Rolling Stones - I can't get no satisfaction
* We gotta get out of this place

## keko_common
Contains several basic and partly shared functionalities between the mods. Following functionalities are provided inside the 3den Editor:
* Mission initalization module - allows for easy mission creations and settings of most common parameters
* Role descritpion editing - using the right click context menu -> edit on units one can easily adjust the role description
* Respawn location - set the desired respawn position

Zeus funcitonality:
* Full Heal (makes a player fully healed, including ace limbs etc.)
* Assign Medic/Doctor (drop this on top of a player to make him special)
* Assign Engineer/Specialist (drop this on top of a player to make him special)
* Lock/Unlock doors - useful in combination with the breaching charge or just to deny troops entry to buildings
* Respawn Location - adjust the respawn position during mission

## keko_console
Adds the debug console to missions that have not declared `enableDebugConsole` in their `description.ext`. The console will be available to the logged-in admin only. 

## keko_faction_generic
Adds placeable factions for playable units for BLUFOR, OPFOR and INDFOR. Once placed the unit becomes playable automatically and the role description is directly assigned. Also this units get the default loadout assigned based on their role.

## keko_hearing
Removes ace hearing reduction when wearing certain helmets, like, e.g., the crew helmet.

## keko_intel
Adds the ability to attach intel similar to the Ares Mod Achilles Expansion, but in 3den Editor instead of Zeus.

## keko_loadout
Playable factions/loadouts are placed inside this mod. The faction may be chosen inside the *Initalize Mission* module in 3den Editor. Also adds modules for adding the loadout menu to objects, either in 3den Editor or Zeus.

## keko_logging
Server side only mod that is supposed to capture logs for connecting/disconnecting players, mission starts etc.

## keko_logistics
Related to the factions from keko_loadout this mod contains settings for automatic logistics supply depending on the specific ammunition etc. of the faction. Also adds modules for logistics menu und supply drops.

## keko_persistency
Server side only mod that allows saving of player loadouts into a persistent database.

## keko_police
A collection of several funcitonalities that are supposed to make police mission more fun. Main functionality is to have a key binded to shout "Police! Freeze!", which based on pre-defined probabilities makes enemy AI surrender or not.

## keko_teleport
A simple and intuitive fast travel system with modules for adding destinations and menus to objects. Not only teleport but also parajump above the target is available.
