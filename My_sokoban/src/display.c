/*
** EPITECH PROJECT, 2021
** display
** File description:
** display
*/

initialisation screen(char **tab, char *path, initialisation xy)
{
    int n = 0;

    clear();
    while (tab[n] != NULL)
    {
        mvprintw(LINES / 2 - colomnlen(tab) / 2 + n, COLS / 2 - my_strlen
                 (tab[n]) / 2, tab[n]);
        n++;
    }
    refresh();
    xy = deplacement(tab, xy);
    return xy;
}

//display
void display_map(char *c, char ** tab)
{
    initialisation xy;

    xy = pos_p(tab);
    init_sokoban();
    while (1) {
        tight(c, tab);
        xy = screen(tab, c, xy);
        close_sokoban();
    }
}
