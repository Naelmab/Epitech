/*
** EPITECH PROJECT, 2021
** BS BSQ
** File description:
** step 2
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

void    my_putchar(char c)
{
    write(1, &c, 1);
}

int     size_files(char const *path)
{
    struct stat size;

    if (stat(path, &size) == 0)
        return (size.st_size);
    return 84;
}

void fs_print_first_line(char const* filepath)
{
    int n = 0;

    while (filepath[n] != '\n') {
        my_putchar(filepath[n]);
        n++;
    }
}

void first_line(char const *filepath)
{
    int size = size_files(filepath);
    char str[size];
    int fd = open(filepath, O_RDONLY);

    read(fd, str, size);
    fs_print_first_line(str);
}

int main (int ac, char **av)
{
    if (ac != 2)
        return 84;
    first_line(av[1]);
    return 0;
}