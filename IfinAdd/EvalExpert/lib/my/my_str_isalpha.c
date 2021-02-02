/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** isalpha
*/

#include <stdio.h>

int my_str_isalpha(char const *str)
{
    int n = 0;

    while (str[n])
    {
        if ((str[n] < 'A' || str[n] > 'Z') &&  (str[n] < 'a' || str[n] > 'z'))
            return (0);
        n++;
    }
    return (1);
}
