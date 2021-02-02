/*
** EPITECH PROJECT, 2020
** EvalExpert
** File description:
** EvalExpert.c
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

//#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

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

int eval_expr(char const *str)
{
    int res = ;
    //int res = my_getnbr(str);
    my_put_nbr(res);
}

int main(int ac, char **av)
{
    if(ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}