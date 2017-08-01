#include "Control.h"

void initializeEvents(ALLEGRO_DISPLAY *display, ALLEGRO_TIMER * &timer, ALLEGRO_EVENT_QUEUE * &event_queue, bool use_timer, bool use_display, bool use_keyboard, bool use_mouse) {
	if (use_timer) al_register_event_source(event_queue, al_get_timer_event_source(timer));
	if (use_display) al_register_event_source(event_queue, al_get_display_event_source(display));
	if (use_keyboard) al_register_event_source(event_queue, al_get_keyboard_event_source());
	if (use_mouse) al_register_event_source(event_queue, al_get_mouse_event_source());
}

bool createDisplay(ALLEGRO_DISPLAY * &display, int const& screenHeight, int const& screenWidth, int const& screen_x_position, int const& screen_y_position, std::string screenName, ScreenType const& screenType) {
	bool create = true;
	int screenFlag = standard;

	switch (screenType) {
	case standard: screenFlag = ALLEGRO_WINDOWED; break;
	case fullscreen: screenFlag = ALLEGRO_FULLSCREEN; break;
	case fullscreen_window: screenFlag = ALLEGRO_FULLSCREEN_WINDOW; break;
	case resizable: screenFlag = ALLEGRO_WINDOWED | ALLEGRO_RESIZABLE; break;
	case noframe: screenFlag = ALLEGRO_NOFRAME;
	}

	al_set_new_display_flags(screenFlag);
	display = al_create_display(screenHeight, screenWidth);
	al_set_window_position(display, screen_x_position, screen_y_position);
	al_set_window_title(display, screenName.c_str());
	if (!display)	create = false;

	return create;
}