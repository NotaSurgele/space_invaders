#include "sprite.h"
#include "window.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdio.h>

char *path[] = {
        MAIN_BACKGROUND,
        STARS_BACKGROUND,
        SHIP,
        METEOR,
        FL_METEOR,
        EXPLOSION,
        BULLET,
        NULL,
};

sfTexture **Texture_from_path(void)
{
    sfTexture **Text = malloc(sizeof(sfTexture *) * (7));

    for (int i = 0; path[i] != NULL; i++)
        Text[i] = sfTexture_createFromFile(path[i], NULL);
    return Text;
}