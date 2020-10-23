/*
** EPITECH PROJECT, 2020
** tools
** File description:
** tools
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int chartoint(char **str)
{
    int number = 0;

    while (**str >= '0' && **str <= '9') {
        number = number * 10 + (**str - '0');
        (*str)++;
    }
    return (number);
}

int brakets(char **str)
{
    if (**str == '(') {
        ++(*str);
        int res = ADD(str) + SUB(str);
        ++(*str);
        return (res);
    }
    return (chartoint(str));
}

int factors(char **str)
{
    int fact0 = brakets(str);
    while (**str == '*') {
        ++(*str);
        int fact1 = brakets(str);
        fact0 = fact0 * fact1;
    }
    while (**str == '/') {
        ++(*str);
        int fact1 = brakets(str);
        fact0 = fact0 / fact1;
    }
    while (**str == '%') {
        ++(*str);
        int fact1 = brakets(str);
        fact0 = fact0 % fact1;
    }
    return (fact0);
}

int ADD(char **str) {
    int op0 = factors(str);

    while (**str == '+') {
        ++(*str);
        int op1 = factors(str);
        op0 = op0 + op1;
    }
    return (op0);
}

int SUB(char **str) {
    int op0 = factors(str);

    while (**str == '-') {
        ++(*str);
        int op1 = factors(str);
        op0 = op0 - op1;
    }
    return (op0);
}



