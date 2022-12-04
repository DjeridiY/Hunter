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
#include <time.h>

hunter_t *move_sprite(hunter_t *game, int i)
{
    game->fireball[i]->pos = sfSprite_getPosition(game->fireball[i]->sprite);
    if (game->fireball[i]->pos.x >= 2000) {
        game->fireball[i]->pos.x = 10 - rand() % (4000);
        game->fireball[i]->pos.y = rand() % (int)(800 - 300 *
        game->fireball[i]->scale.x);
        game->life += 1;
        sfSprite_setPosition(game->fireball[i]->sprite, game->fireball[i]->pos);
    } else {
        sfVector2f vector = sfSprite_getPosition(game->fireball[i]->sprite);
        vector.x += 0.5 * game->velocity;
        sfSprite_move(game->fireball[i]->sprite, vector);
        sfSprite_setPosition(game->fireball[i]->sprite, vector);
        }
    return (game);
}

hunter_t *anime_sprite(hunter_t *game, int i)
{
    game->fireball[i]->time = sfClock_getElapsedTime(game->fireball[i]->clock);
    game->fireball[i]->milisec = game->fireball[i]->time.microseconds / 600;
    if (game->fireball[i]->milisec > 60) {
        sfClock_restart(game->fireball[i]->clock);
        game->fireball[i]->rect.left += 512;
    }
    if (game->fireball[i]->rect.left >= 3072) {
        game->fireball[i]->rect.left = 0;
    }
    return (game);
}

hunter_t *load_fireball(hunter_t *game)
{
    game->time = sfClock_getElapsedTime(game->clock);
    game->sec = game->time.microseconds / 1000000.0;
    if (game->sec > 0.0000001) {
        for (int i = 0; i < game->nbr_of_fireballs; i++) {
            game = anime_sprite(game, i);
            game = move_sprite(game, i);
            sfSprite_setTextureRect(game->fireball[i]->sprite,
            game->fireball[i]->rect);
            sfRenderWindow_drawSprite(game->window,
            game->fireball[i]->sprite, NULL);
        }
        sfClock_restart(game->clock);
    }
    return (game);
}
