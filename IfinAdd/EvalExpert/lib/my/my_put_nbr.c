/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** swap_letter
*/

#include <unistd.h>
#include <stdio.h>

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    int ret = 0;

    if (nb < -2147483647)
        return (0);
    if (nb < 0)
    {
        my_putchar ('-');
        nb = nb * -1;
    }
    if (nb >= 0)
    {
        if (nb > 9)
        {
            ret = (nb % 10);
            nb = nb / 10;
            my_put_nbr(nb);
            my_put_nbr(ret);
        } else
            my_putchar(48 + nb);
    }
    return (0);
}
