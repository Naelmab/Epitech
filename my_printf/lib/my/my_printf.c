/*
** EPITECH PROJECT, 2020
** "fonction pour my_printf"
** File description:
** "fonction pour my_printf"
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#include "my.h"

int my_printf(char *av, ...)
{
    int n = 0;
    char flags[5] = {'s', 'd', 'i', 'c', 0};
    void (*fonct[4]) (va_list *) = {printputstr, printput_nbr, printput_nbr, printputchar};

    va_list list;
    va_start(list, av);
    while (av[n]) {
        if (av[n - 1] == '%') {
            for (int m = 0; flags[m] != 0; m++)
                if (flags[m] == av[n]) {
                    (*fonct[m])(&list);
                }
        } else if (av[n] != '%')
            write(1, &av[n], 1);
            n++;
    }
    va_end(list);
}