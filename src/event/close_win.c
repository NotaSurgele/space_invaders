#include "window.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdio.h>

void close_win(sfRenderWindow *win, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(win);
}