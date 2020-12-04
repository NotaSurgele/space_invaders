#include "sprite.h"
#include "window.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdio.h>

sfSprite **sprite_create(int nb)
{
    sfSprite **sprite = malloc(sizeof(sfSprite *) * (nb + 1));
    int i;

    for (i = 0; i != nb; i++) {
        sprite[i] = sfSprite_create();
    }
    sprite[i] = NULL;
    return sprite;
}

sfSprite **sprite_set_and_create_text(int nb)
{
    sfTexture *texture = sfTexture_createFromFile(PATH, NULL);
    sfSprite **sprite = sprite_create(nb);

    for (int i = 0; sprite[i] != NULL; i++) {
        sfSprite_setTexture(sprite[i], texture, sfTrue);
    }
    return sprite;
}

int draw_sprite_on_screen(sfRenderWindow *win, sfSprite **sprite, int i)
{
    for (i = 0; sprite[i] != NULL; i++) {
        sfRenderWindow_drawSprite(win, sprite[i], NULL);
    }
    return i;
}