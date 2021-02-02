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

int fs_open_file(char const *filepath)
{
    open(filepath, O_RDONLY);
    if (open(filepath, O_RDONLY) == -1)
        return 84;
    else
        return 0;
}

int fs_get_number_from_first_line(char const* filepath)
{
    int n = 0;
    int nb = 0;

    while (filepath[n] != '\n') {
        if (filepath[n] < '0')
            return -1;
        else
            nb = filepath[n];
        n++;
    }
    printf("%d\n", nb);
    return nb;
}

int get_number(char const *filepath)
{
    int size = size_files(filepath);
    char str[size];
    int fd = open(filepath, O_RDONLY);

    read(fd, str, size);
    (fs_get_number_from_first_line(str));
}

int main (int ac, char **av)
{
    if (ac != 2)
        return 84;
    if (fs_open_file(av[1]) == 84)
        return -1;
    else
        get_number(av[1]);
}