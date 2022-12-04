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

menu_t *create_button(menu_t *button, char *path)
{
    button->sprite = sfSprite_create();
    button->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(button->sprite, button->texture, sfTrue);
    button->pos.x = 550;
    button->pos.y = 200;
    sfSprite_setPosition(button->sprite, button->pos);
    return (button);
}
