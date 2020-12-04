#ifndef SPRITE_H_
#define SPRITE_H_
#include <SFML/Graphics.h>
#include <SFML/System.h>
#define PATH "assets/sprite/red.png"
sfSprite **sprite_create(int nb);
sfSprite **sprite_set_and_create_text(int nb);
int draw_sprite_on_screen(sfRenderWindow *win, sfSprite **sprite, int i);
#endif /* !SPRITE_H_ */
