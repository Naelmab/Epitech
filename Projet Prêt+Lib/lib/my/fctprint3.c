/*
** EPITECH PROJECT, 2020
** fctprint3
** File description:
** fctprint3
*/

#include "my.h"

void x(va_list *list)
{
    unsigned int nbr = va_arg (*list, unsigned int);
    my_put_hexadecimal(nbr);
}

void xmaj(va_list *list)
{
    unsigned int nbr = va_arg (*list, unsigned int);
    my_put_hexadecimaj(nbr);
}

void p(va_list *list)
{
    int nbr = va_arg (*list,  int);
    putadresse(nbr);
}

int putadresse(int n)
{
    my_printf("0x%x", n);
    return (0);
}