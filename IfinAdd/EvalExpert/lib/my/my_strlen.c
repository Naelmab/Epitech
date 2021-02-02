/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** "turn by turn"
*/
#include <stdio.h>
#include "my.h"

int my_strlen(char const *str)
{
    int variable;
    variable = 0;
    while (str[variable] != '\0')
    {
        variable = variable + 1;
    }
    my_putchar(variable);
}
