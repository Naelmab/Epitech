/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef _MY_H
# define _MY_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int my_printf(char *av, ...);
void printputstr(va_list *list);
void printputchar(va_list *list);
void printput_intnbr(va_list *list);
void printput_longnbr(va_list *list);
void printret(va_list *list);
void my_putchar(char c);
int my_put_intnbr(int nb);
int my_put_longnbr(long long nb);
int main(int ac, char const **av);

#endif
