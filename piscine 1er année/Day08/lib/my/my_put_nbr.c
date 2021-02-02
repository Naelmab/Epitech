/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** swap_letter
*/

#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int modify_parameter(int nb)
{
    nb = '1';
}

int main( int nb )
{
    int i = nb;

    modify_parameter(nb);
    my_putchar(i);
}
