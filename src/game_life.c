/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** game_life.c
*/
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "hunter.h"

void last_life(hunter_t *game)
{
    if (game->life == 3) {
        game->life_sprite[0]->pos.y = game->life_sprite[0]->pos.x = -500;
        sfSprite_setTexture(game->life_sprite[0]->sprite,
        game->life_sprite[0]->texture, sfFalse);
        sfSprite_setPosition(game->life_sprite[0]->sprite,
        game->life_sprite[0]->pos);
    }
}

void game_life(hunter_t *game)
{
    if (game->life == 1) {
        game->life_sprite[2]->pos.y = game->life_sprite[2]->pos.x = -500;
        sfSprite_setTexture(game->life_sprite[2]->sprite,
        game->life_sprite[2]->texture, sfFalse);
        sfSprite_setPosition(game->life_sprite[2]->sprite,
        game->life_sprite[2]->pos);
        }
    if (game->life == 2) {
        game->life_sprite[1]->pos.y = game->life_sprite[1]->pos.x = -500;
        sfSprite_setTexture(game->life_sprite[1]->sprite,
        game->life_sprite[1]->texture, sfFalse);
        sfSprite_setPosition(game->life_sprite[1]->sprite,
        game->life_sprite[1]->pos);
    }
    last_life(game);
    for (int p = 0; p < 3; p++)
        sfRenderWindow_drawSprite(game->window,
        game->life_sprite[p]->sprite, NULL);
}
