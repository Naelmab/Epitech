/*
** EPITECH PROJECT, 2021
** display
** File description:
** display
*/

#include "../include/my.h"

initialisation screen(char **tab, initialisation pos, char *c)
{
    int n = 0;

    clear();
    while (tab[n] != NULL) {
        mvprintw(LINES / 2 - colones(tab) / 2 + n, COLS / 2 - 10, tab[n]);
        n++;
    }
    refresh();
    pos = deplacement(tab, pos, c);
    return pos;
}

int display_map(char *c, char ** tab)
{
    initialisation init = pos_p(tab);
    if  (nbr_o(tab) > nbr_x(tab)) {
        endwin();
        return 84;
    }
    init.nbr_o = (int *) malloc((nbr_o(tab) * 2) * sizeof(int) + 1);
    pos_o(tab, init.nbr_o);
    init_sokoban();
    init.lose = 0;
    init.win = 0;
    check(tab);
    while (init.lose == 0 || init.win == 0) {
        sizemap(c, tab);
        init = screen(tab, init, c);
    }
    close_sokoban_1();
    return 0;
}