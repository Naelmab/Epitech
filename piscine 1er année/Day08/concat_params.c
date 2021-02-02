/*
** EPITECH PROJECT, 2020
** concat_params.c
** File description:
** concat_params.c
*/

#include <stdlib.h>
#include <stdio.h>

int my_putstr(char const *str);

char *my_strcat(char *dest, char const *src);

void my_putchar(char c);

int my_strlen(char const *str);

char *concat_params(int argc, char **argv)
{
    char *len;
    int l = 0;
    int m = 0;

    l = argc;
    while (m < argc)
    {
        l = l + my_strlen(argv[m]);
        m++;
    }
    if ((len = malloc(sizeof(char) * (l + 1))) == NULL)
        return (EXIT_SUCCESS);
    len[0] = 0;
    for (m = 0; m < argc; m++)
    {
        my_strcat(len, argv[m]);
        my_strcat(len, "\n");
    }
    len[l] = '\0';
    return (len);
}
