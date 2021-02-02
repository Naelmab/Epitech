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

int my_put_nbr(int nb)
{
    int ret = 0;

    if (nb < -2147483647)
        return 0;
    if (nb < 0) {
        my_putchar ('-');
        nb = nb * -1;
    }
    if (nb >= 0) {
        if (nb > 9) {
            ret = (nb % 10);
            nb = nb / 10;
            my_put_nbr(nb);
            my_put_nbr(ret);
        } else
            my_putchar(48 + nb);
    }
    return 0;
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

void array_1d_ints(char const *filepath)
{
    int n = 0;

    while (filepath[n] != '\0') {
        my_put_nbr(filepath[n]);
        my_putchar('\n');
        n++;
    }
}

void array_1d_print_ints(char const *arr, int size)
{
    size = size_files(arr);
    char str[size];
    int fd = open(arr, O_RDONLY);

    read(fd, str, size);
    array_1d_ints(str);
}

int main (int ac, char **av)
{
    if (ac != 3)
        return 84;
    if (fs_open_file(av[1]) == 84)
        return 84;
    else
        array_1d_print_ints(av[1], atoi(av[2]));
    return 0;
}