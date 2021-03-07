/*
** EPITECH PROJECT, 2021
** sokoban
** File description:
** sokoban
*/

#include "../include/my.h"

void init_sokoban(void)
{
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    refresh();
    curs_set(FALSE);
}

int close_sokoban_0(void)
{
    endwin();
    return 0;
}

int close_sokoban_1(void)
{
    endwin();
    return 1;
}

int restart_sokoban(char *c)
{
    display_map(c, strtotab(c));
    return 0;
}