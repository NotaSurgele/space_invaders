#include "sprite.h"
#include "window.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdio.h>

player_t *player_initialization(sfTexture **TEXT)
{
    player_t *player = malloc(sizeof(player_t));

    player->player = sfSprite_create();
    player->text_pl = TEXT[2];
    player->laser = sfSprite_create();
    player->laser_text = TEXT[6];
    player->pos = v2f(180, 550);
    sfSprite_setPosition(player->player, player->pos);
    return player;
}