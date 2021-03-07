/*
** EPITECH PROJECT, 2020
** rush3
** File description:
** rush3
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include "rush3.h"

void findrush(char *buff, int x, int y, int i)
{
    if (buff[0] == 'o') {
        my_putstr("[rush1-1]");
        my_putchar(' '); }
    if (buff[0] == '/' || buff[0] == '*') {
        my_putstr("[rush1-2]");
        my_putchar(' '); }
    if (buff[0] == 'A' && buff[x - 1] == 'A') {
        my_putstr("[rush1-3]");
        my_putchar(' '); }
    if (buff[0] == 'A' && buff[x - 1] == 'C' && buff[i - 2] == 'C') {
        my_putstr("[rush1-4]");
        my_putchar(' ');}
    if (buff[0] == 'A' && buff[i - 2] == 'A') {
        my_putstr("[rush1-5]");
        my_putchar(' '); }
}

int display (int x, int y, char *buff)
{
    if (buff[0] != 'o' && buff[0] != '/' && buff[0] != '*' &&
        buff[0] != 'A' && buff[0] != 'B')
        my_putstr("none");
    else {
        my_put_nbr(x);
        my_putchar(' ');
        my_put_nbr(y);
    }
}

void specialcase(char *buff, int x, int y, int i)
{
    if (buff[0] == 'B') {
        my_putstr("[rush1-3]");
        my_putchar(' ');
        display (x, y, buff);
        my_putstr(" || ");
        my_putstr("[rush1-4]");
        my_putchar(' ');
        display(x, y, buff);
        my_putstr(" || ");
        my_putstr("[rush1-5]");
        my_putchar(' ');
    }
}

int rush3(char *buff)
{
    int x = 0;
    int	y = 0;
    int	i = 0;

    while (buff[x] != '\n')
        x++;

    while (buff[i] != '\0')
    {
        if (buff[i] == '\n')
            y++;
        i++;
    }

    specialcase(buff, x, y, i);
    findrush(buff, x, y, i);
    display(x, y, buff);
    my_putchar('\n');
}
