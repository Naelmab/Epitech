/*
** EPITECH PROJECT, 2021
** sokoban
** File description:
** sokoban
*/

void init_sokoban()
{
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    refresh();
    curs_set(FALSE);
}

//action dans le sokoban
void actualiser(initialisation pos)
{
    mvaddch(pos.posY, pos.posX, 80);
    refresh();
}

void close_sokoban()
{
    if (getch() == 10)
    {
        endwin();
        exit(84);
    }
}
