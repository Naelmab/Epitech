/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** strcmpe
*/

#include <stdio.h>

int my_strcmp(char const *s1, char const *s2)
{
    int n = 0;

    while (s1[n])
    {
        n++;
        if (s1[n] != s2[n])
            return (s1[n] - s2[n]);
    }
    return (0);
}
