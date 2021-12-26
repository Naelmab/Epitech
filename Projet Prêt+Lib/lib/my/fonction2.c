/*
** EPITECH PROJECT, 2020
** fonction2
** File description:
** fonction2
*/

#include "my.h"

unsigned int my_put_octal(unsigned int nb)
{
    unsigned int m = 1;

    for (; nb / m > 9; m = m * 8);
    for (; m > 0; m = m / 8) {
        my_putchar(((nb / m) % 8) + 48);
    }
    return 0;
}

int pwr(int base, int exp)
{
    int res = 1;

    while (exp >= 0) {
        res = res * base;
        exp--;
    }
    return (res);
}

int my_put_binaire(unsigned int nb)
{
    int nbr = nb;
    unsigned long long reste = 0;
    int count = 0;
    int power = -1;
    unsigned long long restetmp = 0;

    while (nbr > 0) {
        nbr = nbr / 2;
        count++;
    }
    while (count != 0) {
        reste = nb % 2;
        nb = nb / 2;
        reste = reste * pwr(10, power);
        restetmp = reste + restetmp;
        power++;
        count--;
    }
    my_put_unsinedllenbr(restetmp);
}

int my_put_floatnbr(float nb)
{
    long nbr = (long) nb;
    int m = 1000000;

    if (nb < 0) {
        my_put_longnbr(nbr);
        my_putchar('.');
        nb = nb * -m;
        nbr = (long) nb;
        my_put_longnbr(nbr % m);
    } else {
        my_put_longnbr(nbr);
        my_putchar('.');
        nb = nb * m;
        nbr = (long) nb;
        my_put_longnbr(nbr % m);
    }
}

int my_put_signnbr(int nb)
{
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
        my_putchar('+');
        for (; nb / m > 9; m = m * 10);
        for (; m > 0; m = m / 10) {
            my_putchar(((nb / m) % 10) + 48);
        }
        return 0;
    }
}