#ifndef _MY_H
# define _MY_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#include "my.h"

int my_printf(char *av, ...);
void printputstr(va_list *list);
void printputchar(va_list *list);
void printput_nbr(va_list *list);
void my_putchar(char c);
int my_put_nbr(int nb);
int main(int ac, char const **av);

#endif