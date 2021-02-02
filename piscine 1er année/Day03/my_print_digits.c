/*
** EPITECH PROJECT, 2020
** my_print_digits.c
** File description:
** number order
*/
void my_putchar(char c);

int my_digits(void)
{
    char  print = 48;
    while (print < 58) {
        my_putchar(print);
        print++;
    }
    return (0);
}
