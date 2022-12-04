/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** hunter.h
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>

#ifndef HUNTER_H_
    #define HUNTER_H_

typedef struct crosshair {

    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfVector2f origin;

} crosshair_t;

typedef struct fireball {

    sfSprite *sprite;
    sfIntRect rect;
    sfTexture *texture;
    sfVector2f scale;
    sfVector2f origin;
    sfClock *clock;
    sfVector2f pos;
    sfTime time;
    float milisec;
    int status;

} fireball_t;

typedef struct wallpaper {

    sfSprite *sprite;
    sfTexture *texture;

} wallpaper_t;

typedef struct menu {

    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;

} menu_t;

typedef struct text {

    char *str;
    sfFont *font;
    sfText *text;
    sfVector2f pos;
    sfVector2f scale;
    sfText *score;
    sfVector2f pos2;
    sfVector2f scale2;

} text_t;

typedef struct hitmarker {

    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f scale;
    sfVector2f pos;

} hitmarker_t;

typedef struct life_sprite {

    sfSprite *sprite;
    sfIntRect rect;
    sfTexture *texture;
    sfVector2f scale;
    sfVector2f pos;

} life_sprite_t;

typedef struct hunter {

    crosshair_t *crosshair;
    fireball_t **fireball;
    life_sprite_t **life_sprite;
    wallpaper_t *wallpaper;
    hitmarker_t *hitmarker;
    text_t *text;
    sfRenderWindow *window;
    menu_t *menu;
    sfMusic *music;
    int nbr_of_fireballs;
    float velocity;
    int score;
    int life;
    int level;
    sfClock *clock;
    sfTime time;
    float sec;
    double time0;
    double duration;
    sfMusic *main_music;

} hunter_t;

sfRenderWindow *create_window(hunter_t *game);
sfMusic *set_music(void);
void analyse_evts(hunter_t *game, crosshair_t *crosshair,
hitmarker_t *hitmarker);
fireball_t *create_fireball(fireball_t *fireball);
sfVector2f get_position(float x, float y);
crosshair_t *create_crosshair(crosshair_t *crosshair);
wallpaper_t *create_wallpaper(wallpaper_t *wallpaper);
hunter_t *load_fireball(hunter_t *game);
void print_fireball(hunter_t game);
hitmarker_t *create_hitmarker(hitmarker_t *hitmarker);
hunter_t *create_hunter(hunter_t *game);
void video_game(hunter_t *game);
menu_t *create_wallpaper_menu(menu_t *wallpaper);
menu_t *create_button(menu_t *button, char *path);
char *int_to_string(int number);
int menu_analyse(hunter_t *game, menu_t *menu, menu_t *start);
life_sprite_t *create_life_sprite(life_sprite_t *life_sprite, int i);
void game_life(hunter_t *game);
sfMusic *create_main_music(sfMusic *music);
int loose_game(hunter_t *game, crosshair_t *crosshair,
wallpaper_t *wallpaper, text_t *score);
life_sprite_t create_game_over(life_sprite_t game_over,
char *path, int y, int x);
int analyse_loose(hunter_t *game);
void help_command(void);
void close_window(sfEvent event, hunter_t *game);
void destroy_menu_part_one(sfMusic *music, menu_t *menu,
text_t *text, text_t *text_complete);
void menu(void);
void destroy_menu_part_two(hunter_t *game, menu_t *start);
text_t *create_text(text_t *text, hunter_t *game);
text_t *create_text_complete(text_t *text_complete, hunter_t *game);
text_t *create_score(text_t *score, hunter_t *game);

#endif /* HUNTER_H_ */
