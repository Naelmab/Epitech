/*
** EPITECH PROJECT, 2020
** mainprintf
** File description:
** mainprintf
*/

#include "my.h"

int main(int ac, char const **av)
{
    printf("%c %ld %s %c %%\n",'k', -2147483648123456790, "ygtfgtfvtgv", 'v');
    my_printf("%c %l %s %c %%\n",'k', -2147483648123456790, "ygtfgtfvtgv", 'v');
    return 0;
}
