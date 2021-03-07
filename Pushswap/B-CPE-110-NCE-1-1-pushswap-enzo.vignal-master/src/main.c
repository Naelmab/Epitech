/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main function.
*/

#include "my.h"

int    main(int ac, char **av)
{
    int i = 1;
    int n = sizeof(av)/sizeof(av[1]);
    int temp = 0;

    if (ac == 2) {
        my_putchar('\n');
        return (0);
    } else if (ac == 3) {
        while (av[i] != '\0') {
            bubbleSort(av[i], n);
            my_putstr("ra");
            i = i + 1;
            if (i < av[i])
            my_putchar(' ');
        }
        my_putchar('\n');
        return (0);
    }
    else if (ac > 2) {
        while (av[i] != '\0') {
            bubbleSort(av[i], n);
            printArray(av[i], n);
            i = i + 1;
            if (i < av[i])
            my_putchar(' ');
        }
        my_putchar('\n');
        return (0);
    }
}
