/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** create_window.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "hunter.h"

sfRenderWindow *create_window(hunter_t *game)
{
    sfVideoMode mode = {1920, 1080, 32};

    game->nbr_of_fireballs = 1;
    game->window =
    sfRenderWindow_create(mode, "Protect Earth", sfClose, NULL);
    return (game->window);
}
