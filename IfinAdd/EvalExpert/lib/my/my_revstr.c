/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** revstr
*/

#include <string.h>
#include <stdio.h>
#include <unistd.h>

#include "my.h"

char *my_revstr(char *str)
{
    int n = 0;
    int end = my_strlen(str) - 1;
    char temp;

    while (n < my_strlen(str)/ 2)
    {
        temp = str[end];
        str[end] = str[n];
        str[n] = temp;

        end--;
        n++;
    }
    return (str);
}
