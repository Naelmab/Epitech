/*
** EPITECH PROJECT, 2020
** my_print_alpha.c
** File description:
** alphabet
*/
int my_print_alpha(void)
{
    char  print = 97;
    while (print < 123) {
    my_putchar(print);
    print++;
    }
    return (0);
}
