/*
** EPITECH PROJECT, 2020
** "fonction pour my_printf"
** File description:
** "fonction pour my_printf"
*/

#include "my.h"

va_list list;

int my_printf(const char *format, ...)
{
    char flags[15] = {'s', 'd', 'i', 'c', 'l', '\n', 'u', 'o', 'f', 'b', '+',
    'x', 'X', 'p', 0};
    void (*fonct[14]) (va_list *) = {s , i, i, c, l, ret, u, o, f, b, sign,
    x, xmaj, p};

    va_start(list, format);
    for (int n = 0; format[n]; n++) {
        if (format[n - 1] == '%' && format[n] == '%') {
            printmodulo();
            if (format[n + 2] == '%')
                my_putchar(' ');
        } else if (format[n - 1] == '%') {
            for (int m = 0; flags[m] != 0; m++)
                if (flags[m] == format[n])
                    (*fonct[m])(&list);
        } else if (format[n] != '%')
            write(1, &format[n], 1);
    }
    va_end(list);
    return (0);
}