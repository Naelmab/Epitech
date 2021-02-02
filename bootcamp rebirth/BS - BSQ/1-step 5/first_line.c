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

void display_x_bytes(char *str, int x)
{
    int n = 0;
    int m = 0;

    while (str[n] != '\n') {
        my_putchar(str[n]);
        n++;
        m++;
        if (m == x) {
            my_putchar('\n');
            break;
        }
    }
}

void fs_cat_x_bytes(char const *filepath, int x)
{
    int size = size_files(filepath);
    char str[size];
    int fd = open(filepath, O_RDONLY);

    read(fd, str, size);
    display_x_bytes(str, x);
}

int main (int ac, char **av)
{
    if (ac != 3)
        return 84;
    fs_cat_x_bytes(av[1], atoi(av[2]));
    return 0;
}