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

void display_500(char *str)
{
    int n = 0;
    int m = 0;

    while (str[n] != '\0') {
        my_putchar(str[n]);
        n++;
        m++;
        if (m == 500)
            break;
    }
}

void fs_cat_500_bytes(char const *filepath )
{
    int size = size_files(filepath);
    char str[size];
    int fd = open(filepath, O_RDONLY);

    read(fd, str, size);
    display_500(str);
}

int main (int ac, char **av)
{
    if (ac != 2)
        return 84;
    fs_cat_500_bytes(av[1]);
    return 0;
}