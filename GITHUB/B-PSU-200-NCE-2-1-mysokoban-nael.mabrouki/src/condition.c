/*
** EPITECH PROJECT, 2021
** win
** File description:
** loose
*/

#include "../include/my.h"

int verif_lose(char ** tab, int x, int y)
{
    if (tab[x][y] == 'X' && (tab[x-1][y] == '#' || tab[x-1][y] == 'X') &&
    (tab[x][y-1] == '#' || tab[x][y-1] == 'X'))
        return 1;
    if (tab[x][y] == 'X' && (tab[x-1][y] == '#' || tab[x-1][y] == 'X') &&
    (tab[x][y+1] == '#' || tab[x][y+1] == 'X'))
        return 1;
    if (tab[x][y] == 'X' && (tab[x+1][y] == '#' || tab[x+1][y] == 'X') &&
    (tab[x][y-1] == '#' || tab[x][y-1] == 'X'))
        return 1;
    if (tab[x][y] == 'X' && (tab[x+1][y] == '#' || tab[x+1][y] == 'X') &&
    (tab[x][y+1] == '#' || tab[x][y+1] == 'X'))
        return 1;
    return 0;
}

int check_block(char **arr, int i, int j)
{
    if (arr[i + 1][j] == '#' || arr[i - 1][j] == '#') {
        if (arr[i][j + 1] == '#' || arr[i][j - 1] == '#')
            return -1;
    }
    return 0;
}

int loose (char ** tab)
{
    int x = 0;
    int y;

    while (tab[x] != NULL) {
        y = 0;
        while (tab[x][y] != '\0') {
            if (check_block(tab, x, y) == 0)
                return 0;
            y++;
        }
        x++;
    }
    return 1;
}

int win (char ** tab, initialisation init)
{
    int x;
    int y;
    int o = 0;

    while (init.nbr_o[o] != -1) {
        x = init.nbr_o[o];
        y = init.nbr_o[o + 1];
        if (tab[x][y] != 'X')
            return 0;
        o += 2;
    }
    return 1;
}