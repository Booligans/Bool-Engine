#include "BoolEngine.h"

bool initializeFramework(ALLEGRO_DISPLAY *display, ALLEGRO_TIMER * &timer, ALLEGRO_EVENT_QUEUE * &event_queue, int samples) {
	bool initialize = true;

	if (!al_init()) initialize = false;
	al_install_keyboard();
	al_install_mouse();
	al_init_image_addon();
	al_install_audio();
	al_init_acodec_addon();
	al_reserve_samples(samples);

	timer = al_create_timer(1.0 / FPS);
	event_queue = al_create_event_queue();

	return initialize;
}

void destroyFramework(ALLEGRO_DISPLAY * &display, ALLEGRO_EVENT_QUEUE * &event_queue) {
	al_destroy_display(display);
	al_destroy_event_queue(event_queue);
	display = nullptr;
	event_queue = nullptr;
}