/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main function for minishell.
*/

#include "my.h"

int    main(int ac, char **av)
{
    if (ac < 1 || ac > 1) {
        show_error();
        return (84);
    } else if (ac == 1) {
        minishell();
        return (0);
    }
}
