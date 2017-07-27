#include "Init.h"
//HOLA
//Crea una pantalla. | PARAMETROS: Puntero de la pantalla, alto, ancho, posicionx donde aparece, posiciony donde aparece, titulo y el tipo de pantalla (0 = standard).
bool create_display(ALLEGRO_DISPLAY * &display, int const& screenHeight, int const& screenWidth, int const& screen_x_position, int const& screen_y_position, std::string screenName, int const& screenType) {
	bool create = true;
	int screenFlag = 0;

	switch (screenType) {
	case 0: screenFlag = ALLEGRO_WINDOWED;
	}

	al_set_new_display_flags(screenFlag);
	display = al_create_display(screenHeight, screenWidth);
	al_set_window_position(display, screen_x_position, screen_y_position);
	al_set_window_title(display, screenName.c_str());
	if (!display)	create = false;

	return create;
}

void initializeFramework(ALLEGRO_DISPLAY *display, ALLEGRO_TIMER * &timer, ALLEGRO_EVENT_QUEUE * &event_queue, int const& samples) {
	al_install_keyboard();
	al_init_image_addon();
	al_install_audio();
	al_init_acodec_addon();
	al_reserve_samples(samples);
	if (!create_display(display, SCREENWIDTH, SCREENHEIGHT, SCREENAPPEARX, SCREENAPPEARY, SCREENTITLE, 0)) {
		//std::cout << "ERROR AL CREAR DISPLAY \n";
	};
	timer = al_create_timer(1.0 / FPS);
	event_queue = al_create_event_queue();
	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_display_event_source(display));
}
