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

void array_1d_print_chars(char const *arr)
{
    int n = 0;

    while (arr[n] != '\0') {
        my_putchar(arr[n]);
        my_putchar('\n');
        n++;
    }
}

void array_1d(char const *filepath)
{
    int size = size_files(filepath);
    char str[size];
    int fd = open(filepath, O_RDONLY);

    read(fd, str, size);
    array_1d_print_chars(str);
}

int main (int ac, char **av)
{
    if (ac != 2)
        return 84;
    if (fs_open_file(av[1]) == 84)
        return 84;
    else
        array_1d(av[1]);
    return 0;
}