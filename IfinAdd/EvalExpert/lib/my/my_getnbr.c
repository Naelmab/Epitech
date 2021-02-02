/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** getnber
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_getnbr(char const *str )
{
    int n = 0;
    int nb = 0;
    int jump = 0;
    int s = 1;

    while (str[n] != '\0' && (str[n] <= '0' || str[n] >'9')){
        if (str[n] == '-')
            s *= -1;
        n++;
    }
    if (str[n] == '\0')
        return (0);
    while (str[n] != '\0' && (str[n] <= '9' && str[n] >= '0')) {
        if ((nb == 214748364 && str[n] - 48 > 7) || nb > 214748364 || jump > 10)
            return (0);
        nb = nb * 10 + (str[n] - '0');
        n++;
        jump++;
    }
    return (nb * s);
}
