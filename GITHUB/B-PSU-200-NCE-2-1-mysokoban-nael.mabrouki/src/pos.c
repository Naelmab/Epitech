/*
** EPITECH PROJECT, 2021
** init
** File description:
** pos
*/

#include "../include/my.h"

initialisation posx_y(int x, int y)
{
    initialisation posp;
    posp.posX = x;
    posp.posY = y;
    return posp;
}

initialisation pos_p(char **posp)
{
    int x = 0;
    int y;

    initialisation pos;
    while (posp[x] != NULL) {
        y = 0;
        while (posp[x][y] != '\0') {
            if (posp[x][y] == 'P')
                pos = posx_y(x, y);
            y++;
        }
        x++;
    }
    return pos;
}

int nbr_o(char **tab)
{
    int x = 0;
    int y;
    int o = 0;

    while (tab[x] != NULL) {
        y = 0;
        while (tab[x][y] != '\0') {
            if (tab[x][y] == 'O')
                o++;
            y++;
        }
        x++;
    }
    return o;
}

int nbr_x(char **tab)
{
    int x = 0;
    int y;
    int o = 0;

    while (tab[x] != NULL) {
        y = 0;
        while (tab[x][y] != '\0') {
            if (tab[x][y] == 'X')
                o++;
            y++;
        }
        x++;
    }
    return o;
}

void pos_o(char **map, int *nbro)
{
    int x = 0;
    int y;
    int o = 0;

    while (map[x] != NULL) {
        y = 0;
        while (map[x][y] != '\0') {
            if (map[x][y] == 'O') {
                nbro[o] = x;
                nbro[o + 1] = y;
                o += 2;
            }
            y++;
        }
        x++;
    }
    nbro[o] = -1;
}