#include "sprite.h"
#include "window.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdio.h>

background_t *background_initialization(sfTexture **TEXT)
{
    background_t *background = malloc(sizeof(background_t));

    background->main = sfSprite_create();
    background->stars = sfSprite_create();
    background->nebula = TEXT[0];
    background->stars_tx = TEXT[1];
    background->pos = v2f(0, -600);
    sfSprite_setPosition(background->stars, background->pos);
    return background;
}