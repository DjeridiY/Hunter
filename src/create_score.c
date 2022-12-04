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

text_t *create_score(text_t *score, hunter_t *game)
{
    char *str = int_to_string(game->score);
    score->font = sfFont_createFromFile("ressources/oswald_bold.ttf");
    score->text = sfText_create();
    sfText_setString(score->text, str);
    sfText_setFont(score->text, score->font);
    sfText_setCharacterSize(score->text, 80);
    sfText_move(score->text, get_position(1800, 40));

    score->score = sfText_create();
    sfText_setString(score->score, "SCORE :");
    sfText_setFont(score->score, score->font);
    sfText_setCharacterSize(score->score, 80);
    sfText_move(score->score, get_position(1510, 40));
    return (score);
}
