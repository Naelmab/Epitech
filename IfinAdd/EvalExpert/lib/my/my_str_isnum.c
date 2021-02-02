/*
** EPITECH PROJECT, 2020
** my_str_isnum.C
** File description:
** isnum
*/
#include <stdio.h>

int my_str_isnum(char const *str)
{
    int n = 0;

    while (str[n])
    {
        if (str[n] < '0' || str[n] > '9')
            return (0);
        n++;
    }
    return (1);
}