/*
** EPITECH PROJECT, 2021
** tools.c
** File description:
** tools function for minishell.
*/

#include "my.h"

void    my_putchar(char c)
{
    write(1, &c, 1);
}

int    my_putstr(char const *str)
{
    while (*str != '\0')
    {
        my_putchar(*str);
        str++;
    }
    return (1);
}

void    show_error(void)
{
    my_putstr("ERROR\n");
    my_putstr("USAGE: ./mysh\n");
}
