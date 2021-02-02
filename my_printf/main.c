/*
** EPITECH PROJECT, 2020
** mainprintf
** File description:
** mainprintf
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#include "include/my.h"

int main(int ac, char const **av)
{
    my_printf("%c %d %s %c\n",'k', 12563, "ygtfgtfvtgv", 'v');
    //printf("%s %d %d %c\n",'k', 12563, "ygtfgtfvtgv", 'v');
    return 0;
}
