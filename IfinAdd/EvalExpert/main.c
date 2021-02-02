/*
** EPITECH PROJECT, 2020
** main EvalExpert
** File description:
** main.c
*/

/*#include "my.h"

int main(int ac, char **av)
{
    if(ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}*/

#include <stdio.h>

int main (int ac, char **av) {
    if (ac < 1) {
        printf("0");
        return (0);
    } else {
        int res = av[1][0] && av[2][0];
        printf("%d\n", res - (ac * (-'0')));
    }
}