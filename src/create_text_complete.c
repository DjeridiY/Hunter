/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** create_text.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "hunter.h"

text_t *create_text_complete(text_t *text_complete, hunter_t *game)
{
    char *str = int_to_string(game->nbr_of_fireballs);
    text_complete->font = sfFont_createFromFile("ressources/oswald_bold.ttf");
    text_complete->text = sfText_create();
    sfText_setString(text_complete->text, "LVL :");
    sfText_setFont(text_complete->text, text_complete->font);
    sfText_setCharacterSize(text_complete->text, 100);
    sfText_move(text_complete->text, get_position(800, 600));
    return (text_complete);
}
