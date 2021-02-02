/*
** EPITECH PROJECT, 2020
** "fonction pour my_printf"
** File description:
** "fonction pour my_printf"
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_intnbr(int nb) {
    int m = 1;

    if (nb == -2147483648) {
        my_printf("-2147483648");
        return 0;
    }else if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
        for (; nb / m > 9; m = m * 10);
        for (; m > 0; m = m / 10) {
            my_putchar(((nb / m) % 10) + 48);
        }
    } else {
        for (; nb / m > 9; m = m * 10);
        for (; m > 0; m = m / 10) {
            my_putchar(((nb / m) % 10) + 48);
        }
        return 0;
    }
}

int my_put_longnbr(long long nb) {
    long  long m = 1;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
        for (; nb / m > 9; m = m * 10);
        for (; m > 0; m = m / 10) {
            my_putchar(((nb / m) % 10) + 48);
        }
    } else {
        for (; nb / m > 9; m = m * 10);
        for (; m > 0; m = m / 10) {
            my_putchar(((nb / m) % 10 ) + 48);
        }
        return 0;
    }
}