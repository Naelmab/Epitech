/*
** EPITECH PROJECT, 2021
** file
** File description:
** file
*/

#include "../include/my.h"

int     size_files(char *path)
{
    struct stat size;

    if (stat(path, &size) == 0)
        return (size.st_size);
    return 84;
}

void sizemap(char *path, char **tab)
{
    while (LINES < colones(tab) || COLS < lignes(path)) {
        clear();
        mvprintw(LINES / 2, COLS / 2 - 11, "terminal to tight [!]");
        refresh();
    }
}