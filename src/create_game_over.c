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

life_sprite_t create_game_over(life_sprite_t game_over,
char *path, int y, int x)
{
    game_over.sprite = sfSprite_create();
    game_over.texture = sfTexture_createFromFile(path, NULL);
    game_over.scale.y = 5;
    game_over.scale.x = 5;
    game_over.pos.y = y;
    game_over.pos.x = x;
    sfSprite_setTexture(game_over.sprite, game_over.texture, sfFalse);
    sfSprite_setPosition(game_over.sprite, game_over.pos);
    sfSprite_setScale(game_over.sprite, game_over.scale);
    return (game_over);
}
