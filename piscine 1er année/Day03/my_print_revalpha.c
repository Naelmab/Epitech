/*
** EPITECH PROJECT, 2020
** my_print_revalpha.c
** File description:
** revalpha
*/
int my_print_revalpha(void)
{
    char  print = 122;
    while (print > 96) {
        my_putchar(print);
        print--;
    }
    return (0);
}

