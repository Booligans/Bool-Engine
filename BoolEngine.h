#ifndef BOOLENGINE_H
#define BOOLENGINE_H

/*   ______                 _____    ___
*   /\  _  \               /\__  \  /\__\
*   \ \ \L\/_    ____    __\/__\  \ \/__/_     ____   _______   _______   ______
*    \ \  _  \  /  _ \  /  _ \\ \  \  /\  \   / _  \ /\  ___ \ /\  ___ \ /\  ___\
*     \ \ \L\ |/\ \L\ \/\ \L\ \\_\  \_\ \  \ /\ \L\ \\ \ \__\ \\ \ \_/\ \\ \____ \
*      \ \____/\ \____/\ \____//\_____\\ \__\\ \____ \\ \_\_/\_\\ \_\\ \_\\/\_____\
*	    \/___/  \/___/  \/___/ \/_____/ \/__/ \/___L\ \\/_/ \/_/ \/_/ \/_/ \/_____/
*                                                /\___/
*                                                \/__/
*
*       Main file for the Booligans Engine.
*/

//Framework Libraries
#include "Collision.h"
#include "Control.h"
#include "Graphics.h"
#include "Sound.h"

//Allegro Libraries
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

//Other Libraries
#include <string>
#include <vector>

//GENERAL CONSTANTS
const int FPS = 60;

//FUNCTIONS
//Initialize the framework: keyboard, image, sound, events system and timer. | PARAMETERS: Screen, Timer, Event queue, number of audios to use and the fps of the timer.
bool initializeFramework(bool keyboard, bool mouse, bool joystick, bool image, bool audio, int samples = 0);
//Destroys the framework so that frees all the resources used by it | PARAMETERS: display, event queue.
void destroyFramework(bool keyboard, bool mouse, bool joystick, bool image, bool audio);

#endif
