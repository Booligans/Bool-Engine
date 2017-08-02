#ifndef GRAPHICS_H
#define GRAPHICS_H

//Allegro libraries
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>

//Other libraries needed
#include <string>
#include <vector>

//Constants and types needed
struct tPixelRegion {
	int width;
	int height;
};

//LOADING AND SAVING A SPRITE
//Loads a normal sprite | PARAMETERS: Sprite, file directory.
void loadSprite(ALLEGRO_BITMAP * &image, std::string directory);
//Loads a sprite animation with same sizes. The first position of the vector will be the whole sprite sheet. | PARAMETERS: Vector of sprites, file directory, number of sprites per line, number of lines.
void loadSprite(std::vector<ALLEGRO_BITMAP*> &tImage, std::string directory, int width_num, int height_num);
//Loads a sprite animation with different sizes (needs to have a line separator). The first position of the vector will be the whole sprite sheet. | PARAMETERS: Vector of sprites, file directory, vector with the number of pixel per sprite. NOT DONE
void loadSprite(std::vector<ALLEGRO_BITMAP*> &tImage, std::string directory);
//Saves a sprite. Returns true if the image has been saved successfully | PARAMETERS: Sprite, file directory.
bool saveSprite(ALLEGRO_BITMAP * &image, std::string directory);

//DRAWING A SPRITE | OPTIONS: Tinted, Rotated, Scaled and Combinations.
//Draws a standard sprite | PARAMETERS: Sprite, Print position.
void drawSprite(ALLEGRO_BITMAP *image, float posx,  float posy);
//Draws a tinted sprite | PARAMETERS: Sprite, Print position, color (multiplies all the colors of the sprite by the given color). 
void drawSprite(ALLEGRO_BITMAP *image, float posx, float posy, ALLEGRO_COLOR tint);
//Draws a rotated sprite | PARAMETERS: Sprite, Print position, centerx and centery of rotation and angles in radians clockwise.
void drawSprite(ALLEGRO_BITMAP *image, float posx, float posy, float centerx, float centery, float angle);
//Draws a scaled sprite | PARAMETERS: Sprite, Print position, scale of width and scale of height.
void drawSprite(ALLEGRO_BITMAP *image, float posx, float posy, float swidth, float sheight);
//Loads and draws a tinted, rotated sprite | PARAMETERS: Sprite, Print position, color, center of rotation and angles.
void drawSprite(ALLEGRO_BITMAP *image, float posx, float posy, ALLEGRO_COLOR tint, float centerx, float centery, float angle);
//Loads and draws a tinted, scaled sprite | PARAMETERS: Sprite, Print position, color, scale of width and scale of height.
void drawSprite(ALLEGRO_BITMAP *image, float posx, float posy, ALLEGRO_COLOR tint, float swidth, float sheight);
//Loads and draws a rotated scaled sprite | PARAMETERS: Sprite, Print position, center of rotation, angles, scale of width and scale of height.
void drawSprite(ALLEGRO_BITMAP *image, float posx, float posy, float centerx, float centery, float angle, float swidth, float sheight);
//Loads and draws a tinted, rotated and scaled sprite | PARAMETERS: Sprite, Print position, color, center of rotation, angle, scale of width and scale of height.
void drawSprite(ALLEGRO_BITMAP *image, float posx, float posy, ALLEGRO_COLOR tint, float centerx, float centery, float angle, float swidth, float sheight);

//IMPORTANT FUNCIONS FOR A SPRITE.
//Shows in the displays the backbuffer (everything drawed).
void showScreen();
//Destroys the sprite, freeing al the memmory and resources used by it, also lets the pointer to nullptr. PARAMETERS: Sprite.
void destroySprite(ALLEGRO_BITMAP * &image);
//Destroys a vector of sprites, freeing all the memmory and resources used by all of them, lets all the pointers to nullptr. PARAMETERS: Vector of sprites.
void destroySprite(std::vector <ALLEGRO_BITMAP*> &tImage);

#endif
