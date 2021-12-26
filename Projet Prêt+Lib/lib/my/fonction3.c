/*
** EPITECH PROJECT, 2020
** fonction3
** File description:
** fonction3
*/

#include "my.h"

unsigned int my_put_hexadecimal(unsigned int nb)
{
    unsigned int m = 0;
    if (nb >= 16) {
        m = nb % 16;
        nb = nb / 16;
        my_put_hexadecimal(nb);
    } else if (nb > 0) {
        m = nb % 16;
    }
    if (m > 9)
        my_printf("%c", (m + 'W'));
    else
        my_printf("%c", (m + '0'));
}

unsigned int my_put_hexadecimaj(unsigned int nb)
{
    unsigned int m = 0;
    if (nb >= 16) {
        m = nb % 16;
        nb = nb / 16;
        my_put_hexadecimaj(nb);
    } else if (nb > 0) {
        m = nb % 16;
    }
    if (m > 9)
        my_printf("%c", (m + '7'));
    else
        my_printf("%c", (m + '0'));
}

int my_put_unsinedllenbr(unsigned long long nb)
{
    int m = 1;

    for (; nb / m > 9; m = m * 10);
    for (; m > 0; m = m / 10)
        my_putchar(((nb / m) % 10) + 48);

    return 0;
}