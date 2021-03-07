/*
** EPITECH PROJECT, 2021
** file
** File description:
** file
*/

int     size_files(char *path)
{
    struct stat size;

    if (stat(path, &size) == 0)
        return (size.st_size);
    return 84;
}

//taille du terminal
void tight(char *path, char **tab)
{
    while (LINES < colomnlen(tab) || COLS < line_len(path))
    {
        clear();
        mvprintw(LINES / 2, COLS / 2 - 11, "terminal to tight [!]");
        refresh();
    }
}
