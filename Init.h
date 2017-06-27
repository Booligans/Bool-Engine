#ifndef INIT_H
#define INIT_H

#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>

#include <string>

//KEYBOARD CONSTANTS
enum keycodes
{
	A = 1,
	B = 2,
	C = 3,
	D = 4,
	E = 5,
	F = 6,
	G = 7,
	H = 8,
	I = 9,
	J = 10,
	K = 11,
	L = 12,
	M = 13,
	N = 14,
	O = 15,
	P = 16,
	Q = 17,
	R = 18,
	S = 19,
	T = 20,
	U = 21,
	V = 22,
	W = 23,
	X = 24,
	Y = 25,
	Z = 26,

	CERO = 27,
	ONE = 28,
	TWO = 29,
	THREE = 30,
	FOUR = 31,
	FIVE = 32,
	SIX = 33,
	SEVEN = 34,
	EIGHT = 35,
	NINE = 36,

	PAD_CERO = 37,
	PAD_ONE = 38,
	PAD_TWO = 39,
	PAD_THREE = 40,
	PAD_FOUR = 41,
	PAD_FIVE = 42,
	PAD_SIX = 43,
	PAD_SEVEN = 44,
	PAD_EIGHT = 45,
	PAD_NINE = 46,

	F1 = 47,
	F2 = 48,
	F3 = 49,
	F4 = 50,
	F5 = 51,
	F6 = 52,
	F7 = 53,
	F8 = 54,
	F9 = 55,
	F10 = 56,
	F11 = 57,
	F12 = 58,

	PAD_LEFT = 82,
	PAD_RIGHT = 83,
	PAD_UP = 84,
	PAD_DOWN = 85,
	ESC = 59,

	/*
	ALLEGRO_KEY_TILDE = 60,
	ALLEGRO_KEY_MINUS = 61,
	ALLEGRO_KEY_EQUALS = 62,
	ALLEGRO_KEY_BACKSPACE = 63,
	ALLEGRO_KEY_TAB = 64,
	ALLEGRO_KEY_OPENBRACE = 65,
	ALLEGRO_KEY_CLOSEBRACE = 66,
	ENTER = 67,
	ALLEGRO_KEY_SEMICOLON = 68,
	ALLEGRO_KEY_QUOTE = 69,
	ALLEGRO_KEY_BACKSLASH = 70,
	ALLEGRO_KEY_BACKSLASH2 = 71, DirectInput calls this DIK_OEM_102: "< > | on UK/Germany keyboards"
	ALLEGRO_KEY_COMMA = 72,
	ALLEGRO_KEY_FULLSTOP = 73,
	ALLEGRO_KEY_SLASH = 74,
	ALLEGRO_KEY_SPACE = 75,

	ALLEGRO_KEY_INSERT = 76,
	ALLEGRO_KEY_DELETE = 77,
	ALLEGRO_KEY_HOME = 78,
	ALLEGRO_KEY_END = 79,
	ALLEGRO_KEY_PGUP = 80,
	ALLEGRO_KEY_PGDN = 81,

	ALLEGRO_KEY_PAD_SLASH = 86,
	ALLEGRO_KEY_PAD_ASTERISK = 87,
	ALLEGRO_KEY_PAD_MINUS = 88,
	ALLEGRO_KEY_PAD_PLUS = 89,
	ALLEGRO_KEY_PAD_DELETE = 90,
	ALLEGRO_KEY_PAD_ENTER = 91,

	ALLEGRO_KEY_PRINTSCREEN = 92,
	ALLEGRO_KEY_PAUSE = 93,

	ALLEGRO_KEY_ABNT_C1 = 94,
	ALLEGRO_KEY_YEN = 95,
	ALLEGRO_KEY_KANA = 96,
	ALLEGRO_KEY_CONVERT = 97,
	ALLEGRO_KEY_NOCONVERT = 98,
	ALLEGRO_KEY_AT = 99,
	ALLEGRO_KEY_CIRCUMFLEX = 100,
	ALLEGRO_KEY_COLON2 = 101,
	ALLEGRO_KEY_KANJI = 102,
	*/
};

//GENERAL CONSTANTS
const int FPS = 30;

//FUNCTIONS
bool create_display(ALLEGRO_DISPLAY * &display, int const& screenHeight, int const& screenWidth, int const& screen_x_position, int const& screen_y_position, std::string screenName, int const& screenType);
//Creates a display. | PARAMETERS: display pointer, height, width, positionX where it appears, positionY where it appears, ScreenTitle and the type of screen (0 = standard).

void initializeFramework(ALLEGRO_DISPLAY *display, ALLEGRO_TIMER * &timer, ALLEGRO_EVENT_QUEUE * &event_queue, int const& samples);
//Initialize the framework: keyboard, image y sound, events system and timer. | PARAMETERS: Screen, Timer, Event queue, number of audios to use and the fps of the timer.

//Modulo de renderizado, carga de sprites y animaciones.
//Modulo de audio y sonido.
//Modulo de tipos.



#endif