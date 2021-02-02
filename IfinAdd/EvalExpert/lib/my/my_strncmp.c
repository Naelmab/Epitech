/*
** EPITECH PROJECT, 2020
** my_strncmp.c
** File description:
** my_strncmp.c
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int m = -1;

    while (s1[m] != s1[n])
    {
        m++;
        if (s1[m] != s2[m])
            return (s1[m] - s2[m]);
    }
    return (0);
}