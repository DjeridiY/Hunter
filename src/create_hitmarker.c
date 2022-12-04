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

hitmarker_t *create_hitmarker(hitmarker_t *hitmarker)
{
    hitmarker->sprite = sfSprite_create();
    hitmarker->texture =
    sfTexture_createFromFile("ressources/hitmarker.png", NULL);
    hitmarker->scale.y = 0.08;
    hitmarker->scale.x = 0.08;
    sfSprite_setTexture(hitmarker->sprite, hitmarker->texture, sfFalse);
    sfSprite_setScale(hitmarker->sprite, hitmarker->scale);
    sfSprite_setPosition(hitmarker->sprite, get_position(-500, -500));
    return (hitmarker);
}
