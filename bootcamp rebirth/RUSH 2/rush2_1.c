/*
** EPITECH PROJECT, 2020
** rush2.c
** File description:
** rush2step1
*/
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
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
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (0);
}

int language(char *str, char c)
{
    int i = 0;
    int count = 0;
    int check = c;

    if (c >= 'a' && c <= 'z')
        check = c - 32;
    else if (c >= 'A' && c <= 'Z')
        check = c + 32;
    while (str[i] != '\0') {
        if (str[i] == c || str[i] == check)
            count = count + 1;
        i++;
    }
    return (count);
}

int main(int argc, char **argv)
{
    int p = 2;

    while (p < argc)
    {
        my_putchar(argv[p][0]);
        my_putchar(':');
        my_put_nbr(language(argv[1], argv[p][0]));
        my_putchar('\n');
        p++;
    }
}
