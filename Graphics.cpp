#include "Graphics.h"

void loadSprite(ALLEGRO_BITMAP * &image, std::string location) {
	image = al_load_bitmap(location.c_str());
}

bool saveSprite(ALLEGRO_BITMAP * &image, std::string location) {
	return al_save_bitmap(location.c_str(), image);
}

void drawSprite(ALLEGRO_BITMAP *image, float posx, float posy) {
	al_draw_bitmap(image, posx, posy, NULL);
}

void drawSprite(ALLEGRO_BITMAP *image, float posx, float posy, ALLEGRO_COLOR tint) {
	al_draw_tinted_bitmap(image, tint, posx, posy, NULL);
}

void drawSprite(ALLEGRO_BITMAP *image, float posx, float posy, float centerx, float centery, float angle) {
	al_draw_rotated_bitmap(image, centerx, centery, posx, posy, angle, NULL);
}

void drawSprite(ALLEGRO_BITMAP *image, float posx, float posy, float swidth, float sheight) {
	float width, height;
	width = swidth * al_get_bitmap_width(image);
	height = sheight * al_get_bitmap_height(image);
	al_draw_scaled_bitmap(image, 0, 0, al_get_bitmap_width(image), al_get_bitmap_height(image), posx, posy, width, height, NULL);
}

void drawSprite(ALLEGRO_BITMAP *image, float posx, float posy, ALLEGRO_COLOR tint, float centerx, float centery, float angle) {
	al_draw_tinted_rotated_bitmap(image, tint, centerx, centery, posx, posy, angle, NULL);
}

void drawSprite(ALLEGRO_BITMAP *image, float posx, float posy, ALLEGRO_COLOR tint, float swidth, float sheight){
	float width, height;
	width = swidth * al_get_bitmap_width(image);
	height = sheight * al_get_bitmap_height(image);
	al_draw_tinted_scaled_bitmap(image, tint, 0, 0, al_get_bitmap_width(image), al_get_bitmap_height(image), posx, posy, width, height, NULL);
}

void drawSprite(ALLEGRO_BITMAP *image, float posx, float posy, float centerx, float centery, float angle, float swidth, float sheight){
	al_draw_scaled_rotated_bitmap(image, centerx, centery, posx, posy, swidth, sheight, angle, NULL);
}

void drawSprite(ALLEGRO_BITMAP *image, float posx, float posy, ALLEGRO_COLOR tint, float centerx, float centery, float angle, float swidth, float sheight) {
	al_draw_tinted_scaled_rotated_bitmap(image, tint, centerx, centery, posx, posy, swidth, sheight, angle, NULL);
}

void showScreen() {
	al_flip_display();
}
void destroySprite(ALLEGRO_BITMAP * &image) {
	al_destroy_bitmap(image);
	image = nullptr;
}
