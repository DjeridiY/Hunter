/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** help_cmmand.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "hunter.h"
#include "my.h"

void help_command(void)
{
    my_printf("\n%s", "PROTECT EARTH IS A SHOOTING GAME");
    my_printf("%s\n", "INSPIRED BY THE GAME DUNK HUNT !");
    my_printf("%s", "THE GOAL IS TO PROTECT THE EARTH");
    my_printf("%s\n", "FROM METEORITES FALLING ON IT !");
    my_printf("%s", "MAKE THE BEST SCORE AND POST");
    my_printf("%s\n", " IT ON TWITTER WITH @PROTECTEARTHDEV !");
    my_printf("%s\n", "GOOD LUCK !");
    my_printf("\n");
    my_printf("LIST OF CONTROLS :\n");
    my_printf("\n");
    my_printf("%s\n", "-[ECHAP] : EXIT\n");
    my_printf("IN THE MAIN MENU :\n");
    my_printf("-[SPACE] : LAUNCH THE GAME\n-[RIGHT] : LVL + 1 | ");
    my_printf("-[LEFT] : LVL - 1");
    my_printf("-[UP] : LVL + 10 | -[DOWN] : LVL - 10\n\n");
    my_printf("IN THE GAME :\n-[MOUSE CLICK] : DESTROY ENEMIES\n\n");
    my_printf("IN THE GAME OVER :\n-[ENTER]: CLOSE THE GAME\n\n");
}
