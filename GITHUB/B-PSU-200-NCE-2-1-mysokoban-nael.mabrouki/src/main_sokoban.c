/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "../include/my.h"

int main(int ac, char ** av)
{
    char *c = (char *) malloc(size_files(av[1]) * sizeof(char) + 1);
    int fd = open(av[1], O_RDONLY);

    c[size_files(av[1])] = '\n';
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        h();
    if (ac != 2 || read(fd, c, size_files(av[1])) == -1 || fd == -1)
        return 84;
    if (av[1][0] != '-' && av[1][1] != 'h') {
        read(fd, c, size_files(av[1]));
        display_map(c, strtotab(c));
    }
    return 1;
}