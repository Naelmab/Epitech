/*
** EPITECH PROJECT, 2020
** do-op
** File description:
** operation
*/

#include <stdio.h>
#include <stdlib.h>

#define ADDITION( a, b ) (a) + (b)

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putnbr(int nb)
{
    if (nb < 0)
    {
        my_putchar('-');
        nb = -nb;
    }
    if (nb <= 9)
        my_putchar(nb + 48);
    else
    {
        my_putnbr(nb / 10);
        my_putnbr(nb % 10);
    }
    return (0);
}

int main (int argc, char **argv)
{
    int p = 1;
    int n = argv[p][0];
    int	m = argv[p][0];
    //int result = ADDITION( n, m );

    while (p <= argc)
    {
        argv[p][0];
        p++;
        //int result = n + m;
        my_putnbr (result);
        my_putchar ('\n');
    }

    int result = n + m;
    //printf("result = %d\n", result);

    //my_putnbr (result);
    //my_putchar ('\n');
}
