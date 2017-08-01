#ifndef COLLISION_H
#define COLLISION_H

//Allegro libraries
#include <allegro5\allegro.h>
//Other libraries
#include <cmath>

//Returns true if the box of the sprite collides with another one. Recommended for rectangles | PARAMETERS: First sprite, position x, position y, Second sprite, second position x, second position y.
bool collisionBox(ALLEGRO_BITMAP *image, float posx, float posy, ALLEGRO_BITMAP *sec_image, float sec_posx, float sec_posy);
//DONT USE! NOT DONE. Returns true if the distance calculated between two sprites collides. Recommended for circles | PARAMETERS: First sprite, position x, position y, Second sprite, second position x, second position y.
bool collisionDistance(float posx, float posy, float radius, float sec_posx, float sec_posy, float sec_radius);
//DONT USE! NOT DONE. Returns true if... Recommended for perfect collisions but it might be slow. | PARAMETERS: First sprite, position x, position y, Second sprite, second position x, second position y.
bool collisionPixel();


#endif