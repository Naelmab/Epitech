/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** my_strdup.c
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    int n = 0;
    int m;
    char *len;

    m = my_strlen(src);
    len = malloc(m + 1);
    while (n < m) {
        len[n] = src[n];
        n++;
    }
    len[n] = '\0';
    return (len);
}
