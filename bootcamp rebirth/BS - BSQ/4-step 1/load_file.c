/*
** EPITECH PROJECT, 2021
** bs bsq
** File description:
** bs bsq
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int     size_files(char *path)
{
    struct stat size;

    if (stat(path, &size) == 0)
        return (size.st_size);
    return 84;
}

char *load_file_in_mem(char const* filepath)
{
    int size = size_files(filepath);

    size = malloc(sizeof(size));
    printf("%d", &size);
    return (&size);
}

int main (int ac, char** av)
{
    if (ac != 2)
        return 84;
    load_file_in_mem(av[1]);
    return 0;
}