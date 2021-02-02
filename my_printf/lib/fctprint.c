/*
** EPITECH PROJECT, 2020
** fctprint
** File description:
** fctprint
*/

#include "my.h"

void printputchar(va_list *list)
{
    char c = va_arg(*list, int);
    write(1, &c, 1);
}

void printputstr(va_list *list)
{
    char * av = va_arg(*list, char *);
    int n = 0;

    while (av[n] != '\0') {
        my_putchar(av[n]);
        n++;
    }
}

void printput_intnbr(va_list *list)
{
    int nbr = va_arg (*list, int);
    my_put_intnbr(nbr);
}

void printput_longnbr(va_list *list)
{
    long long nbr = va_arg (*list, long long);
    my_put_longnbr(nbr);
}

void printret(va_list *list)
{
    my_putchar('\n');
}