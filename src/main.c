/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** My_Hunter.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "hunter.h"
#include "my.h"

void create_assembly(hunter_t *game, menu_t *start, text_t *text,
text_t *text_complete)
{
    create_window(game);
    create_text(text, game);
    create_text_complete(text_complete, game);
    create_button(start, "ressources/start.png");
    sfRenderWindow_setFramerateLimit(game->window, 120);
}

void draw_sprite_function(hunter_t *game, menu_t *menu,
menu_t *start, text_t *text)
{
    sfText_setString(text->text, int_to_string(game->nbr_of_fireballs));
    sfRenderWindow_drawSprite(game->window, menu->sprite, NULL);
    sfRenderWindow_drawSprite(game->window, start->sprite, NULL);
    sfRenderWindow_drawText(game->window, text->text, NULL);
}

void menu(void)
{
    text_t *text = malloc(sizeof(text_t));
    hunter_t *game = malloc(sizeof(hunter_t));
    menu_t *menu = malloc(sizeof(menu_t));
    menu_t *start = malloc(sizeof(menu_t));
    text_t *text_complete = malloc(sizeof(text_t)); sfMusic *music;

    music = create_main_music(music); create_wallpaper_menu(menu);
    create_assembly(game, start, text, text_complete);
    sfRenderWindow_setFramerateLimit(game->window, 120);
    while (sfRenderWindow_isOpen(game->window)) {
        if (menu_analyse(game, menu, start) == 1) {
            sfMusic_stop(music); video_game(game);
        }
        sfRenderWindow_clear(game->window, sfBlack);
        draw_sprite_function(game, menu, start, text);
        sfRenderWindow_drawText(game->window,text_complete->text, NULL);
        sfRenderWindow_display(game->window);
    }
    destroy_menu_part_one(music, menu, text, text_complete);
    destroy_menu_part_two(game, start);
}

int main(int ac, char **av)
{
    if (ac == 1) {
        menu();
    }
    if (ac == 2) {
        if (my_strcmp(av[1], "-h") == 0) {
            help_command();
        } else {
            return 84;
        }
    }
}
