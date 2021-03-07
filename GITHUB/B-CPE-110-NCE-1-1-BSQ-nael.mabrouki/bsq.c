/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** step1
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int fs_open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        return 84;
    }
    else
    return fd;
}

int main (int ac, char **av)
{
    int n = 0;

    if (ac != 2)
        return 84;
    if (fs_open_file(av[1]) == 84)
        return 84;
}