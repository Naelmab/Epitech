/*
** EPITECH PROJECT, 2020
**  my_str_isprintable.c
** File description:
** isprintable
*/
#include <stdio.h>

int my_str_isprintable(char const *str)
{
    int n = 0;

    while (str[n])
    {
        if (str[n] <= 0 || str[n] >= 31)
            return (0);
        n++;
    }
    return (1);
}