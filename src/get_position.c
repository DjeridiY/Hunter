/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** get_position.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "hunter.h"

sfVector2f get_position(float x, float y)
{
    sfVector2f position;

    position.x = x;
    position.y = y;
    return (position);
}
