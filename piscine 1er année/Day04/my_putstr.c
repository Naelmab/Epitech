/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** word
*/

#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int main(char const *str)
{
    while (*str != '\0')
    {
        my_putchar(*str);
        *str + 1;
    }
    return (1);
}
