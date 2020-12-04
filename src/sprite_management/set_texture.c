#include "sprite.h"
#include "window.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdio.h>

void set_Texture(player_t **player, background_t **b)
{
    sfSprite_setTexture((*player)->player, (*player)->text_pl, sfTrue);
    sfSprite_setTexture((*b)->main, (*b)->nebula, sfTrue);
    sfSprite_setTexture((*b)->stars, (*b)->stars_tx, sfTrue);
}