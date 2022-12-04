/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** create_life.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "hunter.h"

life_sprite_t *create_life_sprite(life_sprite_t *life_sprite, int i)
{
    life_sprite->sprite = sfSprite_create();
    life_sprite->texture =
    sfTexture_createFromFile("ressources/life.png", NULL);
    life_sprite->scale.y = 0.15;
    life_sprite->scale.x = 0.15;
    life_sprite->pos.y = 0;
    life_sprite->pos.x = 0 + i * 30;
    sfSprite_setTexture(life_sprite->sprite, life_sprite->texture, sfFalse);
    sfSprite_setPosition(life_sprite->sprite, life_sprite->pos);
    sfSprite_setScale(life_sprite->sprite, life_sprite->scale);
    return (life_sprite);
}
