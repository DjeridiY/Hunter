/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** create_main_music.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "hunter.h"

sfMusic *create_main_music(sfMusic *music)
{
    music = sfMusic_createFromFile("ressources/main_menu_music.ogg");
    sfMusic_setVolume(music, 50);
    sfMusic_play(music);
    return (music);
}
