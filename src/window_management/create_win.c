#include "window.h"
#include <SFML/Graphics.h>
#include <SFML/System.h>

sfRenderWindow *create_window(void)
{
    sfRenderWindow *win;
    sfVideoMode mode = MODE;
    win = sfRenderWindow_create(mode, "My window", sfResize | sfClose, NULL);
    return win;
}