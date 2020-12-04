#ifndef SPRITE_H_
#define SPRITE_H_
    #include <SFML/Graphics.h>
    #include <SFML/System.h>

//  TEXTURES
    #define SHIP                "assets/ship_1.png"
    #define BULLET              "assets/laser.png"
    #define EXPLOSION           "assets/explosion.png"
    #define FL_METEOR           "assets/flaming_meteor.png"
    #define METEOR              "assets/meteor.png"
    #define MAIN_BACKGROUND     "assets/nebula.png"
    #define STARS_BACKGROUND    "assets/stars_2.png"
    #define BAREN               "assets/Baren.png"
    #define ICE                 "assets/Ice.png"
    #define LAVA                "assets/Lava.png"
    #define TERRAN              "assets/Terran.png"
    #define EARTH               "assets/earth.png"

//  UTILS
    #define v2f(x, y)       (sfVector2f) {x, y}

//  STRUCT AND LIST

    typedef struct player {
        sfSprite *player;
        sfSprite *laser;
        sfTexture *text_pl;
        sfTexture *laser_text;
        sfVector2f pos;
    }player_t;

    typedef struct background {
        sfSprite *main;
        sfSprite *stars;
        sfTexture *nebula;
        sfTexture *stars_tx;
        sfVector2f pos;
    }background_t;

    typedef struct planets {
        sfSprite **sprite;
        sfTexture **Text;
        sfVector2f pos;
    }planet_t;

    enum planet_state {
        SHOWN,
        HIDIN,
        DISPLAYING,
    };

//  FUNCTIONS

    player_t *player_initialization(sfTexture **TEXT);
    background_t *background_initialization(sfTexture **TEXT);
    sfTexture **Texture_from_path(void);
    void parrallax(background_t *b, int r, sfRenderWindow **win);
    void destroy(sfRenderWindow **win, int nb, ...);
    void draw(sfRenderWindow **win, int nb, ...);
    void set_Texture(player_t **player, background_t **b);

#endif /* !SPRITE_H_ */
