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

wallpaper_t *create_wallpaper(wallpaper_t *wallpaper)
{
    wallpaper->sprite = sfSprite_create();
    wallpaper->texture =
    sfTexture_createFromFile("ressources/wallpaper.png", NULL);
    sfSprite_setTexture(wallpaper->sprite, wallpaper->texture, sfTrue);
    return (wallpaper);
}
