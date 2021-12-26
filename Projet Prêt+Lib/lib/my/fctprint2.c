/*
** EPITECH PROJECT, 2020
** fctprint2
** File description:
** fctprint2
*/

#include "my.h"

void u(va_list *list)
{
    unsigned int nbr = va_arg (*list, unsigned int);
    my_put_unsinednbr(nbr);
}

void o(va_list *list)
{
    unsigned int nbr = va_arg (*list, unsigned int);
    my_put_octal(nbr);
}

void f(va_list *list)
{
    float nbr = va_arg (*list, double);
    my_put_floatnbr(nbr);
}

void b(va_list *list)
{
    int nbr = va_arg (*list, int);
    my_put_binaire(nbr);
}

void sign(va_list *list)
{
    int nbr = va_arg (*list, int);
    my_put_signnbr(nbr);
}