/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** create_window.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>

sfMusic *set_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("ressources/night_walker.ogg");
    sfMusic_setVolume(music, 70);
    sfMusic_play(music);
    return music;
}
