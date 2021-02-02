/*
** EPITECH PROJECT, 2020
** my_isneg.c
** File description:
** N<0 P>0
*/
#include "my.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return (0);
}
