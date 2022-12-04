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
#include "stdio.h"
#include <time.h>

crosshair_t *create_crosshair(crosshair_t *crosshair)
{
    crosshair->sprite = sfSprite_create();
    crosshair->texture =
    sfTexture_createFromFile("ressources/crosshair.png", NULL);
    crosshair->scale.y = crosshair->scale.x = 0.4;
    sfSprite_setScale(crosshair->sprite, crosshair->scale);
    sfSprite_setTexture(crosshair->sprite, crosshair->texture, sfTrue);
    return (crosshair);
}
