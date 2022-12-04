/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** destroy_menu_part_one.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "hunter.h"
#include "my.h"

void destroy_menu_part_one(sfMusic *music, menu_t *menu,
text_t *text, text_t *text_complete)
{
    sfMusic_stop(music);
    sfMusic_destroy(music);
    sfSprite_destroy(menu->sprite);
    sfTexture_destroy(menu->texture);
    sfText_destroy(text->text);
    sfText_destroy(text_complete->text);
    free(text);
    free(menu);
    free(text_complete);
}

void destroy_menu_part_two(hunter_t *game, menu_t *start)
{
    sfRenderWindow_destroy(game->window);
    sfSprite_destroy(start->sprite);
    sfTexture_destroy(start->texture);
    for (int i = 0; i < 4; i++) {
        sfSprite_destroy(game->life_sprite[i]->sprite);
        sfTexture_destroy(game->life_sprite[i]->texture);
        free(game->life_sprite[i]);
    }
    for (int i = 0; i < game->nbr_of_fireballs; i++) {
        sfClock_destroy(game->fireball[i]->clock);
        sfSprite_destroy(game->fireball[i]->sprite);
        sfTexture_destroy(game->fireball[i]->texture);
        free(game->fireball[i]);
    }
    free(game->fireball);
    free(game->life_sprite);
    free(start);
    free(game);
}
