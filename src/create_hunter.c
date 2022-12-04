/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** create_hunter.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "hunter.h"

hunter_t *create_hunter(hunter_t *game)
{
    game->music = sfMusic_createFromFile("ressources/boom.ogg");
    game->velocity = 7;
    game->score = 0;
    game->clock = sfClock_create();
    game->sec = 0;

    game->fireball = malloc(sizeof(fireball_t *) * (game->nbr_of_fireballs));
    for (int i = 0; i < game->nbr_of_fireballs; i++) {
        game->fireball[i] = malloc(sizeof(fireball_t));
        game->fireball[i] = create_fireball(game->fireball[i]);
    }
    game->life_sprite = malloc(sizeof(life_sprite_t *) * (4));
    for (int i = 0; i < 4; i++) {
        game->life_sprite[i] = malloc(sizeof(life_sprite_t));
        game->life_sprite[i] = create_life_sprite(game->life_sprite[i], i);
    }
    game->main_music = set_music();
    return (game);
}
