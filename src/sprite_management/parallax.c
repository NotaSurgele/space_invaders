#include "sprite.h"
#include "window.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdio.h>
#include <time.h>

char *path_pl[] = {
    BAREN,
    ICE,
    LAVA,
    TERRAN,
    EARTH,
    NULL,
};

planet_t *create_planet(void)
{
    planet_t *planet = malloc(sizeof(planet));
    planet->sprite = malloc(sizeof(5));
    planet->Text = malloc(sizeof(5));

    planet->pos = v2f(600, 600);
    for (int i = 0; i != 6; i++)
        planet->sprite[i] = sfSprite_create();
    // for (int i = 0; i != 5; i++)
    //     planet->Text[i] = sfTexture_createFromFile(path_pl[i], NULL);
    return planet;
}

void parrallax(background_t *b, int r, sfRenderWindow **win)
{
    enum planet_state p_s = HIDIN;
    //planet_t *planet = create_planet();  SEGFAULT;
    sfSprite_move(b->stars, v2f(0, 1));
    b->pos = sfSprite_getPosition(b->stars);
    (void)r;
    (void)p_s;
    (void)(*win);
    //(void)planet;
//  STARS
    if (b->pos.y == -10)
        sfSprite_setPosition(b->stars, v2f(0, -600));
// PLANETS
    // if (p_s == HIDIN) {
    //     sfSprite_destroy(planet->sprite[r]);
    //     sfTexture_destroy(planet->Text[r]);
    //     r = rand() % 7;
    //     if (r >= 0  && r <= 4)
    //         p_s = SHOWN;
    // }
    // if (p_s == SHOWN) {
    //     sfSprite_setTexture(planet->sprite[r], planet->Text[r], sfTrue);
    //     sfRenderWindow_drawSprite(*win, planet->sprite[r], NULL);
    // }
}