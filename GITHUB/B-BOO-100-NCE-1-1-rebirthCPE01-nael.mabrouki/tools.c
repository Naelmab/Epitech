/*
** EPITECH PROJECT, 2021
** tools
** File description:
** tools
*/

#include "my.h"

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

int my_putstr(char const *str)
{
    while (*str != '\0')
    {
        my_putstr(*str);
        *str + 1;
    }
    return (1);
}
