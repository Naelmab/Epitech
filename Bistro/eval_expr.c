/*
** EPITECH PROJECT, 2020
** evalexper
** File description:
** evalexper
*/


#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int eval_expr(char const *str)
{
        return (OTHEROP(&str));
}
