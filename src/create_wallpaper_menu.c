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

menu_t *create_wallpaper_menu(menu_t *menu)
{
    menu->sprite = sfSprite_create();
    menu->texture = sfTexture_createFromFile("ressources/menu.jpg", NULL);
    sfSprite_setTexture(menu->sprite, menu->texture, sfTrue);
    return (menu);
}
