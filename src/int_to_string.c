/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** main.c
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count(int d)
{
    int b = 0;

    if (d < 0) {
        d = d * -1;
        b++;
    }
    while (d > 10) {
        d = d / 10;
        b++;
    }
    return (b + 1);
}

char *int_to_string(int number)
{
    int len = count(number);
    int i = 0;
    char *str = malloc(sizeof(char) * (len + 1));

    for (i = 1; i <= len; i++) {
        str[len - i] = (int)((number % 10) + '0');
        number /= 10;
    }
    str[i - 1] = '\0';
    return (str);
}
