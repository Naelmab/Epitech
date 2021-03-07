/*
** EPITECH PROJECT, 2020
** hunter.c
** File description:
** utils
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}

int my_put_nbr(int nb)
{
    int division = 1;

    if (nb == -2147483648) {
        write(1, "-2147482648", 11);
        my_putchar('\n');
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    while (nb / division >= 10) {
        division = division * 10;
    }
    while (division > 0) {
        my_putchar(((nb / division) % 10) + 48);
        division = division / 10;
    }
    return (0);
}
