/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** create_fireball.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "hunter.h"
#include <time.h>

fireball_t *create_fireball(fireball_t *fireball)
{
    sfIntRect rect = {0, 0, 512, 512};
    fireball->status = 1;
    fireball->rect = rect;
    fireball->sprite = sfSprite_create();
    fireball->texture =
    sfTexture_createFromFile("ressources/fireball.png", NULL);
    fireball->clock = sfClock_create();
    fireball->scale.y = 0.6;
    fireball->scale.x = 0.6;
    fireball->pos.y = rand() % (int)(800 - 300 * fireball->scale.x);
    fireball->pos.x = 10 - rand() % (4000);
    sfSprite_setTexture(fireball->sprite, fireball->texture, sfFalse);
    sfSprite_setPosition(fireball->sprite, fireball->pos);
    sfSprite_setScale(fireball->sprite, fireball->scale);
    return (fireball);
}
