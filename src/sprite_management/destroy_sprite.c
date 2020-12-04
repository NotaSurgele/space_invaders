#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdio.h>
#include <stdarg.h>
#include "window.h"
#include "sprite.h"

void destroy(sfRenderWindow **win, int nb, ...)
{
    va_list arg;

    va_start(arg, nb);
    for (int i = 0; i != nb; i++)
        sfSprite_destroy(va_arg(arg, sfSprite *));
    sfRenderWindow_destroy(*win);
    va_end(arg);
}
