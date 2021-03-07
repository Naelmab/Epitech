/*
** EPITECH PROJECT, 2021
** calcul
** File description:
** lignes colonnes
*/

#include "../include/my.h"

int lignes(char const *tab)
{
    int x = 0;

    while (tab[x] != '\n')
        x++;
    return x;
}

int colones(char **tab)
{
    int y = 0;

    while (tab[y] != NULL)
        y++;
    return y;
}

int nbligne(char *str)
{
    int n = 0;
    int nb = 0;

    while (str[n] != 0) {
        if (str[n] == '\n')
            nb++;
        n++;
    }
    return nb;
}