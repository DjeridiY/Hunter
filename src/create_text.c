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

text_t *create_text(text_t *text, hunter_t *game)
{
    char *str = int_to_string(game->nbr_of_fireballs);
    text->font = sfFont_createFromFile("ressources/oswald_bold.ttf");
    text->text = sfText_create();
    sfText_setString(text->text, str);
    sfText_setFont(text->text, text->font);
    sfText_setCharacterSize(text->text, 100);
    sfText_move(text->text, get_position(1050, 600));
    return (text);
}
