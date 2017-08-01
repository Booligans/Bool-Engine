#include "Collision.h"


bool collisionBox(ALLEGRO_BITMAP *image, float posx, float posy, ALLEGRO_BITMAP *sec_image, float sec_posx, float sec_posy) {
	bool collision = false;

	if (!(posx + al_get_bitmap_width(image) < sec_posx || posx > sec_posx + al_get_bitmap_width(sec_image) ||  posy + al_get_bitmap_height(image) < sec_posy || posy > sec_posy + al_get_bitmap_height(image))) {
		collision = true;
	}

	return collision;
}

bool collisionDistance(float posx, float posy, float radius, float sec_posx, float sec_posy, float sec_radius) {
	bool collision = false;

	if (sqrt(pow(posx - sec_posx, 2) + pow(posy - sec_posy, 2)) < radius + sec_radius) {
		collision = true;
	}

	return collision;
}

bool collisionPixel() {
	bool collision = false;



	return collision;
}
