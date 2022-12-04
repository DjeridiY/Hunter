/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** My_Hunter.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "hunter.h"

int loose_game(hunter_t *game, crosshair_t *crosshair,
wallpaper_t *wallpaper, text_t *score)
{
    life_sprite_t game_over;
    sfVector2u s; s.x = 800; s.y = 600;

    game_over =
    create_game_over(game_over, "ressources/loose.png", 10, 410);
    while (sfRenderWindow_isOpen(game->window)) {
        if (analyse_loose(game) == 1) {
            sfRenderWindow_close(game->window);
            sfSprite_destroy(game_over.sprite);
            sfTexture_destroy(game_over.texture);
            sfText_destroy(score->text); break;
        }
        sfRenderWindow_clear(game->window, sfBlack);
        sfRenderWindow_drawSprite(game->window, wallpaper->sprite, NULL);
        sfRenderWindow_drawSprite(game->window, game_over.sprite, NULL);
        sfRenderWindow_drawText(game->window, score->text, NULL);
        sfRenderWindow_drawText(game->window, score->score, NULL);
        sfRenderWindow_drawSprite(game->window, crosshair->sprite, NULL);
        sfRenderWindow_display(game->window);
    }
}
