/*
** EPITECH PROJECT, 2021
** move
** File description:
** groove
*/
#include "../include/my.h"

void  up (char ** tab, initialisation init)
{
    if (tab[init.posX - 1][init.posY] == '#' || (tab[init.posX - 1][init
        .posY] == 'X' && (tab[init.posX - 2][init.posY] == '#' || tab[init
        .posX - 2][init.posY] == 'X')))
        return;
    else if (tab[init.posX - 1][init.posY] == 'X' && (tab[init.posX - 2][init
    .posY] == ' ' || tab[init.posX - 2][init.posY] == 'O'))
        tab[init.posX - 2][init.posY] = 'X';
    tab[init.posX][init.posY] = ' ';
    tab[init.posX - 1][init.posY] = 'P';
}

void down (char ** tab, initialisation init)
{
    if (tab[init.posX + 1][init.posY] == '#' || (tab[init.posX + 1][init
        .posY] == 'X' && (tab[init.posX + 2][init.posY] == '#' || tab[init
        .posX + 2][init.posY] == 'X')))
        return;
    else if (tab[init.posX + 1][init.posY] == 'X' && (tab[init.posX + 2][init
        .posY] == ' ' || tab[init.posX + 2][init.posY] == 'O'))
        tab[init.posX + 2][init.posY] = 'X';
    tab[init.posX][init.posY] = ' ';
    tab[init.posX + 1][init.posY] = 'P';
}

void left (char ** tab, initialisation init)
{
    if (tab[init.posX][init.posY - 1] == '#' || (tab[init.posX][init.posY -
    1] == 'X' && (tab[init.posX][init.posY - 2] == '#' || tab[init
    .posX][init.posY - 2] == 'X')))
        return;
    else if (tab[init.posX][init.posY -1] == 'X' && (tab[init.posX][init
        .posY - 2] == ' ' || tab[init.posX][init.posY - 2] == 'O'))
        tab[init.posX][init.posY - 2] = 'X';
    tab[init.posX][init.posY] = ' ';
    tab[init.posX][init.posY - 1] = 'P';
}

void right (char ** tab, initialisation init)
{
    if (tab[init.posX][init.posY + 1] == '#' || (tab[init.posX][init.posY +
    1] == 'X' && (tab[init.posX][init.posY + 2] == '#' || tab[init.posX][init
    .posY + 2] == 'X')))
        return;
    else if (tab[init.posX][init.posY + 1] == 'X' && (tab[init.posX][init
        .posY + 2] == ' ' || tab[init.posX][init.posY + 2] == 'O'))
        tab[init.posX][init.posY + 2] = 'X';
    tab[init.posX][init.posY] = ' ';
    tab[init.posX][init.posY + 1] = 'P';
}

initialisation   deplacement(char ** tab, initialisation init, char *c)
{
    int key = getch();

    keypad(stdscr, TRUE);
    if (key == KEY_UP)
        up(tab, init);
    if (key == KEY_DOWN)
        down(tab, init);
    if (key == KEY_LEFT)
        left(tab, init);
    if (key == KEY_RIGHT)
        right(tab, init);
    if (key == 32)
        restart_sokoban(c);
    if (key == 10) {
        init.lose = 1;
        return init;
    }
    init = pos_p(tab);
    return init;
}