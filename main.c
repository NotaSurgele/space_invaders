#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <stdlib.h>
#include "window.h"
#include "sprite.h"

int main(void)
{
    sfEvent event;
    int r = rand() % 7;
    sfRenderWindow *win = create_window();
    sfTexture **TEXT = Texture_from_path();
    player_t *player = player_initialization(TEXT);
    background_t *background = background_initialization(TEXT);

    set_Texture(&player, &background);
    while (sfRenderWindow_isOpen(win)) {
        while (sfRenderWindow_pollEvent(win, &event)) {
            close_win(win, event);
        }
        parrallax(background, r, &win);
        draw(&win, 3, background->main, background->stars, player->player);
    }
    destroy(&win, 3, player->player, background->main, background->stars);
    return 0;
}