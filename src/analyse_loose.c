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

int analyse_loose(hunter_t *game)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
            return 1;
        }
        if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
            return 1;
        }
        close_window(event, game);
    }
    return 0;
}
