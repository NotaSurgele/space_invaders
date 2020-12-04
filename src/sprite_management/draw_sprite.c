#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdio.h>
#include <stdarg.h>
#include "window.h"
#include "sprite.h"

void draw(sfRenderWindow **win, int nb, ...)
{
    va_list arg;

    va_start(arg, nb);
    sfRenderWindow_clear(*win, sfBlack);
    for (int i = 0; i != nb; i++)
        sfRenderWindow_drawSprite(*win, va_arg(arg, sfSprite *), NULL);
    sfRenderWindow_display(*win);
    va_end(arg);
}
