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

int eval_expr(char const *str)
{
        return ((ADD(&str) + SUB(&str)));
}
