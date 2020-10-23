/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#include "my.h"

int main(int ac, char **av)
{
    if (ac == 2) {
        printf("%d", eval_expr(av[1]));
        return (0);
    }
    return (84);
}
