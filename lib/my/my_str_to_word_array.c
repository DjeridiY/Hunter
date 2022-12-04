/*
** EPITECH PROJECT, 2022
** Task04
** File description:
** task04
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);
int my_putstr(char *c);
int my_putchar(char c);
int my_show_word_array(char *const *tab);

int get_size_total_alloc(char const *str)
{
    int i = 0;
    int stock = 0;

    while (str[i] != '\0') {
        stock = stock + 1;
        i++;
    }
    return (stock);
}

char **filling(char const *str, char **newtab, char selecteur)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        if (str[i] == selecteur) {
            newtab[k][j] = '\0';
            k++;
            j = 0;
        } else {
            newtab[k][j] = str[i];
            j++;
        }
        i++;
    }
    newtab[k][j] = '\0';
    newtab[k + 1] = NULL;
    return (newtab);
}

char **my_str_to_word_array(char const *str, char selecteur)
{
    int i = 0;
    int stock = get_size_total_alloc(str);
    char **newtab = NULL;
    int length = my_strlen(str);

    newtab = malloc(sizeof(char *) * (length + 1));
    if (newtab == NULL) {
        return NULL;
    }
    while (i < length) {
        newtab[i] = malloc(sizeof(char) * (length + 1));
        if (newtab[i] == NULL) {
            return NULL;
        }
        i++;
    }
    filling(str, newtab, selecteur);
    return newtab;
}
