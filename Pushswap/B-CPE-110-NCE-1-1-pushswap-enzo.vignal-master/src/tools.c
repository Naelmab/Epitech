/*
** EPITECH PROJECT, 2020
** tools.c
** File description:
** tools function.
*/

#include "my.h"

void    my_putchar(char c)
{
    write(1, &c, 1);
}

int    my_putstr(char const *str)
{
    while (*str != '\0')
    {
        my_putchar(*str);
        str++;
    }
    return (1);
}

void    my_swap(int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}

int    my_put_nbr(int nb)
{
    if (nb < 0)
    {
        my_putchar('-');
        nb = -nb;
    }
    if (nb <= 9)
        my_putchar(nb + 48);
    else
    {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (0);
}
