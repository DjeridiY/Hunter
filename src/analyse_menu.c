/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** analyse_events.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "hunter.h"

int adjust_difficulty_simple(hunter_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        if (game->nbr_of_fireballs <= 1) {
            game->nbr_of_fireballs = 1;
        } else {
            game->nbr_of_fireballs--;
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        if (game->nbr_of_fireballs >= 99) {
            game->nbr_of_fireballs = 99;
            return 0;
        } else {
            game->nbr_of_fireballs++;
        }
    }
}

int adjust_difficulty_boost(hunter_t *game, sfEvent event)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        if (game->nbr_of_fireballs >= 99) {
            game->nbr_of_fireballs = 99;
            return 0;
        } else {
            game->nbr_of_fireballs += 10;
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        if (game->nbr_of_fireballs <= 1) {
            game->nbr_of_fireballs = 1;
        } else {
            game->nbr_of_fireballs -= 10;
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(game->window);
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(game->window);
}

int menu_analyse(hunter_t *game, menu_t *menu, menu_t *start)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        if (sfKeyboard_isKeyPressed(sfKeySpace)) {
            return 1;
        }
        close_window(event, game);
        adjust_difficulty_simple(game);
        adjust_difficulty_boost(game, event);
    }
}
