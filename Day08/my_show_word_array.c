/*
** EPITECH PROJECT, 2020
** my_show_word_array.c
** File description:
** my_show_word_array.c
*/

#include <stdlib.h>

void my_putchar(char c);

int my_putstr(char const *str);

int my_show_word_array(char * const *tab)
{
    int n = 0;
    char rline = '\n';

    for (n; tab[n] != NULL; n++)
    {
        my_putstr(tab[n]);
        my_putchar(rline);
    }
    return (0);
}
