/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** analyse_events.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "hunter.h"
#include <time.h>


void that_hit_or_not(hunter_t *game, hitmarker_t *hitmarker, sfEvent event)
{
    for (int i = 0; i < game->nbr_of_fireballs; i++) {
        if ((event.mouseButton.x >= game->fireball[i]->pos.x  + 100 &&
            event.mouseButton.x <= game->fireball[i]->pos.x + 250)
            && (event.mouseButton.y >= game->fireball[i]->pos.y + 100 &&
            event.mouseButton.y <= game->fireball[i]->pos.y + 250)) {
            sfVector2f pos;
            pos.x = event.mouseButton.x - 40;
            pos.y = event.mouseButton.y - 40;
            sfSprite_setPosition(hitmarker->sprite, pos);
            game->fireball[i]->pos.x = 10 - rand() % (4000);
            game->fireball[i]->pos.y = rand() % (int)(800 - 300 *
            game->fireball[i]->scale.x);
            sfSprite_setPosition(game->fireball[i]->sprite,
            game->fireball[i]->pos);
            game->velocity += 0.1;
            game->score += 1;
        }
    }
}

void close_window(sfEvent event, hunter_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(game->window);
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(game->window);
}

void set_crosshair_on_mouse(sfEvent event, hunter_t *game,
crosshair_t *crosshair)
{
    if (event.type == sfEvtMouseMoved) {
        sfVector2f pos;
        pos.x = event.mouseMove.x - 100;
        pos.y = event.mouseMove.y - 100;
        sfSprite_setPosition(crosshair->sprite, pos);
        sfRenderWindow_setMouseCursorVisible(game->window, sfFalse);
    }
}

void analyse_evts(hunter_t *game, crosshair_t *crosshair,
hitmarker_t *hitmarker)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        set_crosshair_on_mouse(event, game, crosshair);
        close_window(event, game);
        if (event.type == sfEvtMouseButtonPressed) {
            sfMusic_stop(game->music);
            sfMusic_play(game->music);
            that_hit_or_not(game, hitmarker, event);
        }
    }
}
