/*
** EPITECH PROJECT, 2020
** tools
** File description:
** tools
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#include "my.h"

int brakets(char **str) {
    if (**str == '(') {
        (*str)++;
        int res = OTHEROP(str);
        (*str)++;
        return (res);
    }
    return (chartoint(str));
}

int my_put_nbr(int nb)
{
    int ret = 0;

    if (nb < -2147483647)
        return (0);
    if (nb < 0) {
        my_putchar ('-');
        nb = nb * -1;
    }
    if (nb >= 0) {
        if (nb > 9) {
            ret = (nb % 10);
            nb = nb / 10;
            my_put_nbr(nb);
            my_put_nbr(ret);
        } else
            my_putchar(48 + nb);
    }
    return (0);
}

int OTHEROP(char **str) {
    int op0 = ALLFACT(str);

    ADD(str, &op0);
    SUB(str, &op0);

    return (op0);
}

int ALLFACT(char **str) {
    int op3 = brakets(str);

    MODULO(str, &op3);
    DIVIS(str, &op3);
    MULTI(str, &op3);

    return (op3);
}

int chartoint(char **str)
{
    int number = 0;

    while (**str >= '0' && **str <= '9') {
        number = number * 10 + (**str - '0');
        (*str)++;
    }
    return (number);
}