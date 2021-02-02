/*
** EPITECH PROJECT, 2020
** "fonction pour my_printf"
** File description:
** "fonction pour my_printf"
*/

#include "my.h"

void printputchar(va_list *list)
{
    char c= va_arg(*list, int);
    write(1, &c, 1);
}

void printputstr(va_list *list)
{
    char *av = va_arg(*list, char*);
    int n = 0;

    while (av[n] != '\0') {
        my_putchar(av[n]);
        n++;
    }
}

void printput_nbr(va_list *list)
{
    int nbr = va_arg (*list, int);
    my_put_nbr(nbr);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    int m = 1;

    if (nb < -2147483647 || nb > 2147483647 )
        return (84);
    else if (nb < 0) {
        my_putchar ('-');
        nb = nb * -1;
    } else {
        for (; nb / m > 9; m = m * 10);
        for (; m > 0; m = m / 10)
            my_putchar(((nb / m) %10 ) +48);
    }
    return 0;
}