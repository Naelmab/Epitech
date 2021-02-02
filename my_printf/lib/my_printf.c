/*
** EPITECH PROJECT, 2020
** "fonction pour my_printf"
** File description:
** "fonction pour my_printf"
*/

#include "my.h"

va_list list;

int my_printf(char *av, ...) {
    int n = 0;
    char flags[7] = {'s', 'd', 'i', 'c', 'l', '\n', 0};
    void (*fonct[6]) (va_list *) = {printputstr, printput_intnbr,
                                    printput_intnbr, printputchar,
                                    printput_longnbr, printret};

    va_start(list, av);
    while (av[n]) {
        if (av[n - 1] == '%') {
            if (av[n] == '%')
                my_putchar('%');
            else {
                for (int m = 0; flags[m] != 0; m++)
                    if (flags[m] == av[n])
                        (*fonct[m])(&list);
            }
        } else if (av[n] != '%')
            write(1, &av[n], 1);
        n++;
    }
    va_end(list);
}
