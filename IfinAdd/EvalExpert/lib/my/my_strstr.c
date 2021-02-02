/*
** EPITECH PROJECT, 2020
** my_strstr.c
** File description:
** strstre
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    while (*str != '\0')
    {
        my_putstr(*str);
        *str + 1;
    }
    return (1);
}

char *my_strstr(char *str, char const *to_find)
{
    int n = 0;
    int m = 0;
    while (to_find[m] != str[n])
    {
        n++;
    }
    if (str[n] == to_find[m])
    {
        while (str[n] != '\0')
        {
            my_putchar(str[n]);
            n++;
        }
    }
}